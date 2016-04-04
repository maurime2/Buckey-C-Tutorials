//Libraries
package pkg17.constructors;
import java.util.Scanner;

//Class Constructors Start
public class Constructors {

    //Main Start
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        //Initialising Varables as soon as an object is created.
        tuna tunaObject = new tuna("Kellsy");
        tuna tunaObject2 = new tuna("Grammer");
        
        //Calling each object.
        tunaObject.saying();
        tunaObject2.saying();
    }//End Main
    
}//end Class Constructors
