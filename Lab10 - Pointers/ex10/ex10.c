#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int num[10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    for(i=9;i>=0;i--)
    {
        printf("%d,",*(num+i));
    }
    return 0;
}