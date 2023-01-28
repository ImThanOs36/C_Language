#include <stdio.h>

float ConvertTemp(float celsius);

int main()
{ 
    float far = ConvertTemp(37);
    printf("%f",far);
    return 0;
}

float ConvertTemp(float celsius)
{
    float far = celsius * (9.0/5.0) + 32;
    return far;
}