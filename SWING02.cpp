#include<iostream>
using namespace std;

int main()
{
	int seat[10][6] = { };
	int a, width, length, new_length, new_width;

	while (1) {
		cout << "** ����� �¼� ���� �ý��� **\n" << endl;
		cout << "1. �űԿ��� " << endl;
		cout << "2. ���� ����" << endl;
		cout << "3. ���α׷� ����\n" << endl;
		cout << "��ȣ�� �Է��ϼ���: ";
		cin >> a;

		//1�� �Է��� ���
		if (a == 1) {
			cout << endl;
			cout << "1 2 3" << "\t" << "4 5 6" << endl;
			cout << "-------------" << endl;

			//for���� �̿��Ͽ� ��ΰ� �ִ� ����� �¼� ����ϱ�
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 6; j++) {
					if (j == 3) {
						//����� ��� "  " ���
						cout << "\t";
					}
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}

			cout << "�, ���° �¼��� �����Ͻðڽ��ϱ�? ";
			cin >> width >> length;

			if (seat[width - 1][length - 1] == 1) {

				cout << "�̹� ����� �¼��Դϴ�." << endl;
			}
			else {
				seat[width - 1][length - 1] = 1;
				cout << "����Ǿ����ϴ�." << endl;

				cout << endl;
				cout << "1 2 3" << "\t" << "4 5 6" << endl;
				cout << "-------------" << endl;

				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 6; j++) {
						if (j == 3) {
							//����� ��� "  " ���
							cout << "\t";
						}
						cout << seat[i][j] << " ";
					}
					cout << endl;
				}
			}

		}

		else if (a == 2) {
			cout << endl;
			cout << "1 2 3" << "\t" << "4 5 6" << endl;
			cout << "-------------" << endl;

			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 6; j++) {
					if (j == 3) {
						//����� ��� "  " ���
						cout << "\t";
					}
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}


			cout << endl << "���� �¼��� �����ϰ��� �ϴ� �¼��� ���� ��, ��ȣ ������ �Է��� �ּ���: ";
			cin >> width >> length >> new_width >> new_length;

			if (seat[width-1][length-1] == 0) {

				cout << "�¼��� ��Ȯ�� �Է��� �ּ���." << endl;
			}

			else if (seat[new_width - 1][new_length - 1] == 1) {

				cout << "�̹� ����� �¼��Դϴ�. �ٸ� �¼��� ������ �ּ���." << endl;
			}

			else {
				seat[new_width - 1][new_length - 1] = 1;
				seat[width - 1][length - 1] = 0;

				cout << "�¼��� ����Ǿ����ϴ�." << endl;

				cout << endl;
				cout << "1 2 3" << "\t" << "4 5 6" << endl;
				cout << "-------------" << endl;

				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 6; j++) {
						if (j == 3) {
							//����� ��� "  " ���
							cout << "\t";
						}
						cout << seat[i][j] << " ";
					}
					cout << endl;
				}

			}
		}

		else if (a == 3) {
			cout << "���α׷��� �����մϴ�. " << endl;
			break;
		}
		else {
			cout << "�ùٸ� ���ڸ� �Է����ּ���." << endl;
		}
	}
}