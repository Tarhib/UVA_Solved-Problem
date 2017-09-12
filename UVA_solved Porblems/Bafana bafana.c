#include<stdio.h>
int main()
{
    int p1,tc,c,pos,cy,mov,cc;

    scanf("%d",&tc);

    cc=1;
    for(c=0; c<tc; c++)
    {
        scanf("%d %d %d",&cy,&pos,&mov);

        if(cy==mov)
        {
            printf("Case %d: %d\n",cc,pos);
            cc++;
            continue;
        }
        if(mov>cy)
        {
            mov=mov%cy;
            p1=pos+mov;
        }
        else if(cy>mov)
        {
            p1=pos+mov;
        }
        if(p1>cy)
        {
            printf("Case %d: %d\n",cc,p1-cy);
        }
        else
        {
            printf("Case %d: %d\n",cc,p1);
        }
        cc++;
    }
    return 0;
}
