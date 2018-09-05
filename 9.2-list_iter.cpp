/*Для последовательности s1,s2,s3,…,sn−1,sn будем называть подотрезком подпоследовательность вида si,si+1,si+2,…,sj−2,sj−1 для некоторых i и j, i≤j, 
т.е. подотрезок — это непрерывная подпоследовательность.
Напишите функцию max_increasing_len, которая принимает последовательность, хранящуюся в std::list, по двум 
итераторам, и вычисляет для неё длину самого длинного строго возрастающего подотрезка.*/


#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
#include <assert.h>

using namespace std;

template<class It>
size_t max_increasing_len(It p, It q)
{
	if (p != q)
	{
		int len = 1;
		int max_len = 1;
		It p_prev = p;
		++p;
		for (; p != q; ++p, ++p_prev)
		{
			if (*p > *p_prev)
			{
				++len;
				if (len > max_len) max_len = len;
			}
			else len = 1;
		}
		return max_len;
	}
	else return 0;
	
}

int main()
{
	size_t res = -1;

	/*
		тесты для двух возрастающих последовательностей
	*/
	std::list<int> const l = { 1,2,3,4,1,1,1,1,2,3,4,5,6,7 };
	res = max_increasing_len(l.begin(), l.end());
	assert(res == 7);

	std::list<int> const l2 = { 1,2,3,4,5,6,7,1,1,1,1,2,3,4 };
	res = max_increasing_len(l2.begin(), l2.end());
	assert(res == 7);

	std::list<int> const l3 = { 1,2,3,4,5,6,7,1,1,1,1,1,2,3,4 };
	res = max_increasing_len(l3.begin(), l3.end());
	assert(res == 7);

	std::list<int> const l4 = { 1,2,3,4,5,6,7,1,2,3,4,1,1,1,1 };
	res = max_increasing_len(l4.begin(), l4.end());
	assert(res == 7);

	std::list<int> const l5 = { 1,1,1,1,1,2,3,4,5,6,7,1,2,3,4 };
	res = max_increasing_len(l5.begin(), l5.end());
	assert(res == 7);

	std::list<int> const l6 = { 1,1,1,1,1,2,3,4,1,2,3,4,5,6,7 };
	res = max_increasing_len(l6.begin(), l6.end());
	assert(res == 7);

	std::list<int> const l7 = { 1,2,3,4,1,2,3,4,5,6,7 };
	res = max_increasing_len(l7.begin(), l7.end());
	assert(res == 7);

	std::list<int> const l8 = { 1,2,3,4,5,6,7,1,2,3,4 };
	res = max_increasing_len(l8.begin(), l8.end());
	assert(res == 7);

	/*
		тесты для крайних случаев, пустой список, из 1 элемента и так далее
	*/
	std::list<int> const l9 = {};
	res = max_increasing_len(l9.begin(), l9.end());
	assert(res == 0);

	std::list<int> const l10 = { 1 };
	res = max_increasing_len(l10.begin(), l10.end());
	assert(res == 1);

	std::list<int> const l11 = { 1,2,3,4,5,6,7 };
	res = max_increasing_len(l11.begin(), l11.end());
	assert(res == 7);

	std::list<int> const l12 = { 1,1,1,1,1,1 };
	res = max_increasing_len(l12.begin(), l12.end());
	assert(res == 1);

	std::list<int> const l13 = { 1,1,1,1,2,3,4 };
	res = max_increasing_len(l13.begin(), l13.end());
	assert(res == 4);

	std::list<int> const l14 = { 1,2,3,4,1,1,1,1 };
	res = max_increasing_len(l14.begin(), l14.end());
	assert(res == 4);

	std::list<int> const l15 = { 1,1,1,1,2,3,4,1,1,1,1 };
	res = max_increasing_len(l15.begin(), l15.end());
	assert(res == 4);

	/*
		тесты для 3 последовательностей
	*/

	std::list<int> const l16 = { 1,1,1,2,3,4,5,1,1,1,1,2,3,4,5,6,7,1,1,1,1,1,2,3,4,5,6,7,8,9 };
	res = max_increasing_len(l16.begin(), l16.end());
	assert(res == 9);

	std::list<int> const l17 = { 1,1,1,2,3,4,5,1,1,1,1,2,3,4,5,6,7,8,9,1,1,1,1,1,2,3,4,5 };
	res = max_increasing_len(l17.begin(), l17.end());
	assert(res == 9);

	std::list<int> const l18 = { 1,1,1,2,3,4,5,6,7,8,9,1,1,1,1,2,3,4,5,6,7,1,1,1,1,1,2,3,4,5,6 };
	res = max_increasing_len(l18.begin(), l18.end());
	assert(res == 9);

	system("pause");
	return 0;
}
