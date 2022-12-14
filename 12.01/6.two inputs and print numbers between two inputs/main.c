#include<stdio.h>
int main(){
	int input_1=0,input_2=0,max=0,min=0;
	printf("Enter the strat number: ");
	scanf("%d",&input_1);
	printf("Enter the end number: ");
	scanf("%d",&input_2);
	
	
	if(input_1<=input_2){
		while(input_1<=input_2){
			printf(" %d \n",input_1);
			input_1++;
		}	
	}
	else{
		while(input_1>=input_2){
			printf(" %d \n",input_1);
			input_1--;
		}	
	}
}