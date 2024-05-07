#include<iostream>
using namespace std;

void del(int arr[], int index)
{
    int size;
    for(int i = 0; i<=index; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}

int main()
{
    int size = 5;
    int arr[100] = {1, 2, 3, 4, 5};
    del(arr, 0);

    for(int  i = 0; i <= size-1; i++)
    {
        cout << "Elements after insertion are: " << arr[i] << endl;
    }
    return 0;
}