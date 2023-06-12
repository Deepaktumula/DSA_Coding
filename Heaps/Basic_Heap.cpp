#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int *arr;
    int size;

    Heap(int size)
    {
        this->size = 0;
        arr = new int[size];
    }

    // Insertion
    void insertion(int value)
    {
        // Value insert KAro End ma
        size = size + 1;
        int index = size;
        arr[index] = value;
        // Iss Value ko right jagah par lekar jao
        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    // Deletion
    int remove()
    {
        int ans = arr[1];
        // Replace Root Node value with last node
        arr[1] = arr[size];
        size--;

        // Place root node ka data on its correct place
        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }

            if (largest == index)
            {
                // value is at correct position
                break;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
};

int main()
{
    Heap h(6);
    h.insertion(50);
    h.insertion(30);
    h.insertion(70);
    h.insertion(40);
    h.insertion(80);
    h.insertion(100);
    // h.insertion(100);
    // h.insertion(50);
    // h.insertion(40);
    // h.insertion(45);
    // h.insertion(60);
    // h.insertion(52);
    // h.insertion(57);
    cout << "Printing the Heap :: " << endl;
    for (int i = 1; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    h.remove();

    for (int i = 1; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    return 0;
}