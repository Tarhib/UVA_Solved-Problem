#include<stdio.h>
int main()
{
   int b_len[105];
   int nob,count,n,avr,sum,mov,set=1;
   while(scanf("%d",&nob)==1 && nob!=0)
   {
      for(n=0;n<nob;n++)
      {
         scanf("%d",&b_len[n]);
      }
      sum=0;
      for(count=0;count<n;count++)
      {
         sum=sum+b_len[count];
      }
      avr=sum/nob;

      mov=0;
      for(count=0;count<n;count++)
      {
         if(avr<b_len[count])
         {
            mov=mov+(b_len[count]-avr);
         }
      }
      printf("Set #%d\nThe minimum number of moves is %d.\n\n",set++,mov);
   }
   return 0;
}
