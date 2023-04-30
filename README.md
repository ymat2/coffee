# coffee
`coffee` is a joke command that generate a coffee ASCII art writen in C++.

## Requirements
- C++14 Compiler (e.g. `g++`)
- 'make'

## Install & Build
```bash
git clone https://github.com/ymat2/coffee
cd coffee
make
export PATH="PATH_TO_THIS_DIRECTORY"  # in ~/.bashrc etc.
```

## Usage
`coffee` generates a coffee ASCII art for a specified time in `-t` option.
(The default time is 10 sec.)

> **Note**  
> Console will be cleared when running coffee


```bash
coffee -t 20
>>>
Let's have a coffee break...

    (((
     )))
   _______
  ||     ||q
   \     /_/
    `---'
```
