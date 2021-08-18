#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int val[5] = {2,4,5,8,10};
    int i,*pval;
    pval=&val;
    
    for(i=0;i<5;i++){
    *pval = (*pval)-1;
    pval++;
    printf("%d, ",val[i]);
    }

    return 0;
}