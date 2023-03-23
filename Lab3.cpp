#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <fstream>
#include <Windows.h>
#include "lab_3_help.h"
//#define MAXLINE 256
#define path "BD.txt"

using namespace std;
class Bank;

class FIO {
	string surname;
	string name;
	string patronymic;
	friend Bank;
};

class Bank {
	FIO client;
	int account;
	double deposit;
	static int count;
public:
	Bank(int k) {
		if (k == 0) {
			cout << "Введите данные клиента:\n";
			cout << "Фамилия: ";
			getline(cin, client.surname);

			cout << "Имя: ";
			getline(cin, client.name);

			cout << "Отчество: ";
			getline(cin, client.patronymic);

			cout << "Номер счёта: ";
			input_num(account);

			cout << "Сумма на счёте: ";
			input_num(deposit);

		}
		else {
			ifstream fin;
			fin.open(path, fstream::in);
			getline(fin, client.surname);
			getline(fin, client.name);
			getline(fin, client.patronymic);
			fin >> account;
			fin >> deposit;
			fin.close();

		}
		count++;
	}
	~Bank() {
		count--;
	}
	int get_count() {
		return count;
	}
};
int Bank::count = 0;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	return 0;
}

