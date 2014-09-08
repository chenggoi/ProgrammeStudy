/*************************************************************************
 > File Name: 1016.c
 > Author: ll
 > Mail: ll0xff0@gmail.com 
 > Created Time: Mon 08 Sep 2014 04:15:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void Result (int status){
	if (status == 1) 
		printf ("Yes\n");
	else 
		printf ("No\n");
}

int main () {
	int count, i, top = 0, sta = 0, ooo;
	int in = 1, out[1006], tmp[1006];
	int OK;
	
	while (scanf ("%d", &count), count != 0) {
		sta = 0;
		top = 0;
		in = 1;
		for (i = 0; i< count; i++) {
			tmp[i] = 0;
			out[i] = 0;
		}
		while (count) {
			for (i = 0; i < count; i++) {
				scanf ("%d", &out[i]);
				if (out[i] == 0) 
					break;
			}
			if (out[0] != 0) {
				i = 0;
				OK = 1;
				while ((i < count) && OK != 0) {
					if (tmp[top] == out[i]) {
						tmp[top] = 0;
						top--;
						sta = 1;
						i++;
					} else if (in != count+1) {
						top++;
						tmp[top] = in;
						in ++;
					} else {
						sta = 0;
						OK = 0;
					}
				}
			}
			if (out[0] == 0) 
				break;
			Result (sta);
			sta = 0;
			top = 0;
			in = 1;
			ooo = out[0];
			for (i = 0; i< count; i++) {
				tmp[i] = 0;
				out[i] = 0;
			}
		}
		printf ("\n");
	}
	return 0;
}
