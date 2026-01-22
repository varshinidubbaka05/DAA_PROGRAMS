#include <stdio.h>

int main() 
{
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

  
    while (b != 0) 
{
        gcd = b;
        b = a % b;
        a = gcd;
    }

    printf("GCD = %d\n", a);

    return 0;
}
