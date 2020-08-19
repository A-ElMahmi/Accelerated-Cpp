import random
import string

with open("large.txt", "w") as f:
  table = []
  for i in range(10000):
    name = random.choice(string.ascii_uppercase)
    values = " ".join([str(random.randint(0, 100)) \
                        for i in range(random.randint(3, 9))])
    table.append(f"{name} {values}")

  f.write("\n".join(table))
