# String

Strings are used for storing text.

A String variable contains a collection of characters surrounded by double quotes (""):

```java
String greeting = "Hello";
```


## Get length

A String in Java is actually an object, which means it contains methods that can perform certain operations on strings.

For example, you can find the length of a string with the length() method:

```java
String txt = "hello java";
System.out.println("txt length: " + txt.length());
```

## Concat

The + operator can be used between strings to combine them. This is called concatenation:

```java
String firstName = "John";
String lastName = "Doe";

System.out.println(firstName + " " + lastName);
```

If you add a number and a string, the result will be a string concatenation

```java
String name = "John";
int age = 25;

System.out.println("My name is " + name + " and I am " + age + " years old.");
```


## Methods

- indexOf
- charAt
- equals