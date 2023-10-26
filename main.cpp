#include <iostream>
using namespace std;
#define rows 3
#define cols 3

void Func(int list[][rows])
{
    int N_list[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            N_list[i][j] = list[j][i];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << N_list[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int list[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            list[i][j] = i + j * rows;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    Func(list);
}
