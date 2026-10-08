#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int id;
    unsigned int temp_status;
    uint8_t status;
    uint16_t checksum;
    float voltage;
    scanf("%x %o %f", &id, &temp_status, &voltage);

    status = (uint8_t)temp_status;
    checksum = id + status;

    printf("PACKET_ID: %u\n", id);
    printf("STATUS_CODE: %u\n", status);
    printf("STATUS_CHAR: A\n");
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", checksum);

    return 0;
}