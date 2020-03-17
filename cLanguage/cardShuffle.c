/*
	Filename	:	cardShuffle.c
	Role		:	Shuffling cards.
 	Author		:	astalios
	EMail		:	pro.sdebrou@protonmail.com
	Time		:	30/09/2019
*/


#include	<time.h>
#include	<stdio.h>
#include	<stdlib.h>

int main (int argc, char **argv){
	// initialisation
	srand((unsigned)time(NULL));

	int card[52];
	int i = 0;
	int hInc = 0;
	int cInc = 0;
	int playersHand[4][5];
	int generate;
	int jInc = 0;

	// execution - Shuffling
	card[0] = rand() % 52 + 1;
	printf("%d ", card[0]);
	for (i = 1; i <= 52; i++){
		generate = rand() % 52 + 1;
		jInc = 0;
		while (jInc <= i){
			jInc++;
			if (generate == card[jInc]){
				generate = rand() % 52 + 1;
				jInc = 0;
			}
		}
		card[i] = generate;
		printf("%d ", card[i]);
	}
	printf("\n");
	// execution - distribution
	for (i = 0; i < 4; i++){
		for (hInc = 0; hInc < 5; hInc++){
			playersHand[i][hInc] = card[cInc];
			cInc++;
			printf("%d ", playersHand[i][hInc]);
		}
	}

	// ending
	printf("melange termine");
	return 0;
}
