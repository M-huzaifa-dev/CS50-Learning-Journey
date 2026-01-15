#include <iostream>
using namespace std;

int main()
{
    int *list = new int[3];
    if (list == nullptr)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = new int[3];
    // copy old list into new list
    if (tmp == nullptr)
    {
        delete[] list;
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {

        tmp[i] = list[i];
    }
    // tmp[3] = 4;
    delete[] list;
    list = tmp;

    for (int i = 0; i < 3; i++)
    {
        cout << list[i] << endl;
    }

    delete[] list;

    return 0;
}