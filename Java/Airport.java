package codeForces;

import java.util.Arrays;
import java.util.Scanner;

public class Airport {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int x = in.nextInt();
		int y = in.nextInt();
		
		int[] arr = new int[y];
		int[] arr1 = new int[y];
		
		for(int i=0 ; i<y ; i++) {
			arr1[i] = arr[i] = in.nextInt();
			
		}
		
		int a=0;
		int b=arr.length-1;
		int max=0 , min=0 ;
		
		for(int i=0 ; i<x ; i++) {
			Arrays.sort(arr);
			Arrays.sort(arr1);
			
			if(y!=0) {
				if(arr[a]==0) {
					a++;
					min += arr[a];
					arr[a]--;
				}else {
					min += arr[a];
					arr[a]--;
				}
				
				if(arr1[b]==0) {
					b--;
					max += arr1[b];
					arr1[b]--;
				}else {
					max += arr1[b];
					arr1[b]--;
				}
			}
			
		}
		
		
		System.out.println(max + " " +min);
		
		
	}

}
