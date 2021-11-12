#include <iostream>

using namespace std;


void find_Min_Max(int *arr, int arrSize, int *min, int *max)
{
    for(int i = 0; i < arrSize; i++)
    {
        if(*min > arr[i])
        {
            *min = arr[i];
        }
        if(*max < arr[i])
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int arr[] = {2,5,8,1,7,-1};
    int min = arr[0];
    int max = arr[0];
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    find_Min_Max(arr, arrSize, &min, &max);

    cout << "Min is " << min << ", max is " << max << endl;
    return 0;
}
