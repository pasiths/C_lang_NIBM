#include<stdio.h>
int main(){
	int num,c,f_c;
	for(c=1;c<=100;c++){
		f_c=0;
		for(num=1;num<=c;num++){
			if(c%num==0){
				f_c=f_c+1;
			}
		}
		if(f_c==2){
			printf("%d is primary number \n",c);
		}
	}
}