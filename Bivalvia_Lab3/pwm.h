/*
 * pwm.h
 *
 *  Created on: Feb 9, 2021
 *      Author: adamvitti
 */

#ifndef PWM_H_
#define PWM_H_

#include "msp.h"

/*  MATH FOR TICKS: Where divider = 2
 * (3*10^6)/(2^2) = 750000 |||| 750000*(500*10^-6) = 375 ticks ==> 0x177 in hex
 */
#define TICKS (0x177)

void config_pwm_timer(void);

void start_pwm(void);

void stop_pwm(void);

void config_pwm_gpio(void);


#endif /* PWM_H_ */
