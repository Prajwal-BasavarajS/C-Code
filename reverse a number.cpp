#include <iostream>
using namespace std;

int main()
{
    int n, revnum = 0, lastdigit;
    cin >> n;
    while (n > 0)
    {
        lastdigit = n % 10;
        revnum = (revnum * 10) + lastdigit;
        n = n / 10;
        /* code */
    }
    cout << revnum;
}