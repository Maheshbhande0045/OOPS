#include <iostream>
using namespace std;

class Sorting
{
private:
    int arr[100], n;

public:
    void Read();
    void Display();
    void swap(int j);
    void sorting();
};

void Sorting::Read()
{
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Sorting::Display()
{
    // cout << "The Final Array Is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void Sorting::swap(int j)
{
    int temp;
    temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
}

void Sorting::sorting()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(j);
            }
        }
    }
}


int main()
{
    Sorting S;
    S.Read();
    cout << "\nArray before sorting:\n";
    S.Display();
    S.sorting();
    cout << "\nArray after sorting:\n";
    S.Display();
    return 0;
}
