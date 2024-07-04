#include <stdio.h>
int main()
{
    int l1,l2,l3,max=0;
    while(scanf("%d",&l1)!=EOF)
    {
        for(l2=1,max=0; l2<=l1; l2++)
        {
            scanf("%d", &l3);
            if(l3>max)
                max=l3;
        }
        if(max<10)
            printf("1\n");
        else if(max<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}