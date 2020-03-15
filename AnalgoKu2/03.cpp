/*
	Nama	    : Muhammad Iqbal Alif Fadilla
	Kelas   	: B
	NPM 	    : 140810180020
	Deskripsi   : Binary Search
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, arr[100], target, low, high, mid;
    cout << "\nInput the amount of data : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "\nInput target : ";
    cin >> target;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] == target)
        {
            cout << target << " found at index-" << mid + 1 << endl;
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    if (low > high)
    {
        cout << target << " not found" << endl;
    }
    return 0;
}