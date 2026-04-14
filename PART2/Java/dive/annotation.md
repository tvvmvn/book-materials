# Annotation

Annotations are special notes you add to your Java code. They start with the @ symbol.

They don't change how your program runs, but they give extra information to the compiler or tools.


# Built-in Annotations

Java includes several built-in annotations. Here are some of the most commonly used:

- @Override
- @Deprecated
- @SuppressWarnings


# @Override

The @Override annotation helps the compiler check that a method really overrides a method from a superclass.

It's not required, but it's highly recommended because it helps catch errors.

If you accidentally write the wrong method name (e.g. makesound()), the compiler will show an error like:

```java
class Animal {
  void makeSound() {
    System.out.println("Animal sound");
  }
}

class Dog extends Animal {
  @Override
  void makeSound() {
    System.out.println("Woof!");
  }
}
```