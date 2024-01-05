/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P1)
Full Name  : Manav Alpeshbhai Zadafiya
Student ID#: 144950221
Email      : mazadafiya@myseneca.ca
Section    : ZEE
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* pos_int) {
	int input, flag = 1;

	while (flag == 1)
	{
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 

	if (pos_int != NULL)
	{
		*pos_int = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* pos_double) {
	double input;
	int flag = 1;

	while (flag == 1)
	{
		scanf("%lf", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 

	if (pos_double != NULL)
	{
		*pos_double = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number) {

	printf("Cat Food Cost Analysis\n");
	printf("======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCTS);
	printf("NOTE: A 'serving' is %dg\n\n", NUM_OF_GRAMS);
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number) {
	struct CatFoodInfo cFoodInfo;
	int flag;
	printf("Cat Food Product #%d\n", seq_number + 1);
	printf("--------------------\n");

	// SKU
	printf("SKU           : ");
	flag = 1;
	while (flag == 1) 
	{
		scanf("%d", &cFoodInfo.skuNumber);
		if (cFoodInfo.skuNumber <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	}

	// Price
	printf("PRICE         : $");
	flag = 1;
	while (flag == 1)
	{
		scanf("%lf", &cFoodInfo.productPrice);
		if (cFoodInfo.productPrice <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 

	// Weight
	printf("WEIGHT (LBS)  : ");
	flag = 1;
	while (flag == 1)
	{
		scanf("%lf", &cFoodInfo.productWeight);
		if (cFoodInfo.productWeight <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	}

	// Calories
	printf("CALORIES/SERV.: ");
	flag = 1;
	while (flag == 1) 
	{
		scanf("%d", &cFoodInfo.calories);
		if (cFoodInfo.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 

	printf("\n");

	// Returning the struct
	return cFoodInfo;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}  
// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}

// 7. Logic entry point
void start(void)
{
	int i;
	struct CatFoodInfo cFoodInfo[MAX_PRODUCTS] = { {0} };
	openingMessage(MAX_PRODUCTS);

	for (i = 0; i < MAX_PRODUCTS; i++) {
		cFoodInfo[i] = getCatFoodInfo(i);
	}

	displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(cFoodInfo[i].skuNumber, &cFoodInfo[i].productPrice, cFoodInfo[i].calories, &cFoodInfo[i].productWeight);
	}

}