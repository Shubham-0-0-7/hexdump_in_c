# Hexdump (Custom Implementation in C)

A minimal re-implementation of `hexdump -C` written from scratch in C.  
It prints:

- Offsets in hexadecimal  
- 16 bytes per line  
- Hexadecimal byte values  
- ASCII column (non-printable characters replaced with `.`)  
- Final total byte count  

This project was created to understand how hex viewers format binary data.

## Original Hexdump 
<img width="556" height="121" alt="image" src="https://github.com/user-attachments/assets/3351f6e5-fb3a-4d83-aead-266ce1101803" />

## My Hexdump written in C
<img width="556" height="121" alt="image" src="https://github.com/user-attachments/assets/3f79dfe0-91a1-4f16-8818-f97813c54340" />

### Usage 
### compile  
`gcc myhexdump.c -o myhexdump`
### run with piped input  
`echo "Hello, how are you" | ./myhexdump`
### or read from a file  
`./myhexdump < file_name.bin`
