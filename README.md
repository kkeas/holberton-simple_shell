<!---Banner--->

![Black Modern Minimalist Simple Technology Banner (1)](https://user-images.githubusercontent.com/108370739/206234535-74f666cc-1884-4512-bc07-02addfff7e32.png)

simple shell project by Taylor and Kat
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

<!---Taylor STATS--->
Taylor

[![Anurag’s github stats](https://github-readme-stats.vercel.app/api?username=WoodsonTD)](https://github.com/WoodsonTD)

[![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=WoodsonTD&layout=compact)](https://github.com/WoodsonTD)

<!---Kat STATS--->
Kat

[![Anurag’s github stats](https://github-readme-stats.vercel.app/api?username=kkeas)](https://github.com/kkeas)

[![Top Langs](https://github-readme-stats.vercel.app/api/top-langs/?username=kkeas&layout=compact)](https://github.com/kkeas)
