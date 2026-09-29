#include <iostream>
using namespace std;

class Basicinfo
{
protected:
    char name[30];
    int imp_id;

public:
    Basicinfo()
    {
        cout << "Enter name of the employee: ";
        cin >> name;

        cout << "Enter employee ID: ";
        cin >> imp_id;
    }

    void display_basic()
    {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << imp_id << endl;
    }
};

class Dept_info
{
protected:
    char Dept_name[15];
    char Workassign[50];

public:
    Dept_info()
    {
        cout << "Enter department name: ";
        cin >> Dept_name;

        cout << "Work assigned: ";
        cin >> Workassign;
    }

    void display_dept()
    {
        cout << "Department: " << Dept_name << endl;
        cout << "Work Assigned: " << Workassign << endl;
    }
};

class EmployeInfo : public Basicinfo, public Dept_info
{
public:
    void display_info()
    {
        cout << "\nEmployee Information" << endl;

        display_basic();
        display_dept();
    }
};

int main()
{
    int n;

    cout << "Enter no of employees: ";
    cin >> n;

    if (n <= 0 || n > 50)
    {
        cout << "Please enter employees between 1 and 50." << endl;
        return 0;

        EmployeInfo *Emp = new EmployeInfo[n];

        cout << "\n";

        for (int i = 0; i < n; i++)
        {
            cout << "Employee " << i + 1 << " information:" << endl;
            Emp[i].display_info();
            cout << endl;
        }

        delete[] Emp;

        return 0;
    }
