#CST 2550



import java.util.*;
import javax.swing.*;


public class Dice {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Press 1 to play or 0 to exit");
        int dice= sc.nextInt();

       
        int[] var1 = new int[] { 1, 2, 3, 4, 5 };
    
            for (int var2 = 0; var2 < var1.length; ++var2) {
                var1[var2] = (int) (Math.random() * 6.0) + 1;
            }
    
    
            
     
    
            for (int round = 1; round <= 7; round++) {
                System.out.println("Round" + round);
    
             

               
                for (int player = 1; player <= 2; player++) {
                    System.out.println("Player" + player);
                    System.out.println("Player" + (player) + "turn");
    
                    System.out.println(Arrays.toString(var1));
                    
               int[] var4 = new int[] { 1, 2, 3, 4, 5 };
               int rnd1 = new Random().nextInt(var4.length);
               System.out.println(var4[rnd1]);

    
                }
    
                //for (int throwsleft = 3; throwsleft > 0; throwsleft--) {
                  //  System.out.println("The number of throws is " + throwsleft);
    

                        // Create a two-dimensional array to represent the table
                        int numRows = 7;
        int numColumns = 4;
        int[][] table = new int[numRows][numColumns];

        // Populate the table with values
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numColumns; j++) {
                table[i][j] = i * numColumns + j + 1; // Example: filling the table with sequential numbers
            }
        }

        // Display the table
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numColumns; j++) {
                System.out.print(table[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
                }




                    
    
    
                

                
    
                
    
           

        

            
            
        
    
    
    
    
