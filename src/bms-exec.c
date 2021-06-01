/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/

void sighandler(int signum) {
    printf("User stopped reading");
    bool isStopRequestedByUser = true;
}

float getBmsTemperatue()
{
    float retval; 
    retval = (rand() % (TEMP_MAX - TEMP_MIN + 1)) + TEMP_MIN;
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