# largest
#include<stdio.h>
void main()
{
int n1,n2,n3,max;
printf("enter three numbers");
scanf("%d %d %d",&n1,&n2,&n3);
max=n1;
if(max>n2)
{
  if(max>n3)
  {
  printf("%d is largest",&n1);
  }
}  
  else if(n2>n3)
  {
  printf("%d is largest",&n2);
  }
  else
  {
  printf("%d is largest",&n3);
  }
 
}

   
