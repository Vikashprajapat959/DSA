import time

print("Please insert your card...")
time.sleep(10)

password = 1234
balance = 5000

pin = int(input("Enter your ATM PIN: "))

if pin == password:

    while True:

        print("\n===== ATM MENU =====")
        print("1. Check Balance")
        print("2. Withdraw Money")
        print("3. Deposit Money")
        print("4. Exit")

        try:
            option = int(input("Enter your choice: "))

            if option == 1:
                print(f"Your Current Balance: ₹{balance}")

            elif option == 2:
                withdraw_amount = int(input("Enter Withdraw Amount: ₹"))

                if withdraw_amount <= balance:
                    balance -= withdraw_amount
                    print(f"Please collect your cash.")
                    print(f"Remaining Balance: ₹{balance}")
                else:
                    print("Insufficient Balance!")

            elif option == 3:
                deposit_amount = int(input("Enter Deposit Amount: ₹"))
                balance += deposit_amount
                print(f"₹{deposit_amount} Deposited Successfully.")
                print(f"Updated Balance: ₹{balance}")

            elif option == 4:
                print("Thank you for using our ATM.")
                print("Card Removed Successfully.")
                break

            else:
                print("Invalid Choice! Please select 1 to 4.")

        except ValueError:
            print("Please enter numbers only!")

else:
    print("Wrong PIN!")
    print("Card Blocked.")