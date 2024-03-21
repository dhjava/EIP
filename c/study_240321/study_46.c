#include <stdio.h>
int main(){
    char ch[5];
    char str[] = "abcde";
    int num[] = {1, 2, 3, 4, 5};
    printf("%d, ", sizeof(ch));
    printf("%d, ", sizeof(str));
    printf("%d\n", sizeof(num)/sizeof(int));
    return 0;
}