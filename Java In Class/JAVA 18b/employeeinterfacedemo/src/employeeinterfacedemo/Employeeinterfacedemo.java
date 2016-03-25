package employeeinterfacedemo;

public class Employeeinterfacedemo {

    public static void main(String[] args) {
    
        HourlyEmployee employee = new HourlyEmployee("Bill", 18.75f, 38);
        
        System.out.println("Bill Has Been Paid? "+ emoloyee.hasBeenPaid());
        employee.setBeenPaid(true);
        System.out.println("Bill Has Been Paid? "+ emoloyee.hasBeenPaid());
        System.out.println("Payment Amount of "+ emoloyee.getPaymentAmount());
        
        
        
        //Employee employee_1;    //instanciate a copy of employeee cannot make a copy of abstract
    }                              //Therefore useless
    
    
    
}
