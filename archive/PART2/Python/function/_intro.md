# Function

A function is a block of code which only runs when it is called.

A function can return data as a result.


## Creating a function

In Python, a function is defined using the def keyword, followed by a function name and parentheses:

```python
# define a function
def my_function():
  print("Hello from a function")

# calling a function
my_function()
```


With functions, you write the code once and reuse it:

```python
def fahrenheit_to_celsius(fahrenheit):
  return (fahrenheit - 32) * 5 / 9

print(fahrenheit_to_celsius(77))
print(fahrenheit_to_celsius(95))
print(fahrenheit_to_celsius(50))
```


## return

Functions can send data back to the code that called them using the return statement.

When a function reaches a return statement, it stops executing and sends the result back:

```python
def get_greeting():
  return "Hello from a function"

message = get_greeting()
print(message)
```


## Parameter & Arguments

A parameter is the variable listed inside the parentheses in the function definition.

An argument is the actual value that is sent to the function when it is called.


```python
def my_function(name): # name is a parameter
  print("Hello", name)

my_function("Emil") # "Emil" is an argument
```


```python
# This function expects 2 arguments, and gets 2 arguments::
def my_function(fname, lname):
  print(fname + " " + lname)

my_function("Emil", "Refsnes")
```