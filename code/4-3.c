#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);
    if(input == 1) {
        printf("false");
        goto label;
    }
    for (int i = 2; i < input; i++) {
        if (input % i == 0) {
            printf("false");
            goto label;
        } 
    }
    printf("true");
    label:
    return 0;
     
}

