#include <stdio.h>

int main(void) {
  char des[25];
  int num;

  printf("1.Project Manager \n2.Senior Software Engineer \n3.Software Engineer \n4.Software Developer \n5.Other designation \n");
  printf("Enter designation to viwe salary \n(Enter the number): ");
  scanf("%d", &num);

  if(num==1){
    printf("Project Manager: Rs300000.00 \n");
  }
  else if(num==2){
     printf("Senior Software Engineer: Rs250000.00 \n");
  }
  else if(num==3){
     printf("Software Engineer: Rs180000.00 \n");
  }
  else if(num==4){
     printf("Software Developer: Rs90000.00 \n");
  }
  else if(num==5){
     printf("Other designation: Rs 70000.00 \n");
  }
  else{
  	printf("Invalid output \n");
  }
  return 0;
}