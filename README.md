# BinaryDecimal_conversions
Decimal to Binary and Binary to Decimal Converter
🚀 Overview
This project demonstrates how to convert decimal numbers (both positive and negative) to binary and how to convert binary numbers back to decimal. The conversion is done using two methods:

Traditional Method (division by 2 for decimal to binary and powers of 2 for binary to decimal)
Bit Manipulation (using left and right shifts to manipulate bits directly)
📝 Features
Convert Positive Decimal to Binary: Converts positive decimal numbers to binary using both traditional and bit manipulation methods.
Convert Negative Decimal to Binary: Uses the 2's complement method to convert negative decimal numbers to binary.
Convert Binary to Decimal: Converts binary numbers back to decimal using both traditional methods and bit manipulation.
Handles both positive and negative decimal numbers.
🔧 How It Works
Decimal to Binary Conversion:
Positive Numbers:
The traditional method divides the number by 2 repeatedly, collecting the remainders, and reading them in reverse order.
The bit manipulation method shifts bits to the right and uses bitwise AND (&) to extract the bits.
Negative Numbers:
First, convert the positive value to binary.
Use the 1's complement (flip all bits), then add 1 to get the 2's complement, which represents the negative number in binary.
Binary to Decimal Conversion:
Traditional Method: Multiply each binary digit by its corresponding power of 2 and sum the results.
Bit Manipulation: Use right shifts and bitwise operations to accumulate the decimal value.

📚 Methods
Traditional Decimal to Binary:

Simple division and remainder method.
2's Complement for Negative Numbers:

Flip bits and add 1 for negative binary representation.
Bit Manipulation:

Efficient bit shifting techniques to handle binary operations.
💻 How to Run
Clone the repository:
bash
Copy code
git clone https://github.com/your-username/repository-name.git
Navigate to the project directory:
bash
Copy code
cd repository-name
Compile the code using a C++ compiler:
bash
Copy code
g++ main.cpp -o converter
Run the executable:
bash
Copy code
./converter
🧑‍💻 Contribute
Feel free to fork this repository and submit a pull request if you'd like to contribute. Any feedback or improvements are welcome!