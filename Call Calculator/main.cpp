#include <iostream>
using namespace std;

int main()
{
    int callDuration;
	double amount;
	cin >> callDuration;
	
	if (callDuration < 10) {
		amount = 5;
	}
	
	if (callDuration >= 10) {
		amount = callDuration * .50;
	}
 
	if (callDuration > 30) {
		int minutesOver = callDuration - 30;
		amount = 15 + (minutesOver * .30);
	}
	
	cout << amount;
}
