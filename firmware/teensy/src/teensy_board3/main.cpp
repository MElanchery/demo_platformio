#include <Arduino.h>
#include <Wire.h>

// -------------------------------------------------------------
void setup(void)
{
  delay(1000); /* Teensy examples all have this initial delay sequence */

  /* Setup I2C 0 instance for sensor 1 */
  Wire.begin();
  Wire.setClock(OPTICAL_SENSOR_I2C_FREQUENCY);
  Wire.setSDA(OPTICAL_SENSOR_I2C_SDA);
  Wire.setSCL(OPTICAL_SENSOR_I2C_SCL);

}


// -------------------------------------------------------------
void loop(void)
{

}
