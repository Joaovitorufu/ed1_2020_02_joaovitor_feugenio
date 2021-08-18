#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    double num [10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    for(i=0; i<10;i++){
    printf("%.0lf..",*(num+i));
    }
    return 0;
}