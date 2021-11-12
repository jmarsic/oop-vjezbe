/*#include <iostream>

using namespace std;

int& retRef(int* arr, int at_indeks)
{
    int& ref = arr[at_indeks];
    return ref;

}

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout << "First check: " << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;    //ispis niza prije promjene
    }

    cout << " " << endl;

    retRef(arr, 1)++; //i-ti element uvecaj za 1

    cout << "Second check: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;    //ispis niza iza promjene
    }
}*/
