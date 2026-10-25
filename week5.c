//program 1:
#include <stdio.h>

void main()
{
   int a, b, c, d;
    int max, min;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
        max = a;
    else
        max = b;

    if (c > d)
        max = (max > c) ? max : c;
    else
        max = (max > d) ? max : d;

    if (a < b)
        min = a;
    else
        min = b;

    if (c < d)
        min = (min < c) ? min : c;
    else
        min = (min < d) ? min : d;

    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);
}

//program 2:
#include <stdio.h>

void main()
{
   int units;
   float bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 200)
    {
        bill = units * 2.50;
    }
    else if (units <= 500)
    {
        bill = units * 4.00;
    }
    else
    {
        bill = units * 6.00;
    }

    printf("Total Electricity Bill = Rs. %.2f\n", bill);
}


//program 3:
#include <stdio.h>
#include <math.h>

void main()
{
  float a, b, c, d, r1, r2;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are %f and %f\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);

        printf("Both roots are equal: %f\n", r1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }
  
}


//program 4:
#include <stdio.h>

void main()
{
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %f\n", a + b);
            break;

        case 2:
            printf("Result = %f\n", a - b);
            break;

        case 3:
            printf("Result = %f\n", a * b);
            break;

        case 4:
            if (b == 0)
            {
                printf("Division by zero is not possible\n");
            }
            else
            {
                printf("Result = %f\n", a / b);
            }
            break;

        default:
            printf("Invalid option\n");
    }
}


//program5:
#include <stdio.h>

void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("Not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}


