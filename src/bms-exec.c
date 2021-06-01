/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/

void sighandler(int signum) {
    printf("User stopped reading, i.e, Signum value : %d received", signum);
    isStopRequestedByUser = true;
}

float getBmsTemperatue()
{
    float retval; 
    retval = (rand() % (TEMPERATURE_MAX - TEMPERATURE_MIN + 1)) + TEMPERATURE_MIN;
    return retval ;
}

float getBmsChargeRate()
{
    float retval;
    retval = (rand() % (CHARGERATE_MAX - CHARGERATE_MIN + 1)) + CHARGERATE_MIN;
    return retval ;
}

void BmsDataPrint(float * BMSData)
{
    printf("%0.2f;%0.2f\n", BMSData[0], BMSData[1]);
}