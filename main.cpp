#include <cmath>
#include <iostream>

using namespace std;
#define n 10

int main()
{
    int i;
    double x, sum = 0, add = 1;

    do
    {
        cout << "Input |x| < 1: ";
        cin>>x;
    }
    while(fabs(x) >= 1);

    for(i = 0; i <= n; add *= (i + 1) * x, ++i)
        sum += add;

    cout << "\nResult = " << sum;
    return 0;
}
