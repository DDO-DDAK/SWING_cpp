#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	srand(time(NULL));
	int i;
	int num;
	int j;
	int multiple;
	int random = rand() % 100 ;

	cout << "������ ��: " << random << endl;
	cout << "Ư�� ��� ����: ";
	cin >> num;
	cout << endl;

	for (i = 0; i < num; i++) {
		cout << i + 1 << "��° Ư�� ���: ";
		cin >> multiple;

		cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= random; j++) {
			if (j % multiple != 0) {
				continue;
			}
			cout << j << ", ";
		}
		cout << endl;

		cout << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
		for (j = 1; j <= random; j++) {
			if (j % multiple == 0) {
				continue;
			}
			cout << j << ", ";
		}
		cout << endl << endl;
	}
}
