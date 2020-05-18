#ifndef _QTABLES_H_
#define _QTABLES_H_

#include <stdint.h>

/* Tables de "The GIMP" (cf sujet). */
static uint8_t quantification_table_Y[64] = {
    0x05, 0x03, 0x03, 0x05, 0x07, 0x0c, 0x0f, 0x12,
    0x04, 0x04, 0x04, 0x06, 0x08, 0x11, 0x12, 0x11,
    0x04, 0x04, 0x05, 0x07, 0x0c, 0x11, 0x15, 0x11,
    0x04, 0x05, 0x07, 0x09, 0x0f, 0x1a, 0x18, 0x13,
    0x05, 0x07, 0x0b, 0x11, 0x14, 0x21, 0x1f, 0x17,
    0x07, 0x0b, 0x11, 0x13, 0x18, 0x1f, 0x22, 0x1c,
    0x0f, 0x13, 0x17, 0x1a, 0x1f, 0x24, 0x24, 0x1e,
    0x16, 0x1c, 0x1d, 0x1d, 0x22, 0x1e, 0x1f, 0x1e};

uint8_t quantification_table_Y_opt[64] = {
    0x10, 0x0b, 0x0a, 0x10, 0x18, 0x28, 0x33, 0x3d,
    0x0c, 0x0c, 0x0e, 0x13, 0x1a, 0x3a, 0x3c, 0x37,
    0x0e, 0x0d, 0x10, 0x1a, 0x28, 0x39, 0x45, 0x38,
    0x0e, 0x11, 0x16, 0x1d, 0x33, 0x57, 0x50, 0x3e,
    0x12, 0x16, 0x25, 0x38, 0x44, 0x6d, 0x67, 0x4d,
    0x18, 0x23, 0x37, 0x40, 0x51, 0x68, 0x71, 0x5c,
    0x31, 0x40, 0x4e, 0x57, 0x67, 0x79, 0x78, 0x65,
    0x48, 0x5c, 0x5f, 0x62, 0x70, 0x64, 0x67, 0x63};

static uint8_t quantification_table_CbCr[64] = {
    0x05, 0x05, 0x07, 0x0e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x05, 0x06, 0x08, 0x14, 0x1e, 0x1e, 0x1e, 0x1e,
    0x07, 0x08, 0x11, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x0e, 0x14, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
    0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e};

uint8_t quantification_table_CbCr_opt[64] = {
    0x11, 0x12, 0x18, 0x2f, 0x63, 0x63, 0x63, 0x63,
    0x12, 0x15, 0x1a, 0x42, 0x63, 0x63, 0x63, 0x63,
    0x18, 0x1a, 0x38, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x2f, 0x42, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
    0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63};

#endif /* _QTABLES_H_ */