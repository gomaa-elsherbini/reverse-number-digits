#include <iostream>
#include <string>
using namespace std;

int readNumber()
{
	int num;
	cout << "please enter num?\n";
	cin >> num;
	return num;
}

int getLength(string str)
{
	int i = 0;
	int length = 0;
		while (str[i])
		{
			length++;
			i++;
		}
	return length;
}

int reverse(int num)
{
	string reversed = "";
	string str = to_string(num);
	int length = getLength(str);

	for (int i = length-1; i >= 0; i--)
	{
		reversed += str[i];
	}
	return stoi(reversed);
}

int main()
{
	cout << reverse(readNumber());//1234->4321+4=4325

}