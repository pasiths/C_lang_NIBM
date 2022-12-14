#include<stdio.h>
int main(){
	int c,tot=0,array[]={65,55,45,35,25};
	float avg=0;
	for(c=0;c<5;c++){
		tot=tot+array[c];
	}
	avg=tot/c;
	printf("Total: %d \nAverage: %.2f \n",tot,avg);
}