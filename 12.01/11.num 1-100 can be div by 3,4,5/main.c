#include<stdio.h>
int main(){
	int num;
	for (num=1;num<=100;num++){
		if(num%3==0 && num%4==0 && num%5==0){
			printf("%d can be devied by 3,4,5 \n",num);
		}
	}
}