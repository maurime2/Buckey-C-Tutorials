package employeeinterfacedemo;


abstract public class Employee implements Payable {            //We need to implement two methods declared in interface
    private String name;                    //Or declare abstract to not implement
    private boolean beenPaid = false;
    
    public Employee(String personName)
    {
    this.name=personName;
    }        
    
    public String getName()
    {
        return this.name;
    }
    
    public boolean getBeenPaid()
    {
        return beenPaid;
    }
    
    public void setBeenPaid(boolean get)
    {
    return this.hasB
    }
    
}
