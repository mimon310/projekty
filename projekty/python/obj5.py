class Person:
    def __init__(self, name: str, surname: str, age: int):
        self.name = name
        self.surname = surname
        self.age = age

    def __str__(self):
        return self.name +" " +self.surname

    def __add__(self, other):
        return Marriage(self, other)

    def __eq__(self, other):
        return self.age == other.age
        
    def __neg__(self):
        self.age = -self.age
        return self



class Marriage:
    def __init__(self, husband, wife):
        self.husband = husband
        self.wife = wife
    def __str__(self):
        return self.husband.name + " " + self.wife.name



simon = Person("Simon", "Mimon", 24)
andrej = Person("Andrej", "Mimon", 20)
print((simon).age)
print((andrej).age)