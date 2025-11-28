; 1 -  Exibir mensagem na tela. Escreva um programa que imprima exatamente: Ola,mundo!
;
;org 100h
;
;start:
;    mov dx, offset msg
;    mov ah, 09h    
;    int 21h
;    
;    mov ax, 4ch
;    int 21h
;    
;msg db 'Ola, mundo!',13,10,'$'
;    
;end start     


; 2 - Ler e ecoar caractere. O programa deve aguardar um caractere ser digitado e, em seguida, exibi-lo na tela.
;
;org 100h
;
;start:
;
;    mov ah, 01h
;    int 21h
;    
;    mov dl, al
;    mov ah, 02h
;    int 21h
;    
;    mov ax, 4ch
;    int 21h
;    
;end start

; 3 - Imprimir os dígitos de 1 a 9 sem usar loop. Utilize apenas chamadas de impressão, uma para cada caractere.

;org 100h

;start:

;    mov dl, '1'
;    mov ah, 02h
;    int 21h
;   
;    mov dl, '2'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '3'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '4'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '5'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '6'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '7'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '8'
;    mov ah, 02h
;    int 21h
;    
;    mov dl, '9'
;    mov ah, 02h
;    int 21h
;    
;    mov ax, 4ch
;    int 21h
;end start

; 4 - Imprimir o caractere * dez vezes usando loop. Utilize o registrador CX como contador e a instrução loop.

;org 100h
;
;start:
;    mov cx, 0
;    
;exibir:
;    inc cx
;    mov dl, "*"
;    mov ah, 02h
;    int 21h
;    cmp cx, 10
;    jnz exibir
;    
;final:
;    mov ax, 4ch
;    int 21h
;    
;end start

; 5 - Somar dois valores armazenados na memória e exibir no final

org 100h

a db 5
b db 20
c db 0

start:

    mov al, a
    mov bl, b
    add al, bl
    mov c, al
    
    mov al, c
    call print_u8
    
    mov ax, 4ch
    int 21h

print_u8:
    cmp al, 10
    jb one_digit
    xor ah, ah
    mov bl, 10
    div bl
    
    mov bh, ah
    add al, '0'
    mov dl,al
    mov ah,02h
    int 21h
    mov dl, bh
    add dl, '0'
    mov ah, 02h
    ret
 
one_digit:
    add al,'0'
    mov dl, al
    mov ah, 02h
    int 21h
    ret
    


end start