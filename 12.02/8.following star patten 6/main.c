#include<stdio.h>
int main(){
	int line,star,input;
	printf("Enter the number: ");
	scanf("%d",&input);
	for (line=1;line<=input;line++){
		for(star=1;star<=((input+1)-line);star++){
			printf(" * ");
		}
		printf("\n");
	}
}