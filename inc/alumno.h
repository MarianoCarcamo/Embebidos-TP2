/************************************************************************************************
Copyright (c) 2023, Mariano Carcamo <marianocarcamo98@gmail.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
SPDX-License-Identifier: MIT
*************************************************************************************************/

#ifndef ALUMNO_H
#define ALUMNO_H 

/** \brief Declaraciones publicas del modulo de alumnos
 **
 **
 **
 ** \addtogroup alumno Alumnos
 ** \brief Modulo para gestion de alumnos 
 ** @{ */

/* === Headers files inclusions ================================================================ */

#include <stdint.h>

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */
/**
 * @brief Macro para definir manejo dinamico o estatico de memoria
 * 
 * Los objetos de la clase alumno pueden ser almacenados de forma ESTATICA o de forma
 * DINAMICA (por defecto). En caso de optar por un manejo estatico de memoria debe comentar la linea 
 * "#define DINAMICO"
 */
#define DINAMICO

/**
 * @brief Define el tamano de los campos de texto
 * 
 * Este parametro define el tamano de los campos de texto incluidos en la clase alumno
 */
#define FIELD_SIZE 50

/* === Public data type declarations =========================================================== */

/// Puntero a un objeto alumno
typedef struct alumno_s * alumno_t;

/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */

/// Metodo para crear un alumno con sus datos personales

alumno_t CrearAlumno(char * apellido,char * nombre, int documento);

/// Metodo de acceso al nombre completo del alumno
///@return Devuelve la longitud de la cadena generada o -1 en caso de rebalse
int GetCompleto(alumno_t alumno, char cadena [], uint32_t espacio);

/// Metodo de acceso al numero de documento del alumno
///@return Devuelve el numero de documento
int GetDocumento(alumno_t alumno);

/**
 * @brief Funcion para serializar los datos de un alumno en formato json
 * 
 * @param alumno Puntero a estuctura alumno_s
 * @param cadena Puntero a la cadena de resultado
 * @param espacio Espacio disponible en la cadena de resultado
 * @return Devuelve la longitud de la cadena generada o -1 en caso de rebalse
 */

int Serializar(alumno_t alumno, char cadena [], uint32_t espacio);

/* === End of documentation ==================================================================== */

#ifdef __cpluspluss
}
#endif

/** @} End of module definition for doxygen */

#endif /* ALUMNO_H */