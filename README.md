# uint1024_t

A custom type is implemented for a lawless integer uint1024_t using the arithmetic of numbers in the b-digit number system (arbitrary-precision arithmetic).

arbitrary-precision arithmetic is a set of software tools (data structures and algorithms) that allow you to work with numbers of much larger quantities than standard data types allow.

The method of classical long arithmetic was used. Classical arbitrary-precision arithmetic is arbitrary-precision arithmetic, the main idea of which is that a number is stored as an array of its digits. Digits can be used from one or another number system, usually the decimal number system and its degrees (ten thousand, billion), binary number system, or any other are used. My implementation uses the base of the number system 10^9 (one billion).

The generation of a number from an unsigned int is performed by translating all the numbers from the original number into a new number system and writing the result to the final array in reverse order. Operations on numbers are performed using the simplest algorithms of addition, subtraction, and column multiplication.

A = abc = 100 * a + 10 * b + c
B = de = 10 * d + e

Sum:
A + B = abc + de = (100 * a + 10 * b + c) + (10 * d + e) = 100 * a + 10 * (b + d) + (c + e)

Difference:
A - B = abc - de = (100 * a + 10 * b + c) - (10 * d + e) = 100 * a + 10 * (b - d) + (c - e)

Multiplication:
A * B = abc * de = (100 * a + 10 * b + c) * (10 * d + e) = 100 * a * 10 * d + 10 * b * 10 * d + c * 10 * d + 100 * a * e + 10 * b * e + c * e = 1000 * a * d + 100 * (a * e + b * d) + 10 * (b * e + c * d) + c * e

The output of a number to the standard stream is performed by translating each number from this number system into decimal and outputting each digit in reverse order. The input of a number from the standard stream is performed by the usual input of a string from a string, after which each digit is translated into a new number system and written to the array in reverse order.

The source code is divided into three files. main.c is a program that demonstrates the functionality of the above functions. uint1024.h is a header file with prototypes of these functions. uint1024.c is a file with the implementation of functions from uint1024.h.
