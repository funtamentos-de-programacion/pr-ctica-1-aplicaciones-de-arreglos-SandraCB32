#include <stdio.h>

int main()
{
    int lista[5] = {0,1,2,3,4};
    for (int i = 0; i < 5; i++)
    {
    printf("%p \n", &lista[5]);
    }
    return 0;
}
