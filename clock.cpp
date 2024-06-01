#include<iostream>
#include<Windows.h>
using namespace std;

int main() {
	int hours = 0;
	int min = 0;
	int sec = 0;

	cout << "Hours : "; cin >> hours;
	cout << "Min : "; cin >> min;
	cout << "Sec : "; cin >> sec;
	while (true) {
        system("CLS");
		if(sec > 59){
			min++;
			sec = 0;
		}
		if (min > 59) {
			hours++;
			min = 0;
		}
		if (hours > 23)hours = 0;
		cout << hours << ":" << min << ":" << sec << "\n";;
		sec++;
		Sleep(1000);// take time
	}
	return 0;
}