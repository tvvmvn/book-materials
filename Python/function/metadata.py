# Preserving Function Metadata

# Functions in Python has metadata that can be accessed 
# using the __name__ and __doc__ attributes.


# Normally, a function's name can be returned with the __name__ attribute:

def myfunction():
  return "Have a great day!"

print(myfunction.__name__)