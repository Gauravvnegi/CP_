#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dnaSequence;
    cin >> dnaSequence;

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < dnaSequence.length(); ++i)
    {
        if (dnaSequence[i] == dnaSequence[i - 1])
        {
            // If the current character is the same as the previous one, increase the length
            currentLength++;
        }
        else
        {
            // If the current character is different, update the maximum length and reset current length
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    // Update the maximum length in case the longest repetition is at the end of the sequence
    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;

    return 0;
}
