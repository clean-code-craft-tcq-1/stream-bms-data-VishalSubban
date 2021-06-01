/************************ INCLUDES **************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
/************************************************************/


/************************ DEFINES **************************/

#define TEMPERATURE_MIN 20.0
#define TEMPERATURE_MAX 80.0
#define CHARGERATE_MIN 0.0
#define CHARGERATE_MAX 0.2

#define SLEEP_TIME 1

/************************ Variables **************************/
enum BmsParameters_e{
    Temperature = 0,
    ChargeRate,
    NumberOfParameters
};

typedef struct BatteryParameters{
    char ParameterName[20];
    float minValue;
    float maxValue;
}BatParams_s;

bool isStopRequestedByUser;

/************************ Function Declaration **************************/
void sighandler(int);

void BmsDataSendToConsole();

float getBmsTemperatue();

float getBmsChargeRate();

void BmsDataPrint(float * BMSData);

//float BmsDataGenerator(float min, float max);

typedef float (*getBmsParamVal_funPtr)();