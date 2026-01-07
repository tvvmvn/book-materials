# Function

A function is a block of code which only runs when it is called.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

```c
// Create a function
void myFunction() {
  printf("I just got executed!");
}

myFunction(); // call the function

// Outputs "I just got executed!"
```


## Paramters and arguments

Information can be passed to functions as a parameter. Parameters act as variables inside the function.

```c
void calculateSum(int x, int y) {
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

calculateSum(5, 3);
calculateSum(8, 2);
calculateSum(15, 15);
```


## return

```c
int myFunction(int x, int y) {
  return x + y;
}

int result = myFunction(5, 3);

printf("Result is: %d", result);
// Outputs 8 (5 + 3)
```