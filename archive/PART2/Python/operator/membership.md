# Membership Operators

Membership operators are used to test if a sequence is presented in an object:

1. in  
Returns True if a sequence with the specified value is present in the object 

e.g)x in y 

```python
# Check if "banana" is present in a list:

fruits = ["apple", "banana", "cherry"]
print("banana" in fruits)
```

2. not in 
Returns True if a sequence with the specified value is not present in the object 

e.g) x not in y

```python
# Check if "pineapple" is NOT present in a list:

fruits = ["apple", "banana", "cherry"]
print("pineapple" not in fruits)
```


## Membership in Strings

The membership operators also work with strings:

```python
text = "Hello World"

print("H" in text)
print("hello" in text)
print("z" not in text)
```