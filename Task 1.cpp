// Написать перегруженные функции (int, double, char) для выполнения следующих задач:
// "инициализация матрицы"
// "определение максимального и минимального значения на главной диагонали"
// "вывод матрицы на экран"
// "сортировка элементов по возрастанию отдельно для каждой строки"

#include <iostream>
using namespace std;



// перегрузка функции "инициализация матрицы"
void InitializingMatrix(int **arr, int &count)
{

    for (int i = 0; i < count; i++)
    {
        arr[i] = new int[count];

        for (int j = 0; j < count; j++)
        {
            cout << "Введите " << "[" << i << "]" << "[" << j << "]" << " элемент " << endl;
            cin >> arr[i][j];
        }
    }
}
void InitializingMatrix(double **arr, int &count)
{

    for (int i = 0; i < count; i++)
    {
        arr[i] = new double[count];

        for (int j = 0; j < count; j++)
        {
            cout << "Введите " << "[" << i << "]" << "[" << j << "]" << " элемент " << endl;
            cin >> arr[i][j];
        }
    }
}
void InitializingMatrix(char **arr, int &count)
{

    for (int i = 0; i < count; i++)
    {
        arr[i] = new char[count];

        for (int j = 0; j < count; j++)
        {
            cout << "Введите " << "[" << i << "]" << "[" << j << "]" << " элемент " << endl;
            cin >> arr[i][j];
        }
    }
}


// перегрузка функции "определение максимального и минимального значения на главной диагонали"
void MaxMin(int **arr, int &count)
{
    int tmp_min = arr[0][0];
    int tmp_max = arr[0][0];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j && tmp_min > arr[i][j])
            {
                tmp_min = arr[i][j];
            }
            if (i == j && tmp_max < arr[i][j])
            {
                tmp_max = arr[i][j];
            }
        }
    }
    cout << "Максимальное значение главной диагонали: "
        << tmp_max << endl
        << "Минимальное значение главной диагонали: "
        << tmp_min << endl;
}
void MaxMin(double **arr, int &count)
{
    int tmp_min = arr[0][0];
    int tmp_max = arr[0][0];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j && tmp_min > arr[i][j])
            {
                tmp_min = arr[i][j];
            }
            if (i == j && tmp_max < arr[i][j])
            {
                tmp_max = arr[i][j];
            }
        }
    }
    cout << "Максимальное значение главной диагонали: "
        << tmp_max << endl
        << "Минимальное значение главной диагонали: "
        << tmp_min << endl;
}
void MaxMin(char **arr, int &count)
{
    int tmp_min = arr[0][0];
    int tmp_max = arr[0][0];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j && tmp_min > arr[i][j])
            {
                tmp_min = arr[i][j];
            }
            if (i == j && tmp_max < arr[i][j])
            {
                tmp_max = arr[i][j];
            }
        }
    }
    cout << "Максимальное значение главной диагонали: "
        << char(tmp_max) << endl
        << "Минимальное значение главной диагонали: "
        << char(tmp_min) << endl;
}


// перегрузка функции "вывод матрицы на экран"
void PrintMatrix(int **arr, int &count)
{
    cout << "\nВот ваша матрица!" << endl;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}
void PrintMatrix(double **arr, int &count)
{
    cout << "\nВот ваша матрица!" << endl;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}
void PrintMatrix(char **arr, int &count)
{
    cout << "\nВот ваша матрица!" << endl;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}


// перегрузка функции "сортировка элементов по возрастанию отдельно для каждой строки"
void SortMatrix(int **arr, int &count)
{
    cout << "\nПроведена сортировка элементов по возрастанию отдельно для каждой строки!";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            for (int k = count - 1; k > j; k--)
            {
                if (arr[i][k - 1] > arr[i][k])
                {
                    swap(arr[i][k - 1], arr[i][k]);
                }
            }
        }
    }
}
void SortMatrix(double **arr, int &count)
{
    cout << "\nПроведена сортировка элементов по возрастанию отдельно для каждой строки!";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            for (int k = count - 1; k > j; k--)
            {
                if (arr[i][k - 1] > arr[i][k])
                {
                    swap(arr[i][k - 1], arr[i][k]);
                }
            }
        }
    }
}
void SortMatrix(char **arr, int &count)
{
    cout << "\nПроведена сортировка элементов по возрастанию отдельно для каждой строки!";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            for (int k = count - 1; k > j; k--)
            {
                if (arr[i][k - 1] > arr[i][k])
                {
                    swap(arr[i][k - 1], arr[i][k]);
                }
            }
        }
    }
}


// перегрузка функции "очистка динамической памяти"
void ClearMatrix(int **arr, int &count)
{
    for (int i = 0; i < count; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
void ClearMatrix(double **arr, int &count)
{
    for (int i = 0; i < count; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
void ClearMatrix(char **arr, int &count)
{
    for (int i = 0; i < count; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}



int main()
{
    int MAX = 2;

    setlocale(LC_ALL, "");
    cout << "Добро пожаловать в программу демонстрации перегрузки функций!\nВыберите тип создаваемой матрицы\n1. тип int\n2. тип double\n3. тип char" << endl;
    int action;
    cin >> action;

    if (action == 1)        // 1. тип int
    {
        int **matrix = new int *[MAX];
        InitializingMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        MaxMin(*&matrix, MAX);
        SortMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        ClearMatrix(*&matrix, MAX);
    }
    else if (action == 2)   // 2. тип double
    {
        double **matrix = new double *[MAX];
        InitializingMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        MaxMin(*&matrix, MAX);
        SortMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        ClearMatrix(*&matrix, MAX);
    }
    else if (action == 3)   //3. тип char
    {
        char **matrix = new char *[MAX];
        InitializingMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        MaxMin(*&matrix, MAX);
        SortMatrix(*&matrix, MAX);
        PrintMatrix(*&matrix, MAX);
        ClearMatrix(*&matrix, MAX);
    }

    return 0;
}
