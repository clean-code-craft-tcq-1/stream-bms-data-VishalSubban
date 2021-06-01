/*********************************** Macros ****************************************/
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()



/*********************************** Includes **************************************/
#include "catch.hpp"
#include "bms-data.h"

bool isStopRequestedByUser = false;


/*********************************** Test Cases **************************************/

TEST_CASE("printed value is in range") {
    BmsDataSendToConsole();
    REQUIRE((getBmsTemperatue() >= TEMPERATURE_MIN));
    REQUIRE((getBmsTemperatue() <= TEMPERATURE_MAX));
    REQUIRE((getBmsChargeRate() >= CHARGERATE_MIN));
    REQUIRE((getBmsChargeRate() <= CHARGERATE_MAX));
}