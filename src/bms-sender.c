/************************ INCLUDES **************************/
#include "bms-data.h"
/************************************************************/


BatParams_s BatteryData[NumberOfParameters] = {{"Temperature", TEMPERATURE_MIN , TEMPERATURE_MAX},
                                                  {"ChargeRate", CHARGERATE_MIN , CHARGERATE_MAX}};

getBmsParamVal_funPtr getParamValue[NumberOfParameters] = {getBmsTemperatue , getBmsChargeRate};


void BmsDataSendToConsole()
{
    float BmsData[NumberOfParameters]; 
    int batteryParamIterater;
	int counter = 0;

    do
    {
		counter++;
        isStopRequestedByUser = false;
        for (batteryParamIterater = 0 ; batteryParamIterater < NumberOfParameters; batteryParamIterater++)
        {
            BmsData[batteryParamIterater]= getParamValue[batteryParamIterater]();
        }
        BmsDataPrint(BmsData);
        sleep(SLEEP_TIME);
    }while(!(counter == 30));
}