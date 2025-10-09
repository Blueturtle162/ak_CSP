//AK 6th Silly Sentances
/*word_1 = input ("Give me an ajective.").strip().lower()
word_2 = input ("Give me an animal.").strip().lower()
word_3 = input ("Give me an animal.").strip().lower()
word_4 = input ("Give me an noun.").strip().lower()
word_5 = input ("Give me an ajective.").strip().lower()
word_6 = input ("Give me an noun.").strip().lower()
word_7 = input ("Give me an ajective.").strip().lower()
word_8 = input ("Give me an ajective.").strip().lower()
word_9 = input ("Give me an noun.").strip().lower()
*/
#include <stdio.h>
#include <string.h>
int main(void){

char word_1 [30];
char word_2 [30];
char word_3 [30];
char word_4 [30];
char word_5 [30];
char word_6 [30];
char word_7 [30];
char word_8 [30];
char word_9 [30];

printf ("Give me an ajective.\n");
scanf ("%s",&word_1);
printf ("Give me an animal.\n");
scanf ("%s",&word_2);
printf ("Give me an animal.\n");
scanf ("%s",&word_3);
printf ("Give me a noun.\n");
scanf ("%s",&word_4);
printf ("Give me an ajective.\n");
scanf ("%s",&word_5);
printf ("Give me a noun.\n");
scanf ("%s",&word_6);
printf ("Give me an ajective.\n");
scanf ("%s",&word_7);
printf ("Give me an ajective.\n");
scanf ("%s",&word_8);
printf ("Give me a noun.\n");
scanf ("%s",&word_9);

printf ("Camping is %s. You might see %s and a %s. The food which is cooked over the %s is very %s. The best part of camping is using the %s which is very %s. At night the tent is extremely %s. It's always best to take a %s camping with you.\n",word_1,word_2,word_3,word_4,word_5,word_6,word_7,word_8,word_9);

}