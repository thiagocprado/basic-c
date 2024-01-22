#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    int m = x * y;
    printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
}