#include <iostream>
#include <iomanip>

using namespace std;

struct Matrica
{
    int row;
    int column;
    float** matrix;

    void createMatrix(int row, int column)
    {
        this->row = row;
        this->column = column;
        this->matrix = new float* [this->row];

        for (int i = 0; i < this->column; i++)
        {
            this->matrix[i] = new float[this->column];
        }
    }

    void inputMatrix()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                cout << "Input element: " << endl;
                float element;
                cin >> element;
                this->matrix[i][j] = element;
            }
        }
    }

    void generate()
    {
        int a, b;
        cout << "Input lower limit: " << endl;
        cin >> a;
        cout << "Input upper limit: " << endl;
        cin >> b;
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                this->matrix[i][j] = a + (rand() % (b - a + 1));
            }
        }
    }

    void printMatrix()
    {
        for (int i = 0; i < this->row; i++)
        {
            for (int j = 0; j < this->column; j++)
            {
                cout << right << setfill('0') << fixed << setprecision(4) << this->matrix[i][j] << " ";
            }
            cout << endl;
        }

    }
};

Matrica sum(Matrica prva, Matrica druga)
{
    Matrica treca;
    if (prva.row == druga.row && prva.column == druga.column)
    {
        treca.createMatrix(prva.row, prva.column);

        for (int i = 0; i < treca.row; i++)
        {
            for (int j = 0; j < treca.column; j++)
            {
                cout << "Sum is: " << endl;
                treca.matrix[i][j] = prva.matrix[i][j] + druga.matrix[i][j];
            }
        }
    }

    else
    {
        cout << "Cannot sum!" << endl;
        exit(1);
    }
    return treca;
}

Matrica sub(Matrica prva, Matrica druga)
{
    Matrica treca;
    if (prva.row == druga.row && prva.column == druga.column)
    {
        treca.createMatrix(prva.row, prva.column);

        for (int i = 0; i < treca.row; i++)
        {
            for (int j = 0; j < treca.column; j++)
            {
                treca.matrix[i][j] = prva.matrix[i][j] - druga.matrix[i][j];
            }
        }
    }

    else
    {
        cout << "Cannot sub!" << endl;
        exit(1);
    }
    return treca;
}

Matrica mul(Matrica prva, Matrica druga)
{
    Matrica treca;
    if (prva.column == druga.row)
    {
        treca.createMatrix(prva.row, druga.column);

        for (int i = 0; i < treca.row; i++)
        {
            for (int j = 0; j < treca.column; j++)
            {
                treca.matrix[i][j] = prva.matrix[i][j] * druga.matrix[i][j];
            }
        }
    }

    else
    {
        cout << "Cannot mul!" << endl;
        exit(1);
    }
    return treca;
}

Matrica transpozeMatrix(Matrica prva)
{
    Matrica trsMat;
    trsMat.createMatrix(prva.row, prva.column);
    for (int i = 0; i < trsMat.row; i++)
    {
        for (int j = 0; j < trsMat.column; j++)
        {
            trsMat.matrix[j][i] = prva.matrix[i][j];
        }
    }
    return trsMat;
}

int main()
{
    Matrica prva, druga, treca;
    prva.createMatrix(2, 2);
    prva.generate();
    prva.printMatrix();

    druga.createMatrix(2, 2);
    druga.generate();
    druga.printMatrix();

    treca = sum(prva, druga);
    treca.printMatrix();

    treca = mul(prva, druga);
    treca.printMatrix();

    system("pause");
}