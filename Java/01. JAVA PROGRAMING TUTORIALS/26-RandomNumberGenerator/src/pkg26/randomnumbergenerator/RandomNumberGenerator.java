//Librarie
package pkg26.randomnumbergenerator;
import java.util.Random;

//Class RandomNumberGenerator
public class RandomNumberGenerator {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables Here
        Random dice = new Random();
        int number;
        
        //Roll The Dice
        for(int counter=1;counter<=10;counter++){
                number = 1+dice.nextInt(6);//1+(0-5)
                System.out.println(number +" ");
        }//End Roll Dice
    }//End Main
    
}//End Class RandomNumberGenerator
