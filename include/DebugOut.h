#ifndef DEBUG_OUT_H
#define DEBUG_OUT_H

#include "DebugLog.h"

#define DEBUG_TIMEOUT 200

// #define LOGD_DEBUG(s) Serial.println(s); delay(DEBUG_TIMEOUT)
// #define LOGD_INFO(s) Serial.println(s); delay(DEBUG_TIMEOUT)
// #define LOGD_WARN(s) Serial.println(s); delay(DEBUG_TIMEOUT)
// #define LOGD_ERROR(s) Serial.println(s); delay(DEBUG_TIMEOUT)
// #define LOGD_TRACE(s) Serial.println(s); delay(DEBUG_TIMEOUT)

// #define LOGD_DEBUG(s) Serial.println(s)
// #define LOGD_INFO(s) Serial.println(s)
// #define LOGD_WARN(s) Serial.println(s)
// #define LOGD_ERROR(s) Serial.println(s)
// #define LOGD_TRACE(s) Serial.println(s)

#define LOGD_DEBUG(s)
#define LOGD_INFO(s) Serial.println(s)
#define LOGD_WARN(s) Serial.println(s)
#define LOGD_ERROR(s) Serial.println(s)
#define LOGD_TRACE(s)

#endif