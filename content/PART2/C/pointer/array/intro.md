# Array with Pointer


## Access items 

Ok, so what's the relationship between pointers and arrays? Well, in C, `the name of an array, is actually a pointer to the first element of the array`.

Confused? Let's try to understand this better, and use our "memory address example" above again.

The memory address of the first element is the same as the name of the array:

```c
int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);
// 0x7ffe70f9d8f0

// Get the value of the first element in myNumbers
printf("%d", *myNumbers);
// 25
```


## Change items

It is also possible to change the value of array elements with pointers:


```c
int myNumbers[4] = {25, 50, 75, 100};

// Change the value of the first element to 13
*myNumbers = 13;

// Get the value of the first element
printf("%d\n", *myNumbers);

// 13
```


## Incrementing points

You can increment the pointer to access or change items

```c
int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers + 1));

// Get the value of the third element in myNumbers
printf("%d", *(myNumbers + 2));

// ...
```