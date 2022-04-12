#include <iostream>
#include <Windows.h> 
#include <conio.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };
void screen_exit();
void inout_screen_exit();
void screen1();
void inout_scren1();
void text();
void input(int &a, int &b, int &q, int &k, int &c, int &d);
void errorr(int error);
int rec(int a, int b, int q, int k, int c, int d, int sum, int chet);
void summa(int a, int b, int q, int k, int c, int d,int sum,int &chet);
void vivod(int chet);
int main() {
	int a = 0, b = 0,q = 0, k = 0,  c = 0,  d = 0,  sum = 0,  chet = 0;
	setlocale(LC_ALL, "rus");
	bool proverka = true;
	char chose;
	setlocale(LC_ALL, "rus");
	screen1();
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		text();
		input(a, b, q, k, c, d);
		summa(a, b, q, k, c, d, sum, chet);
		vivod(chet);
		cout << endl;
		system("pause");
		screen_exit();
	}
	else if (chose == 27) {
		system("cls");
		screen_exit();
	}
	return 0;
}
void screen_exit()
{
	system("cls");
	int height = 7;
	int weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	inout_screen_exit();
	bool proverka = true;
	char chose;
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		text();
	}
	else if (chose == 27) {
		system("cls");
		exit(0);
	}
}
void inout_screen_exit()
{
	position = { 2, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion completed it's work";
	position = { 14, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion";
	position = { 17, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Group 1092";
	position = { 16, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Fedenko Efim";
	position = { 7, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Escape-exit";
	position = { 25, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Enter-continue";
}
void screen1()
{
	int height = 7;
	int weight = 45;
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == weight -0) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 0)
				cout << "|";
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++)
		cout << "-";
	cout << "\n";
	inout_scren1();
}
void inout_scren1() {
	position = { 14, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Program recursion";
	position = { 17, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Group 1092";
	position = { 16, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Fedenko Efim";
	position = { 7, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Escape-exit";
	position = { 25, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Enter-continue";
}
void text() {
	position = { 20, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cout<<"a";
	position = { 20, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "b";
	position = { 20, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "q";
	position = { 20, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "k";
	position = { 20, 6 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "c";
	position = { 20, 7 };
	SetConsoleCursorPosition(hConsole, position);
	cout<< "d";
}
void input(int &a,int &b,int &q,int &k,int &c,int &d) {
    a = 0, b = 0, q = 0, k = 0, c = 0, d = 0;
	int error = 0;
	errorr(error);
	position = { 22, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> a;
	position = { 22, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> b;
	position = { 22, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> q;
	do {
		error++;
		position = { 22, 5 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> k;
		errorr(error);
	} while (k < 0);
	error = 0;
	errorr(error);
	position = { 22, 6 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> c;
	do {
		error++;
		position = { 22, 7 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> d;
		errorr(error);
	} while (d < c);
	error = 0;
	errorr(error);
	cout << endl;
}
void errorr(int error) {
	if (error > 0) {
		position = { 22, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "Error";
	}
	else {
		position = { 22, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "Good!";
	}
}
int rec(int a, int b, int q, int k,int c,int d,int sum,int chet) {
		if (k ==0) {
			return a;
		}
		else {
			return q * rec(a,b,q,k-1,c,d,sum,chet) + b;
		}
}
void summa(int a, int b, int q, int k, int c, int d,int sum,int &chet) {
	for (int i = k + 1; i > 0; i--) {
		if (c <= rec(a, b, q, i, c, d, sum, chet) && rec(a, b, q, i, c, d, sum, chet) <= d) {
			cout << "i=" << i << '\t';
			cout << rec(a, b, q, i, c, d, sum, chet) << endl;
			chet++;
		}
	}
}
void vivod(int chet) {
	cout <<"sum" << chet;
}

