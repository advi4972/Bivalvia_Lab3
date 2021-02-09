/*
 * pwm.h
 *
 *  Created on: Feb 9, 2021
 *      Author: adamvitti
 */

#ifndef PWM_H_
#define PWM_H_

#include "msp.h"

#define TICKS //DO MATH FOR TICKS (REFER TO LAB DOC)

void config_pwm_timer(void);

void start_pwm(void);

void stop_pwm(void);

void config_pwm_gpio(void);


#endif /* PWM_H_ */
