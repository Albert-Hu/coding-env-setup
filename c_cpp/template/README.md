This example shows you how to use I/O redirection on command line.

# Build Programming using Command Line
```
gcc -o main main.c
```

# Execute Program with Input Redirection

Following command will take input from file instead of keyboard.

## Run on Linux or MacOS
```
./main < test.txt
```

## Run on Windows
```
main.exe < test.txt
```

# Execute Program with Output Redirection

Following command will output message to file instead of screen.

## Run on Linux or MacOS
```
./main < test.txt > output.txt
```

## Run on Windows
```
main.exe < test.txt > output.txt
```
