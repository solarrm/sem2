#include "include.h"
#include "data.h"

int main() {
	setlocale(LC_ALL, "Ru");
	cout << "Введите номер задания..." << endl;
	int command;
	cin >> command;
	if (command == 1) {
		cout << "Задание №2" << endl;
		result1 = rx + ry;
		cout << result1 << endl;
		result2 = *ptrx + *ptry;
		cout << result2 << endl;
	}
	if (command == 2) {
		cout << "\n\n" << "Задание №7" << endl;
		cout << -1 * rx << ", " << -1 * *ptry << endl;
	}
	if (command == 3) {
		cout << "\n\n" << "Задание №10" << endl;
		int c = *ptre;
		int v = rq;
		cout << "Введите переменную X и I: " << endl;
		cin >> rq >> *ptre;
		cout << "Вы ввели: z=" << rq;
		if (*ptre > 0) {
			cout << "+" << *ptre << "i" << endl;
		}
		if (*ptre < 0) {
			cout << *ptre << "i" << endl;
		}
		cout << "Комплексно сопряженная переменная: z'=" << rq;
		if (*ptre < 0) {
			cout << "+" << *ptre * -1 << "i" << endl;
		}
		if (*ptre > 0) {
			cout << *ptre * -1 << "i" << endl;
		}
	}
	if (command == 4) {
		cout << "\n\n" << "Задание №15" << endl << "Введите коэффициенты матрицы: " << endl;
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cin >> arr[i][j];
			}
		}
		cout << endl;

		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << rq * arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "\n\n";
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << arr[i][j] * *ptre << " ";
			}
			cout << endl;
		}
	}
	return 0;
}