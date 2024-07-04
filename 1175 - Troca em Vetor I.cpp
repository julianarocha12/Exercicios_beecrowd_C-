#include <stdio.h>
int main()
{
   int n[20], temp,i,y;
    for(i=0; i<20; i++)
        scanf("%d",&n[i]);
    for(i=0, y=19; i<10; i++, y--)
    {
        temp=n[i];
        n[i]=n[y];
        n[y]=temp;
        
    }
    for(i=0; i<20; i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}