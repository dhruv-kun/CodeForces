package codeForces;

import java.util.Scanner;

public class DimaandFriends {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int sum=0;
		for(int i=0; i<n ; i++) {
			sum += in.nextInt();
		}
		int pos = sum%(n+1);
		int count=0;
		for(int i=1 ;i<=5; i++)
			if((pos+i)%(n+1) != 1) {
				count++;
			}
		System.out.println(count);
	}

}
