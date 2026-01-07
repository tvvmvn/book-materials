# Dereference

In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).

You can also get the value of the variable the pointer points to, by using the `* (the dereference operator):`


```c
int myAge = 43;     // Variable declaration
int* ptr = &myAge;  // Pointer declaration

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);
```