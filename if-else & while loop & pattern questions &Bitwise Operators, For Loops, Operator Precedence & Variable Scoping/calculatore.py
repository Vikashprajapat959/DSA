import math
print("CALCULATOR")
while True:
    print("\n1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Square Root")
    print("6. Power")
    print("7. Exit")

    choice = input("\nEnter your choice: ")

    if choice == "1":
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))
        print("Result =", a + b)

    elif choice == "2":
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))
        print("Result =", a - b)

    elif choice == "3":
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))
        print("Result =", a * b)

    elif choice == "4":
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))

        if b != 0:
            print("Result =", a / b)
        else:
            print("Error! Division by zero.")

    elif choice == "5":
        n = float(input("Enter number: "))
        print("Square Root =", math.sqrt(n))

    elif choice == "6":
        base = float(input("Enter base: "))
        power = float(input("Enter power: "))
        print("Result =", base ** power)

    elif choice == "7":
        print("Thank You for Using Calculator!")
        break

    else:
        print("Invalid Choice! Try Again.")