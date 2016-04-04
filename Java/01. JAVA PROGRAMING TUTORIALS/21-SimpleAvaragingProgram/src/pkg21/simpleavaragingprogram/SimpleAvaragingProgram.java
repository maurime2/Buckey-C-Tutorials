//Libraries
package pkg21.simpleavaragingprogram;
import java.util.Scanner;

public class SimpleAvaragingProgram {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        Scanner input = new Scanner(System.in);
        int total = 0;
        int grade;
        int average;
        int counter = 0;
        
        //Input 10 Grades
        System.out.println("Please enter 10 grades: ");
        while (counter <10){
            grade = input.nextInt();
            total = total + grade;
            counter++;
        }
        average = total/10;
        System.out.println("Your Average is: " + average);
        
    }//Main End
    
}//End Class SimpleAvaragingProgram 
