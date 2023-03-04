#include <stdio.h>
#define SUB(a,b) a-b

int main(void) {
    int a, b;
    int result;
    
    scanf_s("%d %d", &a, &b);
    result = SUB(a, b);
    printf("%d", result);
    
    
    //기본 방식
    /*
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    result = SUB(a, b);
    printf
        ("result : %d", result);*/
}
