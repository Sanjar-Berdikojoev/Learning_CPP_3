// Second_Home_Work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    double* array = nullptr;
    int array_size = 0;
    int array_value = 0;
    int i;

    cout << "Enter array size (Array value should not be more than 100) ";
    cin >> array_size;

    array = new double[array_size];
 
    if (array_size > 100)
    {
        cout << "------I have predicted you!------";
        exit(0);
        delete[] array;
        array = nullptr;
    }

    vector <double> arr;

    for (i = 0; i < array_size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
        arr.push_back(array[i]);
    }

    cout << "Before sorting:" << endl;

    for (i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "After sorting:" << endl;

    sort(arr.begin(), arr.end());

    for (i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "After reverse sorting:" << endl;

    sort(arr.begin(), arr.end(), [](double a, double b)
    {
        return a > b;
    });

    for (i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] array;
    array = nullptr;
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
