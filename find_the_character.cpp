// find the input item is uppercase or lowercase 

#include<stdio.h>
int main ()
{
	char c, uppercase, lowercase, digit, symbol ;
	
	printf("Enter the c: ");
	scanf("%c", &c);
	
	if(c>='A' && c<='Z')
	printf("the given character is of uppercase"); 
	else if (c>='a' && c<='z')
    printf("the given character is of lowercase");
    else if (c>='0' && c<='9')
    printf("the given character is digit");
    else 
    printf("the given character is a symbol");
     
	return 0;
	
	
}
