#include<stdio.h>
int main(){
	int c=0,input,pos=0,neg=0;
	do{
		printf("Enter the number: ");
		scanf("%d",&input);
		if(input>0){
			pos++;
		}else if(input<0){
			neg++;
		}else{
			printf("Both same values \n");
		}
		c++;
	}while(input!=0);
	printf("Positive: %d \nNegative: %d \nTotal Inputs: %d \n",pos,neg,c);
}