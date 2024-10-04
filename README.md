# Buffer_overflow

### Definition
A **buffer overflow** is a type of vulnerability that occurs when a program writes more data into a buffer than it can hold. This overflow can overwrite adjacent memory locations, corrupting data, crashing the program, or even allowing an attacker to execute arbitrary code. Buffer overflows are one of the most common vulnerabilities exploited by attackers to gain unauthorized access to a system.

### Types of Buffer Overflows

1.  **Stack-Based Buffer Overflow**
2.  **Heap-Based Buffer Overflow**

---
OSG202 10/4 buffer overflow test



Disable ASLR
```
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

Compile 
```
gcc -fno-stack-protector -z execstack -no-pie Example2.c -o Ex2
```
