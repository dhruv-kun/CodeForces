package codeForces;

import java.util.Scanner;

public class QueueattheSchool {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int t = in.nextInt();
		String s = in.next();
		char []student = s.toCharArray();
		int c=0;
		while(c!=t) {
			for(int i=1; i < n ; i++) {
				if(student[i-1]=='B'&&student[i]=='G') {
					char temp = student[i-1];
					student[i-1] = student[i];
					student[i] = temp ;
					i++;
				}
				
			}
			c++;
		}
		
		for(int i=0; i < n ; i++) {
			System.out.print(student[i]);
		}
	}

}
