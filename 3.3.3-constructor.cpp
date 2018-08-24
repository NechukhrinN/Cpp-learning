/*Реализованные в предыдущих заданиях конструкторы и деструктор берут на себя работу по управлению ресурсами. 
Теперь можно дополнить структуру String различными полезными методами.
Для работы со строками можно придумать множество полезных методов (подумайте, какие методы пригодились бы вам, 
и чего вам не хватает для их реализации). Примером такого метода может послужить метод append — он добавляет 
копию строки-аргумента в конец текущей строки (т.е. в конец строки, у которой он был вызван). */

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте этот метод. */
	void append(String &other)
    {
        size += strlen(other.str);
		char* tempS = new char[size+1];
		strcpy(tempS, str);
		strcat(tempS, other.str);
		delete[] str;
		str = tempS;
		
    }
	size_t size;
	char *str;
};