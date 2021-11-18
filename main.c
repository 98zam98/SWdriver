/*
 * leddriver.c
 *
 * Created: 2/28/2019 2:12:17 PM
 *  Author: Moatasem el sayed
 */


#include "config.h"
#include "sw.h"
#include "sw.c"
#include "macros.h"
#include "hardware.h"


int main() {	
	setbit(DDRB,5);
	SW_init();
	while(1)
    {
		assignbit(PORTB,5,SW_on());
		_delay_ms(100);
		clearbit(PORTB,5);
		_delay_ms(500);
	}
  return 0;
}
