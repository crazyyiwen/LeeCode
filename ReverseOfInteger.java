/**
 * Created by Crazyyiwen on 1/24/2017.
 */
import java.util.Scanner;
public class ReverseOfInteger {
    public int calculateReverseOfInteger(int integerPass){
        int quot=integerPass;
        int temp=0;
        int num=0;
        while(quot!=0){
            temp=num*10+quot%10;
            quot=quot/10;
            if(temp/10!=num){
                num=0;
                break;
            }
            num=temp;
        }
        return num;
    }
    public static void main(String[] args){
        int integer;
        int finalResult;
        Scanner scanner=new Scanner(System.in);
        ReverseOfInteger result=new ReverseOfInteger();
        System.out.printf("Please input an integer: %n");
        finalResult=scanner.nextInt();
        integer=result.calculateReverseOfInteger(finalResult);
        System.out.printf("The result is: %d",integer);
    }
}
