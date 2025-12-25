import java.util.Scanner;

public class ex000002{
    public static void main(String args[]){
        float n1,n2,n3;
        Scanner e1,e2,e3;
        e1 = new Scanner(System.in);
        n1 = e1.nextFloat();
        e2 = new Scanner(System.in);
        n2 = e2.nextFloat();
        e3 = new Scanner(System.in);
        n3 = e3.nextFloat();
        float media;
        media = (n1+n2+n3) / 3;
        System.out.println(media);
    }
}