
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    // Quando a gente insere valores em um programa, mesmo que ainda pequeno, no processamento desses dados
    // eles são armazenados na CPU e guardados na RAM contendo seu endereço de Memória e a CPU sabe desses
    // endereços. Assim, se em um código for preciso novamente esses dados, ele realiza um chamado diretamente
    // da memória desse dado, a CPU sabe o endereço de cada dado e ele não precisa ir do 1 até X Address.
    
    // Para quando vamos utilizar os dados em um software, precisamos saber os endereços de memória que não
    // estão sendo utilizados, porém, para realizar-mos essa manipulação precisamos estudar ponteiros.
    // Porém, antes de ingressar-mos no estudo de ponteiros, vamos manipular os dados através de variáveis.
    // Os endereços de memória das variáveis quem vai gerir vai ser o próprio processador na memória RAM.
    
    /* Quando declaramos uma variável, a gente precisa definir seu tipo e seu nome para que fique de fácil
    acesso a CPU quando for preciso desse dado e definir para ela qual o espaço vai ser preciso para guardar
    os dados. Ex de variável: `float x;` - A variável `x` vai ser do tipo flutuante, isso quer dizer que vai
    trabalhar com dados do tipo real ou de ponto flutuante como 5.2, 5.5 etc...*/
    
    float x,y,z; // Quando a gente defini as variáveis dessa forma, elas vão ser declaradas na Memória
    // mas aind que declara elas não contém valor ainda na memória a serem guardadas
    
    /* Tipos de dados na linguagem C: 
    Inteiro = (int) - (-32767 a +32767) - Utiliza 2 Bytes para ser armazenado
    Inteiro = (long int) - (-2147483647 a +2147483647) - Utiliza de 4 bytes para ser armazenado
    Caractere = (char) - (Qualquer caractere válido) - 1 Byte para ser armazenado
    Real = (float) - (2⁻³⁷ a 2⁺³⁷) - Utiliza 4 bytes para ser armazenado 
    Real = (double) - (2⁻³⁷ a 2⁺³⁷) - Utiliza 8 bytes para ser armazenado */
    
    
    return 0;
    
    // Esse (return 0) faz com que seja enviada uma instrução ao processador indicando que foi tudo realizado
    // corretamente e que pode ser finalizado.
}