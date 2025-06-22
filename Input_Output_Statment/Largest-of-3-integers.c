#include<stdio.h>

int main()
{
  int x,y,z,l;
  printf("Enter 3 integers\n");
  scanf("%d%d%d",x,y,z);
  l=x>y?x:y;
  l=z>l?z:l;
  printf("Largest = %d",l);
}
