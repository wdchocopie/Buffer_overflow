# Buffer_overflow
OSG202 10/4 buffer overflow test

Disable ASLR
```
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

Compile 
```
gcc -fno-stack-protector -z execstack -no-pie Example2.c -o Ex2
```
