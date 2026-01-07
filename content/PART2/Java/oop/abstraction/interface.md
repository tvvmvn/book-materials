# Interface

Another way to achieve abstraction in Java, is with interfaces.

An interface is a completely "abstract class" that is used to group related methods with empty bodies:


## Define interface

```java
// Interface
interface Animal {
  public void animalSound(); // interface method (does not have a body)
}
```


## Implements interface

```java
// Interface
interface Animal {
  public void animalSound(); // interface method (does not have a body)
}

// Pig "implements" the Animal interface
class Pig implements Animal {
  public void animalSound() {
    // The body of animalSound() is provided here
    System.out.println("The pig says: wee wee");
  }
}

Pig myPig = new Pig();  // Create a Pig object

myPig.animalSound();
```
