/*
	Nama	    : Muhammad Iqbal arrlif Fadilla
	Kelas	    : B
	NPM 	    : 140810180020
	Deskripsi   : Sequential Search
*/

#include <iostream>
using namespace std;

int main()
{
    int n, target, arr[100], index;
    bool found = false;
    cout << "\nInput the amount of data =  ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nInput target : ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            index = i;
            i = n;
        }
    }
    if (found == true)
    {
        cout << "Data found at index " << index + 1 << endl;
    }
    else
    {
        cout << "Data not found" << endl;
    }
    return 0;
}