package codeForces;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;




public class Businesstrip {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in .nextInt();
		Integer[] arr = new Integer[12];
		for(int i=0 ;i<12 ; i++) {
			arr[i] = in.nextInt();
		}

		Arrays.sort(arr , Collections.reverseOrder());
		int sum = 0,count = 0;
		for(int i=0 ; i<12 ; i++) {
			if(sum<n) {
				sum += arr[i];
				count++;
				continue;
			}
			break;
		}
		if(sum<n) {
			System.out.println(-1);
		}else
			System.out.println(count);
	}

}
