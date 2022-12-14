#include<stdio.h>
int main(){
	int c,r,input;
	printf("Enter the number: ");
	scanf("%d",&input);
	for(c=1;c<=input;c++){
		for(r=1;r<=(c*2);r++){
			printf(" * ");
		}
		printf("\n");
	}
}