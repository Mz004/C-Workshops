/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P2)
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
#include "w8p2.h"

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

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* lbs, double* lbsToKg) {

	double covertLbsToKg = (*lbs) / LBS_TO_KG;

	if (lbsToKg != NULL)
	{
		*lbsToKg = covertLbsToKg;
	}

	return covertLbsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* lbs, int* lbsToG) {
	int covertLbsToG = ((*lbs) / LBS_TO_KG) * 1000;

	if (lbsToG != NULL)
	{
		*lbsToG = covertLbsToG;
	}

	return covertLbsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* lbs, double* lbsToKg, int* lbsToG) {
	double covertLbsToKg = (*lbs) / LBS_TO_KG;
	int covertLbsToG = ((*lbs) / LBS_TO_KG) * 1000;

	if (lbsToG != NULL && lbsToKg != NULL)
	{
		*lbsToG = covertLbsToG;
		*lbsToKg = covertLbsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int serveSizeGrams, const int totalGrams, double* numOfServings) {
	double servings = ((double)totalGrams) / serveSizeGrams;

	if (numOfServings != NULL)
	{
		*numOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* result) {
	double costPerServing = (*price) / (*numOfServings);

	if (result != NULL)
	{
		*result = costPerServing;
	}

	return costPerServing;
}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCal, double* result) {
	double costPerCal = (*price) / (*totalCal);

	if (result != NULL)
	{
		*result = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cFoodInfo) {

	struct ReportData rd;

	// Assigning Values
	rd.skuNumber = cFoodInfo.skuNumber;
	rd.productPrice = cFoodInfo.productPrice;
	rd.productWeightLbs = cFoodInfo.productWeight;
	rd.calories = cFoodInfo.calories;

	// Assigning calculated values
	rd.productWeightKg = convertLbsKg(&rd.productWeightLbs, &rd.productWeightKg);
	rd.productWeightG = convertLbsG(&rd.productWeightLbs, &rd.productWeightG);
	rd.totalServings = calculateServings(NUM_OF_GRAMS, rd.productWeightG, &rd.totalServings);

	// Total calories
	double totalCalories = rd.calories * rd.totalServings;

	rd.costPerServing = calculateCostPerServing(&rd.productPrice, &rd.totalServings, &rd.costPerServing);
	rd.calCostPerServing = calculateCostPerCal(&rd.productPrice, &totalCalories, &rd.calCostPerServing);

	// Returning the struct
	return rd;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUM_OF_GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck) {
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", rd.skuNumber, rd.productPrice, rd.productWeightLbs, rd.productWeightKg, rd.productWeightG, rd.calories, rd.totalServings, rd.costPerServing, rd.calCostPerServing);
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cFoodInfo) {
	printf("Final Analysis\n");
	printf("--------------\n");
	printf("Based on the comparison data, the PURRR-fect economical option is:\n");
	printf("SKU:%07d Price: $%5.2lf\n\n", cFoodInfo.skuNumber, cFoodInfo.productPrice);

	// Ending line
	printf("Happy shopping!\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
	struct ReportData rd[MAX_PRODUCTS] = { {0} };
	struct CatFoodInfo cFoodInfo[MAX_PRODUCTS] = { {0} };
	double cheapestProductPrice;

	// Declaring variables
	int i, cheapestIndex = 0;

	// Printing the opening message
	openingMessage(MAX_PRODUCTS);

	// Filling the cFoodInfo array
	for (i = 0; i < MAX_PRODUCTS; i++) {
		cFoodInfo[i] = getCatFoodInfo(i);
		rd[i] = calculateReportData(cFoodInfo[i]);
	}

	// Dsiplaying cat food header
	displayCatFoodHeader();

	// Displaying cat food data
	for (i = 0; i < MAX_PRODUCTS; i++) {
		displayCatFoodData(cFoodInfo[i].skuNumber, &cFoodInfo[i].productPrice, cFoodInfo[i].calories, &cFoodInfo[i].productWeight);
	}

	// Determining the cheapest product's sku and price
	cheapestProductPrice = rd[0].costPerServing;
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (rd[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = rd[i].costPerServing;
			cheapestIndex = i;
		}
	}
	printf("\n");

	// Displaying the report header
	displayReportHeader();

	// Displaying the report data
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		displayReportData(rd[i], cheapestIndex);

		if (cheapestIndex == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");

	// Displaying final analysis
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (i == cheapestIndex)
		{
			displayFinalAnalysis(cFoodInfo[i]);
		}
	}

}