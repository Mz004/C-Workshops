/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  :Manav Alpeshbhai Zadafya
Student ID#:144095221
Email      :mazadafiya@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    int bagWeight1, bagWeight2, bagWeight3, c_bagWeight;
    char type1, type2, type3, servecream1, servecream2, servecream3, c_strength, c_servecream;
    
    printf("Take a Break - Coffee Shop\n==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type1);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&servecream1);

    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type2);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight2); 
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &servecream2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &type3);
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &servecream3);

    printf("\n---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(type1 == 'l' || type1 == 'L'), (type1 == 'm' || type1 == 'M'), (type1 == 'r' || type1 == 'R'), bagWeight1, (double)(bagWeight1 / GRAMS_IN_LBS), servecream1 == 'Y' || servecream1 == 'y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(type2 == 'l' || type2 == 'L'), (type2 == 'm' || type2 == 'M'), (type2 == 'r' || type2 == 'R'), bagWeight2, (double)(bagWeight2 / GRAMS_IN_LBS), servecream2 == 'Y' || servecream2 == 'y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(type3 == 'l' || type3 == 'L'), (type3 == 'm' || type3 == 'M'), (type3 == 'r' || type3 == 'R'), bagWeight3, (double)(bagWeight3 / GRAMS_IN_LBS), servecream3 == 'Y' || servecream3 == 'y');

    printf("\nEnter how you like your coffee...\n");
    printf("\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &c_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_servecream);
    printf("Typical number of daily servings: ");
    scanf("%d", &c_bagWeight);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (c_strength == 'l' || c_strength == 'L') && (type1 == 'l' || type1 == 'L') , ((c_bagWeight >= 1 && c_bagWeight <= 4) && bagWeight1 == 250) , (servecream1 == 'y' || servecream1 == 'Y') && (c_servecream == 'y' || c_servecream == 'Y'));
    printf(" 2|       %d         |      %d      |   %d   |\n", (c_strength == 'r' || c_strength == 'R') && (type2 == 'r' || type2 == 'R') , ((c_bagWeight >= 5 && c_bagWeight <= 9) && bagWeight2 == 500) , (servecream2 == 'n' || servecream2 == 'N') && (c_servecream == 'n' || c_servecream == 'N'));
    printf(" 3|       %d         |      %d      |   %d   |\n", (c_strength == 'm' || c_strength == 'M') && (type3 == 'm' || type3 == 'M') , (c_bagWeight >= 10 && bagWeight3 == 1000), (servecream3 == 'n' || servecream3 == 'N') && (c_servecream == 'n' || c_servecream == 'N'));

    printf("\nEnter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &c_strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_servecream);
    printf("Typical number of daily servings: ");
    scanf("%d", &c_bagWeight);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", (c_strength == 'l' || c_strength == 'L') && (type1 == 'l' || type1 == 'L'), ((c_bagWeight >= 1 && c_bagWeight <= 4) && bagWeight1 == 250), (servecream1 == 'y' || servecream1 == 'Y') && (c_servecream == 'y' || c_servecream == 'Y'));
    printf(" 2|       %d         |      %d      |   %d   |\n", (c_strength == 'r' || c_strength == 'R') && (type2 == 'r' || type2 == 'R'), ((c_bagWeight >= 5 && c_bagWeight <= 9) && bagWeight2 == 500), (servecream2 == 'n' || servecream2 == 'N') && (c_servecream == 'n' || c_servecream == 'N'));
    printf(" 3|       %d         |      %d      |   %d   |\n", (c_strength == 'm' || c_strength == 'M') && (type3 == 'm' || type3 == 'M'), (c_bagWeight >= 10 && bagWeight3 == 1000), (servecream3 == 'n' || servecream3 == 'N') && (c_servecream == 'n' || c_servecream == 'N'));

    printf("Hope you found a product that suits your likes!\n");
    return 0;
}


/*
Provided formatting parts for printf statements:
As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",
*/