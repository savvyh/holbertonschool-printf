# _printf :

A formatted output conversion C, the program is a pseudo-
recreation of the C standard library function, `printf`.

## Dependencies :

The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc`.

## Usage :

To use the `_printf` function, assuming the above dependencies have been installed,
compile all `.c` files in the repository and include the header `main.h` with
any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, Holberton");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o 
```

Output:
```
$ ./a.out
Hello, Holberton
$
```

## Description :

The function `_printf` writes output to standard output. The function writes
under the control of a `format` string that specifies how arguments
(accessed via `stdarg`) are converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, `_printf` returns the number of characters printed
(excluding the terminating null byte used to end output to strings). If an
output error is encountered, the function `exit '1'`.

### Format of the Argument String

The `format` string argument is a constant character string composed of directives: 
ordinary characters (not `%`) which are copied unchanged
to the output ; and conversion specifications. 
Conversion specification is introduced by the character `%` and ends with a conversion specifier. In
between the `%` character and conversion specifier.The arguments must correspond
with the conversion specifier, and are used in the order given.

#### Conversion Specifiers

The conversion specifier (introduced by the character `%`) is a character that
specifies the type of conversion to be applied. The `_printf` function
supports the following conversion specifiers:

#### d, i
The `int` argument is converted to signed decimal notation.

Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 7);
}
```
Output:
```
7
```

#### c
The `int` argument is converted to an `unsigned char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

#### s
The `const char *` argument is expected to be a pointer to a character array
. Characters from the array are written starting
from the first element of the array and ending at, but not including, the
terminating null byte (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, Holberton!");
}
```
Output:
```
Hello, Holberton!
```

#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
## License :

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

