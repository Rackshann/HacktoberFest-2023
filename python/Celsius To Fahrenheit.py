def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32

def main():
    # Prompt the user for input
    celsius = float(input("Enter temperature in Celsius: "))
    
    # Convert to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius)
    
    # Display the result
    print(f"{celsius}°C is equal to {fahrenheit:.2f}°F")

if __name__ == "__main__":
    main()
