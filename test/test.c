#include <unity.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ftoa.h"

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

// f debe tener 2 digitos + 2 decimales
// void ftoa(float f, char *str)
// {
//     const int precision = 2;

//     char *buf = str;

//     int whole = f;

//     // si tiene 1 digito entero pre incremento la posicion del buf con un espacio vacio
//     if (whole < 10)
//     {
//         *buf++ = 0x20;
//     }

//     itoa(whole, buf, 10);
//     buf += strlen(buf);

//     *buf++ = '.';

//     int frac = f - whole;

//     for (int i = 1; i <= precision; i++)
//     {
//         frac *= 10;

//         int digit = frac;
//         *buf++ = digit + '0';

//         frac -= digit;
//     }
// }

void domytest()
{
    float f = 4.28;
    char str[5];

    // sprintf(str, "%f", w);
    ftoa(f, str);

    char *expected = "\x20\x34.28";
    for (size_t i = 0; i < 5; i++)
    {
        TEST_ASSERT_EQUAL_CHAR(expected[i], str[i]);
    }
}

int main(int argc, char **argv)
{
    UNITY_BEGIN();

    RUN_TEST(domytest);

    UNITY_END();
}