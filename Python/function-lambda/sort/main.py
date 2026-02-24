students = [("Emil", 25), ("Tobias", 22), ("Linus", 28)]

students.sort(key=lambda x: x[1])

print(students)
# [('Tobias', 22), ('Emil', 25), ('Linus', 28)]