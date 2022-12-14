#include<stdio.h>
int main(){
	int num,end_num;
	printf("Enter the end number: ");
	scanf("%d",&end_num);
	for(num=1;num<=end_num;num++){
			if(end_num%num==0){
			printf("%d is factor of %d. \n",num,end_num);
		}
	}
}