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
    retval = BmsDataGenerator(TEMPERATURE_MIN, TEMPERATURE_MAX);
    return retval;
}

float getBmsChargeRate()
{
    float retval;
    retval = BmsDataGenerator(CHARGERATE_MIN, CHARGERATE_MAX);
    return retval;
}

void BmsDataPrint(float * BMSData)
{
    printf("%0.2f;%0.2f\n", BMSData[0], BMSData[1]);
}

float BmsDataGenerator(float min, float max)
{
    return ((float)rand() % (max - min + 1)) + min;
}