// NAME : HARSHAL PATIL ; ROLL NO : 37
// ASSIGNMENT 6

#include <stdio.h>

int is_prime(int n) 
{
    int i;
    if (n <= 1) 
    {
        return 0; 
    }
    for (i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0)
        {
            return 0; 
        }
    }
    return 1; 
}

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    int gcd_val = gcd(a, b);
    return (a / gcd_val) * b;
}

int main() 
{
    int n,a, b;
    printf("\n Enter a Positive Integer : ");
    scanf("%d", &n);
    if (is_prime(n)) 
    {
        printf("\n %d is a Prime Number ", n);
    } 
    else 
    {
        printf("\n %d is not a Prime Number ", n);
    }


    printf("\n Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    printf("\n The GCD of %d and %d is %d.\n", a, b, gcd(a, b));
    printf("\n The LCM of %d and %d is %d.\n", a, b, lcm(a, b));

    return 0;
}

/* Enter a Positive Integer : 5

 5 is a Prime Number
 Enter two positive integers: 24
90

 The GCD of 24 and 90 is 6.

 The LCM of 24 and 90 is 360.*/