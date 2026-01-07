# Methods

1. What is it
1. arguments
1. return


A method is a block of code which only runs when it is called.

Methods are used to perform certain actions, and they are also known as `functions`.

Why use methods? To reuse code: define the code once, and use it many times.

```java
static void myMethod() {
  System.out.println("I just got executed!");
}

myMethod();
```


## Arguments

Information can be passed to methods as a parameter. Parameters act as variables inside the method.

Parameters are specified after the method name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma.


The following example has a method that takes a String called fname as parameter. When the method is called, we pass along a first name, which is used inside the method to print the full name:

```java
static void myMethod(String fname) {
  System.out.println(fname + " Refsnes");
}

myMethod("Liam");
myMethod("Jenny");
myMethod("Anja");

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
```


## return

In the previous page, we used the void keyword in all examples (like static void myMethod(int x)), which indicates that the method should not return a value.

If you want the method to return a value, you can use a primitive data type (such as int, char, etc.) instead of void, and use the return keyword inside the method:

This example returns the sum of a method's two parameters:

```java
static int myMethod(int x, int y) {
  return x + y;
}

System.out.println(myMethod(5, 3));

// Outputs 8 (5 + 3)
```