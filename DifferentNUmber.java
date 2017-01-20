/**
 * Created by Crazyyiwen on 1/16/2017.
 * Given an array of integers, remove the duplicate numbers in it.
 *
 * You should:
 * 1. Do it in place in the array.
 * 2. Move the unique numbers to the front of the array.
 * 3. Return the total number of the unique numbers.
 */
import java.util.Scanner;
public class DifferentNUmber {
    public static void integerInput(int[] array1){
        Scanner scanner_=new Scanner(System.in);
        for(int i=0;i<array1.length;i++){
            array1[i]=scanner_.nextInt();
        }
    }
    public static void printInt(int[] array2){
        for(int i=0;i<array2.length;i++){
            System.out.printf("%d  ",array2[i]);
        }
    }
    public static int removeDuplicateNumber(int[] array3){
        int midWay;
        int autoNum=0;
        int change;
        for(int i=0;i<array3.length-1;i++){
            for(int j=1+i;j<array3.length;j++)
                if(array3[i]>array3[j]){
                midWay=array3[i];
                array3[i]=array3[j];
                array3[j]=midWay;
            }
        }
        System.out.println();
        for(int i=array3.length-1;i>=1;i--){
            if(i==array3.length-1){
                if (array3[i] == array3[i - 1])
                    autoNum++;
            }
            else{
                if (array3[i] == array3[i - 1]) {
                    autoNum++;
                    change=i;
                    midWay = array3[i];
                    for(int j=0;j<array3.length-1-i;j++) {
                        array3[change] = array3[change + 1];
                        ++change;
                    }
                    array3[array3.length - 1] = midWay;
                }
            }
        }
        return array3.length-autoNum;
    }

    public static void main(String[] args){
        int result;
        int[] arrayInput=new int[5];
        System.out.printf("Please input the array integers:");
        integerInput(arrayInput);
        result=removeDuplicateNumber(arrayInput);
        System.out.printf("The unique integers in the array: %n");
        printInt(arrayInput);
        System.out.printf("The total number of the unique numbers: %d",result);
    }
}
