#include<stdio.h>
int main(){
	int c=1,input=0,tot=0;
	
	while(c<=10){
		
		printf("Enter the your number: ");
		scanf("%d",&input);
	
		if(input%2==0){
			tot=tot+input;
			c++;
		}else{
			printf("Invalid input \n");
		}
	}
	printf("Total: %d \n",tot);
}