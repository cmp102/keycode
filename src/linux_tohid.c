/* This file is automatically generated. */
#include "keytable.h"
const unsigned char KEYCODE_LINUX_TO_HID[256] = {
    0,41,30,31,32,33,34,35,36,37,38,39,45,46,42,43,20,26,8,21,23,28,24,12,18,19,
    47,48,158,224,4,22,7,9,10,11,13,14,15,51,52,53,225,49,29,27,6,25,5,17,16,54,
    55,56,229,85,226,44,57,58,59,60,61,62,63,64,65,66,67,83,71,95,96,97,86,92,
    93,94,87,89,90,91,98,99,0,0,100,68,69,0,0,0,0,0,0,0,88,228,84,154,230,0,74,
    82,75,80,79,77,81,78,73,76,0,0,0,0,0,103,0,72,0,0,0,0,0,227,231,0,0,0,0,0,0,
    0,0,0,0,0,0,118,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,104,105,106,107,108,109,110,111,112,113,114,115,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
unsigned keycode_linux_to_hid(unsigned scancode) {
    if (scancode >= 256)
        return 0;
    return KEYCODE_LINUX_TO_HID[scancode];
}
