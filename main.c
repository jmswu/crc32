#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "crc32.h"

int main()
{
    printf("Hello world! This is a CRC32 test\n");

    /* test data */
    uint8_t data[] = "hello world, this is a CRC32 test!";

    /* calculate crc32 */
    uint32_t crc32_val;
    crc32_val = crc32(data, sizeof(data)/sizeof(uint8_t) - 1);

    /* with the unmodified string, calculated CRC32 should be 0xC85A3F99 */
    printf("string: %s\n", data);
    printf("CRC32 is: 0x%08X\n", crc32_val);


    return 0;
}
