#include <iostream>
using namespace std;

const int Rows = 3, Cols = 3;
void Func(int list[][Cols])
{
    int N_list[Cols][Rows];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            N_list[j][i] = list[i][j];
        }
    }

    for (int i = 0; i < Cols; i++)
    {
        for (int j = 0; j < Rows; j++)
        {
            cout << N_list[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int list[Rows][Cols];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            list[i][j] = i + j * Rows;
        }
    }
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    Func(list);
}