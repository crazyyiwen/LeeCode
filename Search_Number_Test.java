
public class Search_Number_Test {
	public static void main(String[] args){
		long SK=10;
		int NS=10;
		long[] Num_Test={1,2,3,4,5,6,7,8,9,10 };
		Search_Number test=new Search_Number(Num_Test);
		System.out.printf("The number is: %d",test.find(SK,NS));
	}

}
