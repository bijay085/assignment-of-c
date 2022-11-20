//number is palindrome or not

#include<stdio.h>
#include<math.h>

int main()
{
	int num, original_num, result=0, rem ;
	
	printf("enter the positive number  : ");
	scanf("%d", &original_num);
	
	num = original_num;
	
	while (num != 0 )
	{
	rem = num % 10;
	result = rem+result*10 ;
	num = num/10;
}
if (result==original_num)
{
	printf("the number is palindrome");
	
}
else
{
	printf("the number is non palindrom");
}
return 0 ;
}
