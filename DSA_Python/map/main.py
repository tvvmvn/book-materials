class SimpleHashMap:
  def __init__(self, size=100):
    self.size = size
    self.buckets = [[] for _ in range(size)]  # A list of buckets, each is a list (to handle collisions)

  def hash_function(self, key):
    # Sum only the numerical values of the key, ignoring non-numeric characters
    numeric_sum = sum(int(char) for char in key if char.isdigit())
    return numeric_sum % 10  # Perform modulo 10 on the sum

  def put(self, key, value):
    # Add or update a key-value pair
    index = self.hash_function(key)
    bucket = self.buckets[index]
    for i, (k, v) in enumerate(bucket):
      if k == key:
        bucket[i] = (key, value)  # Update existing key
        return
    bucket.append((key, value))  # Add new key-value pair if not found

  def get(self, key):
    # Retrieve a value by key
    index = self.hash_function(key)
    bucket = self.buckets[index]
    for k, v in bucket:
      if k == key:
        return v
    return None  # Key not found

  def remove(self, key):
    # Remove a key-value pair
    index = self.hash_function(key)
    bucket = self.buckets[index]
    for i, (k, v) in enumerate(bucket):
      if k == key:
        del bucket[i]  # Remove the key-value pair
        return

  def print_map(self):
    # Print all key-value pairs in the hash map
    print("Hash Map Contents:")
    for index, bucket in enumerate(self.buckets):
      print(f"Bucket {index}: {bucket}")

# Creating the Hash Map from the simulation
hash_map = SimpleHashMap(size=10)

# Adding some entries
hash_map.put("123-4567", "Charlotte")
hash_map.put("123-4568", "Thomas")
hash_map.put("123-4569", "Jens")
hash_map.put("123-4570", "Peter")
hash_map.put("123-4571", "Lisa")
hash_map.put("123-4672", "Adele")
hash_map.put("123-4573", "Michaela")
hash_map.put("123-6574", "Bob")

hash_map.print_map()

print("\nName associated with '123-4570':", hash_map.get("123-4570"))

print("Updating the name for '123-4570' to 'James'")
hash_map.put("123-4570","James")

print("Name associated with '123-4570':", hash_map.get("123-4570"))

#Python
# Hash Map Contents:
# Bucket 0: [('123-4569', 'Jens')]
# Bucket 1: []
# Bucket 2: [('123-4570', 'Peter')]
# Bucket 3: [('123-4571', 'Lisa')]
# Bucket 4: []
# Bucket 5: [('123-4672', 'Adele'), ('123-4573', 'Michaela')]
# Bucket 6: []
# Bucket 7: []
# Bucket 8: [('123-4567', 'Charlotte'), ('123-6574', 'Bob')]
# Bucket 9: [('123-4568', 'Thomas')]

# Name associated with '123-4570': Peter
# Updating the name for '123-4570' to 'James'
# Name associated with '123-4570': James