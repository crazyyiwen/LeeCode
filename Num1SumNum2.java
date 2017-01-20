/**
 * Created by Crazyyiwen on 1/15/2017.
 */
import java.util.Scanner;

public class Num1SumNum2 {
    private int Sum;
    private int Carry;
    public int twoNumberSum(int Num1,int Num2) {
        while (Num2 != 0) {
            Sum = Num1 ^ Num2;
            Carry = Num1 & Num2;
            if (Num2 != 0)
                Carry = Carry << 1;
            Num1 = Sum;
            Num2 = Carry;
        }
        return Num1;
    }
    public static void main(String[] args){
            int NumInput1;
            int NumInput2;
            int Result;
            Scanner scanner=new Scanner(System.in);
            System.out.println("Please input the first number: ");
            NumInput1=scanner.nextInt();
            System.out.println("Please input the second number: ");
            NumInput2=scanner.nextInt();
            Num1SumNum2 numSum=new Num1SumNum2();
            Result=numSum.twoNumberSum(NumInput1,NumInput2);
            System.out.printf("Please input the second number: %d",Result);
    }

}

