#include <iostream>

using namespace std;

int rec_Min_Max(int* arr, int arrSize, int* min, int* max)
{
    if(arrSize < 0)
    {
        return 1;
    }

    if(*min > arr[arrSize])
    {
        *min = arr[arrSize];
    }

    if(*max < arr[arrSize])
    {
        *max = arr[arrSize];
    }
    return rec_Min_Max(arr, arrSize-1, min, max);
}

int main()
{
    int arr[] = {2,5,8,9,1};
    int min = arr[0];
    int max = arr[0];
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    rec_Min_Max(arr, arrSize, &min, &max);
    cout << "Min is " << min <<", max is " << max << endl;
}
