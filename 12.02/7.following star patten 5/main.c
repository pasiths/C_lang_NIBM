#include<stdio.h>
int main(){
	int l,star,space,input;
	printf("Enter the number: ");
	scanf("%d",&input);
	for(l=1;l<=input;l++){
		for(space=1;space<=(input-l);space++){
			printf("   ");
		}
		for(star=1;star<=l;star++){
			printf(" & ");
		}
		for(star=2;star<=l;star++){
			printf(" & ");	
		}
		printf("\n");
	}
}