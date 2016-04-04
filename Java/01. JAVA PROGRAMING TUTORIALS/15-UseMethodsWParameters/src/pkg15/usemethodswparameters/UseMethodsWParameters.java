//Libraries
package pkg15.usemethodswparameters;
import java.util.Scanner;                   //For scanning in user input

//Class UseMethodsWParameters
public class UseMethodsWParameters {

    //Main Start
    public static void main(String[] args) {
        //Declare Main Variables
        Scanner input = new Scanner (System.in);  //Scan in
        tuna tunaObject = new tuna ();           //Tuna Object to use tuna class
        
        //Ask User For Name.
        System.out.println("Enter Your Name Here: ");
        String name = input.nextLine();
        
        //Print Name in tuna class
        tunaObject.simpleMessage(name);
    }//End Main
    
}//End Class UseMethodsWParameters 
