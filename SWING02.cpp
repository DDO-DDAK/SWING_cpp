#include<iostream>
using namespace std;

int main()
{
	int seat[10][6] = { };
	int a, width, length, new_length, new_width;

	while (1) {
		cout << "** 비행기 좌석 예약 시스템 **\n" << endl;
		cout << "1. 신규예약 " << endl;
		cout << "2. 예약 변경" << endl;
		cout << "3. 프로그램 종료\n" << endl;
		cout << "번호를 입력하세요: ";
		cin >> a;

		//1을 입력한 경우
		if (a == 1) {
			cout << endl;
			cout << "1 2 3" << "\t" << "4 5 6" << endl;
			cout << "-------------" << endl;

			//for문을 이용하여 통로가 있는 비행기 좌석 출력하기
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 6; j++) {
					if (j == 3) {
						//통로일 경우 "  " 출력
						cout << "\t";
					}
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}

			cout << "몇열, 몇번째 좌석을 예약하시겠습니까? ";
			cin >> width >> length;

			if (seat[width - 1][length - 1] == 1) {

				cout << "이미 예약된 좌석입니다." << endl;
			}
			else {
				seat[width - 1][length - 1] = 1;
				cout << "예약되었습니다." << endl;

				cout << endl;
				cout << "1 2 3" << "\t" << "4 5 6" << endl;
				cout << "-------------" << endl;

				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 6; j++) {
						if (j == 3) {
							//통로일 경우 "  " 출력
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
						//통로일 경우 "  " 출력
						cout << "\t";
					}
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}


			cout << endl << "현재 좌석과 변경하고자 하는 좌석을 각각 열, 번호 순서로 입력해 주세요: ";
			cin >> width >> length >> new_width >> new_length;

			if (seat[width-1][length-1] == 0) {

				cout << "좌석을 정확히 입력해 주세요." << endl;
			}

			else if (seat[new_width - 1][new_length - 1] == 1) {

				cout << "이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요." << endl;
			}

			else {
				seat[new_width - 1][new_length - 1] = 1;
				seat[width - 1][length - 1] = 0;

				cout << "좌석이 변경되었습니다." << endl;

				cout << endl;
				cout << "1 2 3" << "\t" << "4 5 6" << endl;
				cout << "-------------" << endl;

				for (int i = 0; i < 10; i++) {
					for (int j = 0; j < 6; j++) {
						if (j == 3) {
							//통로일 경우 "  " 출력
							cout << "\t";
						}
						cout << seat[i][j] << " ";
					}
					cout << endl;
				}

			}
		}

		else if (a == 3) {
			cout << "프로그램을 종료합니다. " << endl;
			break;
		}
		else {
			cout << "올바른 숫자를 입력해주세요." << endl;
		}
	}
}