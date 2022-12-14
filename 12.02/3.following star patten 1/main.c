#include<stdio.h>
int main(){
	int n1,n2,input;
	printf("Enter the number: ");
	scanf("%d",&input);
	for(n1=1;n1<=input;n1++){
		for(n2=1;n2<=(input+2);n2++){
			printf(" * ");
		}
		printf("\n");
	}
}