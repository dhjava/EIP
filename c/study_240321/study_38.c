#include <stdio.h>
int main(){
    int c=0;
    int i=0;
    while(i<10){
        i++;
        c *= i;
    }
    printf("%d", c);
    return 0;
}