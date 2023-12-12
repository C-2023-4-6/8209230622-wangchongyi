#include<iostream>
using namespace std;
int fac(int i)
{
	int t;
	if (i == 1)
		t = 1;
	else
		t = 2 * (fac(i - 1) + 1);
	return(t);
}
int main()
{
	int i;
	cin >> i;
	fac(i);
	cout << fac(i);
}