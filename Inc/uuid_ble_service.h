/**
  ******************************************************************************
  * @file    uuid_ble_service.h
  * @author  Central LAB
  * @version V2.2.0
  * @date    24-November-2016
  * @brief   UUID and Macros used for exporting the BLE Characteristics and Services
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/  
#ifndef _UUID_BLE_SERVICE_H_
#define _UUID_BLE_SERVICE_H_

#ifdef __cplusplus
 extern "C" {
#endif 

#if !defined(COPY_UUID_128)
#define COPY_UUID_128(uuid_struct, uuid_15, uuid_14, uuid_13, uuid_12,           \
                      uuid_11,     uuid_10, uuid_9,  uuid_8,  uuid_7, uuid_6,    \
                      uuid_5,      uuid_4,  uuid_3,  uuid_2,  uuid_1, uuid_0)    \
{                                                                                \
   uuid_struct[0 ]                                       = uuid_0;               \
   uuid_struct[1 ]                                       = uuid_1;               \
   uuid_struct[2 ]                                       = uuid_2;               \
   uuid_struct[3 ]                                       = uuid_3;               \
   uuid_struct[4 ]                                       = uuid_4;               \
   uuid_struct[5 ]                                       = uuid_5;               \
   uuid_struct[6 ]                                       = uuid_6;               \
   uuid_struct[7 ]                                       = uuid_7;               \
   uuid_struct[8 ]                                       = uuid_8;               \
   uuid_struct[9 ]                                       = uuid_9;               \
   uuid_struct[10]                                       = uuid_10;              \
   uuid_struct[11]                                       = uuid_11;              \
   uuid_struct[12]                                       = uuid_12;              \
   uuid_struct[13]                                       = uuid_13;              \
   uuid_struct[14]                                       = uuid_14;              \
   uuid_struct[15]                                       = uuid_15;              \
}                                                                                \
// End of Macro
#endif

/* Store Value into a buffer in Little Endian Format */
#define STORE_LE_16(buf, val)                            (((buf)[0] = (uint8_t) (val)),         \
                                                          ((buf)[1] = (uint8_t) (val >> 8)))

#define STORE_LE_32(buf, val)                            (((buf)[0] = (uint8_t) (val)),         \
                                                          ((buf)[1] = (uint8_t) (val >> 8)),    \
                                                          ((buf)[2] = (uint8_t) (val >> 16)),   \
                                                          ((buf)[3] = (uint8_t) (val >> 24)))

#define STORE_BE_32(buf, val)                            (((buf)[3] = (uint8_t) (val)),         \
                                                          ((buf)[2] = (uint8_t) (val >> 8)),    \
                                                          ((buf)[1] = (uint8_t) (val >> 16)),   \
                                                          ((buf)[0] = (uint8_t) (val >> 24)))

#define MCR_FAST_TERM_UPDATE_FOR_OTA(data) aci_gatt_update_char_value(ConsoleW2STHandle, TermCharHandle, 0, 1, data)

// Hardware Characteristics Service
#define COPY_HW_SENS_W2ST_SERVICE_UUID(uuid_struct)      COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0x9a, 0xb4, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_ENVIRONMENTAL_W2ST_CHAR_UUID(uuid_struct)   COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)

// #define COPY_BATT_ENV_W2ST_CHAR_UUID(uuid_struct)     COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_ACC_GYRO_MAG_W2ST_CHAR_UUID(uuid_struct)    COPY_UUID_128(uuid_struct, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_ACC_EVENT_W2ST_CHAR_UUID(uuid_struct)       COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)

// #define COPY_LED_W2ST_CHAR_UUID(uuid_struct)           COPY_UUID_128(uuid_struct, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_ARMING_W2ST_CHAR_UUID(uuid_struct)          COPY_UUID_128(uuid_struct, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_GG_W2ST_CHAR_UUID(uuid_struct)              COPY_UUID_128(uuid_struct, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_MAX_W2ST_CHAR_UUID(uuid_struct)             COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)

// Console Service
#define COPY_CONSOLE_SERVICE_UUID(uuid_struct)           COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x11, 0xe1, 0x9a, 0xb4, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_TERM_CHAR_UUID(uuid_struct)                 COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0E, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_STDERR_CHAR_UUID(uuid_struct)               COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0E, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)

// Configuration Service
#define COPY_CONFIG_SERVICE_UUID(uuid_struct)            COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x11, 0xe1, 0x9a, 0xb4, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)
#define COPY_CONFIG_W2ST_CHAR_UUID(uuid_struct)          COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0F, 0x11, 0xe1, 0xac, 0x36, 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b)

#if 0
public static final UUID TX_POWER_UUID = UUID.fromString("00001804-0000-1000-8000-00805f9b34fb");
public static final UUID TX_POWER_LEVEL_UUID = UUID.fromString("00002a07-0000-1000-8000-00805f9b34fb");
public static final UUID CCCD = UUID.fromString("00002902-0000-1000-8000-00805f9b34fb");
public static final UUID FIRMWARE_REVISON_UUID = UUID.fromString("00002a26-0000-1000-8000-00805f9b34fb");
public static final UUID DIS_UUID = UUID.fromString("0000180a-0000-1000-8000-00805f9b34fb");
public static final UUID RX_SERVICE_UUID = UUID.fromString("6e400001-b5a3-f393-e0a9-e50e24dcca9e");
public static final UUID RX_CHAR_UUID = UUID.fromString("6e400002-b5a3-f393-e0a9-e50e24dcca9e");
public static final UUID TX_CHAR_UUID = UUID.fromString("6e400003-b5a3-f393-e0a9-e50e24dcca9e");
#endif

#define COPY_CONFIG_TX_POWER_UUID(uuid_struct)           COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB)
#define COPY_CONFIG_TX_POWER_LEVEL_UUID(uuid_struct)     COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x2A, 0x07, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB)
#define COPY_CONFIG_CCCD_UUID(uuid_struct)               COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x29, 0x02, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB)
#define COPY_CONFIG_FIRMWARE_REVISION_UUID(uuid_struct)  COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x2A, 0x26, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB)
#define COPY_CONFIG_DIS_UUID(uuid_struct)                COPY_UUID_128(uuid_struct, 0x00, 0x00, 0x18, 0x0A, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB)
#define COPY_CONFIG_RX_SERVICE_UUID(uuid_struct)         COPY_UUID_128(uuid_struct, 0x6E, 0x40, 0x00, 0x01, 0xB5, 0xA3, 0xF3, 0x93, 0xE0, 0xA9, 0xE5, 0x0E, 0x24, 0xDC, 0xCA, 0x9E)
#define COPY_CONFIG_RX_CHAR_UUID(uuid_struct)            COPY_UUID_128(uuid_struct, 0x6E, 0x40, 0x00, 0x02, 0xB5, 0xA3, 0xF3, 0x93, 0xE0, 0xA9, 0xE5, 0x0E, 0x24, 0xDC, 0xCA, 0x9E)
#define COPY_CONFIG_TX_CHAR_UUID(uuid_struct)            COPY_UUID_128(uuid_struct, 0x6E, 0x40, 0x00, 0x03, 0xB5, 0xA3, 0xF3, 0x93, 0xE0, 0xA9, 0xE5, 0x0E, 0x24, 0xDC, 0xCA, 0x9E)

#ifdef __cplusplus
}
#endif

#endif         // _UUID_BLE_SERVICE_H_


