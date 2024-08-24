![Make default](https://github.com/maximodleon/sampledb/actions/workflows/c-make.yml/badge.svg)

# How to run the tests


in the `test` folder run the following command

```bash
gcc -o test -I<relative path to munit.h> -L<path to munit folder> <path to munit.c> main.c
```

example

```bash
gcc -o test -I../munit -L/home/munit ../munit/munit.c main.c
```
