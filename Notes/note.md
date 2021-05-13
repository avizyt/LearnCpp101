# **Programming Note**

## Rough Note for C Plus Plus

### _**String**_

1. Individual characters of a string can be accessed through a subscript operator [] or via a
   member function .at(index). The index starts at 0.

2. Preffered way to of accepting string from the standard input is via the _std::getline_ function which takes _std::cin_ and string as parameters.

    > Use the _std::getline_ because our string can contain white spaces. And if we
    > used the _std::cin_ function alone, it would accept only a part of the string.
    > The std::getline function has the following signature: _std::getline_(read_from,into);
    > The function reads a line of text from the standard input (std::cin) into a string
    > (s) variable.

3. Type

| Type               | Signed | Win64 | Linux64 | printf format |
| ------------------ | ------ | ----- | ------- | ------------- |
| short              | Yes    | 2     | 2       | %hd           |
| unsigned short     | No     | 2     | 2       | %hd           |
| int                | Yes    | 4     | 4       | %d            |
| unsigned int       | NO     | 4     | 4       | %u            |
| long               | Yes    | 4     | 8       | %ld           |
| unsigned long      | No     | 4     | 8       | %lu           |
| long long          | Yes    | 8     | 8       | %lld          |
| unsigned long long | No     | 8     | 8       | %llu          |

-   A literal is hardcoded value in a program.There are four integer literal.

| Name        | prefix  |
| ----------- | ------- |
| binary      | 0b      |
| octal       | 0       |
| decimal     | default |
| hexadecimal | 0x      |

    1. float single precision
    2. double double precision
    3. long double extended precision

    Floating point literal are double precision by default.Use f or F for single.
    for extended precision use 1 or L.
    e.g float = a = 0.3F;
        double b = 0.2;
        long double c = 0.3L;
        double plancks_constant = 6.62607004e-34;

**Note**

Integer literals can contain any number of single quotes (') for readability.
These are completely ignored by the compiler. For example, 1000000 and 1'000'000
are both integer literals equal to one million.

-   write below code to see.

```cpp
#include <cstdio>
int main() {
   unsigned short a = 0b10101010;
   printf("%hu\n", a);
   int b = 0123; v
   printf("%d\n", b);
   unsigned long long d = 0xFFFFFFFFFFFFFFFF;
   printf("%llu\n", d);
}

```

output:

170

83

18446744073709551615

#### **Format Specifiers**

    - %f display float with decimal digits, %e display same in scientific notation.
    - You can let printf decide by using %g.
    - for double, simply prepend an l.
    - for long double use L.
        e.g:
        - for double  %lf, %le or %lg;
        - for long double %Lf, %Le, or %Lg;
        - to test run format_specifier.cpp
