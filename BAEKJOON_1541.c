#include<stdio.h>
int main(void)
{
   int i=0,num,a; 
   char c;
   for(scanf("%d",&num);scanf("%c",&c),c!=10;)
   {
      if(c=='-') 
		  i=1;
      scanf("%d",&a);
      if (i) 
		  num -= a;
      else 
		  num += a;
   }
   printf("%d\n",num);
}
