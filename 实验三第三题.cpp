#include<iostream>
#include<iomanip>
using namespace std;
//摄氏温度到华氏温度
double celsius_to_fah(double cel) 
{
	double i = 9 * cel / 5 + 32;
	cout << "摄氏温度" << cel << "对应的华氏温度为" << setprecision(4)<<i << endl;
	return i;
}
//华氏温度到摄氏温度
double fahrenheit_to_cels(double fah)
{
	double k = (fah - 32) * 5 / 9;
	cout << "华氏温度" << fah << "对应的摄氏温度为" << setprecision(4)<<k << endl;
	return k;
}
int main()
{
	double cel, fah;
	cout << "请输入摄氏温度cel" << endl;
	cin >> cel;
	celsius_to_fah(cel);
	cout << "请输入华氏温度fah" << endl;
	cin >> fah;
	fahrenheit_to_cels(fah);
	return 0;
}