cislo1 = int(input("Zadejte první číslo: "))
cislo2 = int(input("Zadejte druhé číslo: "))

print("Sčítání: +")
print("Odčítání: -")
print("Násobení: *")
print("Dělení: /")
operace = input("Zadejte početní operaci: ")

#Výstupy
if operace == "+":
  print(cislo1, "+", cislo2, "=", cislo1 + cislo2)
elif operace == "-":
  print(cislo1, "-", cislo2, "=", cislo1 - cislo2)
elif operace == "*":
  print(cislo1, "*", cislo2, "=", cislo1 * cislo2)
elif operace == "/":
  print(cislo1, "/", cislo2, "=", cislo1 / cislo2)
else:
  print("Je mi líto, ale takovou početní operaci neznám.")