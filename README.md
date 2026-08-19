# _printf

A custom implementation of the printf function in C.

## Description

This project implements a simplified version of the C printf function.

The _printf function processes a format string, identifies conversion specifiers, retrieves the required arguments, and prints the corresponding output.

## Supported conversions

Conversion	Description
%c	Character
%s	String
%%	Percent sign
%d	Signed decimal integer
%i	Signed integer
%b	Binary
%u	Unsigned decimal integer
%o	Octal
%x	Lowercase hexadecimal
%X	Uppercase hexadecimal

No flags, field width, precision, or length modifiers are handled.

## Return
The number of characters printed (not counting the null byte).

## Compiling
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf_test
Compile together with your own main.c that includes main.h.

## Usage

Example:

```
int main(void)
{
    _printf("Hello %s\n", "World");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 42);
    _printf("Binary: %b\n", 10);
    _printf("Hex: %x\n", 255);

    return (0);

}
```

Example output:
```
Hello World
Character: A
Number: 42
Binary: 1010
Hex: ff
```
## Requirements and Constraints

The project follows the required C compilation standards:

GCC compiler
-Wall
-Werror
-Wextra
-pedantic
-std=gnu89

The implementation is designed as a simplified printf and therefore does not attempt to reproduce all features of the standard library printf.

## testing note
 
A separate main.c file can be used to test the supported conversions and compare the output with the expected behavior.

Examples of test cases include:

%c
%s
%%
%d
%i
%b
%u
%o
%x
%X

## Authors
Noor Abdullah Albadr, Ahmed Mamdouh Alrifai

Sic. Parvis. Magna
