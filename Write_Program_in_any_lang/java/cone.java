import java.util.concurrent.ThreadLocalRandom;
import java.util.Arrays;
class cone 
{ 
	public static void main (String[] args) 
	{ 
		int i,j;
		int arr[] = new int[100];
		int ar[] = new int[100];
		for(i=0 ; i<100 ; i++)
		{
			arr[i] = ThreadLocalRandom.current().nextInt(1, 95);
		}
		
		for(i=0 ; i<100 ; i++)
		{
		    ar[i]=arr[i]+ ThreadLocalRandom.current().nextInt(1,95);
		    if(ar[i]>100) {
		    	do {
		    		ar[i]=arr[i]+ ThreadLocalRandom.current().nextInt(1,95);
		    	}while(ar[i]>100);
		    }
		}
		
		Arrays.sort(ar);
		
		System.out.print("Following activities are selected[Index Number] : n"); 
		System.out.println();
	       
	    i = 0; 
	    System.out.print(i+" ");
	    
	    for (j = 1; j < 100; j++) 
	    { 
	         if (arr[j] >= ar[i]) 
	         { 
	              System.out.print(j+" "); 
	              i = j; 
	          } 
	     }
	    
	} 
}
