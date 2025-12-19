org 100h

start:
    ;-------------------------------------------------------------------------------
    ;Dentro do registrador ele está fazendo a escrita na parte alta
    ;Ele faz uma tradução de ascii para AL para seu respectivo número correspondente
    mov ah, 01h 
    ;-------------------------------------------------------------------------------
    int 21h
    cmp al, 13 ;Dentro do registrador ele está fazendo a comparação com a parte baixa
    je final
    jne start
        
final:
    mov ax, 4ch
    int 21h      
       
end start