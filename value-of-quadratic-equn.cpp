 // result of quadratic equation 
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,b,a,c,y;
    

    printf("enter the value of b: ");
    scanf("%f",&b);

    printf("enter the value of a:");
    scanf("%f",&a);

    printf("enter the value of c: ");
    scanf("%f",&c);
    
    y = (sqrt(b*b-4*a*c));

    x1 = ((-b+y)/(2*a));
    x2 = ((-b-y)/(2*a));

    printf("x1 is %f", x1);
    printf("x2 is %f", x2);

    return 0;
}
