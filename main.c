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
/*
//显示100-1000之间的回文素数
#include <stdio.h>
int zhishu(int m);
int huiwen(int m);
void main(void)
{
	for (int i = 100; i < 1000; i++)
	{
		if ((zhishu(i)==1)&& (huiwen(i) == 1))
		{
			printf("%d\n", i);
			sum = sum + i;
		}
		else
		{

		}
	}
}
//检测质数，如果返回1则为质数
int zhishu(int m)
{
	int flag;
	for (int i = 2; i < m; i++)
	{		
		if (m % i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
}
//检测回文数
int huiwen(int m)
{
	if ((m % 10) == (m / 100))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
*/
/*
//检测数字在十进制下的位数
#include <stdio.h>
void main(void)
{
	printf("%d", weishu(-2345));
}
int weishu(int m)
{
	for (int i = 1; i < 1000; i++)
	{
		if (m / 10 == 0)
		{
			return i;
		}
		else
		{
			m = m / 10;
		}
	}
}
*/
/*
//打印回文素数
#include <stdio.h>
void main(void)
{
	int sum = 0;
	for (int i = 999999; i < 10000000; i++)
	{
		if (huiwen(i) && zhishu(i))
		{
			printf("%10d\n", i);
			sum++;
		}
		else
		{

		}
	}
	printf("回文质数个数为%d\n", sum);//来自网络的答案，两位回文素数1个，三位回文素数15个，五位回文素数93个，七位回文素数668个，九位回文素数5172个。
}
int weishu(int m)
{
	for (int i = 1; i < 1000; i++)
	{
		if (m / 10 == 0)
		{
			return i;
		}
		else
		{
			m = m / 10;
		}
	}
}
int huiwen(int m)
{
	int wei, flag = 0;
	wei = weishu(m);
	for (int i = 1; i <= wei / 2; i++)
	{
		int pow1, pow2;
		pow1 = pow(10, i);
		pow2 = pow(10, wei + 1 - i);
		if (((m % pow1) / pow(10, (i - 1))) == ((m % pow2) / pow(10, (wei + 1 - i - 1))))
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int pow(int m, int n)
{
	int result = 1;
	for (int i = 0; i < n; i++)
	{
		result = result * m;
	}
	return result;
}
int zhishu(int m)
{
	int flag = 0;
	for (int i = 2; i < m; i++)
	{
		if (m % i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
}
*/
/*
//输出a+aa+aaa+aaaa
#include <stdio.h>
#include <math.h>
void main(void)
{
	int sum = 0, n = 1, l = 7, num = 0;
	for (int i = 0; i < l; i++)
	{
		num = num + n * (pow(10, i));
		printf("%d\n", num);
		sum = sum + num;
	}
	printf("%d", sum);
}
*/

