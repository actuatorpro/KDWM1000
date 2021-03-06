/**
  ********************************************************************************************
  * @file    mathUnit.h
  * @author  KitSprout
  * @date    4-Oct-2016
  * @brief   
  ********************************************************************************************
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __MATHUNIT_H
#define __MATHUNIT_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "arm_math.h"

/* Exported types --------------------------------------------------------------------------*/

/** 
  * @brief   euler angle structure definition  
  */ 
typedef struct {
  float32_t pitch;
  float32_t roll;
  float32_t yaw;
} __attribute__((aligned(4))) eulerAngle_t;

/* Exported constants ----------------------------------------------------------------------*/
/* Exported macro --------------------------------------------------------------------------*/
#define invSqrtf( iSq )   (1.0f / sqrtf((float32_t)(iSq)))
#define squa( Sq )        (((float32_t)Sq) * ((float32_t)(Sq)))
#define toRad( _mathD )   ((_mathD) * 0.0174532925f)
#define toDeg( _mathR )   ((_mathR) * 57.2957795f)

/* Exported functions ----------------------------------------------------------------------*/  

#ifdef __cplusplus
}
#endif

#endif
