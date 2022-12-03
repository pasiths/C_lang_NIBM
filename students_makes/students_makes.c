#include<stdio.h>
int main(){
	int english,science,maths;
	float avg;
	printf("Enter the english marks: ");
	scanf("%d",&english);
	
	printf("Enter the science marks: ");
	scanf("%d",&science);
	
	printf("Enter the maths marks: ");
	scanf("%d",&maths);
	
	avg=(english+science+maths)/3;
	
	if(avg>=70){
		printf("Distinction \n");
	}else if(avg>=55){
		printf("Merit \n");
	}else if(avg>=40){
		printf("General \n");
	}else{
		printf("Fail \n");
	}
}