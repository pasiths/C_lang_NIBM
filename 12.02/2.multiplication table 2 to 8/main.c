#include<stdio.h>
int main(){
	int n1,n2,tot;
	for(n1=2;n1<=8;n1++){
		n2=0;
		for(n2=0;n2<=10;n2++){
			tot=n1*n2;
			printf("%d * %d = %d \n",n1,n2,tot);
		}
		printf("\n");
	}
}