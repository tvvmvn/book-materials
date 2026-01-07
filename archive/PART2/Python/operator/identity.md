# Identity Operators

Identity operators are used to compare the objects, not if they are equal, but if they are actually the same object, with the same memory location:


1. is  
Returns True if both variables are the same object 

e.g) x is y 

The is operator returns True if both variables point to the same object:
```python
x = ["apple", "banana"]
y = ["apple", "banana"]
z = x

print(x is z) 
print(x is y)
print(x == y)
```

2. is not 
Returns True if both variables are not the same object 

e.g) x is not y


The is not operator returns True if both variables do not point to the same object:
```python
x = ["apple", "banana"]
y = ["apple", "banana"]

print(x is not y)
```