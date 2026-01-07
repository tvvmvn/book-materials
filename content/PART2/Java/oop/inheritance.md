# Inheritance

1. What is it
1. override
1. super keyword

In Java, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

**subclass (child)** the class that inherits from another class

**superclass (parent)** the class being inherited from
To inherit from a class, use the extends keyword.


In the example below, the Car class (subclass) inherits the attributes and methods from the Vehicle class (superclass)

```java
class Vehicle {
  // Vehicle attribute
  protected String brand = "Ford";
  
  // Vehicle method
  public void honk() {
    System.out.println("Tuut, tuut!");
  }
}

class Car extends Vehicle {
  // Car attribute
  private String modelName = "Mustang";   
}

// Create a myCar object
Car myCar = new Car();

// Call the honk() method (from the Vehicle class) on the myCar object
myCar.honk();

// Display the value of the brand attribute (from the Vehicle class) and the value of the modelName from the Car class
System.out.println(myCar.brand + " " + myCar.modelName);
```


## Override

```java
class Person {
  void greeting() {
    System.out.println("hello");
  }
}

class Student {
  void greeting() {
    System.out.println("hello I'm student");
  }
}
```


## super

the super keyword is used to refer to the `parent class of a subclass`.

The most common use of the super keyword is to eliminate the confusion between superclasses and subclasses that have methods with the same name.

It can be used in two main ways:

1. To access attributes and methods from the parent class
2. To call the parent class constructor


If a subclass has a method with the same name as one in its parent class, you can use super to call the parent version:

```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Dog extends Animal {
  public void animalSound() {
    super.animalSound(); // Call the parent method
    // ..
  }
}
```

Use super() to call the constructor of the parent class. This is especially useful for reusing initialization code.

```java
class Animal {
  Animal() {
    System.out.println("Animal is created");
  }
}

class Dog extends Animal {
  Dog() {
    super(); // Call parent constructor
    System.out.println("Dog is created");
  }
}

// ..
```