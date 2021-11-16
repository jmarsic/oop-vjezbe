#include <iostream>
#include <vector>

using namespace std;

void enterElementsV1(vector<int>& vector1, int n)
{
    int i = 0, num;
    cout << "Enter " << n << " elements: " << endl;
    while (i < n)
    {
        cin >> num;
        vector1.push_back(num);
        ++i;
    }
}

void enterElementsV2(vector<int>& vector2, int bottom, int top)
{
    int i = bottom;
    cout << "\nEnter num between: " << endl;
    while (i >= bottom && i <= top)
    {
        cin >> i;
        if (i >= bottom && i <= top)
        {
            vector2.push_back(i);
        }
    }
    printf("Done!\n");
}

void newVector(vector<int>& vector1, vector<int>& vector2, vector<int>& vector3)
{
    int i, j;
    for (i = 0; i < vector1.size(); i++)
    {
        bool check;
        for (j = 0; j < vector2.size(); j++)
        {
            if (vector1[i] == vector2[j])
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            int temp = vector1[i];
            vector3.push_back(temp);
        }
    }
}

void printVector(vector<int> vector3)
{
    for (int i = 0; i < vector3.size(); i++)
    {
        cout << vector3[i] << " ";
    }
}

int main()
{
    int n, bottom, top;
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    cout << "Number of elements in first vector: " << endl;
    cin >> n;

    cout << "Enter bottom: " << endl;
    cin >> bottom;

    cout << "Enter top: " << endl;
    cin >> top;

    enterElementsV1(vector1, n);
    enterElementsV2(vector2, bottom, top);
    newVector(vector1, vector2, vector3);
    printVector(vector3);

    return 0;
}