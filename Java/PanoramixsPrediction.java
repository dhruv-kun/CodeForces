package codeForces;

import java.util.Scanner;

public class PanoramixsPrediction {
	
	public static boolean checkPrime(int a) {
		for(int i=2; i<=Math.sqrt(a); i++) {
			if(a%i==0) {
				return false;
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		boolean flag;
		int i;
		for(i=n+1;i<=m;i++) {
			
			flag = checkPrime(i);
			if(flag)
				break;
		}
		if(i==m)
			System.out.println("YES");
		else
			System.out.println("NO");
		
	}

}
