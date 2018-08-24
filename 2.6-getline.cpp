/*Реализуйте функцию getline, которая считывает поток ввода посимвольно, пока не достигнет конца 
потока или не встретит символ переноса строки ('\n'), и возвращает C-style строку с прочитанными символами.

Обратите внимание, что так как размер ввода заранее неизвестен, то вам нужно будет перевыделять 
память в процессе чтения, если в потоке ввода оказалось больше символов, чем вы ожидали.*/

#include <iostream>
char *_resize(const char *str, unsigned new_size)
{
	char * new_str = new char[new_size];
		for (int i = 0; (i < new_size); ++i) new_str[i] = str[i];		
	delete[] str;
	return new_str;
}
char *getline()
{
    int size = 100, i = 0;
	char * str = new char[size], symbol;
	while (std::cin.get(symbol) && symbol != '\n') 
	{
		if (i == size) str = _resize(str, size *= 2);
		str[i++] = symbol;
	}
	str[i] = 0;
	return str;
}