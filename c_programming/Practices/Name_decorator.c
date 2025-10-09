//AK 6th Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){
    
    char name [50];
    printf("What is your first name?\n");
    scanf("%s",&name);
    strcat("***",name);
    strcat(name,"***");
    printf("%s",name);
}