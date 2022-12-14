#include<stdio.h>
int main(){
	int c,array[8],pos=0,neg=0,zero=0,tot=0;
	for(c=0;c<8;c++){
		printf("Enter the number: ");
		scanf("%d",&array[c]);
	}
	printf("\n \n");
	for(c=0;c<8;c++){
		if(array[c]>0){
			pos=pos+1;
		}else if(array[c]<0){
			neg=neg+1;
		}else{
			zero=zero+1;
		}
		tot=tot+array[c];
	}
	printf("Positive: %d. \nNegative: %d. \nZero: %d. \nTotal: %d \n",pos,neg,zero,tot);
}