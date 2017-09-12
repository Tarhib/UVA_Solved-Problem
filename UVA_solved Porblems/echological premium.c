#include<stdio.h>
int main()
{
   long int a[10000],b[10000],d[10000],tc,c,sum,nof,i;

   while(scanf("%ld",&tc)==1)
   {
      for(c=1;c<=tc;c++)
      {
         scanf("%ld",&nof);

         for(i=0;i<nof;i++)
         {
            scanf("%ld %ld %ld",&a[i],&b[i],&d[i]);
         }
         sum=0;
         for(i=0;i<nof;i++)
         {
            sum=sum+a[i]*d[i];
         }
         printf("%ld\n",sum);
      }
   }
   return 0;
}
