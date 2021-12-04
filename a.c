hi
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   double x1,x2,y1,y2;
   double sumx;
   double sumy;
   double sumt;
   printf("enter the values of x1 :");
   scanf("%lf",&x1);

    printf("\nenter the values of x2 :");
   scanf("%lf",&x2);

    printf("\nenter the values of y1 :");
   scanf("%lf",&y1);

     printf("\nenter the values of y2 :");
   scanf("%lf",&y2);

    sumx=x2-x1;

    sumx=pow(sumx,2);

     sumy=y2-y1;

    sumy=pow(sumy,2);

    sumt=sumx+sumy;

   double sumtx=sqrt(sumt);

    printf("the answer for the solution is: %lf",sumtx);

    return 0;
}
