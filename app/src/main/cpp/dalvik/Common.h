#pragma once

#include <stdint.h>

typedef uint8_t             u1;
typedef uint16_t            u2;
typedef uint32_t            u4;
typedef uint64_t            u8;
typedef int8_t              s1;
typedef int16_t             s2;
typedef int32_t             s4;
typedef int64_t             s8;

/**
 * ��������Ԫ�ظ�����ֻ���������飬����������ָ�롣
 */
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))

