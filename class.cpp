#include <iostream>
using namespace std;

class employee
{
private:
    char name[20];
    int age, sal;

public:
    void getdata();
    void putdata();
};

void employee::getdata()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> sal;
}

void employee::putdata()
{
    cout << name << endl;
    cout << age << endl;
    cout << sal << endl;
}

int main()
{
    employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        emp[i].getdata();
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        emp[i].putdata();
    }
    return 0;
}
