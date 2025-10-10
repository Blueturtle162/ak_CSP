//AK 6th Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){
    
    char input[50];
    char output[50];

    printf("What is your first name?\n");
    scanf("%s", input);
    strcat(output,"***");
    strcat(output, input);
    strcat(output,"***");
    printf("%s\n",output);
    
}