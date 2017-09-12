#include<stdio.h>
#include<string.h>
int main()
{
   char msg[1000];
   int i;

   while(gets(msg))
   {
      for(i=0;i<strlen(msg);i++){
         printf("%c",msg[i]-7);
         }
      printf("\n");
   }
   return 0;
}
