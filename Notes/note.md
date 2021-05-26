# **Programming Note**

## Rough Note for C Plus Plus

### _**String**_

1. Individual characters of a string can be accessed through a subscript 
    operator[] or via a member function .at(index). The index starts at 0.

2. Preffered way to of accepting string from the standard input is via the
    _std::getline_ function which takes _std::cin_ and string as parameters.

    > Use the _std::getline_ because our string can contain white spaces. And if
    > we used the _std::cin_ function alone, it would accept only a part of the string.
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

    - A literal is hardcoded value in a program.There are four integer literal.

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

- write below code to see.

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
        -

## Class and its characters

**Class** is prototype of objects. An objects is an instance of a class.
e.g Human is a class of a living beign and a person name avijit(me) is an
**instance** of human class.

Obejct - is an entity with state and behavior.
    - They have state in the form of a memeber variables called **fields**.
    - They expose behaviour in the form of a member function called **methode**

        What is **encapsulation** is layman way?
Hiding internal detail(state) of the object and allowing all the action to be
performed over the objects using methods is known as **data-encapsulation**.

### Important concepts(class)

1. Passing Parameter
Arguments can be passed from one methode to other using parameters.
    1. **Call by value**
        By default all,the variables, which are passed as parameters, are passed
        by parameters. that means a separate copy is created inside the called
        method and no changes done inside called method will reflect in calling
        method.
    2. **Call by reference**
        If you need to change value of the parameters inside the method, than you
        should us call by refence. C++ by defalut passes by value.Therefore.to
        make it happen, you need to pass by reference by using "&" operator.
        The variable inside the called function also refer to the same variable
        inside the calling function. When the value of reference variable is
        changed then the original variable value also change.
        see incrementPassByre.cpp
    3. **Call by Pointer**
        When we pass address of variable inside calling function to the called
        function then the change done inside called function is also reflected
        inside calling function. see incrementPassByPointer.cpp
2. Kind of Variables
    1. **Instance Variables(Non-Static)**
        They are instance variable so they are unique to each instance.
    2. **Class Variables(Static)**
        A class variable is any fields with the _static_ modifier.these variable
        are linked with the class not with the odject of the class.There is
        exactly one copy of the variables regardless of how many instance of
        the class are created.
    3. **Local variable**
        The temporary variables in a method ar called local variable. the local
        variables are only visisble to the methode in which they are declared.
        The parameters that are passed to the methods are also local variable
        of the called method. see kindOfVar.cpp

3. **Method**
    There are four type of methods.
    - Class Method
    - Instance Method
    - Constructor
    - Distructor
    **Explanation**
    1. **Class Method**
        The static modifier is used to create class methods.Class methods with
        static modifier with them should be invoked with the class name without
        the need of creating even a single instance of the class.

    2. **Instance Method**
        This methods can only be invoked over an instance of the class.

        Note:
        1. Instance methods can access other instance methods and instance variables
        directly.
        2. Instance methods can access class methods and variables directly.
        3. Class methods can access other class methods and class variables directly.
        4. Class methods cannot access instance methods and instance variables
        directly. To access instance variable and methods they need to create and
        instance (object) of class.
        5. The special keyword “this” is valid only inside instance methods (and
        invalid inside class methods) as “this“ refers to the current instance.
    3. **Constructor**
        It is a special kind of methode,which is invoked oner objects when they
        are created. Constructor methods have same name as the class.This 
        method is used to initialize the various fields of the object.
    4. **Destructor**
        Its a special knid of method, which is invoked over object when they
        are destroyed. Distructor method are named "~" added by the name of the
        class. Distructor method used to clean-up of the memory contaied in the
        object.C++ provide defalut Distructor for class.

4. **Access Modifiers**
    Access modifier are used to set up the visisbility level to the class.
    1. Private Modifiers has visisbility only within its own class.
    2. Public Modifiers has visisbility to all the classes in the package.
    3. Protected Modifiers has visisbility within its own class and subclasses
        its own class.









