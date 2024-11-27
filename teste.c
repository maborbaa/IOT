#include "stdio.h"
int main()
{
    int a, b, pow = 1;
    printf("Digite 1o numero: ");
    scanf("%d", &a);
    printf("Digite potencia: ");
    scanf("%d", &b);

    printf("A= %d \nB= %d",a,b);
    printf("\n");

    for (int i = 1; i <= b; i++)
    {
        /* code */
        pow = pow * a;
    }

    printf("Resultado: %d \n",pow);
    
}