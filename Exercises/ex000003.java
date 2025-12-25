import java.util.Scanner;

public class ex000003{
    public static void main(String args[]){
        float n1,n2,n3,p1,p2,p3;
        Scanner e1,e2,e3,e4,e5,e6;
        e1 = new Scanner(System.in);
        n1 = e1.nextFloat();
        e2 = new Scanner(System.in);
        p1 = e2.nextFloat();
        e3 = new Scanner(System.in);
        n2 = e3.nextFloat();
        e4 = new Scanner(System.in);
        p2 = e4.nextFloat();
        e5 = new Scanner(System.in);
        n3 = e5.nextFloat();
        e6 = new Scanner(System.in);
        p3 = e6.nextFloat();
        float media;
        media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
        System.out.println(media);
    }
}