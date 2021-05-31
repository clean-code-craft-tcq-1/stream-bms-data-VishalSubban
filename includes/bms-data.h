/************************ INCLUDES **************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/************************************************************/


/************************ DEFINES **************************/

#define TEMPERATURE_MIN 20.0
#define TEMPERATURE_MAX 80.0
#define CHARGERATE_MIN 0.0
#define CHARGERATE_MAX 0.2

/************************ Variables **************************/
enum BmsParameters_e{
    Temperature = 0,
    ChargeRate,
    NumberOfParameters
}

struct BatteryParameters_s
{
    char ParameterName[20];
    float minValue;
    float maxValue;
};

/************************ Function Declaration **************************/
void BmsDataSendToConsole();

float getBmsTemperatue();

float getBmsChargeRate();

void BmsDataPrint(float * BMSData);

float BmsDataGenerator(float min, float max);

typedef float (*getBmsParamVal_funcPtr)();