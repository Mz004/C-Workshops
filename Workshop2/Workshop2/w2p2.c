/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  :Manav Alpeshbhai Zadafiya
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
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double smallShirt, mediumShirt, largeShirt;
    int numberOfSShirts, numberOfMShirts, numberOfLShirts;

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
    printf("SMALL  : $%.2lf\nMEDIUM : $%.2lf\nLARGE  : $%.2lf\n", smallShirt, mediumShirt, largeShirt);

    printf("\nPatty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfSShirts);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &numberOfLShirts);

    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &numberOfMShirts);

    int subTotalPat, totalPat ,taxPat, subTotalSal, totalSal, taxSal ,subTotalTom , totalTom, taxTom;
    subTotalPat = (numberOfSShirts * smallShirt * 100);
    taxPat = (TAX * subTotalPat) + 0.5; //manual rounding
    totalPat = (taxPat + subTotalPat);
    
    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallShirt, numberOfSShirts,(double)subTotalPat/100,(double)taxPat/100,(double)totalPat/100);

    subTotalSal = (numberOfMShirts * mediumShirt * 100);
    taxSal = (TAX * subTotalSal) + 0.5; //manual rounding
    totalSal = (taxSal + subTotalSal);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumShirt, numberOfMShirts, (double)subTotalSal / 100, (double)taxSal / 100, (double)totalSal / 100);

    subTotalTom = (numberOfLShirts * largeShirt * 100);
    taxTom = (TAX * subTotalTom) + 0.5; //manual rounding
    totalTom = (taxTom + subTotalTom);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeShirt, numberOfLShirts, (double)subTotalTom / 100, (double)taxTom / 100, (double)totalTom / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    
    int subTotal, tax, total;
    subTotal = subTotalPat + subTotalSal + subTotalTom;
    tax = taxPat + taxSal + taxTom;
    total = totalPat + totalSal + totalTom;
    printf("%33.4lf %9.4lf %9.4lf\n\n",(double)subTotal/100 ,(double)tax/100,(double)total/100);
   
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
   
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n-------- --- ---------\n");
    printf("%22.4lf\n", (double)subTotal / 100);
    
    //Calculating number of coins and remaining amount using / and % respectively (Excluding Tax)
    int tooniesRemain = (subTotal % 200);
    int looniesRemain = (tooniesRemain % 100);
    int quartersRemain = (looniesRemain % 25);
    int dimesRemain = (quartersRemain % 10);
    int nickelsRemain = (dimesRemain % 5);
    printf("Toonies  %3d %9.4lf\n", subTotal / 200 ,(double)tooniesRemain/100);
    printf("Loonies  %3d %9.4lf\n", tooniesRemain / 100, (double)looniesRemain / 100);
    printf("Quarters %3d %9.4lf\n", looniesRemain /25, (double)quartersRemain / 100);
    printf("Dimes    %3d %9.4lf\n", quartersRemain /10, (double)dimesRemain/100);
    printf("Nickels  %3d %9.4lf\n", dimesRemain /5, (double)nickelsRemain/100);
    printf("Pennies  %3d %9.4lf\n",nickelsRemain /1, (double)(nickelsRemain%1)/100);

    printf("\nAverage cost/shirt: $%.4lf\n\n", (double)subTotal / 100 / (numberOfSShirts+ numberOfMShirts+ numberOfLShirts));

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n-------- --- ---------\n");
    printf("%22.4lf\n", (double)total / 100);

    //Calculating number of coins and remaining amount using / and % respectively (Including TAX)
    tooniesRemain = (total % 200);
    looniesRemain = (tooniesRemain % 100);
    quartersRemain = (looniesRemain % 25);
    dimesRemain = (quartersRemain % 10);
    nickelsRemain = (dimesRemain % 5);
    printf("Toonies  %3d %9.4lf\n", total / 200, (double)tooniesRemain / 100);
    printf("Loonies  %3d %9.4lf\n", tooniesRemain / 100, (double)looniesRemain / 100);
    printf("Quarters %3d %9.4lf\n", looniesRemain / 25, (double)quartersRemain / 100);
    printf("Dimes    %3d %9.4lf\n", quartersRemain / 10, (double)dimesRemain / 100);
    printf("Nickels  %3d %9.4lf\n", dimesRemain / 5, (double)nickelsRemain / 100);
    printf("Pennies  %3d %9.4lf\n", nickelsRemain / 1, (double)(nickelsRemain % 1) / 100);

    printf("\nAverage cost/shirt: $%.4lf\n\n", (double)total / 100 / (numberOfSShirts + numberOfMShirts + numberOfLShirts));
    return 0;
}
