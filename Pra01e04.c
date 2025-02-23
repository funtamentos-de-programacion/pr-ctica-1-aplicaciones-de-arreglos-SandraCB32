#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Dirección de matriz: %p\n", matriz);
    printf("Dirección de matriz[0]: %p\n", matriz[0]);
    printf("Dirección de &matriz[0][0]: %p\n", &matriz[0][0]);

    return 0;
}
