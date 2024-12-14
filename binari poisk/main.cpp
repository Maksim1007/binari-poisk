//Поиск в массиве.
//Задание 2.
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите точку отсчета: ";
    int point;
    std::cin >> point;
    int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    int middle = (left + right) / 2;
    while (left < right)
    {
        if (arr[middle] == point)
        {
            left = middle;
        }
        if (arr[middle] > point)
        {
            right = middle - 1;
        }
        if (arr[middle] < point)
        {
            left = middle + 1;
        }
        middle = (left + right) / 2;

        std::cout << "Количество элементов в массиве больших чем " << point << " : " << size - middle;
        break;
    }
}