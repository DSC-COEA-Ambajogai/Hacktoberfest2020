package com.company.DATASTRUCTURES.Searching;

import java.util.Scanner;

public class LinearSearchAlgorithm {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);

        int m =obj.nextInt();
        int arr[]=new int[m];
        for (int i = 0; i <m ; i++) {
            arr[i]=obj.nextInt();
        }

        System.out.println("Enter a Number to search : ");

        int n = obj.nextInt();
        System.out.println(line(arr,n));

    }
    public static int line(int arr[],int n){
        int index=-1;
        for (int i = 0; i <arr.length ; i++) {
            if(arr[i]==n){
                index = i;
                break;
            }
        }
        return index;
    }
}
