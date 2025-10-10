//AK 6th Old Enough
/*
age = int(input("What is your age?"))

if age == 15:
    print ("You can get your learners permit.")
elif age == 16 or age ==17:
    print("You are old enough to drive.")
elif age < 4:
    print ("You are not old enogh to drive, vote, go to school, or get you learners permit.")
elif age < 18 and age >= 4:
    print ("You are old enough to go to school.")
else:
    print ("You are old enogh to vote.")
*/

#include <stdio.h>

int main(void){
    int age;
    printf("How old are you?");
    scanf("%d",&age);

    if(age == 15){
        printf("You can get your learners permit.");
    }else if(age == 16 || age == 17){
        printf("You are old enough to drive.");
    }
}