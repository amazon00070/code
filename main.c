/********
#include <stdio.h>
//定义全局变量
int a = 5;
void main(void)
{
	{
		//定义局部变量
		int a = 1;
		//引用局部变量
		printf("%d\n", a);
	}
	//引用全局变量
	printf("%d\n", a);
}
*******/


/**********
//输出水仙花数
#include <stdio.h>
#include <math.h>
void main(void)
{
	for (int i = 100; i < 1000; i++)
	{
		if (pow((i / 100), 3) + pow(((i % 100) / 10), 3) + pow((i % 10), 3) == i)
		{
			printf("%d\n", i);
		}
		else
		{
		}
	}
}
*********/

/**********
//等差数列相加
#include <stdio.h>
void main(void)
{
	int a = 0;
	for (int i = 1; i <= 100; i++)
	{
		a = a + i;
	}
	printf("%8d", a);
}
*********/

/**********
//等比数列相加
#include <stdio.h>
#include <math.h>
void main(void)
{
	int a = 0;
	for (int i = 0; i <= 5; i++)
	{
		a = a + 3 * pow(2, i);
	}
	printf("结果为%d\n", a);
	printf("验算为%d\n", 3 + 6 + 12 + 24 + 48 + 96);//验算
}
*********/

/*******
//
#include <stdio.h>
void main(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (((i % 3) == 0) & ((i % 5) == 0))
		{
			printf("%d\n", i);
		}
		else
		{

		}
	}
}
********/

/************
//寻找质数
#include <stdio.h>
void main(void)
{
	int b = 0;
	printf("2\n");
	printf("3\n");
	printf("5\n");
	printf("7\n");
	for (int i = 10; i < 100; i++)
	{
		int a = 0;
		for (int j = 2; j <= i / 2; j++)
		{
			
			if (i % j == 0)
			{
				a = 1;
				break;
			}
			else
			{

			}
		}
		if (a == 0)
		{
			printf("%d\n",i);
			b++;
		}
		else
		{

		}
	}
	printf("共%d个\n", b);
}
*************/

/************
//打印闰年
#include <stdio.h>
void main(void)
{
	for (int i = 1900; i <= 2000; i++)
	{
		if (((i % 4 == 0) & (i % 100 != 0)) | ((i % 100 == 0) & (i % 400 == 0)))
		{
			printf("%6d", i);
		}
		else
		{

		}

	}
}
*************/


/************
//辗转相除法求最大公约数
#include <stdio.h>
void main(void)
{
	int a=24, b=60;
	if (a > b)
	{
	}
	else
	{
		int c;
		c = b;
		b = a;
		a = c;
	}
	int c = 1;
	while (c != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", a);
}
*************/


/************
//穷举法求最大公约数
#include <stdio.h>
void main(void)
{
	int a=24, b=60;
	if (a > b)
	{
	}
	else
	{
		int c;
		c = b;
		b = a;
		a = c;
	}
	int gongyueshu = 1;
	for (int i = 1; i <= a; i++)
	{
		if ((a % i == 0) & (b % i == 0))
		{
			gongyueshu = i;
		}
	}
	printf("%d", gongyueshu);
}
*************/

/************
//求二元一次方程的实根
#include <stdio.h>
#include <math.h>
void main(void)
{
	int a = 1, b = -5, c = 4;
	if (pow(b, 2) - 4 * a * c >= 0)
	{
		printf("%f\n", (-b + pow((pow(b, 2) - 4 * a * c), 0.5)) / 2 / a);
		printf("%f\n", (-b - pow((pow(b, 2) - 4 * a * c), 0.5)) / 2 / a);
	}
	else
	{
		printf("在实数范围内无解，请静候下一个有虚数的版本");
	}
}
*************/
