/*Напишите функцию, которая принимает на вход целочисленную матрицу M (другими словами, просто двумерный 
целочисленный массив) размера rows×cols, и возвращает транспонированную матрицу MT (тоже двумерный 
целочисленный массив) размера cols×rows. Если в M на пересечении i-ой строки и j-ого столбца стояло 
число x, то на пересечении  j-ой строки и i-ого столбца в матрице MT тоже будет стоять число x, или 
другими словами MT[j][i]=M[i][j].
Обратите внимание, что вам неизвестно, каким именно способом выделялась память для массива M. Выделять 
память под массив MT можете любым удобным вам способом. Изменять исходную матрицу нельзя.*/

#include <cstdlib>
int ** create_array2d(size_t a, size_t b)
{
	int ** m = new int * [a];
	m[0] = new int[a*b];
	for (size_t i = 1; i != a; ++i)
		m[i] = m[i - 1] + b;
	return m;
}

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int ** mT = create_array2d(cols, rows);
	for (int i = 0; i < cols; ++i)
		for (int j = 0; j < rows; ++j)
			mT[i][j] = m[j][i];
	return mT;
}

/*Реализуйте функцию swap_min, которая принимает на вход двумерный массив целых чисел, ищет в 
этом массиве строку, содержащую наименьшее среди всех элементов массива значение, и меняет эту 
строку местами с первой строкой массива.*/

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min = m[0][0];
	int min_i = 0;
	int * temprow = m[0];
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			if (m[i][j] < min)
			{
				min = m[i][j];
				min_i = i;
			}		
	m[0] = m[min_i];
	m[min_i] = temprow;
}