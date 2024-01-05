/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  : Manav Alpeshbhai Zadafiya
Student ID#: 14409521
Email      : mazadafiya@myseneca.ca
Section    : ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3
#define MIN_RATING 0.0
#define MAX_RATING 5.0

#include <stdio.h>

int main(void)
{
	const int January = 1, December = 12;
	int day, month, year, setDate = 0;
	double morTotal = 0.0, eveTotal = 0.0 , morRating, eveRating;

	printf("General Well-being Log\n");
	printf("======================\n");

	while (setDate == 0) {
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
		if ((year < MIN_YEAR || year > MAX_YEAR) && (month < January || month > December)) {
			printf("   ERROR: The year must be between %d and %d inclusive\n   ERROR: Jan.(%d) - Dec.(%d)\n", MIN_YEAR, MAX_YEAR, January, December);
		}
		else if (year < MIN_YEAR || year > MAX_YEAR) {
			printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
		}
		else if (month < January || month > December) {
			printf("   ERROR: Jan.(%d) - Dec.(%d)\n", January, December);
		}
		else {
			printf("\n*** Log date set! ***\n\n");
			setDate = 1;
		}
	}
	for (day = 1; day <= LOG_DAYS; day++)
	{
		switch (month)
		{
		case 1:
			printf("%d-JAN-%02d\n", year, day);
			break;
		case 2:
			printf("%d-FEB-%02d\n", year, day);
			break;
		case 3:
			printf("%d-MAR-%02d\n", year, day);
			break;
		case 4:
			printf("%d-APR-%02d\n", year, day);
			break;
		case 5:
			printf("%d-MAY-%02d\n", year, day);
			break;
		case 6:
			printf("%d-JUN-%02d\n", year, day);
			break;
		case 7:
			printf("%d-JUL-%02d\n", year, day);
			break;
		case 8:
			printf("%d-AUG-%02d\n", year, day);
			break;
		case 9:
			printf("%d-SEP-%02d\n", year, day);
			break;
		case 10:
			printf("%d-OCT-%02d\n", year, day);
			break;
		case 11:
			printf("%d-NOV-%02d\n", year, day);
			break;
		case 12:
			printf("%d-DEC-%02d\n", year, day);
			break;
		}

		printf("   Morning rating (%.1lf-%.1lf): ", MIN_RATING, MAX_RATING);
		scanf("%lf", &morRating);
		while (morRating < MIN_RATING || morRating > MAX_RATING) {
			printf("      ERROR: Rating must be between %.1lf and %.1lf inclusive!\n", MIN_RATING, MAX_RATING);
			printf("   Morning rating (%.1lf-%.1lf): ", MIN_RATING, MAX_RATING);
			scanf("%lf", &morRating);
		}
		morTotal += morRating;

		printf("   Evening rating (%.1lf-%.1lf): ", MIN_RATING, MAX_RATING);
		scanf("%lf", &eveRating);
		while (eveRating < MIN_RATING || eveRating > MAX_RATING) {
			printf("      ERROR: Rating must be between %.1lf and %.1lf inclusive!\n", MIN_RATING, MAX_RATING);
			printf("   Evening rating (%.1lf-%.1lf): ", MIN_RATING, MAX_RATING);
			scanf("%lf", &eveRating);
		}
		eveTotal += eveRating;
		printf("\n");
	}
	printf("Summary\n=======\n");
	printf("Morning total rating: %.3lf\n", morTotal);
	printf("Evening total rating:  %.3lf\n", eveTotal);
	printf("----------------------------\n");
	printf("Overall total rating: %.3lf\n\n", morTotal + eveTotal);
	printf("Average morning rating:  %.1lf\n",morTotal/LOG_DAYS);
	printf("Average evening rating:  %.1lf\n",eveTotal/LOG_DAYS);
	printf("----------------------------\n");
	printf("Average overall rating:  %.1lf\n", ((morTotal / LOG_DAYS) + (eveTotal / LOG_DAYS))/2);
	return 0;
}