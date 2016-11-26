

public class Search_Number {
	private long[] Number=new long[10];
	public Search_Number(long[] array){
		this.Number=array;
	}
	public int find(long searchKey,int N){
		int lowerBound=0;
		int upperBound=N-1;
		int Key;
		
		while(true){
			Key=(lowerBound+upperBound)/2;
			if(Number[Key]==searchKey)
				return Key;
			else if(lowerBound>upperBound)
				return N;
			else {
				if(Number[Key]<searchKey)
					lowerBound=Key+1;
				else
					upperBound=Key-1;
			}
			
			
		}
		
	}

}
