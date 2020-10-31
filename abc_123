import java.util.*;
class Pascal
{
    public static void main() //main function
  {
    Scanner in =new Scanner(System.in);
    int n;
    System.out.println("Enter a number.");
    n=in.nextInt(); //accepting value
    int pas[] = new int [n+1];
    pas[0] = 1;
    for (int i=0; i<n; i++) //loop evaluating the elements
    {
        for (int j=0; j<=i; ++j)
        System.out.print(pas[j]+" "); //printing the Pascal Triangle elements
        System.out.println( );
        for (int j=i+1; j>0; j--)
        pas[j]=pas[j]+pas[j-1];
    }
  }
}
