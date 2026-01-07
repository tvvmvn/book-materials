# Access Modifiers


*for class*

1. default
The class is only accessible by classes in the `same package`. This is used when you don't specify a modifier.

2. public
The class is accessible by any other class


*for class member*

1. default
The code is only accessible in the `same package`. This is used when you don't specify a modifier. 

2. public
The code is accessible for all classes

3. private
The code is only accessible within the declared class

4. protected
The code is accessible in the same package and subclasses.


# Non-Access Modifiers


*for class*

1. final
The class cannot be inherited by other classes 

2. abstract
The class cannot be used to create objects (To access an abstract class, it must be inherited from another class)


*for class member*

1. final
Attributes and methods cannot be overridden/modified

2. static
Attributes and methods belong to the class, not to objects. This means all objects share the same static attribute, and static methods can be called without creating objects.

3. abstract
Can only be used in an abstract class, and can only be used on methods. The method does not have a body. The body is provided by the subclass (inherited from)

4. transient
5. synchronized
6. volatile
