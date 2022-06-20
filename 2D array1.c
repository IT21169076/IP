#include <stdio.h>
int main (void)
{
int twoD[3][3];
int i , j ;
int sum_row[3] = {0} ;
int sum_columns[3] = {0};
12
printf("input element of matrix : \n");
for (i = 0 ; i < 3 ; i++)
{
for(j = 0 ; j < 3 ; j++)
{
printf("element - [%d],[%d] : " , i , i);
scanf("%d" , &twoD[i][j]);
}
}
printf("\n2D array is : \n");
for (i = 0 ; i < 3 ; i++)
{
for (j = 0 ; j < 3 ; j++)
{
printf("%d " , twoD[i][j]);
}
puts(" ");
}
printf("\nAfter settinf 0 in lower tringular\n");
printf("\n2D array is : \n");
for (i = 0 ; i < 3 ; i++)
{
for (j = 0 ; j < 3 ; j++)
{
if (i <= j)
{
printf("%d " , twoD[i][j]);
}
else
{
twoD[i][j] = 0 ;
printf("%d " , twoD[i][j]);
}
}
puts(" ");

}
printf("\nThe sum of rows : ");
for (i = 0 ; i < 3 ; i++)
{
for (j = 0 ; j < 3 ; j++)
{
sum_row[i] += twoD[i][j];
}
printf("%d " ,sum_row[i] );
}
printf("\nThe sum of columns : ");
for (i = 0 ; i < 3 ; i++)
{
for (j = 0 ; j < 3 ; j++)
{
sum_columns[i] += twoD[j][i];
}
printf("%d " ,sum_columns[i] );
}
return 0 ;
}
