//program 1:
#include <stdio.h>

void main()
{
  int A,B,C,D,E,F,G,I,J;
  printf("enter the value of A,B,C,D,E,F,G,I:");
  scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&I);

    printf("a. A+B*C+(D*E)+F*G = %d\n",A+B*C+(D*E)+F*G);

    printf("b. A/B*C-B+A*D/3 = %d\n",A/B*C-B+A*D/3);

    printf("c. A+++B---A = %d\n",A+++B---A);
           
    printf("d. J = (I++) + (++I) = %d\n",J = (I++) + (++I));
    
}

//program2:
#include <stdio.h>

void main()
{
   int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Maximum number = %d", max);
 
}

//program3:
#include <stdio.h>

void main()
{
   int m1, m2, m3, m4, m5, total;
    float average;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;

    printf("Total marks = %d\n", total);
    printf("Average marks = %f\n", average);
 
}