#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

int intmax = 0;	//максимальна кількіть стовпців

struct templevel //тимчасові ключі
{
	int count = 0;
	int *data = 0; //масив даних
};

struct secondlevel	//вторична хеш-таблиця
{
	int *data = 0; //масив даних
	int a = 0;
	int b = 0;
	int m = 1;
};

int *InitKeys(int nmax);	
int newint(char *text, int from, int to, char type);
int Hash(int k, int a, int b, int p, int m);
void PrintKeys(int *now, int nmax);
void printhashtable(secondlevel *now, int max);
secondlevel* GetSecond(templevel *keys, int m, int p);
templevel* SortKeys(int *nowkey, int n, int a, int b, int p, int m);
int collisions(secondlevel *now, int nmax);


int main()
{
	srand(time(NULL));
	//стандартні змінні для функції хешування
	int mn_a = newint("a", 1, 999,'s');
	int mn_b = newint("b", 1, 999,'s');
	int mn_m = newint("m", 1, 999,'s');
	int mn_p;
	if(mn_m > 100)
		mn_p = newint("p", mn_m + 1, 99999, 'p');
	else
		mn_p = newint("p", 101, 99999, 'p');
	// 
	int mn_n = newint("N", 1, 100,'s'); //кількість ключів
	int *key = InitKeys(mn_n); //ключі створюються рандомно і не повторюються
	PrintKeys(key, mn_n);	//...
	//для кожного значення хеша з першого рівня створюється масив ключів, які будуть поміщені у таблицю 2 рівня.
	//Дозволяє спростити функцію GetSecond() та спрощує відловлювання колізій.
	templevel *tempkeys = SortKeys(key, mn_n, mn_a, mn_b, mn_p, mn_m);
	//сворення та заповнення таблиць другого рівня, використовується функція хешування, див. далі
	secondlevel *firstlevel = GetSecond(tempkeys,mn_m,mn_p);
	printhashtable(firstlevel, mn_m);	//...
	//перевірка на відсутність колізій
	int coll = collisions(firstlevel, mn_m);
	cout << endl <<"Collisions: " << mn_n -  coll  << endl << coll << " / " << mn_n << endl;
	
	//очищення памяті
	free(key);
	free(tempkeys);
	free(firstlevel);

	system("Pause");
	return 0;
}

