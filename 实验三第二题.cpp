#include<iostream>

#include<iomanip>

using namespace std;

bool is_prime(int num);

int main()

{

    int a= 0;

    for (int i = 2;; i++)

    {

        if (is_prime(i))

        {

            cout <<  i << " ";

            a++;

            if (a > 0 && (a % 10 == 0)) { cout << endl; }

        }

        if (a ==200) { break; }

    }

    return 0;

}

bool is_prime(int num)

{

    

    bool prime = true;

    for (int i = 2; i < num; i++)

    {

        if (num % i == 0) {

            prime = false;

            break;

        }

    }

    return prime;

}