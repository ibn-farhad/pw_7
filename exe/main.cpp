// Include standard input/output library
#include <iostream>

// Type alias for floating-point numbers
typedef double real;


// C compatibility block
#ifdef __cplusplus
extern "C"
{
#endif

    // Forward declaration of Matrix structure
    typedef struct Matrix Matrix;

    // creates object of class Matrix and returns pointer to this object
    // prefix "math" is symbolic definition of namespace math
    Matrix * math_createMatrix(int rows, int cols);

    // Delete matrix and free memory
    void  math_deleteMatrix(Matrix *M);

    // Set a value at a specific position in the matrix
    void math_set(Matrix *M, int row, int col, real val);

    // Add two matrices
    Matrix *math_add(const Matrix *A, const Matrix *B);

    // Subtract two matrices
    Matrix *math_sub(const Matrix *A, const Matrix *B);

    // Matrix multiplication (dot product)
    Matrix *math_dot(const Matrix *A, const Matrix *B);

    // Print matrix to console
    void math_print(const Matrix *M);

#ifdef __cplusplus
}
#endif



int main()
{
    // Create a 3x3 matrix
    Matrix* m = math_createMatrix(3,3);

    // Set values in the matrix
    math_set(m, 0,0,1.);
    math_set(m, 2,2,5.);

    // Display the matrix
    math_print(m);

    // Clean up and exit
    math_deleteMatrix(m);
    return 0;
}