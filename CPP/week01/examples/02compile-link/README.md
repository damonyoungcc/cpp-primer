## 1、`mian.cpp` 只编译不链接

- `g++ -c main.cpp`

## 2、`mul.cpp` 只编译不链接

- `g++ -c mul.cpp`

## 3、链接两个 `Object file`，输出可执行文件名为 `mul`

- `g++ main.o mul.o -o mul`
