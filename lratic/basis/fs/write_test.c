#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int main () {
	unsigned char *test_buff;
	char *test_file = "write_test";
	FILE * handle;
	int i = 0;
#if 0
	test_buff = "HELLO_WORLD\n";
#else
	test_buff = (unsigned char *)malloc(BUFF_SIZE * sizeof(unsigned char));
	for(i = 0; i < BUFF_SIZE; i += 2)
		test_buff[i + 1] = i;
#endif
	handle = fopen(test_file, "a+");
	for ( i = 0; i < 0x01; i++ )
	{
#if 0
		fwrite(test_buff, strlen(test_buff), 1, handle);
#else
		fwrite(test_buff, BUFF_SIZE, 1, handle);
#endif
	}
	fclose(handle);
}
