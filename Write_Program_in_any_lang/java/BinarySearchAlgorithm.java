package com.company.DATASTRUCTURES.Searching;

import java.util.Scanner;

public class BinarySearchAlgorithm {
    public static void main(String[] args) {
//        int arr[] = {21,25,35,46,56,64,79,100};
        Scanner obj=new Scanner(System.in);
        int m =obj.nextInt();
        int arr[] =new int[m];
        for (int i = 0; i <m ; i++) {
            arr[i]=obj.nextInt();
        }
        System.out.println("Enter a number to search : ");
        int n=obj.nextInt();
        System.out.println(bubb(arr,n));

    }
    public static   int bubb(int arr[], int n){
        int low=0;
        int high=arr.length-1;

        while (low<=high){
            int mid = (low+high)/2;
            if(n< arr[mid]){
                high = mid-1;
                mid = (low+high)/2;
            }else if(n>arr[mid]){
                low = mid+1;
                mid = (low+high)/2;
            }else{
                return mid;
            }
        }
        return -1;
    }
}
