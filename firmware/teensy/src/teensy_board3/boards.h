#pragma once

/**
 * PIN MAP for Sensor Board Resources
*/

/* Sensor Board  MODBUS Interface */
#define MODBUS_RX_PIN                           0
#define MODBUS_TX_PIN                           1

/* Optical Sensor Interface*/
#define OPTICAL_SENSOR_XSHUT_PIN    2

/* Sensor Board  CAN Interface */
#define CAN0_TX_PIN                             3       //CAN0TX
#define CAN0_RX_PIN                             4       //CAN0RX


/* Optical Sensor Interface - I2C */
#define OPTICAL_SENSOR_I2C_SDA                  18
#define OPTICAL_SENSOR_I2C_SCL                  19

/**
 * Sensor Board Resource Parameters
*/

#define OPTICAL_SENSOR_I2C_FREQUENCY        400000

