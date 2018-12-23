package codeForces;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class BicycleChain {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in) ;
		int n = in.nextInt();
		int ans =0;
		int[] arrf = new int[n];
		for(int i=0 ; i <n ; i++) {
			arrf[i] = in.nextInt();
		}
		int m = in.nextInt();
		int[] arrr = new int[m];
		
		for(int i= 0 ; i<m ; i++) {
			arrr[i] = in.nextInt();
		}
		boolean check=false;
		ArrayList<Integer> al = new ArrayList<>();
		for(int i=0 ; i<m ; i++) {
			for(int j=0 ; j<n ; j++) {
				if(arrr[i]%arrf[j]==0) {
					check = true;
					int c = arrr[i]/arrf[j];
					al.add(c);
				}
			}
		}
		Collections.sort(al, Collections.reverseOrder());
		if(check)
			ans = al.lastIndexOf(al.get(0))+1;
		
		System.out.println(ans);
		

	}

}
