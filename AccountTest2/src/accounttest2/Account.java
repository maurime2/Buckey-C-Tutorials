package accounttest2;

//Class
public class Account
{
    private String name;    //instance variable
    
    //constructor initializes name with paremeter name
    public Account(String name) //Constructor name is class name
    {
        this.name = name;
    }
    
    //method to set the name
    public void setName(String name)
    {
        this.name = name;
    }
    
    //Method to retrive the name
    public String getName()
    {
        return name;
    }
}//End of class
