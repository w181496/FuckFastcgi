# hello module

The `hello_world()` function is equl to `system()`

e.g. `hello_world("ls -al");`

Caution: different php api version may cause module loading error.

## how to build

- phpize
- ./configure
- make

## example

- `/build/hello.so`
    - php 7.2
    - x64 elf
    - PHP Api Version: 20170718
