
#include<stdio.h>
#include<stdlib.h>
void Pattern(int iNo)
{
  int icnt = 0;
  for(icnt = 1; icnt <= abs(iNo); icnt++)
  {
    printf("$\t *\t");
  } 
  printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;

}
