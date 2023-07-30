#include <stdio.h>
#include <stdint.h> // özel sayı türleri için kullanıldı

void binary(void* array, int size_bytes)
{
    char* bytes = (char*)array; // typecaste yapıldı. 

    for (int i = size_bytes - 1; i >= 0; i--) // dizinin son byte ilk byte döndürmek için 
    {
        for (int bit_i = 7; bit_i >= 0; bit_i--) // her byte için bit döndürür
        {
            int bit = (bytes[i] >> bit_i) & 1; // her byte için bit_i kadar sağa kaydırıp and 1 yapıldı.  
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

