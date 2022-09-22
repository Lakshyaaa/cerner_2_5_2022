
//--"cerner_2^5_2022" "cerner_2tothe5th_2022"
//Square a Number
import java.util.Scanner;

public class Sq_root {
         public static void main(String args[]) {

                  Double num;
                  try (Scanner sc = new Scanner(System.in)) {
                           System.out.print("Enter a number =  ");
                           num = sc.nextDouble();
                  }

                  Double square = num * num;
                  System.out.println("\nSquare of " + num + " is = " + square);
         }
}