//функція створення масиву ключів
int *InitKeys(int nmax)
{
	int *res = new int[nmax];
	for (int i = 0; i < nmax; i++)
	{
		bool other = false;
		while (!other)	//працює, доки не знайде значення, відмінне від попередніх
		{
			other = true;
			int newvalue = rand() % 100;
			for (int j = 0; j < i; j++)
				if (newvalue == res[j]) 
				{
					other = false;
					j = i;
				};
			if (other)
				res[i] = newvalue;
		};
	};

	return res;
}
//функція вводу значень змінних
int newint(char *text, int from, int to, char type)
{
	int res;
	bool again = true;
	cout << "Write number from " << from << " to " << to << "\n";
	if (type == 'p')
		cout << "Only prime number!\n";
	cout << text << " = ";
	while (again)
	{
		again = false;
		cin >> res;
		if (type == 'p')
		{
			for (int i = 2; i < res; i++)
				if (float(res) / float(i) == float(res / i))
				{
					if (again == false)
						cout << "Error!!!The number is not prime!" << endl;
					again = true;
				}
		};
		if (res < from || res > to)
		{
			again = true;
			cout << "Error! Invalid data. Try again... " << endl;
			cout << text << " = ";
		};
	};
	return res;
}
//основна функція. Хешування
int Hash(int k, int a, int b, int p, int m)
{
	return ((a*k + b) % p) % m;
};
//Вивід ключів. No coments
void PrintKeys(int *nowkey, int nmax)
{	cout << endl << "Array of keys:" << endl;
	cout <<"K = {";
	for (int i = 0; i < nmax; i++)
	{
		cout << nowkey[i];
		if (i != nmax - 1)
			cout << ", ";
	}
	cout << "}" << endl << endl;
}
//Вивід таблиці. No coments
void printhashtable(secondlevel *now, int max)
{
	cout << "Hash-table:" << endl;
	cout.width(7); cout.setf(ios::left); cout << "#";
	cout.width(4); cout.setf(ios::left); cout << "m";
	cout.width(4); cout.setf(ios::left); cout << "a";
	cout.width(4); cout.setf(ios::left); cout << "b";
	cout << "		";
	for (int i = 0; i < intmax; i++)
	{
		cout.width(2);	cout.setf(ios::left); cout << i << " ";
	};
	cout << endl << endl;
	for (int i = 0; i < max; i++)
	{
		cout.width(7); cout.setf(ios::left); cout << i;
		if (now[i].data != 0)
		{
			cout.width(4); cout.setf(ios::left); cout << now[i].m;
			cout.width(4); cout.setf(ios::left); cout << now[i].a;
			cout.width(4); cout.setf(ios::left); cout << now[i].b;
			cout << "		";
			for (int j = 0; j < now[i].m; j++)
				if (now[i].data[j] != -842150451)
				{
					cout.width(3); cout.setf(ios::left); cout << now[i].data[j];
				}
				else
				{
					cout.width(3); cout.setf(ios::left); cout << "*";
				};
		}
		else
			cout << "-   -   -";
		cout << endl;
	};
}
//вторичні таблиці
secondlevel* GetSecond(templevel *keys, int m , int p)
{
	secondlevel* res = new secondlevel[m];
	for (int i = 0; i < m; i++)
	{
		if (keys[i].count  > 1)
		{
			int mj = keys[i].count * keys[i].count; 
			res[i].m = mj;
			bool nocollisions = false; //відповідає за перезапуск, якщо знайдено колізію
			int n = 0; //індекс
			int hashj; //хеш на 2 рівні

			do
			{
				if (nocollisions)
				{
					hashj = Hash(keys[i].data[n], res[i].a, res[i].b, p, res[i].m);
					if (res[i].data[hashj] == -842150451) //перевірка на колізію
					{
						res[i].data[hashj] = keys[i].data[n];
						n++;
					}
					else
						nocollisions = false;					
				}
				if (nocollisions == false) //перезапуск
				{
					n = 0;
					res[i].data = new int[mj];
					res[i].a = rand() % p + 1;
					res[i].b = rand() % p + 1;
					nocollisions = true;
				};
			} while (nocollisions && n < keys[i].count);

		};
		//якщо є тільки один елемент, то кидаємо його у нульову клітинку
		if (keys[i].count == 1)
		{
			res[i].data = new int[1];
			res[i].data[0] = keys[i].data[0];
		}
	};
	return res;
}
//розкидання ключів за їх хешем
templevel* SortKeys(int *nowkey, int n, int a, int b, int p, int m)
{
	templevel* res = new templevel[m];
	int hashnow;
	//кількість ключів у рядку, для створення масиву без використання зайвої пам'яті
	int *max = new int[m]; 
	for (int i = 0; i < m; i++)
		max[i] = 0;
	for (int i = 0; i < n; i++)
		max[Hash(nowkey[i], a, b, p, m)]++;
	//розкидання
	for (int i = 0; i < n; i++)
	{
		hashnow = Hash(nowkey[i], a, b, p, m);
		if (res[hashnow].count == 0)
			res[hashnow].data = new int[max[hashnow]];
		res[hashnow].data[res[hashnow].count] = nowkey[i];
		res[hashnow].count++;
	};
	return res;
}
//кількість чисел у всіх таблицях
int collisions(secondlevel *now, int nmax)
{
	int res = 0;
	for (int i = 0; i < nmax; i++)
		if (now[i].data != 0)
			for (int j = 0; j < now[i].m;j++)
				if (now[i].data[j] >= 0)
					res++;
	return res;
}