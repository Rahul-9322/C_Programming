#include<stdio.h>

void Table(int iNo)
{
  int icnt = 1;
  while(icnt <= 10)
  {
    printf("%d\t",iNo*icnt);
    icnt++;
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