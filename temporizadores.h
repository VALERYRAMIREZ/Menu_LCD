/* 
 * File:                temprizadores.h
 * Author:              Valery Ramirez
 * Comments:            Encabezado para la configuraci�n de los temporizadores.
 * Revision history:    N/A
 */
 
#ifndef TEMPORIZADORES_H
#define	TEMPORIZADORES_H

#include <xc.h> // include processor files - each processor file is guarded.  

/* Definiciones de constantes para configuraci�n de T1CON */

#define         TCKPS256            48
#define         TCKPS64             32
#define         TCKPS8              16
#define         TCKPS1              0

/* Prototipos de funci�n para la configuaci�n de los temporizadores */

void Confi_Timer1(unsigned int tempo1, unsigned int conf1);/* Prototipo de
                                         * funci�n para configurar el
                                         * funcionamiento del timer 1. */

void Inicia_Timer1(void);               /* Prototipo de funci�n para iniciar el
                                         * funcionamiento del timer 1. */

void Detiene_Timer1(void);              /* Prototipo de funci�n para detener el
                                         * funcionamiento del timer 1. */

void Confi_Timer2(unsigned int tempo2, unsigned int confi2);/* Prototipo de
                                         * funci�n para configurar el
                                         * funcionamiento del timer 2. */

void Confi_Timer23(void);               /* Prototipo de funci�n para configurar
                                         * el temporizador 23                 */

void retardo_us(unsigned long ret2);     /* Prototipo de funci�n para generar
                                         * retardos en us, en m�ltipos de 5us.*/

void retardo_ms(unsigned long ret2);     /* Prototipo de funci�n para generar
                                         * retardos en ms. */

void retardo_s(unsigned long ret2);     /* Prototipo de funci�n para generar
                                         * retardos en s. */

void Inicia_Timer2(void);               /* Prototipo de funci�n para iniciar el
                                         * funcionamiento del timer 2. */

void Detiene_Timer2(void);              /* Prototipo de funci�n para detner el
                                         * funcionamiento del timer 2. */

void Inicia_Timer232(void);             /* Prototipo de funci�n para detner el
                                         * funcionamiento del timer 2. */

void Detiene_Timer232(void);            /* Prototipo de funci�n para detner el
                                         * funcionamiento del timer 2. */

#endif	/* TEMPORIZADORES_H */

