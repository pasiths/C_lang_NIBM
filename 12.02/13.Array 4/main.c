#include<stdio.h>
int main(){
	int c,array[10];
	for(c=0;c<10;c++){
		printf("Enter the values: ");
		scanf("%d",&array[c]);
	}
	printf("\n \n");
	for(c=0;c<10;c++){
		if(array[c]%2==0){
			printf("%d is even number.\n",array[c]);
		}else{
			printf("%d is odd number.\n",array[c]);
		}
		printf("\n");
	}
}