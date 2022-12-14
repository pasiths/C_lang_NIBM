#include <stdio.h>
int main()
{
	char name[20];
	
	printf("Enter Your Name: ");
	scanf("%s",&name);
	printf("You Name Is: %s \n", &name);
	
	return 0;
}