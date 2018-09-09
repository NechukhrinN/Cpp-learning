#include <iostream>
#include <string>

using namespace std;

/*My first test task at the first interview, which I shamefully failed  :(*/

/*Task: write function, that get Array with 'char' in 10 numeral system, convert it locally in 16 and return like a String*/
/*This solution isn't ideal, but in future I modify it*/

//Convert algorithm
string convert(unsigned char x)
{
	static std::string alf_d = "0123456789ABCDEF";
	std::string res;	
	std::string res_t;
		if (x / 16 <= 1) res = res + "0";
		while (x > 0)
		{
			res_t = alf_d[x % 16] + res_t;
			x /= 16;
		}
		res += res_t;
	
	return res;
}

//Convert function
string ToHex(std::vector<int> v)
{
	string res = "";
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) res += convert(*it);
	return res;
}

int main()
{
	//Test input
	std::vector<int> v = { 10, 1, 32, 255, 23, 45, 12, 67, 234};
	for (vector<int>::iterator it = v.begin(); it!=v.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	string s = ToHex(v);
	cout << s << endl;

	system("pause");
	return 0;
}