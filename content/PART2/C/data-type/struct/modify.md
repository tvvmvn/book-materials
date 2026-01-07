# Modify Values

If you want to change/modify a value, you can use the dot syntax (.).

And to modify a string value, the strcpy() function is useful again:

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

// Create a structure variable and assign values to it
struct myStructure s1 = {13, 'B', "Some text"};

// Modify values
s1.myNum = 30;
s1.myLetter = 'C';
strcpy(s1.myString, "Something else");
```