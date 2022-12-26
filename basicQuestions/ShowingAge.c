#include<stdio.h>

int calculatingAge(int days, int month, int yr){

    //receive data show days
    int thisYear = 2022;
    int ageInDays;
    ageInDays =  days / 365;

    printf("Your year of birth: %i\n", ageInDays);

    return 0;
}


int main(){
    int days;
   printf("Type ur days:");
   //age = 21;
   scanf("%i", days); 
   system("pause");
   //send day month yr
   calculatingAge(days);
    return 0;
}
