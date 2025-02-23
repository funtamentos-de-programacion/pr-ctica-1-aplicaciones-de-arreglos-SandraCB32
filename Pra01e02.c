#include <stdio.h>

int main() 
{
int arr[3] = {0, 1, 2};

    for (int i =0; i < 3; i++)
    {
    printf("%p\n", &arr[3]);
    printf("%p\n", arr[3]);
    }
return 0;
}
