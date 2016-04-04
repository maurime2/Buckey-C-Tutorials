//Libraries
package pkg23.compundinginterest;

//Class CompoundingInterest
public class CompundingInterest {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        double amount;
        double principle = 10000;
        double rate = .01;
        
        //For Loop for finding interest
        for(int day = 1;day<=20;day++){
            amount=principle*Math.pow(1+rate, day);
            System.out.println(day+"    "+ amount);
        }//End for loop
        
    }//End Main
    
}//End Class CompoundingInterest
