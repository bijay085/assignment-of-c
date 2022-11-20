// student's 5subject / -total -% -result - grade

#include<stdio.h>
#include<math.h>
int main()
{
 float en, mp, c, m, ac, total, per, mark;
 char result, grade;
 
printf("Enter the marks of 5 subject:\n");
scanf ("%f%f%f%f%f", &en, &mp, &c, &m, &ac);

total = (en+mp+c+m+ac);
printf("the total mark is %f",total);


per = ((total)/5);
printf("The percentage is %f", per);


 if(en>=35 & mp>=35 && c>=35 && m>=35 && ac>=35)
printf("The student is pass.\n");
else
printf("The student is fail.\n");

if(per>=90)
{
printf("The student got 'A'");
}
else if (per>=75)
{
printf("the student got 'B'");
}
else if (per>=60)
{
	printf("the student got 'C'");
}
else
{
	printf("the student got 'D'");
	
}




return 0;
 
 
}
