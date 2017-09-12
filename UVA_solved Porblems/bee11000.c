#include<stdio.h>
#include<math.h>
double sum(double power);

int main()
{
   double n,f,m;

   while(scanf("%lf",&n)==1)
   {
      if(n==-1) break;

      else{
      f=sum(n+2)-1;
      m=sum(n+3)-1;
      printf("%.0lf %.0lf\n",f,m);
      }
   }

   return 0;
}

double sum(double power)
{
   double x,y,z,total;
      z=sqrt(5);
      x=pow(((1+z)/2),power);
      y=pow(((1-z)/2),power);

      total=(x-y)/z;

   return total;
}
