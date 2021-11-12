#include <iostream>

using namespace std;

struct {
    int a, b;
}typedef Rectangle;

struct {
    int diameter;
}typedef Circle;

int slice(const Circle& circ, const Rectangle (&arr)[3])
{
    int counter = 0;
    for(int i = 0; i < 3; i++)
    {
        if(arr[i].a > circ.diameter || arr[i].b > circ.diameter)
        {
			counter += 1;
        }
    }
    return counter;
}

int main()
{
    Circle circle = {.diameter = 10};
    const Circle& circ = circle;

    Rectangle rec1 = {.a = 2, .b = 3};
    Rectangle rec2 = {.a = 30, .b = 5};
    Rectangle rec3 = {.a = 15, .b = 4};

    const Rectangle arr_rec[3] = {rec1, rec2, rec3};
    const Rectangle& arr_ref = arr_rec[3];

    cout << "Slicing " << slice(circ, arr_rec) << " rectangles." << endl;
}

