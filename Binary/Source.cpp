// Персональный шаблон проекта С++
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#define chui(s) (unsigned int)(s)

int tobinary(char num) {
	int res = 0; // хранит двоичное число в нашей функции
	for (int i = 7; i >= 0; i--)
		res += (num >> i & 1) * pow(10, i);

	return res;
}
string tobinary(int num) {
	string res; // хранит двоичное число в нашей функции
	for (int i = 31; i >= 0; i--)
		res += to_string(num >> i & 1);

	return res;
}
string tobinary(short num) {
	string res; // хранит двоичное число в нашей функции
	for (int i = 15; i >= 0; i--)
		res += to_string(num >> i & 1);

	return res;
}

int tohex(string binStr) {
	for (int i = 0; i < binStr.length(); i++)
		if (binStr[i] != '0' && binStr[i] != '1')
			throw invalid_argument("not binary");
	int res = 0;
	for (int i = binStr.length() - 1; i >= 0; i--)
		res += (int)(binStr[binStr.length() - i - 1] - '0') * pow(2, i);
	return res;
}

int main() {
	setlocale(LC_ALL, "Russian");

	// битовые операции
	/*unsigned int n = 5 << 3;
	cout << "5 << 3 = " << n << endl;

	n = 35 >> 3;
	cout << "35 >> 3 = " << n << endl;

	unsigned char s = 100;
	unsigned char ds = ~s;
	cout << "~" << chui(s) << " = " << chui(ds) << endl;

	// сравнение
	s = 154; // 10011010
	ds = 171; // 10101011
	// 138
	cout << chui(s) << " & " << chui(ds) << " = " << chui(s & ds) << endl;

	s = 152; // 10011000
	ds = 43; // 00101011
	// 187
	cout << chui(s) << " | " << chui(ds) << " = " << chui(s | ds) << endl;

	s = 152; // 10011000
	ds = 43; // 00101011
	// 179
	cout << chui(s) << " ^ " << chui(ds) << " = " << chui(s ^ ds) << endl;
*/

	// Задача 1
	/*cout << "Задача 1\n";
	char z11 = 70;			// 01000110
	short z12 = 15000;
	int z13 = 123124123;
	cout << "char " << chui(z11) << " = " << tobinary(z11) << endl;
	cout << "short " << z12 << " = " << tobinary(z12) << endl;
	cout << "int " << z13 << " = " << tobinary(z13) << endl;
*/

	// Задача 2
	cout << "Задача 2\nВведите двоичный код: ";
	string binStr;
	cin >> binStr;
	try {
		cout << tohex(binStr) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "Ошибка: " << ex.what() << endl;
	}




	return 0;
}