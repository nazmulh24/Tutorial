#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
        cout << i << endl;
    }
    cout << endl
         << sum << endl;

    return 0;
}
