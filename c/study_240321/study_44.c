#include <stdio.h>
int main(){
    int a = 1, sum = 0;
    while(a++ <= 5){
        if(a%2 != 0)
            continue;
        sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}