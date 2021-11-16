#include <iostream>

using namespace std;

void minMax(int* arr, int& el, int& max, int& min)
{
    for (int i = 0; i < el; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
}

int main()
{
    int min = 100, max = 0, el;
    int& max_ref = max;
    int& min_ref = min;
    int& elements = el;
    cout << "Enter how much elements: " << endl;
    cin >> el;
    int* arr = new int(el);

    for (int i = 0; i < el; i++)
    {
        cin >> arr[i];
    }

    minMax(arr, elements, max_ref, min_ref);

    cout << "Min " << min << ", max " << max << endl;

}