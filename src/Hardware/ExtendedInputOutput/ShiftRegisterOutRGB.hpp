/* ✔ */

#pragma once

#include <stdint.h>
#include <Settings/SettingsWrapper.hpp>

BEGIN_CS_NAMESPACE

/**
 * @brief   A struct for setting the RGB mode for RGB shift registers.
 */
struct ShiftRegisterOutRGB {
    /**
     * @brief   The position of the red output pin for 3-color LEDs.  
     *          For the usual RGB configuration, this is 0.
     */
    const static uint8_t redBit; // = 0;
    /**
     * @brief   The position of the green output pin for 3-color LEDs.  
     *          For the usual RGB configuration, this is 1.
     */
    const static uint8_t greenBit; // = 1;
    /**
     * @brief   The position of the blue output pin for 3-color LEDs.  
     *          For the usual RGB configuration, this is 2.
     */
    const static uint8_t blueBit; // = 2;
};

END_CS_NAMESPACE