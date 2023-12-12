#include<iostream>
using namespace std;


int main()
{
	int tep;
	int listSize = 10;
	int list[10];
	for(int i=0;i<10;i++)
	{
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				tep=list[j+1];
				list[j + 1] = list[j];
				list[j] = tep;
				changed = true;
			}
		}
	} while (changed==true);
	for(int k=0;k<10;k++)
	{
		cout << list[k]<<" ";
	}
	return 0;
}