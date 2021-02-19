#include <stdio.h>

void kiir(int);

int main() {
    int x;
    x++;

    int y[100][100] = {0};
    kiir(x);

    if (x < 9) {
        x++;
    }

    kiir(x);
    return 0;
}

void kiir(int x) {
    int y;
    y = 2;

    printf("%d", x);
}