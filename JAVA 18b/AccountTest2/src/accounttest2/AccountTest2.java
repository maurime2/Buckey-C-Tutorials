//Libraries
package accounttest2;

//Class
public class AccountTest2
{
    public static void main(String[] args)
    {
        //Create two account objects
        Account account1 = new Account("Jane Green");
        Account account2 = new Account("John Blue");
        
        //Display initial value of name for each account
        System.out.printf("account1 name is: %s%n", account1.getName());
        System.out.printf("account2 name is: %s%n", account2.getName());
    }//End of main
}//Class