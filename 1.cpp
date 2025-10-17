CODE :
class Car:
    def __init__(self):
        self.brand = ""
        self.model = ""
        self.year = 0

    # Function to read car data
    def read_data(self):
        self.brand = input("Enter car brand: ")
        self.model = input("Enter car model: ")
        self.year = int(input("Enter car year: "))

    # Function to display car details
    def display_data(self):
        print(f"Car Details:\nBrand: {self.brand}\nModel: {self.model}\nYear: {self.year}\n")


# Create three Car objects
car1 = Car()
car2 = Car()
car3 = Car()

print("Enter details for Car 1:")
car1.read_data()

print("\nEnter details for Car 2:")
car2.read_data()

print("\nEnter details for Car 3:")
car3.read_data()

# Display details of each car
print("\nDisplaying Car Details:\n")
car1.display_data()
car2.display_data()
car3.display_data()


  
OUTPUT:
Enter details for Car 1:
Enter car brand: Toyota
Enter car model: Corolla
Enter car year: 2020

Enter details for Car 2:
Enter car brand: Ford
Enter car model: Mustang
Enter car year: 2018

Enter details for Car 3:
Enter car brand: Tesla
Enter car model: Model 3
Enter car year: 2023

Displaying Car Details:

Car Details:
Brand: Toyota
Model: Corolla
Year: 2020

Car Details:
Brand: Ford
Model: Mustang
Year: 2018

Car Details:
Brand: Tesla
Model: Model 3
Year: 2023

