/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P2)
Full Name  : Manav Alpeshbhai Zadafiya
Student ID#: 144095221
Email      : mazadafiya@myseneca.ca
Section    : ZEE
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MIN_WISH 1
#define MAX_WISH 10

int main(void)
{
    const double minIncome = 500.00, maxIncome = 400000.00, minCost = 100.00;
    double monthlyIncome, monthPredict, itemCost[MAX_WISH], sum = 0, filteredSum = 0;
    int i = 0, flag = 0, flag1 = 0, wishListItem, forecastList, priorityFilter, itemPriority[MAX_WISH];
    char itemFinanceOption[MAX_WISH];

    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    //taking user input for monthly income
    do {
        printf("Enter your monthly NET income: $");
        scanf("%lf", &monthlyIncome);
        if (monthlyIncome < minIncome) 
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n\n", minIncome);
        }
        if (monthlyIncome > maxIncome) 
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n\n", maxIncome);
        }
    } while (monthlyIncome < minIncome || monthlyIncome > maxIncome);

    //input for number of items
    printf("\nHow many wish list items do you want to forecast?: ");
    scanf("%d", &wishListItem);
    while (wishListItem < MIN_WISH || wishListItem > MAX_WISH) 
    {
        printf("ERROR: List is restricted to between %d and %d items.\n", MIN_WISH, MAX_WISH);
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d", &wishListItem);
    }

    for (i = 0; i < wishListItem; i++) 
    {
        printf("\nItem-%d Details:\n", i + 1);
        printf("   Item cost: $");
        scanf("%lf", &itemCost[i]);
        while (itemCost[i] < minCost) 
        {
            printf("      ERROR: Cost must be at least $%.2lf\n", minCost);
            printf("   Item cost: $");
            scanf("%lf", &itemCost[i]);
        }
        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &itemPriority[i]);
        while (itemPriority[i] < 1 || itemPriority[i] > 3) 
        {
            printf("      ERROR: Value must be between 1 and 3\n");
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &itemPriority[i]);
        }
        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &itemFinanceOption[i]);
        while (!(itemFinanceOption[i] == 'n' || itemFinanceOption[i] == 'y')) 
        {
            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &itemFinanceOption[i]);
        }
    }

    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    for (i = 0; i < wishListItem; i++) 
    {
        printf("%3d  %5d    %5c    %11.2lf\n", i + 1, itemPriority[i], itemFinanceOption[i], itemCost[i]);
        sum += itemCost[i];
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n", sum);

    do {
        printf("\nHow do you want to forecast your wish list?\n 1. All items (no filter)\n 2. By priority\n 0. Quit/Exit\nSelection: ");
        scanf("%d", &forecastList);

        switch (forecastList) 
        {
        case 0:

            flag = 1;
            break;

        case 1:
            monthPredict = (sum / monthlyIncome) + 0.5; // manual rounding
            printf("\n====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", sum);
            printf("Forecast: %d years, %d months\n", (int)(sum / (monthlyIncome * 12)), (int)monthPredict % 12);
            for (i = 0; flag1 == 0; i++) 
            {
                if (itemFinanceOption[i] == 'y') 
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                    flag1 = 1;
                }
            }
            printf("====================================================\n");
            break;

        case 2:
            do {
                printf("\nWhat priority do you want to filter by? [1-3]: ");
                scanf("%d", &priorityFilter);
                if (priorityFilter < 1 || priorityFilter > 3) 
                {
                    printf("ERROR: Invalid Input");
                }
            } while (priorityFilter < 1 || priorityFilter > 3);
            filteredSum = 0;
            for (i = 0; i < wishListItem; i++) 
            {
                if (itemPriority[i] == priorityFilter) 
                {
                    filteredSum += itemCost[i];
                }
            }
            monthPredict = (filteredSum / monthlyIncome) + 0.8; // manual rounding
            printf("\n====================================================\n");
            printf("Filter:   by priority (%d)\n", priorityFilter);
            printf("Amount:   $%1.2lf\n", filteredSum);
            printf("Forecast: %d years, %d months\n", (int)(filteredSum / (monthlyIncome * 12)), (int)monthPredict % 12);
            for (i = 0; i<wishListItem; i++) 
            {
                if (itemPriority[i] == priorityFilter && itemFinanceOption[i] == 'y') 
                {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                }
            }
            printf("====================================================\n");
            
            break;

        default:
            printf("\nERROR: Invalid menu selection.\n");
        }
    } while (flag == 0);
    printf("\nBest of luck in all your future endeavours!\n");
    return 0;
}