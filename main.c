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

/*
//水仙花数
#include <stdio.h>
#include <math.h>
void main(void)
{
	for (int i = 100; i < 1000; i++)
	{
		if (i == pow((i / 100), 3) + pow(((i % 100) / 10), 3) + pow((i % 10), 3))
		{
			printf("%5d", i);
		}
		else
		{

		}
	}
}
*/
/*
//首位相同的三位数
#include <stdio.h>
void main(void)
{
	for (int i = 100; i < 1000; i++)
	{
		static int a = 0;
		if ((i / 100) == (i % 10))
		{
			printf("%5d", i);
			a++;
			if (a == 10)
			{
				printf("\n");
				a = 0;
			}
			else
			{

			}
		}
		else
		{

		}
	}
}
*/

/*
//显示2——10000之间的完全数
#include <stdio.h>
void main(void)
{
	for (int i = 2; i < 10000; i++)
	{
		int total = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				total = total + j;
			}
			else
			{

			}
		}
		if (total == i)
		{
			printf("%5d", i);
		}
		else
		{

		}
	}
}
*/

/*
//穷举法解鸡兔问题
#include <stdio.h>
void main(void)
{
	int tou = 30, tui = 80;
	for (int tu = 0; tu <= tou; tu++)
	{
		if (tu * 4 + (tou-tu) * 2 == tui)
		{
			printf("鸡%d，兔%d", (tou - tu), tu);
		}
		else
		{

		}
	}
}
*/
/*
//马克思的男女花钱问题
#include <stdio.h>
void main(void)
{
	for (int nan = 0; nan <= 30; nan++)
	{
		for (int nv = 0; nv <= 30; nv++)
		{
			for (int xiao = 0; xiao <= 30; xiao++)
			{
				if ((nan * 3 + nv * 2 + xiao * 1 == 50) && (nan + nv + xiao == 30))
				{
					printf("男人%d，女人%d，小孩%d\n", nan, nv, xiao);
				}
			}
		}
	}
}
*/
/*
//100匹马100块瓦
#include <stdio.h>
void main(void)
{
	printf("大马\t小马\t马驹\n");
	for (int dama = 0; dama <= 100; dama++)
	{
		for (int xiaoma = 0; xiaoma <= 100; xiaoma++)
		{
			for (int majv = 0; majv <= 100; majv++)
			{
				if ((dama + xiaoma + majv == 100) && (dama * 3 + xiaoma * 2 + majv * 0.5 == 100))
				{
					printf("%d\t%d\t%d\n", dama, xiaoma, majv);
				}
			}
		}
	}
}
*/
/*
//打印国际象棋棋盘
#include<stdio.h>
#include <windows.h>
void main(void)
{
	SetConsoleOutputCP(437);
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if (((i % 2 == 0) && (j % 2 == 0)) || ((i % 2 != 0) && (j % 2 != 0)))
			{
				printf("%c%c", 219, 219);
			}
			else
			{
				printf("  ");
			}
		printf("\n");
	}
}
*/
/*
//兔子数列，3月出生之后生兔子，起始时候一个刚出生的兔子
#include <stdio.h>
void main(void)
{
	int shengyvtuzi = 0, xinshengtuzi_1 = 1, xinshengtuzi_2 = 0, m = 0;
	for (int i = 1; i <= 40; i++)
	{
		printf("%-10d", shengyvtuzi + xinshengtuzi_1 + xinshengtuzi_2);
		shengyvtuzi = shengyvtuzi + xinshengtuzi_2;
		xinshengtuzi_2 = xinshengtuzi_1;
		xinshengtuzi_1 = shengyvtuzi;
		if (i % 4 == 0)
		{
			printf("\n");
			printf("%d\n",i);
		}
		else
		{
			printf("\t");
		}
	}
}
*/
/*
//合数分解为质数
#include <stdio.h>
void main(void)
{
	int k = 10;
	printf("%d=", k);
	for (int i = 2; i <= k; i++)
	{
		if ((k % i == 0))
		{
			k = k / i;
			printf("%d", i);
			i = 1;
			if (k == 1)
			{

			}
			else
			{
				printf("*");
			}
		}
		else
		{

		}
	}
	printf("\n");
}
*/
/*
//求最小公倍数和最大公约数
#include <stdio.h>
void main(void)
{
	int a = 70, b = 15, c;
	if (a >= b)
	{

	}
	else
	{
		c = a;
		a = b;
		b = c;
	}
	for (int i = a; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d\n", i);
			break;
		}
		else
		{

		}
	}

	while (b != 0)
	{
		int mid;
		mid = a % b;
		a = b;
		b = mid;
	}
	printf("%d", a);
}
*/
