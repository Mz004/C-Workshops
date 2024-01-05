/*
*****************************************************************************
<assessment name example : Workshop - #2 (Part - 1)>
Full Name  :Manav Alpeshbhai Zadafiya
Student ID#:14409521
Email      :mazadafiya@myseneca.ca
Section    :ZEE
Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    const double TAX = 0.13;
    const char patSize = 'S';
    double smallShirt,mediumShirt,largeShirt;
    int numberOfShirts;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirt);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\nMEDIUM : $%.2lf\nLARGE  : $%.2lf\n\n", smallShirt, mediumShirt, largeShirt);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfShirts);

    int subTotal, total, tax;
    subTotal = (numberOfShirts * smallShirt*100);
    tax = (TAX * subTotal)+0.5; //manual rounding
    total = (tax + subTotal);
    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", numberOfShirts);
    printf("Sub-total: $%8.4lf\n", (double)subTotal/100);
    printf("Taxes    : $%8.4lf\n",(double)tax/100);
    printf("Total    : $%8.4lf\n", (double)total/100);

        return 0;
}