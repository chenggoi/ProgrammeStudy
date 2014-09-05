/*************************************************************************
 > File Name: 1015.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: Fri 05 Sep 2014 05:21:54 PM CST
 ************************************************************************/

#include<stdio.h>

int main () {
	int i,count = 1;
	int length, width, area;
	scanf ("%d", &count);
	for (i = 0; i < count; i++) {
		scanf ("%d %d", &length, &width);
		area = length * width;
		if (area % 2 == 1) {
			printf ("Scenario #%d:\n%d.41\n\n", i+1, area);
		} else {
			printf ("Scenario #%d:\n%d.00\n\n", i+1, area);
		}
	}
	return 0;
}
