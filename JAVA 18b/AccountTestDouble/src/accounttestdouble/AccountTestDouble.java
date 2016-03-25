//Libraries
package accounttestdouble;
import java.util.Scanner;
//Class
public class AccountTestDouble {

    //Main
    public static void main(String[] args) {
        Account account1 = new Account("Jane Green", 50.00);
        Account account2 = new Account("John Blue", -7.53);
        
        //Display Initial Balance of each object
        System.out.printf("%s Balance: $%.2f%n",account1.getName(),
                account1.getBalance());
        System.out.printf("%s Balance: $%.2f%n",account2.getName(),
                account2.getBalance());
        
        //Create a Scanner to obtain input from the command window
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter deposit amount for account1: ");    //Prompt
        double depositAmount = input.nextDouble();          //Obtain user input
        System.out.printf("%nadding %.2f to account1 balance%n%n", 
                depositAmount);
        account1.deposit(depositAmount);        //Add to account1's balance
        
        //Display Balances
        System.out.printf("%s balance: $%.2f%n", account1.getName(), 
                account1.getBalance());
        System.out.printf("%s balance: $%.2f%n", account2.getName(), 
                account2.getBalance());        
        
        System.out.print("Enter deposit amount for account2: ");    //Prompt
        depositAmount = input.nextDouble();     //Obtain user input
        System.out.printf("%nadding %.2f to account 2 balance%n%n", 
                depositAmount);
        account2.deposit(depositAmount);        //add to account2 balance
        
        //Display Balances
        System.out.printf("%s balance is: $%.2f%n",account1.getName(), 
                account1.getBalance());
        System.out.printf("%s balance is: $%.2f%n",account2.getName(), 
                account2.getBalance());
    }//End Main
}//End Class