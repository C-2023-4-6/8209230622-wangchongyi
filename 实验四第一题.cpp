#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n = 0;
	while(n<10)
	{
		cin >> a[n];
		n++;
	}
	for (int i = 0; i < 10; i++)
	{
		for(int k=i+1;k<10;k++)
		{
			if (a[i] != a[k])
			{
				if (k == 9)cout << a[i]<<" ";
				continue;
			}
			else
				break;
		}
	}
	cout << a[9];
	
	cout << endl;
	return 0;
	
}