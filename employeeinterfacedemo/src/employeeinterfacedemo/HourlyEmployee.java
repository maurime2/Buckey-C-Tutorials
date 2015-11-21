package employeeinterfacedemo;

public class HourlyEmployee extends Employee{
    private float payRate;
    private float hoursWorked;
    
    public HourlyEmployee(String employeeName, float employeePayRate,
                            float employeeHoursWorked)
    {
        super(employeeName);
        this.payRate = employeePayRate;
        this.hoursWorked = employeeHoursWorked;
    
    }
    
    @Override
    public double getPaymentAmount()
    {
        return this.hoursWorked * this.payRate;
    }
    
    
    
}
