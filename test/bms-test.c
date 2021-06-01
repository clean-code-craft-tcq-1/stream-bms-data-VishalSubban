/*********************************** MACROS ****************************************/
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()

/*********************************** INCLUDES **************************************/
#include "catch.hpp"
#include "bms-data.h"

bool isStopRequestedByUser = false;


// int main()
// {
    // assert((getBmsTemperatue() >= TEMPERATURE_MIN) && (getBmsTemperatue() <= TEMPERATURE_MAX));
    // assert((getBmsChargeRate() >= CHARGERATE_MIN) && (getBmsChargeRate() <= CHARGERATE_MAX));
    
// }

TEST_CASE("printed value is in range") {
    BmsDataSendToConsole();
    REQUIRE((getBmsTemperatue() >= TEMPERATURE_MIN) && (getBmsTemperatue() <= TEMPERATURE_MAX));
    REQUIRE((getBmsChargeRate() >= CHARGERATE_MIN) && (getBmsChargeRate() <= CHARGERATE_MAX));
}