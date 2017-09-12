#include<stdio.h>
#define mny (a+(a-b))*x
int main()
{
   float a,b,c,tc,cc,x;
   while(scanf("%f",&tc)==1)
   {
      for(cc=1;cc<=tc;cc++)
      {
         scanf("%f %f %f",&a,&b,&c);
         x=c/(a+b);
         printf("%.0f\n",mny);
      }
   }
   return 0;
}
