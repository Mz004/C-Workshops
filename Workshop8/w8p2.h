/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Manav Alpeshbhai Zadafiya
Student ID#: 144095221
Email      : mazadafiya@gmail.com
Section    : ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

//macros
#define MAX_PRODUCTS 3
#define NUM_OF_GRAMS 64
#define LBS_TO_KG 2.20462

// ----------------------------------------------------------------------------
// structures
struct CatFoodInfo {
    int skuNumber;
    double productPrice;
    int calories;
    double productWeight;
};

struct ReportData
{
    int skuNumber;
    double productPrice;
    int calories;
    double productWeightLbs;
    double productWeightKg;
    int productWeightG;
    double totalServings;
    double costPerServing;
    double calCostPerServing;
};

// ----------------------------------------------------------------------------
// function prototypes

//PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int*);

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(int);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* lbs, double* lbsToKg);

// 9. convert lbs: g
int convertLbsG(const double* lbs, int* lbsToG);

// 10. convert lbs: kg / g
void convertLbs(const double* lbs, double* lbsToKg, int* lbsToG);

// 11. calculate: servings based on gPerServ
double calculateServings(const int serveSizeGrams, const int totalGrams, double* numOfServings);

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numOfServings, double* result);

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCal, double* result);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo cFoodInfo);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo cFoodInfo);

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void);
