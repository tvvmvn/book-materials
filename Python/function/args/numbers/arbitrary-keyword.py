# Arbitrary Keyword Arguments - **kwargs

# If you do not know how many keyword arguments will be passed into your function, 
# add two asterisks ** before the parameter name.

# This way, the function will receive a dictionary of arguments 
# and can access the items accordingly:


# Using **kwargs to accept any number of keyword arguments:

def my_function(**kid):
  print("His last name is " + kid["lname"])

my_function(fname = "Tobias", lname = "Refsnes")