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
    - PHP API Version: 20170718
- `/build/hello-20180731.so`
    - php 7.2
    - x64 elf
    - PHP API Version: 20180731
- `/build/hello-20190529.so`
    - php 7.4
    - x64 elf
    - PHP API Version: 20190529
