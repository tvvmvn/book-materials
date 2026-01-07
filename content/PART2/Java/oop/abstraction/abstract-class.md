# Abstract class

Data abstraction is the process of hiding certain details and showing only essential information to the user.
Abstraction can be achieved with either abstract classes or interfaces (which you will learn more about in the next chapter).


## No instance

Abstract class is a restricted class that cannot be used to create objects (to access it, it must be inherited from another class).

```java
abstract class Animal {
  public void sleep() {
    System.out.println("Zzz");
  }
}

Animal myObj = new Animal(); // will generate an error
```


## Abstract methods

An abstract class can have both abstract and regular methods

Abstract method can only be used in an abstract class, and it does not have a body. The body is provided by the subclass (inherited from).


```java
abstract class Animal {
  // abstract method
  public abstract void animalSound();

  public void sleep() {
    System.out.println("Zzz");
  }
}
```