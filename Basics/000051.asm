org 100h

start:
    mov dx, offset msg
    mov ah, 09h
    int 21h
    mov ax, 4ch
    int 21h

msg db 'Hello, World!',13,10,'$'
end start