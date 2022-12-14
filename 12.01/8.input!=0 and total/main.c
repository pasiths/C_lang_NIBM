#include<stdio.h>
int main(){
	int input,tot=0;
	
	do{
		printf(" Enter the number: ");
		scanf("%d",&input);
		tot=tot+input;
	}while(input!=0);
	printf(" Total: %d \n",tot);
	printf(" End Program \n");
}