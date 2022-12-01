#include <stdio.h>
int main() {
  char cus_name[20], pack_name[20];
  int pack_num, add_gb, fee_pack, add_rate, monthly_usege;
  float tax_rate, final_bill;
  sprintf(pack_name, " ");

  printf("Enter the customer name: ");
  scanf("%s", cus_name);

  printf("1.Standared \n");
  printf("2.Pro \n");
  printf("Enter the packge number: ");
  scanf("%d", &pack_num);

  printf("Enter the addtional data: ");
  scanf("%d", &add_gb);

  if (pack_num == 1) {
    fee_pack = 1500;
    sprintf(pack_name, "Standared");
  } else if (pack_num == 2) {
    fee_pack = 2400;
    sprintf(pack_name, "Pro");
  } else {
    printf("Invalid package \n");
    return 0;
  }

  if (add_gb >= 20) {
    add_rate = 120;
  } else {
    add_rate = 80;
  }

  monthly_usege = fee_pack + (add_gb * add_rate);

  if (monthly_usege >= 5000) {
    tax_rate = 0.08;
  } else {
    tax_rate = 0;
  }

  final_bill = monthly_usege + (monthly_usege * tax_rate);

  printf("customer Name: %s \nPackage Name: %s \nPackage Fee: Rs%d.00 \nRate per additional: Rs%d.00 \nTex rate: Rs%.2f \nFinal bill amount: Rs%.2f \n",
         cus_name, pack_name, fee_pack, add_rate, tax_rate, final_bill);

  return 0;
}