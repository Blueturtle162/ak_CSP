//AK 6th Time of Day

#include <stdio.h>


int main(void){

    int time;
    printf("In military time what time is it?\n");
    scanf("%d",&time);

    if(time < 1200){
        printf("Good Morning.\n");
    }else if(time < 1700){
        printf("Good Afternoon.\n");
    }else{
        printf("Good Evening.\n");
    }
    return 0;
}