# Polymorphism

Achieved by overloading or override.

1. overloading
1. override


## Overloading

Consider the following example, which has two methods that add numbers of different type:

```java
static int plusMethodInt(int x, int y) {
  return x + y;
}

static double plusMethodDouble(double x, double y) {
  return x + y;
}

int myNum1 = plusMethodInt(8, 5);
double myNum2 = plusMethodDouble(4.3, 6.26);

System.out.println("int: " + myNum1);
System.out.println("double: " + myNum2);
```


Instead of defining two methods that should do the same thing, it is better to overload one.

```java
static int plusMethod(int x, int y) {
  return x + y;
}

static double plusMethod(double x, double y) {
  return x + y;
}

int myNum1 = plusMethod(8, 5);
double myNum2 = plusMethod(4.3, 6.26);

System.out.println("int: " + myNum1);
System.out.println("double: " + myNum2);
```

## Override

Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Pig extends Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
}

class Dog extends Animal {
  public void animalSound() {
    System.out.println("The dog says: bow wow");
  }
}

// this is core: all of instances are typed in Animal
Animal myAnimal = new Animal();
Animal myPig = new Pig();
Animal myDog = new Dog();

// Polymorphism 
myAnimal.animalSound();
myPig.animalSound();
myDog.animalSound();
```