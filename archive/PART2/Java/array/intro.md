# Arrays

1. Create an array
1. Access items


Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type with square brackets [ ] :

We have now declared a variable that holds an array of strings. To insert values to it, you can place the values in a comma-separated list, inside curly braces { }:

```java
int[] myNum = {10, 20, 30, 40};
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
```

You can also create an array by specifying its size with new. This makes an empty array with space for a fixed number of elements, which you can fill later:

```java
String[] cars = new String[4]; // size is 4

cars[0] = "Volvo";
cars[1] = "BMW";
cars[2] = "Ford";
cars[3] = "Mazda";

System.out.println(cars[0]); // Outputs Volvo
```


## Access elements

You can access an array element by referring to the index number.

This statement accesses the value of the first element in cars:

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars[0]);
// Outputs Volvo
```


## Change elements

To change the value of a specific element, refer to the index number:

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

cars[0] = "Opel";

System.out.println(cars[0]);
// Now outputs Opel instead of Volvo
```


## Get length

To find out how many elements an array has, use the length property:

```java
String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};

System.out.println(cars.length);
// Outputs 4
```