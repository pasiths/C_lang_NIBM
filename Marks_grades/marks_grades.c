#include<stdio.h>
int main(){
	char name[20], grade, result[50];
	
	printf("Enter the your name: ");
	scanf("%s", name);
	
	printf("Enter the yout grade: ");
	scanf("%s", &grade);
	
	switch(grade){
		case 'A':
    case 'a':
		sprintf(result,"Excellent!");
		break;
		
		case 'B':
    case 'b':
		case 'C':
    case 'c':
		sprintf(result,"Well Done!");
		break;
		
		case 'D':
    case 'd':
		sprintf(result,"You Passed!");
		break;
		
		case 'F':
    case 'f':
		sprintf(result,"Better Try Again!");
		break;
		
		default:
		sprintf(result,"You entered is invalid.");
		break;
	}
	printf("Your Name Is: %s \nYour Grade Is: %s\n",name,result);
  return 0;
}