# Libft

**Libft** is the first project of the 42 Common Core curriculum. The goal is to create a personal C library containing reimplementations of standard C library functions, along with additional utility functions.

The project introduces fundamental concepts such as memory management, pointers, string manipulation, and linked lists.

## 🛠️ Technologies

- **Language:** C
- **Compiler:** `cc`
- **Standard:** C
- **Build system:** Makefile

## 📁 Project Structure

```text
libft/
├── includes/
│   └── libft.h
├── src/
│   ├── ft_*.c
│   └── ...
├── Makefile
└── README.md
```

*The structure may evolve as the project develops.*

## ⚙️ Compilation

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

Other available Makefile rules:

```bash
make clean
make fclean
make re
```

## 🚀 Usage

Include the library header in your C project:

```c
#include "libft.h"
```

Compile your source files together with the library:

```bash
cc main.c -L. -lft -Iincludes -o program
```

## 📚 Project Goals

- Reimplement standard C library functions.
- Develop a deeper understanding of pointers and memory allocation.
- Practise string and memory manipulation.
- Build reusable utility functions.
- Gain experience with static libraries and Makefiles.

## 📌 Progress

This repository documents my progress through the Libft project as part of the 42 Common Core curriculum.

---

**Author:** WrinkledPath 
**School:** 42
