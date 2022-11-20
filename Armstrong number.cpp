// checking armstrong number 
#include<stdio.h>
#include<math.h>

int main()
{
	int result=0, num, rem, checking_num, result1 ;

	
	printf("Enter the Positive number :");
	scanf("%d", &checking_num);
	num = checking_num;
	
	while(num != 0)
	{
		rem = num % 10;
		result1 = rem * rem * rem ;
		result = result + result1;
		num = num/10;
		
	}
	if (result == checking_num)
	{
		printf("it is an armstrong number");
	}
	else 
	{
		printf("it is not an armstrong number");
	}
return 0;
}
