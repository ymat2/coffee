# coffee
`coffee` is a joke command that generates a coffee ASCII art writen in C++.

## Requirements
- Unix-like environment (supports [ANSI escape codes](https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797))
- C++14 Compiler (e.g. `g++`)
- `make`

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
