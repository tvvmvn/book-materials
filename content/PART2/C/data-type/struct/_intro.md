# Structures

Structures (also called structs) are a way to group several related variables into one place.

Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, float, char, etc.).


## Create a structure

You can create a structure by using the struct keyword and declare each of its members inside curly braces:

To access the structure, you must create a variable of it.

Use the struct keyword inside the main() method, followed by the name of the structure and then the name of the structure variable:

```c
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  return 0;
}
```


## What About Strings in Structures?

Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

struct myStructure s1;
// Trying to assign a value to the string
s1.myString = "Some text";
```


However, there is a solution for this! You can use the strcpy() function and assign the value to s1.myString, like this:

```c
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

struct myStructure s1;

// Assign a value to the string using the strcpy function
strcpy(s1.myString, "Some text");
```


## Simpler Syntax

You can also assign values to members of a structure variable at declaration time, in a single line.

Just insert the values in a comma-separated list inside curly braces {}. Note that you don't have to use the strcpy() function for string values with this technique:

```c
// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

struct myStructure s1 = {13, 'B', "Some text"};
```