#include <stdio.h>

void main()
{
 int a, b, c, sum;
 float average;
 printf("Enter three numbers: "); 
 scanf("%d %d %d", &a, &b, &c); 
 sum = a + b + c;
 average = sum / 3;
 printf("Sum = %d\n", sum);
 printf("Average = %f\n", average);  
}


//program 2:
#include <stdio.h>

void main()
{
  int choice;
  float celsius, fahrenheit;

    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5/9;

        printf("Temperature in Celsius = %f\n", celsius);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9/5) + 32;

        printf("Temperature in Fahrenheit = %f\n", fahrenheit);
    }
    else
    {
        printf("Invalid choice\n");
    }  
}

//program3:
#include <stdio.h>

void main()
{
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %f\n", interest);
}
