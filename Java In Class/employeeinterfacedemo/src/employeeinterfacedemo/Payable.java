package employeeinterfacedemo;

public interface Payable {
    //private boolean hasBeenPaid = false; //Error: No MemberVariables Allowed
    boolean hasBeenPaid();
    double getPaymentAMount();    
}