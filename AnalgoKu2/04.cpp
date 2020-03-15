/*
	Nama	    : Muhammad Iqbal Alif Fadilla
	Kelas	    : B
	NPM 	    : 140810180020
	Deskripsi   : Insertion search
*/

#include <iostream>
using namespace std;

int arr[100], arr2[100], n;

void InsertionSort()
{
    int temp, i, j;
    for (i = 1; i <= n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    cout << "Input the amount of data : ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    InsertionSort();
    cout << "\nOutput : " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}