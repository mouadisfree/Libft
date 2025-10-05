
# Libft - 1337 School Custom C Library
![Libft Banner](https://github.com/user-attachments/assets/c37a59df-3dd9-4503-b97f-ff24cd1a8206)
*Your first step into building a custom C library*
---
## Overview
**Libft** is a custom implementation of essential C library functions and additional utility functions, developed as part of the 1337 School curriculum. The goal of this project is to strengthen understanding of low-level programming concepts, memory management, and reusable code design. This library will serve as the foundation for future projects.

---

## Features
- Reimplementation of standard `libc` functions, such as `strlen`, `strcpy`, and `memcpy`.
- Custom utility functions for advanced string manipulation, memory allocation, and more.
- Linked list manipulation functions to handle dynamic data structures.
- Fully compliant with **Norminette**, the 42/1337 coding style standard.

---

## Getting Started

### Prerequisites
To use this library, you need:
- A working C compiler, such as `gcc`.
- A UNIX-like operating system (Linux, macOS).

### Installation
1. Clone the repository:
   ```bash
   git clone git@github.com:mouadisfree/Libft.git
   cd Libft


2. Build the library:
   ```bash
   make
   ```

   This will generate a `libft.a` file, which is your compiled static library.

---

## Project Structure

### Mandatory Part - Libc Functions
Reimplementations of basic C standard library functions. Examples include:
- **String Functions**: `ft_strlen`, `ft_strcpy`, `ft_strjoin`
- **Memory Functions**: `ft_memset`, `ft_memcpy`, `ft_memmove`
- **Character Checks**: `ft_isalpha`, `ft_isdigit`, `ft_tolower`

### Additional Functions
Additional utilities not included in the standard library:
- **String Utilities**: `ft_substr`, `ft_strtrim`, `ft_split`
- **Number Conversion**: `ft_itoa`
- **Memory Management**: `ft_calloc`

### Bonus Part - Linked List Functions
Functions to manipulate linked lists:
- `ft_lstnew`: Create a new list node.
- `ft_lstadd_front`: Add a node at the beginning.
- `ft_lstiter`: Iterate through the list and apply a function.

---

## Testing
You can use popular Libft testers to verify the functionality and conformity of your library:

### Recommended Testers
1. [libft-unit-test](https://github.com/alelievr/libft-unit-test)
2. [libft-war-machine](https://github.com/ska42/libft-war-machine)
3. [libft-tester](https://github.com/Tripouille/libftTester)

### Running Tests
1. Clone a tester repository into your project directory.
2. Follow the instructions provided by the tester to execute the tests.

---

## Contributions
Contributions are not accepted for this project, as it is an academic assignment. However, feel free to fork this repository and experiment with it for personal learning.

---

## Author
Developed by **mouadisfree** as part of the curriculum at **1337 School**, a member of the 42 Network.

---

## License
This project is intended for educational purposes and is subject to the rules and policies of 1337 School. Redistribution or plagiarism is strictly prohibited.

---

## Acknowledgments
Special thanks to 1337 School and its peer-to-peer learning community for creating such a challenging and rewarding environment.
