#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int rem, count = 0;

    while (n > 0)
    {
        rem = n % 10;
        count++;
        n = n / 10;
    }
    cout << count;
    return 0;
}
