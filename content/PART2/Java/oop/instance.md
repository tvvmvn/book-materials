# Instance

Everything in Java is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

A Class is like an object constructor, or a "blueprint" for creating objects.

1. Create an instance
1. Access members
1. Modify members
1. Methods
1. static members

## Create an instance

```java
public class Main {
  int x = 5;
}

Main myObj = new Main();
```


## Access members


```java
public class Main {
  int x = 5;
}

Main myObj = new Main();

// access
System.out.println(myObj.x);
```


## Modify members


```java
public class Main {
  int x = 5;
}

Main myObj = new Main();

// Modify
myObj.x = 40;

// access
System.out.println(myObj.x);
```


## Methods

```java
public class Main {
  void myMethod() {
    System.out.println("Hello World!");
  }
}

Main myObj = new Main();

// call methods
myObj.myMethod();

// Outputs "Hello World!"
```


# Static member

static attributes and methods belong to the class, not to objects. This means all objects share the same static attribute, and static methods can be called without creating objects.

```java
class Main {
  static void myMethod() {
    System.out.println("I just got executed!");
  }
}

// no instances are needed to call static methods
Main.myMethod();

// Outputs "I just got executed!"
```