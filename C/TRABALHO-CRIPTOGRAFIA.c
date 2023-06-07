#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void yuri(int bytes[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            bytes[i] += 5;
            printf("PAR | byte = 0x%X\n", bytes[i]);
        } else {
            bytes[i] -= 3;
            printf("IMPAR | byte = 0x%X\n", bytes[i]);
        }
    }
}

void takahashi(int bytes[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            bytes[i] -= 5;
            printf("PAR | byte = 0x%X\n", bytes[i]);
        } else {
            bytes[i] += 3;
            printf("IMPAR | byte = 0x%X\n", bytes[i]);
        }
    }
}

int main() {
    int bytes[6] = {0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE};
    int size = sizeof(bytes) / sizeof(bytes[0]);
    printf("Seus %d bytes sao:\n", size);
    for (int i = 0; i < size; i++) {
        printf("byte = 0x%X\n", bytes[i]);
    }
    printf("\nCriptografado:\n");
    yuri(bytes, size);
    printf("\nDescriptografado:\n");
    takahashi(bytes, size);

    return 0;
}
