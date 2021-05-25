#include <cstdio>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10,78,564,345,21,78,453,223,80,50,20,40,0};
    for (unsigned long value : values) 
    {
        if (value > maximum) maximum = value;
    }
    printf("The maximum value us %lu.", maximum);
}
