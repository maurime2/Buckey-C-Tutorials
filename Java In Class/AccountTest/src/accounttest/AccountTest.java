//Libraries
package accounttest;
import java.util.Scanner;

//Class
public class AccountTest {

    //Main
    public static void main(String[] args) {
        //Create a scanner object to obtain input from the command winfow
        Scanner input = new Scanner(System.in);
        
        //Create an Account object and assign it to myAccount
        Account myAccount = new Account();
        
        //Display initial value of name (null)
        System.out.printf("Initial Name is %s%n%n", myAccount.getName());
        
        //Prompt for and read name
        System.out.println("Please enter the name");
        String theName = input.nextLine();          //Read a line of text
        myAccount.setName(theName);                 //put theName in myAccount
        System.out.println();                       //Outputs a blank line
        
        //Display the name stored in object myAccount
        System.out.printf("name in object myAccount is:%n%s%n",myAccount.getName());
    }//End of main
}//End of class
