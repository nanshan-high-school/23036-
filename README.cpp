# 23036-
日曆
#include<iostream>

using namespace std;

int months(int);

int main () {
	int year, month, day, daysY = 0;
	cout << "幾年?";
	cin >> year;
	cout << "幾月?";
	cin >> month;
	cout << "一號星期幾?";
	cin >> day;
	cout << "一 二 三 四 五 六 日 \n";
	for (int i = 1; i < day; i++){
		cout << "   ";
		daysY ++;
	}
	for(int date = 1, daysM = 0; month < 13;){
		if (date < 10){
			cout << "0";
		}
		cout << date << " ";
		daysY++;
		date++;
		daysM = months(month);
		if (daysM == 28){
			if (year % 400 == 0){
				daysM += 1;
			} else if (year % 100 == 0){
				daysM = daysM;
			} else if (year % 4 == 0){
				daysM = daysM + 1;
			}
		}
		if (date == daysM + 1){
			date = 1;
			month ++;
			cout << endl;
			cout << "一 二 三 四 五 六 日 \n";
			for (int i = daysY % 7, j = 0; j < i; j++){
				cout << "   ";
			}
		}
		if (daysY % 7 == 0){
			cout << endl;
		}
	}
	return 0;
} 

int months(int month){
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			month = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			month = 30;
			break;
		case 2:
			month = 28;
			break;
		default:
			break;
	}
	return month;
}
