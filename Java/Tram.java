package codeForces;

import java.util.Scanner;

public class Tram {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int a , b , count = 0 ,x = 0;
		for(int i=0 ; i<n ; i++)
		{
			a = in.nextInt();
			count -= a;
			b = in.nextInt();
			count += b;
			if(x<count)x=count;
			
		}
		System.out.println(x);
	}

}
