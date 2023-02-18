public class d
{
	public static void main(String[] args)
	{
  int maxValue = numbers[0];
  for(int i=1;i < numbers.length;i++){
    if(numbers[i] > maxValue){
	  maxValue = numbers[i];
	}
  }
  return maxValue;
}

public static int getMinValue(int[] numbers){
  int minValue = numbers[0];
  for(int i=1;i<numbers.length;i++){
    if(numbers[i] < minValue){
	  minValue = numbers[i];
	}
  }
  return minValue;
}
}