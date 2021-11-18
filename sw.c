/*
 * led.c
 *
 * Created: 8/14/2018 5:13:51 PM
 *  Author: M
 */ 
 
#include "config.h"
#include "sw.h"

#define zDelay 100



void SW_init()
{
	clearbit(SW_dir,SW_digit);
	setbit(SW_PORT,SW_digit);
}

char SW_on()
{
    return checkbit0(SW_PIN,SW_digit);
}
