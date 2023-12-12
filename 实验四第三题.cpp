#include<iostream>
using namespace std;

int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int k = j; k < 100; k += j + 1) {
			if (arr[k])
				arr[k] = false;
			else
				arr[k] = true;
	}
		
	}
	for (int m = 0; m< 100; m++)
	{
		if (arr[m])cout << m + 1 << " ";
	}
	return 0;
	
}