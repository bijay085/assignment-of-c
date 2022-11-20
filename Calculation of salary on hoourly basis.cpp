// find the salary

#include<stdio.h>
#include<math.h>


{
	int salary, hours ;
	
	printf("Enter the hours: ");
	scanf("%d", &hours);
	
	if (hours<8)
	
	salary= hours*100;
    else
    
	salary = (((hours-8)*120)+(8*100));
	
	printf("the salary will be %d",salary);
    
return 0;
}
