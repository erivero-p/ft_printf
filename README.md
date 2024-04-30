Printf, but not so.
<h3>Project Tree</h3>

```
.
.
├── Makefile
├── chars.c
├── digits.c
├── ft_printf.c
└── ft_printf.h

```

To understand how printf works, we will need to learn about [variadic functions](https://github.com/erivero-p/42-Tutorials/tree/master/Variadic%20Functions). Once we get it:

Briefly, ft_printf() will iterate through the string until it finds the format specifier '%', after which it will call the function dedicated to filtering what type of variable we are going to print, and call the corresponding printer functions.

It’s important to make sure that our ft_printf() function returns properly the amount of characters printed. In my version, the printer functions will receive a pointer to the integer declared on ft_printf(), so they will update its value while printing.
