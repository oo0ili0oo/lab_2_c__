#include <cmath>
#include <iostream>
#include <limits>

using namespace std;
#define n 10

double check(){
    double y;
    do
    {
        cin.clear();
        cin.sync();
        cin>>y;
        if(cin.fail())
            cout<<"That is not number!\n";
        else if (fabs(y) >= 1)
            cout << "Try again\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }while(cin.fail()||fabs(y) >= 1);
    return y;
}

int main()
{
    int i;
    double x, sum = 0, add = 1;


    cout << "Input |x| < 1: ";
    x = check();

    for(i = 0; i <= n; add *= (i + 1) * x, ++i)
        sum += add;

    cout << "\nResult = " << sum;
    return 0;
}
