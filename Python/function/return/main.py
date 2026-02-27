# Functions can send data back to the code that called them using the return statement.

# When a function reaches a return statement, it stops executing and sends the result back:

def add(a, b):
  return a + b

r = add(1, 2)

print(r)