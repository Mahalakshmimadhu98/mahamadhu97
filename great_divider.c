
#include <stdio.h>

int main()
{
    
  int l,r,i,s,b,flag=0,a[10],j=0;
  printf("\nEnter 2 numbers");
  scanf("%d%d",&l,&r);
  if(l<r)
  {
      s=l;
      b=r;
  }
  else
  {
      b=r;
      s=l;
  }
  for(i=1;i<=s;i++)
  {
      if((i%s==0)&&(i%l==0))
      {
       a[j]=i;
       j++;
      }
    }
    printf("\nGreatest number: %d",a[j-1]);
  
  
    return 0;
}
