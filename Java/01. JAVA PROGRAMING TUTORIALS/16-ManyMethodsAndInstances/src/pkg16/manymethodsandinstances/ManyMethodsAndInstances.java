//Libraries
package pkg16.manymethodsandinstances;
import java.util.Scanner;


//Class ManyMethodsAndInstances
public class ManyMethodsAndInstances {

    //Main Start
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        tuna tunaObject = new tuna();
        System.out.println("\n"+tunaObject.getName());
        System.out.println("Enter name of GF here: ");
        String temp = input.nextLine();
        tunaObject.setName(temp);
        tunaObject.saying();
        System.out.println("\n"+tunaObject.getName());
    }//End Main
    
}//End Class ManyMethodsAndInstances
