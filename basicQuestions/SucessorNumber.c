#include<stdio.h>
float result;



int readNumberSucessor(float n){
   result = n + 1;
    printf("the sucessor number is: %f\n", result);
    return 0;
}

int main(){
    
    float number;
    
    printf("Type the number:");
        scanf("%f", &number);
    readNumberSucessor(number);
    return 0;
}