/*
//用函数操作数组
#include <stdio.h>
void maopao(int a[], int l);
void main(void)
{
	int s[5] = { 232,123,121,424,542 };
	maopao(s, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", s[i]);
	}
	printf("\n");
	int kkkk[255] = { 1,5,3,6,2,4,7 };
	maopao(kkkk, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", kkkk[i]);
	}
}
void maopao(int a[], int l)
{
	for (int j = 0; j < l - 1; j++)
	{
		for (int i = 0; i < l - 1 - j; i++)
		{
			int mid;
			if (a[i] > a[i + 1])
			{
				mid = a[i + 1];
				a[i + 1] = a[i];
				a[i] = mid;
			}
		}
	}
}
*/
/*
//不利用第三个变量进行两数交换
#include <stdio.h>
void main(void)
{
	int a = 3, b = 5;
	printf("%d\t", a);
	printf("%d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d\t", a);
	printf("%d\n", b);
}
*/
/*
//用最简单的C语言语句写个推箱子的程序。
#include <stdio.h>  
#include <conio.h>
#include<stdlib.h> 

int map[9][11] = {
	{0,1,1,1,1,1,1,1,1,1,0},  //0代表空地
	{0,1,0,0,0,1,0,0,0,1,0},  //1代表墙
	{0,1,0,4,4,4,4,4,0,1,0},  //3代表目的地
	{0,1,0,4,0,4,0,4,0,1,1},  //4代表箱子
	{0,1,0,0,0,0,0,0,4,0,1},  //5代表人 
	{1,1,0,1,1,1,1,0,4,0,1},
	{1,0,8,3,3,3,3,1,0,0,1},  //2 3 4 5 6 7 8 9 1 0
	{1,0,3,3,3,3,3,0,0,1,1},
	{1,1,1,1,1,1,1,1,1,1,0}
};
//绘制地图  //二维数组+switch()
void DrawMap()
{
	//遍历二维数组  //0 打印空格  //1 墙   //3 目的地  //什么结构?
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			//if  else  switch
			switch (map[i][j])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("■");
				break;
			case 3:
				printf("☆");
				break;
			case 4:
				printf("□");
				break;
			case 5:
				printf("♀");  //5人
				break;
			case 7:     //4 + 3  箱子在目的地中
				printf("★");
				break;
			case 8:     // 5 + 3  人在目的地当中   人?
				printf("♀");
				break;
			}
		}
		printf("\n");
	}
}
void PlayGame()
{
	int r, c;  //人的下标  //
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (map[i][j] == 5 || map[i][j] == 8)   //i j 人的下标?
			{
				r = i;
				c = j;
			}
		}
	}
	char ch;  //字符变量
	ch = _getch();  //键盘的输入保存到字符中
	// getch()     getchar()  接收键盘字符
	// getch()直接接收 不显示回文   getchar()显示回文可以修改 enter键结束
	//根据不同的按键  改变不同的值. 分支.
	switch (ch)
	{
	case 'W':  //W A S D方向   72  80  75  77 虚拟键值 ascii  windowVK_UP VK_TAB VK_RETUNE
	case 'w':
	case 72:
		if (map[r - 1][c] == 0 || map[r - 1][c] == 3)
		{
			map[r - 1][c] += 5;
			map[r][c] -= 5;
		}
		else if (map[r - 1][c] == 4 || map[r - 1][c] == 7)
		{
			if (map[r - 2][c] == 0 || map[r - 2][c] == 3)
			{
				map[r - 2][c] += 4;
				map[r - 1][c] += 1;
				map[r][c] -= 5;
			}
		}
		break;
	case 'S':  //enter按键的作用  确认 返回
	case 's':
	case 80:
		if (map[r + 1][c] == 0 || map[r + 1][c] == 3)
		{
			map[r + 1][c] += 5;
			map[r][c] -= 5;
		}
		else if (map[r + 1][c] == 4 || map[r + 1][c] == 7)
		{
			if (map[r + 2][c] == 0 || map[r + 2][c] == 3)
			{
				map[r + 2][c] += 4;
				map[r + 1][c] += 1;
				map[r][c] -= 5;
			}
		}
		break;
	case 'A':
	case 'a':
	case 75:
		if (map[r][c - 1] == 0 || map[r][c - 1] == 3)
		{
			map[r][c - 1] += 5;
			map[r][c] -= 5;
		}
		else if (map[r][c - 1] == 4 || map[r][c - 1] == 7)
		{
			if (map[r][c - 2] == 0 || map[r][c - 2] == 3)
			{
				map[r][c - 2] += 4;
				map[r][c - 1] += 1;
				map[r][c] -= 5;
			}
		}
		break;

	case 'D':
	case 'd':
	case 77:
		if (map[r][c + 1] == 0 || map[r][c + 1] == 3)
		{
			map[r][c + 1] += 5;
			map[r][c] -= 5;
		}
		else if (map[r][c + 1] == 4 || map[r][c + 1] == 7)
		{
			if (map[r][c + 2] == 0 || map[r][c + 2] == 3)
			{
				map[r][c + 2] += 4;
				map[r][c + 1] += 1;
				map[r][c] -= 5;
			}
		}
		break;
	}
}
int main()  //主函数
{
	while (1)
	{
		system("cls");
		DrawMap();
		PlayGame();
	}

	return 0;
}
*/
/*
//利用宏和函数实现数组交换
#include<stdio.h>
#define SIZE(a) sizeof(a)/sizeof(a[0])
#define PRINT_ARR(a) print_arr(a, SIZE(a))
#define EXCHANGE_ARR(b,c) exchange_arr(b,c,SIZE(b))
void exchange_arr(int b[], int c[], int l);
void print_arr(int b[], int l);
void main()
{
	int x[5] = { 0,1,2,3,4 };
	int y[5] = { 10,11,12,13,14 };
	printf("原数组\n");
	printf("x:\t");
	PRINT_ARR(x);
	printf("y:\t");
	PRINT_ARR(y);
	EXCHANGE_ARR(x, y);
	printf("新数组\n");
	printf("x:\t");
	PRINT_ARR(x);
	printf("y:\t");
	PRINT_ARR(y);
}
void exchange_arr(int b[], int c[], int l)
{
	int mid;
	for (int i = 0; i < l; i++)
	{
		mid = b[i];
		b[i] = c[i];
		c[i] = mid;
	}
}
void print_arr(int b[], int l)
{
	for (int j = 0; j < l; j++)
	{
		printf("%d", b[j]);
		if (j == l - 1)
		{
			printf("\n");
		}
		else
		{
			printf("\t");
		}
	}
}
*/
/*
//申请临时内存当作数组使用
#include<stdio.h>
#include <malloc.h>

#define EXCHANGE_INT(a,b) exchange_int(&a,&b)//将指针写法替换
#define SIZE_ARR(a) (sizeof(a) / sizeof(a[0]))//将求数组长度写法替换
#define PAIXV_ARR(a) paixu(a, SIZE_ARR(a))//简化排序函数的形参
#define NIXV_ARR(a) nixv_arr(a, SIZE_ARR(a))//简化逆序函数的形参
#define PRINT_ARR(a,b) print_arr(a, SIZE_ARR(a),b)//简化输出数组函数的形参

void exchange_int(int* a, int* b);
void paixu(int a[], int l);
void print_arr(int a[], int l, int line);
void nixv_arr(int a[], int l);
void fuzhi_arr(int a[], int b[], int l);

void main(void)
{
	int x[10] = { 9,3,2,5,4,6,7,1,0,8 };
	int* p, * k;
	p = (int*)malloc(10 * sizeof(int));
	fuzhi_arr(x, p, 10);
	//p = (int*)malloc(40);
	//p[0] = 1;//后面就和正常的数组使用一样
	//p[1] = p[0] + 2;
	//p = (int*)realloc(p, 20); //假设变成了20，再通过realloc来重新定义数组大小
	//free(p);//当内存不再使用时，应使用free()函数将内存块释放
	print_arr(x, 10, 5);
	print_arr(p, 10, 5);
	paixu(p, 10);
	print_arr(p, 10, 5);
	nixv_arr(p, 10);
	print_arr(p, 10, 5);
	free(p);
	print_arr(p, 10, 5);
	k = (int*)malloc(40);
	for (int i = 0; i < 10; i++)
	{
		k[i] = i*i;
	}
	print_arr(k, 10, 5);
	print_arr(p, 10, 5);





	//PAIXV_ARR(p);
	//PRINT_ARR(p, 4);
	//NIXV_ARR(p);
	//printf("\n");
	//PRINT_ARR(p, 4);
}
void exchange_int(int* a, int* b)//将int的指针赋值进去进行交换
{
	float m;
	m = *a;
	*a = *b;
	*b = m;
	//*a = *a ^ *b;
	//*b = *a ^ *b;
	//*a = *a ^ *b;
}
void print_arr(int a[], int l, int line)//输出数组，到每行line个长度
{
	for (int i = 1; i <= l; i++)
	{
		printf("%d", a[i - 1]);
		if (i % line)
		{
			printf("\t");
		}
		else
		{
			printf("\n");
		}
	}
}
void paixu(int a[], int l)//对数组进行由大到小的排序
{
	for (int i = 0; i < l - 1; i++)
	{
		for (int j = 0; j < l - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				EXCHANGE_INT(a[j], a[j + 1]);
			}
		}
	}
}
void nixv_arr(int a[], int l)//逆序数组
{
	for (int i = 0; i < l / 2; i++)
	{
		EXCHANGE_INT(a[i], a[l - i - 1]);
	}
}
void fuzhi_arr(int a[], int b[], int l)
{
	for (int i = 0; i < l; i++)
	{
		b[i] = a[i];
	}
}
*/
