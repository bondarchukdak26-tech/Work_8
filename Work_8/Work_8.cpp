#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task 1

    const int n = 2;
    const int m = 4;
    double x[n][m];

    cout << "\tTask 1 \n" << endl;
    cout << "Enter the elements of the array :" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }

    cout << "Array :" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    double sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += x[i][j];
        }
    }

    double average = sum / (n * m);
    double sumSquares = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sumSquares += pow(x[i][j] - average, 2);
        }
    }

    double deviation = sqrt(sumSquares / (n * m - 1));

    cout << "Arithmetic mean = " << average << endl;
    cout << "Standard deviation = " << deviation << endl;



    //Task 2

    int M, N;
    double A[5][7];

    cout << "\n\n\tTask 2 \n" << endl;
    cout << "Enter the number of rows : ";
    cin >> M;
    cout << "Enter the number of columns : ";
    cin >> N;
    cout << "Enter the elements of the matrix :" << endl;

    for (int I = 0; I < M; I++) {
        for (int J = 0; J < N; J++) {
            cin >> A[I][J];
        }
    }

    cout << "Initial matrix :" << endl;

    for (int I = 0; I < M; I++) {
        for (int J = 0; J < N; J++) {
            cout << A[I][J] << " ";
        }
        cout << endl;
    }

    cout << "Arithmetic mean of each column :" << endl;

    for (int J = 0; J < N; J++) {
        double SUM = 0;

        for (int I = 0; I < M; I++) {
            SUM += A[I][J];
        }

        cout << "Column " << J + 1 << ": " << SUM / M << endl;
    }



    //Task 3

    const int R = 6;
    const int C = 8;
    int a[R][C];

    cout << "\n\n\tTask 3 \n" << endl;
    cout << "Enter the elements of the matrix : " << endl;

    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            cin >> a[r][c];
        }
    }

    cout << "\nInitial matrix : " << endl;

    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }

    int minVal = a[0][0];
    int maxVal = a[0][0];
    int minPos = 0;
    int maxPos = 0;

    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            if (a[r][c] < minVal)
            {
                minVal = a[r][c];
                minPos = r;
            }

            if (a[r][c] > maxVal)
            {
                maxVal = a[r][c];
                maxPos = r;
            }
        }
    }

    for (int c = 0; c < C; c++)
    {
        int temp = a[minPos][c];
        a[minPos][c] = a[maxPos][c];
        a[maxPos][c] = temp;
    }

    cout << "\nTransformed matrix : " << endl;

    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
}
