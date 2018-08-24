/*Добавьте в класс String реализацию конструктора копирования. Инвариант класса остается тем же 
(в size хранится размер строки без завершающего 0 символа, str указывает на C-style строку, т. е. 
с завершающим нулевым символом).
Завершите класс String, добавив к нему оператор присваивания. Будьте аккуратны при работе с памятью. 
Инвариант класса остается тем же (в size хранится размер строки без завершающего 0 символа, str указывает 
на C-style строку, т. е. с завершающим нулевым символом).
*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте конструктор копирования */
	String(const String &other) : size(other.size), str(new char[size+1])
    {
     for (size_t i = 0; i != size; ++i)
			str[i] = other.str[i];
		str[size] = '\0';   
    }
	/* Реализуйте оператор присваивания */
	String &operator=(const String &other)
	{
		if (this != &other)
			String(other).swap(*this);
		return *this;
	}
    
    void swap(String  & a)
	{
		std::swap(size, a.size);
		std::swap(str, a.str);
	}
	
    
	void append(const String &other);

	size_t size;
	char *str;
};