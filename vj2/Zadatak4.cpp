#include <iostream>

using namespace std;

struct IntVektor {
    int* arr;
    int last_element = 0; // ind slob polja
    int current_max;

    void vector_new(int n)
    {
        arr = new int[n];
        current_max = n;
    }

    void vector_delete()
    {
        delete[] arr;
    }

    void vector_push_back(int x)
    {
        if(last_element == current_max)
        {
            vector_realloc(current_max * 2);
        }
        arr[last_element] = x;
        last_element++;
    }

    void vector_pop_back()
    {
        if(last_element != 0)
        {
            last_element--;
        }
    }

    const int& vector_front()
    {
        int& ref = arr[0];
        return ref;
    }

    const int& vector_back()
    {
        if(last_element != 0)
        {
            int& ref = arr[last_element - 1];
        }
        return ref;
    }

    const int vector_size()
    {
        return last_element;
    }

    void vector_realloc(int n)
    {
        int* novi = new int[n];
        current_max = n;
        for(int i = 0; i < last_element; i++)
        {
            novi[i] = arr[i];
        }
        delete[] arr;
        arr = novi;
    }
}typedef IntVektor;

int main()
{
    IntVektor main_arr;

    main_arr.vector_new(3);

    main_arr.vector_push_back(2);
    main_arr.vector_pop_back();
    main_arr.vector_push_back(3);


    cout << endl << endl;

    cout << "El. arr: ";
    for(int i = 0; i < main_arr.last_element; i++)
    {
        cout << main_arr.arr[i] << " ";
    }

    cout << endl << "Indeks next free: " << main_arr.last_element << endl;
    cout << "First el. arr: " << main_arr.vector_front() << endl;
    cout << "Last el. arr: " << main_arr.vector_back() << endl;
    cout << "El. in arr: " << main_arr.vector_size() << endl;
    cout << "Num alocations: " << main_arr.current_max << endl;

    main_arr.vector_delete();
}

