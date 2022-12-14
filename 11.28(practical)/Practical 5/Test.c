#include <stdio.h>
int main()
{
	int area,height,width,perimeter;
	
	printf("Enter the width: ");
	scanf("%d",&width);
	
	printf("Enter the height: ");
	scanf("%d",&height);
	
	area=width * height;
	printf("Area= %d \n",area);
	
	perimeter=2*(width+height);
	printf("Permeter= %d \n",perimeter);
	
	return 0;
}