/*
	Nama	    : Muhammad Iqbal Alif Fadilla
	Kelas	    : B
	NPM 	    : 140810180020
	Deskripsi   : Mencari nilai maksimal
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, maks, i;

    cout << "Masukkan Banyak Angka : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Bilangan ke - " << i + 1 << " : ";
        cin >> arr[i];
    }

    maks = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maks)
            maks = arr[i];
    }
    cout << "Nilai Maksimal = " << maks << endl;
}