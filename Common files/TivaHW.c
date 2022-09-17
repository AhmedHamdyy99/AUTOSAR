/**
 *  \file	TivaHW.c
 *  \brief 	This file includes information about Tiva C Hardware.
 *  \author	Ahmed Hamdy.
 *  \date	16/9/2022
 */

/* Inclusion */
#include "TivaHW.h"

HW_AddressBusSizeType HW_PortsAddresses[HW_NO_OF_PORTS] = {
	0x40004000,	/*!< Base address for PORT A */
	0x40005000,	/*!< Base address for PORT B */
	0x40006000,	/*!< Base address for PORT C */
	0x40007000,	/*!< Base address for PORT D */
	0x40024000,	/*!< Base address for PORT E */
	0x40025000	/*!< Base address for PORT F */
};	/*!< Contains the base addresses for all GPIO PORTs */
