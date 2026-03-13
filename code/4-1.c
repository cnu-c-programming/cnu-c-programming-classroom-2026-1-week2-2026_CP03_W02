#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    scanf("%d %d %c", &a, &b, &operator);
    
    if(operator == '+') {
        printf("%d", a+b);
    } else if (operator == '-') {
        printf("%d", a-b);
    } else if (operator == '/') {
        printf("%d", a/b);
    } else if (operator == '*') {
        printf("%d", a*b);
    } else {
        printf("error");
    }
    
    

    return 0;
}

