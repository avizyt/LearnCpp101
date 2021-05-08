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
