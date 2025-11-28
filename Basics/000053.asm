org 100h

start:
    ;---------------------------
    ; Limpeza dos registradores
    xor ax, ax
    xor bx, bx
    ;---------------------------
    
    mov al, 22
    mov bl, 12
    add al, bl ; 34 -> al
    mov [s], al ; AL -> S
    
    mov al, 22
    call print_u8 ; Vai exibir o 22
    
    mov dl, '+' ; Vai exibir o +
    mov ah, 02h
    int 21h
    
    mov al, 12 ; Imprime 12
    call print_u8
    
    mov dl, '='
    mov ah, 02h
    int 21h
   
    mov al, [s]
    call print_u8
    
    mov dl, 13
    mov ah, 02h
    int 21h
    
    mov dl, 10
    mov ah, 02h
    int 21h
    
    mov ax, 4ch
    int 21h 
    
print_u8:
    cmp al, 10
    jb one_digit
    
    xor ah, ah
    mov bl, 10
    div bl ; Divide o AX por 10
    mov bh, ah ; Vamos pegar a parte da dezena
    
    add al, '0'
    mov dl, al
    mov ah, 02h
    int 21h
    mov dl, bh
    add al, '0'
    mov ah, 02h
    int 21h
    
one_digit:
    add al, '0'
    mov dl,al
    mov ah,02h
    int 21h
    ret
    
s db 0

end start