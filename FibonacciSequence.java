/**
 * Created by Crazyyiwen on 1/22/2017.
 */
import java.util.Scanner;
public class FibonacciSequence {
    private int resultOfFib;
    private int midNum1;
    private int midNum2;
    public int calculateFib(int number){
        if(number<=2){
            return (number-1);
        }
        else{
            midNum1=0;
            midNum2=1;
            for(int i=1;i<=number-2;i++){
                resultOfFib=midNum1+midNum2;
                midNum1=midNum2;
                midNum2=resultOfFib;
            }
            return resultOfFib;
        }
    }

    public static void main(String[] args){
        int result;
        Scanner scanner=new Scanner(System.in);
        FibonacciSequence fibonacciSequence=new FibonacciSequence();
        System.out.printf("Please input the number: %n");
        result=fibonacciSequence.calculateFib(scanner.nextInt());
        System.out.printf("The result is : %d", result);
    }
}
