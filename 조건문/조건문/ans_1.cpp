#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double A, B;
    cin >> A >> B;

    if (A > B)
        cout << ">";
    else if (A == B)
        cout << "==";
    else
        cout << "<";
}