;Usando print_str e print_crlf, exiba duas linhas: “Hello, DOS!” e “Bem-vindo ao 8086”

org 100h

start:

    mov dx, offset hello
    call print_str
    call print_crlf
    mov dx, offset welcome
    call print_str
    call print_crlf
    mov ax, 4ch
    int 21h

print_char:
    mov ah,02h
    int 21h
    ret

print_str:
    mov ah, 09h
    int 21h
    ret

print_crlf:
    mov dl,13
    call print_char
    mov dl, 10
    call print_char
    ret

hello db 'Hello, DOS!$'
welcome db 'Bem-vindo ao 8086$'    

end start