
/*
Date: 12 - December - 2021

Author: Abhinav Tiwari

Code: Bit Manipulations

Code_Summary: This code accepts a number and bit position and performs
              Bit Manipulation operations of Checking, Setting, Clearing
              and Toggling a bit as required.
 */

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {

        // creating scanner object
        Scanner in = new Scanner(System.in);

        // taking input of number
        System.out.print("Enter the number: ");
        int num = in.nextInt();

        // taking input of position
        System.out.print("Enter the position: ");
        int pos = in.nextInt();

        // taking input for operation choice
        System.out.println("Select an operation to perform");
        System.out.println("Check Bit(1)");
        System.out.println("Set Bit(2)");
        System.out.println("Clear Bit(3)");
        System.out.print("Toggle Bit(4): ");
        int choice = in.nextInt();
        System.out.println();

        in.close();

        // creating bitMask
        int bitMask = 1 << pos;

        // performing operations
        switch (choice) {
            case 1: // checking bit at position pos in number num
                if ((num & bitMask) > 0) {
                    System.out.println(1);
                } else {
                    System.out.println(0);
                }
                break;

            case 2: // setting bit at position pos in number num
                System.out.println(num | bitMask);
                break;

            case 3: // clearing bit at position pos in number num
                System.out.println(num & ~bitMask);
                break;

            case 4: // toggling bit at position pos in number num
                System.out.println(num ^ bitMask);
                break;

            default: // "Invalid Input" for any other choices
                System.out.println("Invalid Input");
                break;

        }
    }
}
