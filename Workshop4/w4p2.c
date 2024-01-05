/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Manav Alpeshbhai Zadafiya
Student ID#: 144095221
Email      : mazadafiya@myseneca.ca
Section    : ZEE
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int numberOfApples, numberOfOranges, numberOfPears, numberOfTomatoes, numberOfCabbages, shoppingSession;
    int applesPicked, orangesPicked, pearsPicked, tomatoesPicked, cabbagesPicked;
    shoppingSession = 1;
    do
    {
        printf("Grocery Shopping\n================\n");

        printf("How many APPLES do you need? : ");
        scanf("%d",&numberOfApples);
        while (numberOfApples < 0){
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &numberOfApples);
        }

        printf("\nHow many ORANGES do you need? : ");
        scanf("%d", &numberOfOranges);
        while (numberOfOranges < 0){
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &numberOfOranges);
        }

        printf("\nHow many PEARS do you need? : ");
        scanf("%d", &numberOfPears);
        while (numberOfPears < 0){
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &numberOfPears);
        }

        printf("\nHow many TOMATOES do you need? : ");
        scanf("%d", &numberOfTomatoes);
        while (numberOfTomatoes < 0){
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &numberOfTomatoes);
        }
        
        printf("\nHow many CABBAGES do you need? : ");
        scanf("%d", &numberOfCabbages);
        while (numberOfCabbages < 0){
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &numberOfCabbages);
        }
        //picking products
        printf("\n--------------------------\nTime to pick the products!\n--------------------------\n\n");
        while (numberOfApples != 0) {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applesPicked);
            if (applesPicked < 1) {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (applesPicked > numberOfApples) {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", numberOfApples); 
            }

            else if (applesPicked > 0 && applesPicked <= numberOfApples) {
                numberOfApples -= applesPicked;
                if (numberOfApples == 0) {
                    printf("Great, that's the apples done!\n\n");
                }
                else {
                    printf("Looks like we still need some APPLES...\n");
                }
            }   
        }
       
        while (numberOfOranges != 0) {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangesPicked);
            if (orangesPicked < 1) {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (orangesPicked > numberOfOranges) {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", numberOfOranges);
            }

            else if (orangesPicked > 0 && orangesPicked <= numberOfOranges) {
                numberOfOranges -= orangesPicked;
                if (numberOfOranges == 0) {
                    printf("Great, that's the oranges done!\n\n");
                }
                else {
                    printf("Looks like we still need some ORANGES...\n");
                }
            }
        }
       
        while (numberOfPears != 0) {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearsPicked);
            if (pearsPicked < 1) {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pearsPicked > numberOfPears) {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", numberOfPears);
            }

            else if (pearsPicked > 0 && pearsPicked <= numberOfPears) {
                numberOfPears -= pearsPicked;
                if (numberOfPears == 0) {
                    printf("Great, that's the pears done!\n\n");
                }
                else {
                    printf("Looks like we still need some PEARS...\n");
                }
            }
        }
     
        while (numberOfTomatoes != 0) {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoesPicked);
            if (tomatoesPicked < 1) {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (tomatoesPicked > numberOfTomatoes) {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", numberOfTomatoes);
            }

            else if (tomatoesPicked > 0 && tomatoesPicked <= numberOfTomatoes) {
                numberOfTomatoes -= tomatoesPicked;
                if (numberOfTomatoes == 0) {
                    printf("Great, that's the tomatoes done!\n\n");
                }
                else {
                    printf("Looks like we still need some TOMATOES...\n");
                }
            }
        }
      
        while (numberOfCabbages != 0) {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagesPicked);
            if (cabbagesPicked < 1) {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (cabbagesPicked > numberOfCabbages) {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", numberOfCabbages);
            }

            else if (cabbagesPicked > 0 && cabbagesPicked <= numberOfCabbages) {
                numberOfCabbages -= cabbagesPicked;
                if (numberOfCabbages == 0) {
                    printf("Great, that's the cabbages done!\n\n");
                }
                else {
                    printf("Looks like we still need some CABBAGES...\n");
                }
            }
        }
        
        printf("\nAll the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shoppingSession);
    } while (shoppingSession != 0);
    printf("\nYour tasks are done for today - enjoy your free time!\n");
    return 0;
}