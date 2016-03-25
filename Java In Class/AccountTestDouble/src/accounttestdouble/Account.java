//Account class with a double instance variable balanced and a constructor
//and deposit method that preforms validation.

//Libraries
package accounttestdouble;

//Class
public class Account
{
    private String name;    // instance variable
    private double balance; // instance variable
    
    //account constructor that Recives two parameters
    public Account(String name, double balance)
    {
        this.name = name;   // assign name to instance variable name
        
        //validate that the balence is greatetr than 0.0; if it's not,
        //instance variable balance keeps its defult initial value of 0.0
        if(balance > 0.0)
        {                       //Id the balance is valid
        this.balance = balance; //assign it to instance variable balance
        }
    }
    
    //Method that deposits (adds) only a valid amount to the balance
    public void deposit(double depositAmount)
    {
        if(depositAmount > 0.0) //if the depositAmount is Valid
            balance += depositAmount;   //Add it to the balance
    }
    
    //Method retuens the account balance
    public double getBalance()
    {
        return balance;
    }
    
    //Method that sets the name
    public void setName(String name)
    {
        this.name = name;
    }
    
    //Method that returns name
    public String getName()
    {
        return name;//give value of name back to caller
    }//ends method get name
}//End Class
