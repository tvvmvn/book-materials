# Two-Dimensional Arrays

A 2D array is also known as a matrix (a table of rows and columns).

To create a 2D array of integers, take a look at the following example:


```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
```

## Access items

To access an element of a two-dimensional array, you must specify the index number of both the row and column.

This statement accesses the value of the element in the first row (0) and third column (2) of the matrix array.

```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

printf("%d", matrix[0][2]);  // Outputs 2
```

## Change items

To change the value of an element, refer to the index number of the element in each of the dimensions:

The following example will change the value of the element in the first row (0) and first column (0):


```c
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
matrix[0][0] = 9;

printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1
```