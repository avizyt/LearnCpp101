#include <cstddef>
#include <cstdio>
#include <vcruntime.h>

int main()
{
    unsigned long maximum = 0;
    unsigned long values[] = {10,50,20,40,0,21,34,65,73,32,34,14};
    size_t size = *(&values + 1) - values;
    for (size_t i = 0; i < size; i++) 
    {
        if (values[i] > maximum)
            maximum = values[i];
    }
    printf("The maximum value is %lu", maximum);
}
