#include<stdio.h>
int main(){
	int line,star,input,space;
	printf("Enter the number: ");
	scanf("%d",&input);
	for (line=1;line<=input;line++){
		for(space=2;space<=line;space++){
			printf("   ");
		}
		for(star=1;star<=((input+1)-line);star++){
			printf(" * ");
		}
		for(star=2;star<=((input+1)-line);star++){
			printf(" * ");
		}
		printf("\n");
	}
}