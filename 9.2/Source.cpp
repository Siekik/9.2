#include <iostream>
using namespace std;

bool issortedincreasing(int x[6]);
bool issorteddecreasing(int x[6]);
bool hasadjacentduplicates(int x[6]);
bool hasduplicates(int x[6], int size);


int main() {
	int x[6];
	int size = 6;
	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> x[i];
	}
	
	if (issortedincreasing(x) == true) {
		cout << "The data is increasing";
	}
	else if (issortedincreasing(x) == false) {
		cout << "The data is not increasing";
	}
	if (issorteddecreasing(x) == true) {
		cout << endl << "The data is decreasing";
	}
	else if (issorteddecreasing(x) == false) {
		cout << endl << "The data is not decreasing";
	}
	if (hasadjacentduplicates(x) == true) {
		cout << endl << "The data has adjacent duplicates";
	}
	else if (hasadjacentduplicates(x) == false) {
		cout << endl << "The data does not have adjacent duplicates";
	}
	if (hasduplicates(x,size) == true) {
		cout << endl << "The data has duplicates";
	}
	else if (hasduplicates(x, size) == false) {
		cout << endl << "The data does not have duplicates";
	}
}

bool issortedincreasing(int x[6]) {
	if (x[0] <= x[1] && x[1] <= x[2] && x[2] <= x[3] && x[3] <= x[4] && x[4] <= x[5]) {
		return true;
	}
	else return false;
}
bool issorteddecreasing(int x[6]) {
	if (x[5] <= x[4] && x[4] <= x[3] && x[3] <= x[2] && x[2] <= x[1]) {
		return true;
	}
	else return false;
}
bool hasadjacentduplicates(int x[6]) {
	if (x[0] == x[1] || x[1] == x[2] || x[2] == x[3] || x[3] == x[4] || x[4] == x[5] || x[5] == x[6]) {
		return true;
	}
	else return false;
}
bool hasduplicates(int x[6], int size) {
	bool p = false;
	for (int i = 0; i < 6; i++) {
		for (int n = 0; n < 6; n++) {
			if (n != i) {
				if (x[i] == x[n]) {
					p = true;
					break;
				}
			}
		}
	}
	return p;
}