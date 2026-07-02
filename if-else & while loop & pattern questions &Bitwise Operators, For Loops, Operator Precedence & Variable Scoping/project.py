import random
Cnumber =random.randrange(1,101)
userinpute = int (input("Enter your Number :--"))
if userinpute>Cnumber:
    print("Computer Number",Cnumber)
    print("your guess number is high")
elif Cnumber>userinpute:
  print("Computer Number",Cnumber)
  print("your guess number is low")
else:
 print("Computer Number",Cnumber)
 print("your guess number is equal")
