#include<stdio.h>
#include<math.h>
int isprime(int num);
int main()
{
   int a,c,prime_count;
   while(scanf("%d",&a)==1 && a!=0)
   {
      prime_count=0;
      for(c=2;c<a;c++)
      {
         if(a%c==0)
         {
            if(isprime(c))
            {
               prime_count++;
            }
         }
      }
      if(a!=1 && prime_count ==0) prime_count=1;
      printf("%d : %d\n",a,prime_count);
   }
return 0;
}

int isprime(int num)

{
   int n,truth=1,range;

   range=sqrt(num);
   for(n=2;n<=range;n++)
   {
      if(num%n==0)
      {
         truth=0;
         break;
      }
   }
   return truth;
}
