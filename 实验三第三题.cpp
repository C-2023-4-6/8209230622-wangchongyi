#include<iostream>
#include<iomanip>
using namespace std;
//�����¶ȵ������¶�
double celsius_to_fah(double cel) 
{
	double i = 9 * cel / 5 + 32;
	cout << "�����¶�" << cel << "��Ӧ�Ļ����¶�Ϊ" << setprecision(4)<<i << endl;
	return i;
}
//�����¶ȵ������¶�
double fahrenheit_to_cels(double fah)
{
	double k = (fah - 32) * 5 / 9;
	cout << "�����¶�" << fah << "��Ӧ�������¶�Ϊ" << setprecision(4)<<k << endl;
	return k;
}
int main()
{
	double cel, fah;
	cout << "�����������¶�cel" << endl;
	cin >> cel;
	celsius_to_fah(cel);
	cout << "�����뻪���¶�fah" << endl;
	cin >> fah;
	fahrenheit_to_cels(fah);
	return 0;
}