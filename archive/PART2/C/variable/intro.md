# Variables

Variables are containers for storing data values, like numbers and characters.

Syntax
```
type variableName = value;
```

```c
int myNum = 15;

printf("%d", myNum);  // Outputs 15
```


You can also declare a variable without assigning the value, and assign the value later:

```c
// Declare a variable
int myNum;

// Assign a value to the variable
myNum = 15;
```

If you assign a new value to an existing variable, it will overwrite the previous value:

```c
int myNum = 15;  // myNum is 15

myNum = 10;  // Now myNum is 10
```


To declare more than one variable of the same type, use a comma-separated list:

```c
int x = 5, y = 6, z = 50;
```