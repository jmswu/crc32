#include "crc32.h"

uint32_t crc32(uint8_t *data, uint16_t len){

    uint32_t crc32;
    uint8_t i;

    crc32 = CRC32_INITIAL_VALUE;

    while(len--){

        crc32 = crc32 ^ ((uint32_t)(*data++ << 24));
        for( i = 0; i < 8; i++){
            if (crc32 & 0x80000000){
                    crc32 = (crc32 << 1) ^ CRC32_POLY_DEFAULT;
            }else{
                crc32 = crc32 << 1;
            }
        }
    }

    crc32 = crc32 ^ CRC32_FINAL_XOR_VAL;

    return crc32;
}
