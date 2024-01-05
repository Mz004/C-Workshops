/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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

int main(void)
{
	int numIterate, numTimes;
	char loopSelect;

	printf("+----------------------+\n");
	printf("Loop application STARTED\n");
	printf("+----------------------+\n\n");

	do
	{
		printf("D = do/while | W = while | F = for | Q = quit\n");
		printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
		scanf(" %c%d", &loopSelect, &numIterate);

		if (loopSelect == 'D')
		{
			if (numIterate > 2 && numIterate < 21)
			{
				printf("DO-WHILE: ");
				numTimes = 0;
				do
				{
					printf("%c", loopSelect);
					numTimes++;
				} while (numTimes < numIterate);
				printf("\n\n");
			}
			else{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
			}
		}

		else if (loopSelect == 'W'){
			if (numIterate > 2 && numIterate < 21)
			{
				numTimes = 0;
				printf("WHILE   : ");
				while (numTimes < numIterate)
				{
					printf("%c", loopSelect);
					numTimes++;
				}
				printf("\n\n");
			}
			else{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
			}
		}

		else if (loopSelect == 'F'){
			if (numIterate > 2 && numIterate < 21)
			{
				printf("FOR     : ");
				for (numTimes = 0; numTimes < numIterate; numTimes++)
				{
					printf("%c", loopSelect);
				}
				printf("\n\n");
			}
			else{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
			}
		}

		else if (loopSelect == 'Q'){
			if (numIterate == 0)
			{
				printf("\n+--------------------+\n");
				printf("Loop application ENDED\n");
				printf("+--------------------+\n");
			}
			else{
				printf("ERROR: To quit, the number of iterations should be 0!\n\n");
			}
		}

		else{
			printf("ERROR: Invalid entered value(s)!\n\n");
		}

	}while (numIterate != 0 || loopSelect != 'Q');
	return 0;
}