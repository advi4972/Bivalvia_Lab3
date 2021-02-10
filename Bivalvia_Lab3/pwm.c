#include "msp.h"
#include "pwm.h"


void config_pwm_timer(void){
    TIMER_A0->CTL |= TIMER_ACTL_TASSEL_2; //Chooses SMCLK as input clk

    //SET DIVIDER VALUE
    TIMER_A0->CTL |= TIMER_A_CTL_ID__2 ; //DIVIDE BY MASK FOR ID = 2

    //SET CCR VALUE BASED TO TICKS
    TIMER_A0->CCR[0] = TICKS ;//Limit value for clock


}

void start_pwm(void){
    TIMER_A0->CTL |= TIMER_A_CTL_MC_1; //Sets count mode to "UP"
    TIMER_A0->CCTL[1] &= ~(TIMER_A_CCTLN_OUTMOD_7); //RESETS mode
    TIMER_A0->CCTL[1] |= TIMER_A_CCTLN_OUTMOD_4; //SETS OUTPUT MODE TO TOGGLE

}

void stop_pwm(void){
    TIMER_A0->CTL &= TIMER_A_CTL_MC__STOP;
}

void config_pwm_gpio(void){

}
