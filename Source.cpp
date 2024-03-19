#include <iostream>

// ������� ������ ������� ��������� � �������
template <typename T>
int findSecondMax(T* arr, int size) {
    if (size < 2) {
        std::cerr << "Array size should be at least 2." << std::endl;
        return -1;
    }

    int maxIndex = 0;
    int secondMaxIndex = -1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex]) {
            secondMaxIndex = i;
        }
    }

    return secondMaxIndex;
}

// ������ ������ Matrix
template <typename T>
class Matrix {
private:
    T** data;
    int rows;
    int cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new T * [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new T[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // ������ ��� ������ � ��������
};

// ������ ������ Vector
template <typename T>
class Vector : public Matrix<T> {
public:
    Vector(int cols) : Matrix<T>(1, cols) {}

    // ������ ��� ������ � ��������

    // ��������� ������������
    T vectorProduct(const Vector<T>& other) {
        // ���������� ���������� ������������
    }

    // ��������� ������������
    T scalarProduct(const Vector<T>& other) {
        // ���������� ���������� ������������
    }
};

int main() {
    // ������������ ������� ������ ������� ���������
    int intArr[] = { 3, 7, 1, 9, 5 };
    std::cout << "Second max index in intArr: " << findSecondMax(intArr, 5) << std::endl;

    float floatArr[] = { 2.5, 1.3, 4.7, 3.2 };
    std::cout << "Second max index in floatArr: " << findSecondMax(floatArr, 4) << std::endl;

    // ������������ ������� Matrix � Vector
    // �������� ��� ��� ������������

    return 0;
}