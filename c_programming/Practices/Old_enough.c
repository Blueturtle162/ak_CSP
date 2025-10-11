//AK 6th Old Enough

#include <stdio.h>

int main(void){
    int age;
    printf("How old are you?\n");
    scanf("%d",&age);

    if(age == 15){
        printf("You can get your learners permit.\n");
    }else if(age == 16 || age == 17){
        printf("You are old enough to drive.\n");
    }else if(age < 4){
        printf("You are not old enogh to drive, vote, go to school, or get you learners permit.\n");
    }else if (age < 18 && age >= 4){
        printf("You are old enough to go to school.\n");
    }else{
        printf("You are old enogh to vote.\n");
    }
}