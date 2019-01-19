#include <stdio.h>
#include <stdlib.h>


int maxSum(int data[], int first, int end)
{
	if (first == end)
		return data[first];
	else
	{
		int sum = 0;
		int mid = (first + end) / 2;
        // case 1
		int sumLeft = maxSum(data, first, mid);
        // case 2
		int sumRight = maxSum(data, mid + 1, end);
		// case 3
		int s1 = 0, lefts = 0;
		for (int i = mid; i >= first; i--)
		{
			lefts += data[i];
			if (lefts > s1)
				s1 = lefts;
		}
		int s2 = 0, rights = 0;
		for (int i = mid + 1; i <= end; i++)
		{
			rights += data[i];
			if (rights > s2)
				s2 = rights;
		}
		sum = s1 + s2;
		if (sumLeft > sum)
			sum = sumLeft;
		if (sumRight > sum)
			sum = sumRight;
		return sum;  //情况1、2、3中，返回最大的那个
	}
}
int main(int argc, char *argv[])
{
	int data[20] = {0, -20, 11, -4, 13, -5, -2};
	printf("最大子段和：%d", maxSum(data, 0, 6));
	system("pause");
	return 0;
}
