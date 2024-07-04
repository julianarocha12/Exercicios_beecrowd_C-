#include <stdio.h>

int main(){
    int b, n, i, d, c, v, banc;
    
    while(1){
        scanf("%d %d", &b, &n);
        if(b == 0 && n == 0) break;
        
        banc = 0;
        int debentures[b];
          
        for(i = 1; i <= b; i++)
            scanf("%d",&debentures[i]);
        
        for(i = 1; i <= n; i++){
            scanf("%d %d %d", &d, &c, &v);
            
            debentures[d] -= v;
            debentures[c] += v;
        }
        
        for(i = 1; i <= b; i++){
            if(debentures[i] < 0){
                banc = 1;
                break;
            }
        }
        
        if(banc== 1) printf("N\n");
        else printf("S\n");
   }
   return 0;
}