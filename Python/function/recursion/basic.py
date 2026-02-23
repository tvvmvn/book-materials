# Recursion is when a function calls itself.



# A simple recursive function that counts down from 5:
def countdown(n):
  if n <= 0:
    print("Done!")
    
  else:
    print(n)
    countdown(n - 1)

countdown(5)