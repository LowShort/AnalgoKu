/*
	Nama	    : Muhammad Iqbal Alif Fadilla
	Kelas	    : B
	NPM 	    : 140810180020
	Deskripsi   : Selection Sort
*/

#include <iostream>
using namespace std;

int arr[100], arr2[100];
int n;

void swap(int a, int b)
{
    int t;
    t = arr[b];
    arr[b] = arr[a];
    arr[a] = t;
}

void SelectionSort()
{
    int pos, i, j;
    for (i = 1; i <= n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j <= n; j++)
        {
            if (arr[j] < arr[pos])
                pos = j;
        }
        if (pos != i)
            swap(pos, i);
    }
}

int main()
{
    cout << "\nInput the amount of data : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    SelectionSort();
    cout << "Output : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}