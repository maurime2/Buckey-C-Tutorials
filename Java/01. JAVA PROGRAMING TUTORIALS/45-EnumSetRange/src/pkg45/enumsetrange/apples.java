//Libraries
package pkg45.enumsetrange;
import java.util.EnumSet;


//Class apples start
public class apples {

    //Main Start
    public static void main(String[] args) {
        //Print out all constants
        for(tuna people: tuna.values()){     //Static method built from enum
            System.out.printf("%s\t%s\t%s\t\n", people, people.getDesc(),people.getYear());
        }
        
        System.out.println("\nAnd now for the range of constants!!!\n");
        
        //From Kelsy to Candy
        for(tuna people: EnumSet.range(tuna.kelsey,tuna.candy)){
            System.out.printf("%s\t%s\t%s\t\n", people, people.getDesc(),people.getYear());
            }
    }//Main End
}//Class apples end