/* 
 * File:   Configuracion.h
 * Author: Wels
 *
 * Created on July 23, 2021, 3:24 PM
 */

#ifndef CONFIGURACION_H
#define	CONFIGURACION_H

#include <xc.h>
#include <stdio.h>

#define _XTAL_FREQ 64000000UL

void Clock_Init(void);

void Puertos_Init(void);

#endif	/* CONFIGURACION_H */

