#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "bms-data.h"

bool isStopRequestedByUser = false;

void TC_PrintRandomValue()
{
    BmsDataSendToConsole();
}

int main()
{
    TC_PrintRandomValue();
    assert((getBmsTemperatue() >= TEMPERATURE_MIN) && (getBmsTemperatue() <= TEMPERATURE_MAX));
    assert((getBmsChargeRate() >= CHARGERATE_MIN) && (getBmsChargeRate() <= CHARGERATE_MAX));
    
}