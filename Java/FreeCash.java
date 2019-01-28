package codeForces;

import java.util.Scanner;

public class FreeCash {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] hr = new int[n];
		int[] min = new int[n];
		int[] time = new int[n];
		for(int i=0 ;i<n ;i++) {
			hr[i] = in.nextInt();
			min[i] = in.nextInt();
			time[i] =( hr[i]*60 )+ min[i];
		}
	
		int count=0,count1=0;
		
		for(int i=1 ; i<n ; i++){	
				
			if(time[i]==time[i-1]){
					count1++;
				}else{
					count1 =0;
				}
			
			if(count<count1){
				count = count1;
			}		
			
		}
		System.out.println(1+count);

	}

}