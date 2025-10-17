CODE:

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3];

public:
    void input() {
        cout << "Enter elements of 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }
    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        Matrix result;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }
};

int main() {
    Matrix m1, m2, sum;

    cout << "Matrix 1:" << endl;
    m1.input();

    cout << "Matrix 2:" << endl;
    m2.input();

    sum = m1 + m2;  // Calls overloaded + operator

    cout << "\nSum of matrices:\n";
    sum.display();

    return 0;
}


OUTPUT:

Matrix 1:
Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9

Matrix 2:
Enter elements of 3x3 matrix:
9 8 7
6 5 4
3 2 1

Sum of matrices:
10 10 10
10 10 10
10 10 10

