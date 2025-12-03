/*
https://thehuxley.com/problem/286

Todo mundo provavelmente sabe que o jogo Zerinho ou um, usado para determinar um vencedor entre três ou mais jogadores.
Para aqueles não familiarizados, o jogo funciona da seguinte maneira:
Cada jogador escolhe um valor entre zero ou um; solicitado por um comando (geralmente um dos competidores anuncia " Zerinho ou.... Um!")
Todos os participantes mostram uma mão: se o valor escolhido é um, o competidor mostra uma mão com um dedo estendido, se o valor escolhido for zero
o competidor mostra uma mão com todos os dedos fechados. O ganhador é o único que optou por um valor diferente de todos os outros. Se não houver nenhum jogador com um valor de diferentes 
de todas as outras ( por exemplo, todos os jogadores escolhem zero, ou alguns jogadores escolhem zero e alguns jogadores escolheram um), não há nenhum vencedor. 
Alice, Beto e Clara são grandes amigos e jogam Zerinho ou Um o tempo todo, para determinar quem vai comprar a pipoca durante a sessão de cinema, quem vai entrar na natação primeiro etc. 
Eles jogam tanto que eles decidiram fazer um plugin para jogar Zerinho ou Um no Facebook. 
Mas eles não sabem como programar, então dividiram as tarefas entre os amigos que sabem, inclusive você.
Dadas os três valores escolhidos por Alice, Beto e Clara, cada valor de zero ou um, escrever um programa que determina se há um vencedor, e, nesse caso, determinar quem é o vencedor.
*/
#include <stdio.h>
int main() {
    
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    
    if(a != b && a != c){
        printf("A");
    }
    else{
        if(b != a && b != c){
            printf("B");
        }
        else if(c != a && c != b){
            printf("C");
        }
        else{
            printf("*");}
    }
	return 0;
}
