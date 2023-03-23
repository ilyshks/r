//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <fstream>
//#include <clocale>
//#include <Windows.h>
//
//
//using namespace std;
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, "Russian");
//
//
//	ifstream f;
//	int a = 0;
//	double b = 0;
//	string path = "BD.txt";
//	f.open(path, fstream::in);
//
//	f >> a;
//	f >> b;
//	cout << a << endl;
//	cout << b << endl;
//	cout << a + b << endl;
//	f.close();
//	ofstream g;
//	g.open(path, fstream::out);
//	g << a << "\n";
//	return 0;
//}