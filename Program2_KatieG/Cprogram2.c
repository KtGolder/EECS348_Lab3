/*
 * Program2.c
 *
 *  Created on: Feb 10, 2023
 *      Author: katiegolder
 */

#include <stdio.h>

int main()

{

int score;
printf("Type a number: \n");
scanf("%d", &score);
printf("Possible combinations of scoring plays:\n");


for (int q =0; q < score; q++){
	int TD8 = 0;
	TD8 = q*8;

	for (int w =0; w < score; w++){
		int TD7 = 0;
		TD7 = w*7;

		for (int e =0; e < score; e++){
			int TD6 = 0;
			TD6 = e*6;

			for (int r =0; r < score; r++){
				int FG3 = 0;
				FG3 = r*3;

				for (int t =0; t < score; t++){
					int SF2 = 0;
					SF2 = t*2;

	//-----------------------
	if (TD8+TD7+TD6+FG3+SF2 == score){
		printf("%d TD+2pt,", q);
		printf(" %d TD+FG,", w);
		printf(" %d TD,", e);
		printf(" %d FG,", r);
		printf(" %d Safety", t);
		printf("\n");
	}
	//------------------------
				}
			}
		}
	}
}


}