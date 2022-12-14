#include<stdio.h>
int main(){
	int input,c,x=0;
	printf("Enter the you number: ");
	scanf("%d",&input);
	for(c=0;c<=input;c++){
		if(input%c==0){
			x++;
		}
	}
	if(x==2){
		printf("%d \n",input);
	}
}