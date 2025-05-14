#include<stdio.h>
int row,col;
int a[5][7]={
    {1,2,3},
    {4,5,6}
};
int main()
{
  for(row=0;row<3;row++)
  {
    for(col=0;col<4;col++)
    {
printf("%d\n",a[row][col]);
    }
}
return 0;

}
