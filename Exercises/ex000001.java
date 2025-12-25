import java.util.*;

public class ex000001{
    public static void main(String args[]){
        int a,b,c,d;
        Scanner e1,e2,e3,e4;
        e1 = new Scanner(System.in);
        a = e1.nextInt();
        e2 = new Scanner(System.in);
        b = e2.nextInt();
        e3 = new Scanner(System.in);
        c = e3.nextInt();
        e4 = new Scanner(System.in);
        d = e4.nextInt();
        int soma;
        soma = a + b + c + d;
        System.out.println(soma);
    }
}