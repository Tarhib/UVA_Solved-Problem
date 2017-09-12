#include<stdio.h>
int main()
{
   long long int a[10],tc,cc,i,j,temp;

   while(scanf("%lld",&tc)==1)
   {
      for(cc=1;cc<=tc;cc++)
      {
         scanf("%lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3]);

         for(i=0;i<3;i++)
         {
            for(j=i+1;j<4;j++)
            {
               if(a[i]>a[j])
                  {
                     temp=a[i];
                     a[i]=a[j];
                     a[j]=temp;
                  }
            }
         }
      if((a[0]+a[1]+a[2])<=a[3]){
            printf("banana\n");
         }
      else{
           if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]){
            printf("square\n");
           }
           else if(a[2]==a[3] && a[0]==a[1]){
            printf("rectangle\n");
           }
            else printf("quadrangle\n");
         }
      }
   }
   return 0;
}
