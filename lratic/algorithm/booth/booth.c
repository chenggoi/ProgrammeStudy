/*************************************************************************
 > File Name: boothme.c
 > Author: ll
 > Mail: ll0xff0@gmail.com
 > Created Time: Mon 15 Sep 2014 12:54:01 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define LEN 8

/*
 * 輸出字符串
 * 寫在MFC不要這個
 * length 爲字串總長度
 */
void Display (int length, char *bin)
{
	int i;

	printf ("\n-----------------\n");
	for (i = 0; i < length; i++)
	{
		printf ("%c", bin[i]);
	}
	printf ("\n-----------------\n");
}


/*
 * 十進制轉爲二進制
 * 返回char型數組
 * [+/-][0][小數位]
 * 全都忽略小數點
 */
void DTB (double dec, char *bin)
{
	int i, tmp;
	double con;

	if (dec >= 0)
	{
		bin[0] = '+';
		con = dec;
	}
	else
	{
		bin[0] = '-';
		con = 0 - dec;
	}
	bin[1] = '0';

	for (i = 0; i < LEN - 1; i++)
	{
		con = con * 2;
		tmp = (int)con;
		if (tmp == 1)
		{
			bin[i + 2] = '1';
		}
		else if (tmp == 0)
		{
			bin[i + 2] = '0';
		}
		else
		{
			printf ("ERROR. \n");
			return;
		}
		con = con - tmp;
	}
}


/*
 * 求補碼
 * [符號位][小數位]
 */
void Complement (int length, char *origin, char *comp)
{
	int i;
	char carry = '1';

	if (origin[0] == '+')
	{
		for (i = 0; i < length; i++)
		{
			comp[i] = origin[i + 1];
		}
	}
	else if (origin[0] == '-')
	{
		for (i = 0; i < length; i++)
		{
			if (origin[i + 1] == '1')
				comp[i] = '0';
			else if (origin[i + 1] == '0')
				comp[i] = '1';
		}
		for (i = length - 1; i > 0; i--)
		{
			if (comp[i] == carry)
			{
				comp[i] = '0';
			}
			else
			{
				comp[i] = '1';
				break;
			}
		}
	}
	else
	{
		printf ("There is something wrong!!\n");
		exit(-1);
	}
}

int Amount (char a, char b, char c)
{
	if (a == b && a == c)
	{
		if (a == '0')
			return 0;
		else
			return 3;
	}
	else if (a == b)
	{
		if (a == '0')
			return 1;
		else
			return 2;
	}
	else if (a == c)
	{
		if (a == '0')
			return 1;
		else
			return 2;
	}
	else if (b == c)
	{
		if (b == '0')
			return 1;
		else
			return 2;
	}
}

void Add (char *r, char *a, char *b)
{
	int j, s;
	char c = '0';

	for (j = LEN - 1; j >= 0; j--)
	{
		s = Amount(a[j], b[j], c);
		if (s == 0)
		{
			r[j] = '0';
			c = '0';
		}
		else if (s == 1)
		{
			r[j] = '1';
			c = '0';
		}
		else if (s == 2)
		{
			r[j] = '0';
			c = '1';
		}
		else if (s == 3)
		{
			r[j] = '1';
			c = '1';
		}
	}
}

void Booth (char *result, char *cx, char *cxanti)
{
	int i, j, k, s;
	char tmp;
	char *r = (char *)malloc(LEN * sizeof(char));

	for (i = 0; i < LEN; i++)
	{
		if (result[LEN * 2] == result[LEN * 2 - 1])
		{
			for (j = 2 * LEN; j > 0; j--)
			{
				result[j] = result[j - 1];
			}
			result[0] = result[1];
		}
		else if (result[LEN * 2 - 1] == '0' && result[LEN * 2] == '1')
		{
			Add (r, result, cx);
			for (k = 0; k < LEN; k++)
			{
				result[k] = r[k];
			}
			if (i != LEN - 1)
			{
				for (j = 2 * LEN; j > 0; j--)
				{
					result[j] = result[j - 1];
				}
				result[0] = result[1];
			}
		}
		else if (result[LEN * 2 - 1] == '1' && result[LEN * 2] == '0')
		{
			Add (r, result, cxanti);
			for (k = 0; k < LEN; k++)
			{
				result[k] = r[k];
			}
			if (i != LEN - 1)
			{
				for (j = 2 * LEN; j > 0; j--)
				{
					result[j] = result[j - 1];
				}
				result[0] = result[1];
			}
		}
	}
}

double Power (int n)
{
	int i;
	double fac = 1.0;

	for (i = 0; i < n; i++)
	{
		fac = fac * 10;
	}
	return fac;
}

double CTD (int length, char *x)
{
	double d = 0.0;
	int i;

	for (i = 0; i < length; i++)
	{
		//  printf ("%lf \n", Power(i));
		if (x[i] == '1')
		{
			d = d + 1 / (Power(i));
		}
	}
	return d;
}

int main ()
{
	int i;
	double decx, decy;
	double dcx, dcy, dresult;
	char *result, *cx, *cy, *cxanti;
	char *x, *y, *xanti;

	printf ("Input two decimal fractions: \n");
	scanf ("%lf %lf", &decx, &decy);

	x = (char *)malloc ((LEN + 1) * sizeof(char));
	y = (char *)malloc ((LEN + 1) * sizeof(char));
	xanti = (char *)malloc ((LEN + 1) * sizeof(char));


	result = (char *)malloc ((2 * LEN + 1) * sizeof(char));
	cx = (char *)malloc (LEN * sizeof(char));
	cy = (char *)malloc (LEN * sizeof(char));
	cxanti = (char *)malloc (LEN * sizeof(char));
	/*
	 * 将decx和decy转成小数，与补码，不含小数点
	 */
	DTB (decx, x);
	Complement (LEN, x, cx);
	DTB (decy, y);
	Complement (LEN, y, cy);

	for (i = 0; i < LEN; i++)
	{
		xanti[i] = x[i];
	}
	if (x[0] == '+')
	{
		xanti[0] = '-';
	}
	else
	{
		xanti[0] = '+';
	}
	Complement (LEN, xanti, cxanti);
	/**
	    Display (LEN, cx);
	    Display (LEN, cy);
	    Display (LEN, cxanti);
	**/

	/*
	 * 初始化result
	 */
	for (i = 0; i < LEN; i++)
	{
		result[i] = '0';
	}
	for (i = 0; i < LEN; i++)
	{
		result[i + LEN] = cy[i];
	}
	result[2 * LEN] = '0';
//	Display (2 * LEN + 1, result);
	Booth (result, cx, cxanti);
//	Display (2 * LEN + 1, result);

	/*  直接输出 */
	printf ("%.7lf \n", CTD (LEN, cx));
	printf ("%.7lf \n", CTD (LEN, cy));
	printf ("%.15lf \n", CTD (LEN * 2 + 1, result));
	/*
	 * 或者
	 * 上面有声明
	 * 至于输出位数你要自己控制一下，我这默认是6位
	 *
	 */
	dcx = CTD (LEN, cx);
	dcy = CTD (LEN, cy);
	dresult = CTD (LEN, result);

	/*Don't Forget Free All*/
	free (x);
	free (y);
	free (xanti);
	free (result);
	free (cx);
	free (cy);
	free (cxanti);
}
