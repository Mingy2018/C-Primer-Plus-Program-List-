// strtype3.cpp -- more string class features
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assignment for string objects and character arrays
	str1 = str2;
	strcpy_s(charr1, charr2); // copy charr2 to charr1

	// appending for string objects and character arrays
	str1 += " paste";
	strcat_s(charr1, " juice");

	//finding the length of a string object and a C-style string
	int len1 = str1.size();// obtain length of strl
	int len2 = strlen(charr1);// obtain length of charr1

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
	return 0;
}