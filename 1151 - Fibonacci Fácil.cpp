#include <stdio.h>
int main()
{
    int N,y, a=0,b=1,c=0;
    
    scanf("%d", &N);
    
    for(y=1; y<N; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);
    return 0;
}