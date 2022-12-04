#include <stdio.h>

int main(){
	char oper;
	float num1,num2,ans;
	
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &oper);
	
	printf("Enter the first number: ");
	scanf("%f",&num1);
	
	printf("Enter the you second number: ");
	scanf("%f",&num2);
	
	switch (oper) {
		case '+':
		//ans = num1 + num2;
		printf ("%.2f + %.2f = %.2f \n", num1, num2, (num1+num2));
		break;
		
		case '-':
		ans = num1 - num2;
		printf ("%.2f - %.2f = %.2f \n", num1, num2, ans);
		break;
		
		case '*':
		ans = num1 * num2;
		//printf ("%.2f * %.2f = %.2f \n", num1, num2, ans);
		break;
		
		case '/':
		ans = num1 / num2;
		//printf ("%.2f / %.2f = %.2f \n", num1, num2, ans);
		break;
		
		default:
		printf("Invalied Operator\n");
		break;
		
	}
	printf("%.2f %c %.2f = %.2f \n",num1,oper,num2,ans);
}