/*
	Filename	:	exercise3.c
	Role		:
	Author		:	astalios / a friend
	EMail		:	pro.sdebrou@protonmail.com 
	Time		:
*/


#include	<stdio.h>


int main (int argc, char **argv){
	// Initializing

	long long int input = 0;
	int stop = 0;
	int cut = 0;
	int rockCount = 0;

	// mineral data

	int mineral0 = 0;
	int mineral1 = 0;
	int mineral2 = 0;
	int mineral3 = 0;
	int mineral4 = 0;
	int mineral5 = 0;
	int mineral6 = 0;
	int mineral7 = 0;
	int mineral8 = 0;
	int mineral9 = 0;

	// mineral trigger

	int trigger0 = 0;
	int trigger1 = 0;
	int trigger2 = 0;
	int trigger3 = 0;
	int trigger4 = 0;
	int trigger5 = 0;
	int trigger6 = 0;
	int trigger7 = 0;
	int trigger8 = 0;
	int trigger9 = 0;

	// Core Program
	printf("Welcome to the stone mineral analzer, please enter a stone code to see their minerals : ");
	while(stop == 0){
		scanf(" %lld", &input);
		fflush(stdin);
		if(input <= 0)
			stop = 1;
		while(input > 0){
			cut = input % 10;
			switch (cut){
				case 0:
					if(trigger0 == 0){
						trigger0++;
						mineral0++;
					}
					break;
				case 1:
					if(trigger1 == 0){
						trigger1++;
						mineral1++;
					}

					break;
				case 2:
					if(trigger2 == 0){
						trigger2++;
						mineral2++;
					}

					break;
				case 3:
					if(trigger3 == 0){
						trigger3++;
						mineral3++;
					}

					break;
				case 4:
					if(trigger4 ==0){
						trigger4++;
						mineral4++;
					}
					break;
				case 5:
					if(trigger5 == 0){
						trigger5++;
						mineral5++;
					}
					break;
				case 6:
					if(trigger6 == 0){
						trigger6++;
						mineral6++;
					}
					break;
				case 7:
					if(trigger7 == 0){
						trigger7++;
						mineral7++;
					}
					break;
				case 8:
					if(trigger8 == 0){
						trigger8++;
						mineral8++;
					}
					break;
				case 9:
					if(trigger9 == 0){
						trigger9++;
						mineral9++;
					}
					break;
			}
			input /= 10;
		}
		// reseting the triggers
		trigger0 = 0;
		trigger1 = 0;
		trigger2 = 0;
		trigger3 = 0;
		trigger4 = 0;
		trigger5 = 0;
		trigger6 = 0;
		trigger7 = 0;
		trigger8 = 0;
		trigger9 = 0;
		// counting the numbers of rocks
		if (stop == 0){
			rockCount++;
			printf("\nIf you want to analyze another stone, please enter his ID,\notherwise, please enter '0' to end the analyze and close the program : ");
		}
	}

	printf("\nFinishing analysing...\n");
	if(rockCount > 0){
		if(mineral0 == rockCount)
			printf("\nThe mineral 0 is precious");
		if(mineral1 == rockCount)
			printf("\nThe mineral 1 is precious");
		if(mineral2 == rockCount)
			printf("\nThe mineral 2 is precious");
		if(mineral3 == rockCount)
			printf("\nThe mineral 3 is precious");
		if(mineral4 == rockCount)
			printf("\nThe mineral 4 is precious");
		if(mineral5 == rockCount)
			printf("\nThe mineral 5 is precious");
		if(mineral6 == rockCount)
			printf("\nThe mineral 6 is precious");
		if(mineral7 == rockCount)
			printf("\nThe mineral 7 is precious");
		if(mineral8 == rockCount)
			printf("\nThe mineral 8 is precious");
		if(mineral9 == rockCount)
			printf("\nThe mineral 9 is precious");
		if(mineral0 == rockCount - 1)
			printf("\nThe mineral 0 is semi-precious");
		if(mineral1 == rockCount - 1)
			printf("\nThe mineral 1 is semi-precious");
		if(mineral2 == rockCount - 1)
			printf("\nThe mineral 2 is semi-precious");
		if(mineral3 == rockCount - 1)
			printf("\nThe mineral 3 is semi-precious");
		if(mineral4 == rockCount - 1)
			printf("\nThe mineral 4 is semi-precious");
		if(mineral5 == rockCount - 1)
			printf("\nThe mineral 5 is semi-precious");
		if(mineral6 == rockCount - 1)
			printf("\nThe mineral 6 is semi-precious");
		if(mineral7 == rockCount - 1)
			printf("\nThe mineral 7 is semi-precious");
		if(mineral8 == rockCount - 1)
			printf("\nThe mineral 8 is semi-precious");
		if(mineral9 == rockCount - 1)
			printf("\nThe mineral 9 is semi-precious");
	}
	printf("\nThere is %d rocks", rockCount);
	// end
	return 0;
}
