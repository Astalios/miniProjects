/*
	Filename	:	exercise1.c
	Role		:
 	Author		:	astalios / a friend
	EMail		:	pro.sdebrou@protonmail.com 
	Time		:	
*/


#include	<stdio.h>
#include	<math.h>

int main (int argc, char **argv){
	/// initializing

	int 	counter = 0;
	char 	input;

	// counting

	int 	letter = 0;
	int 	number = 0;
	int 	other = 0;

	// who's the biggest ?

	char 	smallest = 127;
	char	biggest = 0;
	int	trigger = 0;

	// difference

	char	previous = '\0';
	int	sum = 0;
	int	difference = 0;
	int	storeDifference = 0;
	// core program

	printf("Please enter a single character, end the program with 'f' then 'i' then 'n' : ");
	counter = 0;
	while(counter < 3){
		scanf(" %c", &input);
		fflush(stdin);
		// counting
		if(( input >= 65 && input <= 90) || (input >= 97 && input <= 122)){
			letter++;
		} else if (input >= 48 && input >= 57){
			number++;
		} else {
			other++;
		}
		// Biggest
		if(input <= smallest)
			smallest = input;
		if(input >= biggest)
			biggest = input;
		// Difference Sum - Classic Difference
		if (input <= previous)
			difference = previous - input;
		else
			difference = input - previous;
		storeDifference += difference;
		previous = input;
		// Ending
		if(input == 'f' && counter == 0)
			counter++;
		else if(input == 'i' && counter == 1)
			counter++;
		else if(input == 'n' && counter == 2)
			counter++;
		else
			counter = 0;
	}
	printf("There is %d letters, %d numbers, and %d other characters.", letter - 3, number, other);
	if(smallest <= 32)
		printf("\nThe smallest char is a non printable or a space char. \n However The Biggest char is %c \n", smallest, biggest);
	else
		printf("\nThe smallest char is '%c'. However The Biggest char is '%c' \n", smallest, biggest);
	printf("The sum of the char difference is : %d, his absolute value is : %d", storeDifference, fabs(storeDifference));
	// return
	return 0;
}
