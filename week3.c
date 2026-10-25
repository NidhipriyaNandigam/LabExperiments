//program 1:
#include <stdio.h>
#include <math.h>
void main()
{
  float num, root;
  printf("Enter a number: "); 
  scanf("%f", &num);
  
  root = sqrt(num);
  printf("Square root = %f\n", root); 
}

//program 2:
#include <stdio.h>
#include <math.h>
void main()
{
    float principal, rate, time, amount, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate / 100, time);

    interest = amount - principal;

    printf("Compound Interest = %f\n", interest);
    printf("Total Amount = %f\n", amount); 
}


//program 3:
#include <stdio.h>
#include <math.h>
void main()
{
     float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %f\n", area);
}

//program 4:
#include <stdio.h>

void main()
{
   float speed, time, distance;

    printf("Enter speed: ");
    scanf("%f", &speed);

    printf("Enter time in minutes: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance travelled in metres = %f\n", distance); 
}