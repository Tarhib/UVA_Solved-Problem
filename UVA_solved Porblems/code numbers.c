#include<stdio.h>
#include<string.h>

int main()
{
   char msg[92];
   int i,n,len,tc;

   scanf("%d",&tc);
   {
   getchar();
      for(n=0;n<tc;n++)
      {
         while(gets(msg)!='\0')
      {
         len=strlen(msg);
         if(len==0){break;}

         for(i=0;i<len;i++)
         {
            if(msg[i]=='0') printf("O");
            else if(msg[i]=='1') printf("I");
            else if(msg[i]=='2') printf("Z");
            else if(msg[i]=='3') printf("E");
            else if(msg[i]=='4') printf("A");
            else if(msg[i]=='5') printf("S");
            else if(msg[i]=='6') printf("G");
            else if(msg[i]=='7') printf("T");
            else if(msg[i]=='8') printf("B");
            else if(msg[i]=='9') printf("P");
            else printf("%c",msg[i]);
         }
         printf("\n");
         }
      if(n!=tc-1) printf("\n");
      }
   }
return 0;
}
