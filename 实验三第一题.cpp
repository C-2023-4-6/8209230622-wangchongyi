#include<iostream>
using namespace std;

int ka(int a, int b) {
	int i = a < b ? a : b;
	
	while (a % i != 0 || b % i != 0) { i--; }
	cout << "m,n的最大公约数是 " << i << endl;
	return i;

}
int ja(int c, int d) {
	int j = c > d ? c : d;
	while (j % c != 0 ||j % d != 0) { j++; }
	cout << "m,n的最小公倍数是" << j << endl;
	return j;
}
int main() {
	int m, n;
	cout << "请输入两个自然数 ";
	cin >> m >> n;
	ka(m, n);
	ja(m, n);
	
	return 0;
}