#include <iostream>
using namespace std;

class Numbersum
{
private:
    int start, end;
    int oddsum = 0;
    int evensum = 0;

public:
    void Range();
    void sum();
    int geteven_sum();
    int getodd_sum();
};

void Numbersum::Range()
{
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
}

void Numbersum::sum()
{
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            evensum += i;
        else
            oddsum += i;
    }
}

int Numbersum::geteven_sum()
{
    return evensum;
}


int Numbersum::getodd_sum()
{
    return oddsum;
}

void display(Numbersum N)
{
    cout << "Even sum of numbers: " << N.geteven_sum() << endl;
    cout << "Odd sum of numbers : " << N.getodd_sum() << endl;
}

int main()
{
    Numbersum N;
    N.Range();
    N.sum();
    display(N);
    return 0;
}
