#include <stdio.h>
int main(){
	int i,c,num,input=0;
	printf("Enter the number: ");
	scanf("%d", &i);
	
	for(c=1;c<=i;c++){
		
		for(num=1;num<=c;num++){
			input++;
			printf("%d ",input);
		}
		printf("\n");
	}
	return 0;
}