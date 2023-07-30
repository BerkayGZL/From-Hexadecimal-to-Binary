#include <stdio.h>
#include <stdint.h> // �zel say� t�rleri i�in kullan�ld�

void binary(void* array, int size_bytes)
{
    char* bytes = (char*)array; // typecaste yap�ld�. 

    for (int i = size_bytes - 1; i >= 0; i--) // dizinin son byte ilk byte d�nd�rmek i�in 
    {
        for (int bit_i = 7; bit_i >= 0; bit_i--) // her byte i�in bit d�nd�r�r
        {
            int bit = (bytes[i] >> bit_i) & 1; // her byte i�in bit_i kadar sa�a kayd�r�p and 1 yap�ld�.  
            printf("%d", bit);
        }
    }
}

int main()
{
    int32_t sayi1[1] = {0x1234};
    int size1 = sizeof(sayi1);
    binary(sayi1, size1);


    return 0;
}

