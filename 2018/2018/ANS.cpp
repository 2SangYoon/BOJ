#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;

    cin >> N;

    int cnt = 1;
    int start = 1;
    int end = 1;
    int sum = 1;

    while (end != N)
    {
        if (sum == N)
        {
            cnt++;
            end++;
            sum += end;
        }
        else if (sum > N)
        {
            sum -= start;
            start++;
        }
        else
        {
            end++;
            sum += end;
        }
    }

    cout << cnt;

}