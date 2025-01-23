#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1; // Initialize all indices to -1
    }

    int minidx = INT_MAX; // Use INT_MAX to find the minimum index

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            // Found a repeating element
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            // Mark the first occurrence of this element
            idx[a[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl; // No repeating elements
    }
    else
    {
        cout << minidx + 1 << endl; // Output 1-based index of first repeating element
    }

    return 0;
}