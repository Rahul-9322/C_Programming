#include<stdio.h>

void Table(int iNo)
{
  int icnt = 10;
  while(icnt >= 1)
  {
    printf("%d\t",iNo*icnt);
    icnt--;
  }

}
int main()
{
    int iValue  = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}