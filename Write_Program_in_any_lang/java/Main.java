import java.io.*; 
import java.lang.System; 
class Main
{ 
	static int LINE = 2; 
	static int STATION = 15; 
	
	static int min(int x, int y) 
	{ 
		return( x < y ? x : y); 
		
	} 
	
	static int lineAssembly(int a[][], int trans[][], int start[], int end[]) 
	{ 
		int T1[]= new int [STATION]; 
		int T2[] =new int[STATION] ; 
		int i; 
	
		T1[0] = start[0] + a[0][0]; 
		
		T2[0] = start[1] + a[1][0]; 
	
		for (i = 1; i < STATION; i++) 
		{ 
			T1[i] = min(T1[i - 1] + a[0][i], 
					T2[i - 1] + trans[1][i] + a[0][i]); 
			T2[i] = min(T2[i - 1] + a[1][i], 
					T1[i - 1] + trans[0][i] + a[1][i]); 
		} 
	
		return min(T1[STATION-1] + end[0], 
					T2[STATION-1] + end[1]); 
	} 
	
	
	public static void main (String[] args) 
	{ 
		int a[][] = {{8, 5, 13, 9, 7, 12, 14, 8, 9, 15, 10, 6, 5, 11, 8}, {6, 10, 11, 14, 9, 7, 13, 11, 6, 9, 10, 7, 13, 5, 10}}; 
		int trans[][] = {{6, 7, 14, 5, 8, 9, 10, 6, 13, 11, 12, 15, 10, 6, 9}, {10, 9, 12, 8, 7, 6, 11, 12, 8, 5, 15, 12, 10, 9, 13}}; 
		int start[] = {11, 6}, end[] = {13, 9}; 
	
		System.out.println(lineAssembly(a, trans, start,end));	 
	
	} 
} 
