#include <iostream>
using namespace std; 

int main()
	{
	int height;
	cin >> height;
	if (height < 0) {
		cout << "error";
	}

	else {

		if (height > 170 && height < 300) {
			if (height == 180) {
				cout << "height ==180";
			}
			else {
				cout << "height > 170" << endl;
			}

		}
		else if (height < 170 && height < 300) {
			cout << "height < 170";
		}
		else {
			cout << "error";
		}
	}
}
