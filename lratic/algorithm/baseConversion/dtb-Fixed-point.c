/*************************************************************************
 > File Name: dtb-Fixed-point.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: Sun 14 Sep 2014 06:33:13 PM CST
 ************************************************************************/

/*僅適用於標準小數，即沒有整數位的小數*/

#include<stdio.h>
#include<stdlib.h>

#define DIG 8

void DTB (int length, double dec, char *bin) {
	int i, tmp;
	
	for (i = 0; i < length; i++) {
		dec = dec * 2;
		tmp = (int)(dec);
		if (tmp == 1) {
			bin[i + 3] = '1';
		} else if (tmp == 0) {
			bin[i + 3] = '0';
		} else {
			printf ("ERROR. \n");
			return;
		}
		dec = dec - tmp;
	}
}

int main () {
	int i;
	double dec, con;
	char *bin = (char *)malloc((DIG + 2) * sizeof(char));

	printf ("Please input a decimal fraction: \n");
	scanf ("%lf", &dec);

	if (dec >= 0) {
		con = dec;
		bin[0] = '+';
	} else {
		con = 0 - dec;
		bin[0] = '-';
	}

	bin[1] = '0';
	bin[2] = '.';

	DTB (DIG -1, con, bin);
	for (i = 0; i < DIG + 2; i++) {
		printf ("%c", bin[i]);
	}
	printf ("\n");
	return 0;
}
