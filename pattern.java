import java.utill.Scanner
 public class pattern{
public static void main(String args[]){
    int n;
    Scanner scan=new Scanner(System.in);
    n=scan.next();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            System.out.print("* ");
        }
        System.out.println();
    }
}
 }