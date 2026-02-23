# You can assign default values to parameters. 
# If the function is called without an argument, 
# it uses the default value:

def my_function(name = "friend"):
  print("Hello", name)

my_function("Emil")
my_function("Tobias")
my_function()
my_function("Linus")