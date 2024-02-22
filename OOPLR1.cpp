// OOP LR1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class date
{
    int day;
    int month;
    int year;

public:

    void setdate(void)
    {   
        int i=0;

        while(i==0)
        { 
            cout << "  Enter number of day ";
            cin >> day;
            cout << "  Enter number of month ";
            cin >> month;
            cout << "  Enter number of year ";
            cin >> year;
            

            if (day > 0 && month > 0 && year > 0 && day < 32 && month < 13)
            {
                i++;
            }
            else
            {
                cout << "!!! Check the data entered !!!\n";
            }
        }
      
    }

    void getdate(void)
    {   
        if (month < 10)
        {
            cout << day << ".0" << month << "." << year;
        }
        else
        {
            cout << day << "." << month << "." << year;
        }

    }
};

class employee
{
    int id;
    float salary;
    date dateofemployment;
    string position;

public:

    void setemployee()
    {
        cout << "\nEnter ID ";
        cin >> id;
        cout << "Enter salary ";
        cin >> salary;
        cout << "Enter date of employment "<<"\n";
        dateofemployment.setdate();
        cout << "Enter position ";
        cin >> position;


    }

    void getemployee()
    {
        cout << "\nID: " << id << "\nSalary: " << salary<<"\nDate of employment: ";
        dateofemployment.getdate();
        cout <<"\nposition: " << position<<"\n";


    }
};
    


int main()
{
    int n;
    int c=2;
    
    cout << "Enter number of emloyees ";
    cin >> n;

    employee* employees_ptr = new employee[n];

    for (int i = 0; i < n; i++)
    {
        (employees_ptr + i) -> setemployee();

    }

    while (c != 0)
    {
        cout << "\nEnter 0 to exit\nEnter 1 to display whole array\nEnter 2 to display one element of array\n";
        cin >> c;

        if (c == 0)
        {
            exit(0);
        }
        else if (c == 1)
        {
            for (int i = 0; i < n; i++)
            {
                (employees_ptr + i)->getemployee();
            }
        }
        else if (c == 2)
        {
            int p;
            cout << "Enter a number of employee\n";
            cin >> p;
            (employees_ptr + p - 1)->getemployee();
        }
    }
    
      
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
