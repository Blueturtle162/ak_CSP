//AK 6th Financial Calculator

#include <stdio.h>
#include <math.h>

int main(void){
    int income;
    int rent;
    int groceries;
    int utilities;
    int transportation;

    printf("What is your monthly income: \n");
    scanf("%d",&income);
    printf("What is your monthly rent or morgage: \n");
    scanf("%d",&rent);
    printf("How much do you spend on groceries each month: \n");
    scanf("%d",&groceries);
    printf("What is your monthly utility bill: \n");
    scanf("%d",&utilities);
    printf("How much do you spend on transportation each month: \n");
    scanf("%d",&transportation);

    int percent_rent = ((float)rent/(float)income)*100;
    int percent_groceries = ((float)groceries/(float)income)*100;
    int percent_utilities = ((float)utilities/(float)income)*100;
    int percent_transportation = ((float)transportation/(float)income)*100;
    int savings = (float)income*.1;
    int spending = income-(rent + groceries + utilities + transportation + savings);

    printf ("Your monthly rent is %d $ and that is %d percent of your monthly income.\n",rent,percent_rent);
    printf ("Your monthly groceries cost is %d $ and that is %d percent of your monthly income.\n",groceries,percent_groceries);
    printf ("Your monthly utilites cost is %d $ and that is %d percent of your monthly income.\n",utilities,percent_utilities);
    printf ("Your monthly cost of transportation is %d $ and that is %d percent of your monthly income.\n",transportation,percent_transportation);
    printf ("You should save %d $ which is 10 percent of your monthly income.\n",savings);
    printf ("You have %d $ left for spending.",spending);
}