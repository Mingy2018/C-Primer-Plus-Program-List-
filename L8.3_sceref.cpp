// secref.cpp -- defining and using a reference
#include<iostream>
int main() {
	using namespace std;
	int rats = 101;
	int & rodents = rats; // rodents is a reference 
	cout << "rats = " << rats << ", rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;// can we change a reference ?
	// means the same as: rats = bunnies
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents<<endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents<<endl;
	return 0;
}
// 'rodents = bunnies' is equivalent to 'rats = bunnies'
