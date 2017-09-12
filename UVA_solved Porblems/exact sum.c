#include<stdio.h>
int main()
{
    long long int a[10009],nob,i,j,peters_money,price1[100000],price2[100000],temp,c,dif,pos,k;

    while(scanf("%lld",&nob)!=EOF)
    {
       for(i=0;i<nob;i++)
       {
          scanf("%lld",&a[i]);
       }
       scanf("%lld",&peters_money);

      c=0;
       for(i=0;i<nob;i++)
       {
          for(j=i+1;j<nob;j++)
          {
             if((a[i]+a[j])==peters_money)
             {
                price1[c]=a[i];
                price2[c]=a[j];
                c++;
             }
          }
       }

       k=100000000;

       for(i=0;i<c;i++)
       {
          if(price1[i]>price2[i])
            {
               temp=price1[i];
               price1[i]=price2[i];
               price2[i]=temp;
            }

         dif=price2[i]-price1[i];
         j=i;

      if(dif<=k)
         {
            k=dif;
            pos=j;
         }
       }
       printf("Peter should buy books whose prices are %lld and %lld.\n\n",price1[pos],price2[pos]);
    }
return 0;
}
