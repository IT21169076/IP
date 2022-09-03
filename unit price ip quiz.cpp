#include <stdio.h>
int main (void)
{

  int item_no=0 , quantity =0;
  float unit_price =0 ;
  unit_price=item_no+quantity;
    
  printf("Enter Item :");
  scanf("%d" , &item_no);
while (item_no != -1)
{
   printf("Enter Quantity :");
   scanf("%d" , &quantity);
if (item_no == 1)
{
   unit_price += 300.25 * quantity ;
}
else if (item_no == 2)
{

   unit_price += 145.50 * quantity ;
}
else if (item_no == 3)
{
   unit_price += 525.00 * quantity ;
}
printf("\nEnter Item :");
   scanf("%d" , &item_no); 
}
   printf("Total price to pay Rs : %.2f", unit_price);
return 0 ;
}

