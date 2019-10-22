#ifndef CRC32_H_INCLUDED
#define CRC32_H_INCLUDED

#include <stdint.h>

#define CRC32_INITIAL_VALUE     0xFFFFFFFF
#define CRC32_FINAL_XOR_VAL     0x00000000


#define CRC32_POLY_BZIP2        0x04C11DB7
#define CRC32_POLY_C            0x1EDC6F41
#define CRC32_POLY_D            0xA833982B
#define CRC32_MPEG2             0x04C11DB7
#define CRC32_POSIX             0x04C11DB7
#define CRC32_Q                 0x814141AB
#define CRC32_JAMCRC            0x04C11DB7
#define CRC32_XFER              0x000000AF

/* choose one from above */
#define CRC32_POLY_DEFAULT      CRC32_POLY_BZIP2

/* calculate CRC32 value
 *
 * @param uint8_t *data - pointer to data
 * @param uint16_t len - size of the data in byte
 * @return calculated CRC32 value
 */
uint32_t crc32(uint8_t *data, uint16_t len);

#endif // CRC32_H_INCLUDED
