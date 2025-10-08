//AK 6th Financial Calculator

/*
income = float (input (print ("Hello. What is your monthly income? ")))
rent = float (input (print ("What is your monthly rent or morgage?")))
groceries = float (input (print ("How much do you spend on groceries each month?")))
utilities =  float (input (print("How much is your monthly utility bill?")))
transportation = float (input (print("How much do you spend on transportation each month")))

percent_rent = round (int((rent/income)*100),0) 
percent_groceries = round(int((groceries/income)*100),0)
percent_utilities = round (int ((utilities/income)*100),0)
percent_transportation = round (int ((transportation/income)*100),0)

savings = income*.1
spending = income-(rent + groceries + utilities + transportation + savings)

print ("Your monthly rent is",rent,"and that is",percent_rent,"percent of your monthly income.")
print ("Your groceries cost",groceries,"and that is",percent_groceries,"percent of your monthly income.")
print ("Your monthly utilites cost",utilities,"and that is",percent_utilities,"percent of you monthly income.")
print ("Your cost of transportation is",transportation,"which is",percent_transportation,"percent of your monthly income")
print ("You should save",savings,"which is 10 percent of your monthly income.")
print ("You have",spending,"dollars left for spending.")
*/
#include <stdio.h>

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

    int percent_rent = (rent/income)*100;
    int percent_groceries = (groceries/income)*100;
    int percent_utilities = (utilities/income)*100;
    int percent_transportation = (transportation/income)*100;
    int savings = income*.1;
    int spending = income-(rent + groceries + utilities + transportation + savings);

    printf ("Your monthly rent is %d and that is %d percent of your monthly income.\n",rent,percent_rent);
    printf ("Your monthly groceries cost is %d and that is %d percent of your monthly income.\n",groceries,percent_groceries);
    printf ("Your monthly utilites cost is %d and that is %d percent of your monthly income.\n",utilities,percent_utilities);
    printf ("Your monthly cost of transportation is %d and that is %d percent of your monthly income.\n",transportation,percent_transportation);
}