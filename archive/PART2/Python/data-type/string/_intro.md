# String

1. What is it
1.
1.
1.

## What is String

Strings in python are surrounded by either single quotation marks, or double quotation marks.

'hello' is the same as "hello".

# Access characters

Like many other popular programming languages, strings in Python are arrays of unicode characters.

However, Python does not have a character data type, a single character is simply a string with a length of 1.

Square brackets can be used to access elements of the string.

```python
# Get the character at position 1 (remember that the first character has the position 0):

a = "Hello, World!"
print(a[1])
```


## Get length

To get the length of a string, use the len() function.

```python
a = "Hello, World!"
print(len(a))
```


## multi-line

You can assign a multiline string to a variable by using three quotes:

```python
a = """Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."""
print(a)
```
