#include<iostream>
using namespace std;

void insertion(int arr[], int element, int index, int& size)
{
    
    for(int i = size; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
     size++;
    arr[index] = element;
    
   
}

int main()
{
    int size = 5;
    int arr[100] = {1, 2, 3, 4, 5};
    insertion(arr, 9, 0, size);

    for(int  i = 0; i <= size-1; i++)
    {
        cout << "Elements after insertion are: " << arr[i] << endl;
    }
    return 0;
}