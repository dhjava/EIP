#include <stdio.h>
int main(){
    int i = 0;
    while(1){
        if(i==4){
            break;
        }
        ++i;
    }
    printf("i = %d", i);
    return 0;
}