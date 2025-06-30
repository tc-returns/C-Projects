#include <stdio.h>
#include <float.h>
#include <math.h>

int factorial (int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n-1));
    }
}

int main ()
{
    float a, b, sum, sub, multi, div, power;
    int n;
    char operator;

    printf ("Enter Operator (+, -, *, /, !, ^) : ");
    scanf (" %c", &operator);

    if (operator == '+')
    {
        printf ("Enter Two Numbers : ");
        scanf ("%f %f", &a, &b);
        sum = a + b;
        printf ("Sum is : %.2f", sum);
    }
    else if (operator == '-')
    {
        printf ("Enter Two Operands : ");
        scanf ("%f %f", &a, &b);
        sub = a - b;
        printf ("Substraction is : %.2f", sub);
    }
    else if (operator == '*')
    {
        printf ("Enter Two Operands : ");
        scanf ("%f %f", &a, &b);
        multi = a*b;
        printf ("Multiplication is : %.2f", multi);
    }
    else if (operator ==  '/')
    {
        printf ("Enter two operands : ");
        scanf ("%f %f", &a, &b);
        div = a / b;
        printf ("Division is : %.2f", div);
    }
    else if (operator ==  '!')
    {
        printf ("Enter Number : ");
        scanf ("%d", &n);
        printf ("Factorial is : %d", factorial(n));
    }
    else if(operator == '^')
    {
        printf ("Enter Number : ");
        scanf ("%f", &a);

        printf ("Enter Power : ");
        scanf ("%f", &b);

        float x = pow (a, b);
        printf ("The Result is : %.2f", x);
    }
    else
    {
        printf ("\nInvalid");
    }

    return 0;
}