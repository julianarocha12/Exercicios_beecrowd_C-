#include <stdio.h>
int main()
{
    int n,b,c,d=0,e=1;
    scanf("%d", &n);
    int pes[n];
    for(b=0; b<n; b++)
        scanf("%d", &pes[b]);
    c=pes[d];
    for(d=0; d<n; d++)
    {
        if(pes[d]<c)
        {
            c=pes[d];
            e=d+1;
        }

    }
    printf("%d\n", e);
    return 0;
}