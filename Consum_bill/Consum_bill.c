#include<stdio.h>
int main(){
	char cust_name[20];
	int units,rate,tot;
	
	printf("Enter the your name: ");
	scanf("%s",&cust_name);
	
	printf("Enter the number of unit: ");
	scanf("%d",&units);
	
	if(units>=120){
		rate=35;
	}else if(units<120 && units>=90){
		rate=27;
	}else if(units<90 && units>=60){
		rate=22;
	}else{
		rate=18;
	}
	
	tot=units*rate;

	printf("Customer Name: %s \nBill Amount: Rs%d.00 \n",cust_name,tot);
}