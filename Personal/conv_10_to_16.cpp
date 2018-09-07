#include <iostream>
#include <string>

using namespace std;

/*My first test task at the first interview, which I shamefully failed  :(*/

/*Task: write function, that get Array with 'char' in 10 numeral system, convert it locally in 16 and return like a String*/
/*This solution isn't ideal, but in future I modify it*/

//Convert algorithm
string convert(unsigned char x)
{
	string res("\0");	
	string alf_d = "0123456789ABCDEF";
	do
	{
		string res_t("\0");
		if ((x % 16 < 16) && (x / 16 <= 1)) res = res + "0";
		while (x > 0)
		{
			res_t = alf_d[x % 16] + res_t;
			x /= 16;
		}
		res += res_t;
	} while (x);
	
	return res;
}

//Convert function
template <size_t N>
string ToHex(int(&Array)[N])
{
	string res = "";
	for (int i = 0; i != N; ++i) res += convert(Array[i]);
	return res;
}

int main()
{
	//Test input
	int m[4] = { 10, 1, 32, 255 };
	for (int i = 0; i != sizeof(m) / sizeof(m[0]); ++i)
		cout << m[i] << ' ';
	cout << endl;
	string s = ToHex(m);
	cout << s << endl;

	system("pause");
	return 0;
}