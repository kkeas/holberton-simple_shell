# Introduction
This is a project in the first trimester at Holberton. The goal is to create our own UNIX command interpreter similar to what Stephen Bourne created in 1979. The output must be the same as `sh`(`/bin/sh`) as well as the exact same error message.

# Compilation
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
`

# Functionality
### Interactive Mode
```
$ ./hsh
```
### Non-interactive Mode
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
