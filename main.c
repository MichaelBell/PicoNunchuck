#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"

#include "nunchuck.h"

#define I2C_SDA 12
#define I2C_SCL 13

int main()
{
    stdio_init_all();

    while (!nunchuck_init(I2C_SDA, I2C_SCL)) {
      sleep_ms(1000);
    }

    puts("Hello, world!");

    while (1) {
      printf("%d %d %d %d\n", nunchuck_joyx(), nunchuck_joyy(), nunchuck_zbutton() ? 1 : 0, nunchuck_cbutton() ? 1 : 0);

      sleep_ms(100);
    }

    return 0;
}
