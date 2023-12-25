#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    // vector<int> arr;
    cin >> n;
    long long aSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long val;
        cin >> val;
        // arr.push_back(val);
        aSum += val;
    }
    long long tSum = n * (n + 1) / 2;
    cout << tSum - aSum << endl;
    return 0;
}