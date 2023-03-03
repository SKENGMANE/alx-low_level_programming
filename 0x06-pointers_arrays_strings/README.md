More tasks on Arrays, pointers and strings in C
---
[0-strcat.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c)
* A function that concatenates two strings.
* This function appends the `src` string to the `dest` string, overwriting the terminating null byte `(\0)` at the end of `dest`, and then adds a terminating null byte
* Returns a pointer to the resulting string `dest`.
---
[1-strncat.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c)
* A function that concatenates two strings.
* The `_strncat` function is similar to the `_strcat` function, except that
  * it will use at most `n` bytes from `src`; and
  * `src` does not need to be null-terminated if it contains `n` or more bytes
* Return a pointer to the resulting string `dest`.
---
[2-strncpy.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c))
* A function that copies a string.
---
[3-strcmp.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c)
* A function that compares two strings.
---
[4-rev_array.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c)
* A function that reverses the content of an array of integers.
---
[5-string_toupper.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c)
* A function that changes all lowercase letters of a string to uppercase.
---
[6-cap_string.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c)
* A function that capitalizes all words of a string.
---
[7-leet.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c)
* A function that encodes a string into 1337.
  * Letters a and A should be replaced by 4
  * Letters e and E should be replaced by 3
  * Letters o and O should be replaced by 0
  * Letters t and T should be replaced by 7
  * Letters l and L should be replaced by 1
---
[100-rot13.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/100-rot13.c)
* A function that encodes a string using rot13.
---
[101-print_number.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/101-print_number.c)
* A function that prints an integer.
---
[102-magic.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/102-magic.c)
* Added one line to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints `a[2] = 98`, followed by a new line.
---
[103-infinite_add.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/103-infinite_add.c)
* A function that adds two numbers.
  * The function returns a pointer to the result
  * The function returns `0`.
---
[104-print_buffer.c](https://github.com/SKENGMANE/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/104-print_buffer.c)
* A function that prints a buffer.
  * The function prints the content of `size` bytes of the buffer pointed by `b`.
  * The output prints 10 bytes per line
  * Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`
  * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
  * Each line shows the content of the buffer. If the byte is a printable character,it prints the letter, if not,it prints `.`
  * Each line ends with a new line `\n`
  * If size is 0 or less, the output should be a new line only `\n`
---
