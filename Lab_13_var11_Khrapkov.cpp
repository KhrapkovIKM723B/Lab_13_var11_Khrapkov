#include <iostream>
#include <iomanip> 
using namespace std;

double term(int n)
{
    if (n == 1)
    {
        return 3.0;
    }
    else {
        return term(n - 1) + 0.3;
    }
}

int main() 
{
    int n;
    cout << "Enter n!: ";
    cin >> n;

    if (n < 1 || n > 11)
    {
        cout << "Please enter a term number from 1 to 11." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "! = " << fixed << setprecision(1) << term(i) << endl;
    }

    return 0;
}
