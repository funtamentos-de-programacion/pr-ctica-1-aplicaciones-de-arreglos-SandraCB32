#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }

    printf("Dirección de matriz[0][2]: %p\n", &matriz[0][2]);
    printf("Dirección de matriz[1][0]: %p\n", &matriz[1][0]);

    return 0;
}
