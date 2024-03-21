#include<stdio.h>

int main(){
    int count, sum = 0;
    for(count = 1; count <= 10; count++){
        if((count % 2) == 0)
            continue;
        else
            sum += count;
    }
    printf("%d\n", sum);
    return 0;
}