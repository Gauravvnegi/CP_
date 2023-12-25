#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long moves = 0; // Using long long to handle large input values

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < arr[i - 1])
        {
            // If the current element is smaller than the previous one, increase it and update moves
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << moves << endl;

    return 0;
}
`