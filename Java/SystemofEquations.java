package codeForces;

import java.util.Scanner;

public class SystemofEquations {

	public static void main(String[] args) {
	Scanner in = new Scanner(System.in) ;
	int n = in.nextInt();
	int m = in.nextInt();
	int count =0;
	
	for(int i=0 ; i<=n ; i++) {
		for(int j=0; j<=m ; j++) {
			
			if((i+(j*j ))== m && ((i*i)+j) ==n) {
				count++;
				System.out.println(i+" "+j);
			}
		}
	}
	System.out.println(count);
	}

}
