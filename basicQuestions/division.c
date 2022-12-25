#include<stdio.h>

int main(){
    int a;
    int b;
    printf("type the number 1 and 2:");
    scanf("%d%d", &a,&b);
    int result;
    if (a>b)
    {
        result = a/b;
        printf("This is the result of division: %i\n", result);
        result = a % b;
        printf("This is the result of rest of division: %i\n", result);
    } else{
        result = b/a;
        printf("This is the result of division: %i\n", result);
        result = a % b;
        printf("This is the result of rest of division: %i\n", result);
    }
    
    

    return 0;
}