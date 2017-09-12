#include<stdio.h>
int main()
{
   long n,m,c,max,count=1;

   while(scanf("%ld %ld",&n,&max)==2)
   {
      if(n==-1 && max==-1) break;
      m=n;
      c=1;
      while(n>1)
      {
         if(n%2==0) {
               n=n/2;
               if(n>max) break;
               c++;
         }
         else {
            n=(3*n)+1;
            if(n>max) break;
            c++;
         }
      }
      printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",count,m,max,c);
      count++;
   }
   return 0;
}
