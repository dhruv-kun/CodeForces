package codeForces;

import java.util.ArrayList;
import java.util.Scanner;

public class Drinks {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		double sum=0;
		ArrayList<Double> o = new ArrayList<>();
		for(int i=0 ; i< n ; i++)
			{
			o.add(in.nextDouble());
			sum += o.get(i); 
			}
		System.out.println(sum/n);
	}

}
