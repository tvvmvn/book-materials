# Polymorphism


```py
class Car:
  def __init__(self, brand, model):
    self.brand = brand
    self.model = model
  def move(self):
    print("Drive!")

class Boat:
  def __init__(self, brand, model):
    self.brand = brand
    self.model = model
  def move(self):
    print("Sail!")

class Plane:
  def __init__(self, brand, model):
    self.brand = brand
    self.model = model
  def move(self):
    print("Fly!")

car = Car("Ford", "Mustang")      
boat = Boat("Ibiza", "Touring 20")
plane = Plane("Boeing", "747")    

print(car.move())
print(boat.move())
print(plane.move())
```

상속과 다형성

```py
class Vehicle:
  def __init__(self, brand, model):
    self.brand = brand
    self.model = model
  def move(self):
    print("Move!")

class Car(Vehicle):
  def move(self):
    print("Drive!")

class Boat(Vehicle):
  def move(self):
    print("Sail!")

class Plane(Vehicle):
  def move(self):
    print("Fly!")

car = Car("Ford", "Mustang")       
boat = Boat("Ibiza", "Touring 20") 
plane = Plane("Boeing", "747")     

print(car.move())
print(boat.move())
print(plane.move())
```