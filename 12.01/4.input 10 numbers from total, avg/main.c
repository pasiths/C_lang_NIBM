#include<stdio.h>
int main(){
	int c=1,tot=0,input=0;
	float avg;
	
	printf("Enter the your end number: ");
	scanf("%d",&input);
	while(c<=input){
		printf("%d \n",c);
		tot=tot+c;
		c++;
	}
	c--;
	printf("%d \n",c);
	avg=tot/c;
	printf("Total: %d \nAverage: %.2f \n",tot,avg);
}