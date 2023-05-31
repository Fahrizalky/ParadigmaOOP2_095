#include <iostream>
using namespace std;

class orang {
private:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur" << umur << "\n" << endl;
	}
};
