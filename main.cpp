/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#define WAIT_TIME_MS 1000


AnalogIn potenciometro(A0);

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);
potenciometro.set_reference_voltage(3.3);

    while (true)
    {
        float dato=potenciometro.read_voltage();
        printf("%f\n",dato);
        thread_sleep_for(WAIT_TIME_MS);
    }
}