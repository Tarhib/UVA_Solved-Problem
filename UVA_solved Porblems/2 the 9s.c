#include<stdio.h>
#include<string.h>
int main()
{
   char num[2000];
   int i,degree,sum,len,sum2;

   while(scanf("%s",&num))
   {
      if(strcmp(num,"0")==0) break;

      sum=0;
      degree=0;
      len=strlen(num);

      for(i=0;i<len;i++)
      {
         sum=sum+(num[i]-'0');
      }

      if(sum==9) {
         degree=1;
         }

      else{

      degree=2;
      top:;
      sum2=0;
      while(sum>0)
      {
         sum2=sum2+sum%10;
         sum=sum/10;
      }
      if(sum2>9)
      {
         degree++;
         sum=sum2;
         goto top;
      }
      }


      if(sum2==9 || sum==9) printf("%s is a multiple of 9 and has 9-degree %d.\n",num,degree);
      else printf("%s is not a multiple of 9.\n",num);
   }
   return 0;
}
