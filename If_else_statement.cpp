#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "large is " << a << endl;
    else if (b > a && b > c)
        cout << "large is " << b << endl;
    else
        cout << "large is " << c << endl;
    return 0;
}
