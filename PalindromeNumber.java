/**
 * Created by Crazyyiwen on 1/19/2017.
 * Check a positive number is a palindrome or not.
 * A palindrome number is that if you reverse
 * the whole number you will get exactly the same number.
 */
import java.util.Scanner;
public class PalindromeNumber {

    public boolean detrermine(String str){
        char[] numArray=str.toCharArray();
        for(int i=0;i<=(numArray.length-1)/2;i++){
            if(numArray[i]==numArray[numArray.length-1-i]);
            else
                return false;
        }
        return true;
    }
    public static void main(String[] args){
        boolean result;
        int num;
        String string=new String();
        Scanner scanner=new Scanner(System.in);
        PalindromeNumber palindromeNum=new PalindromeNumber();
        System.out.printf("Please enter the integer number: %n");
        num=scanner.nextInt();
        string=String.valueOf(num);
        result=palindromeNum.detrermine(string);
        System.out.printf("If the input number is the palindrome number %b",result);


    }
}
