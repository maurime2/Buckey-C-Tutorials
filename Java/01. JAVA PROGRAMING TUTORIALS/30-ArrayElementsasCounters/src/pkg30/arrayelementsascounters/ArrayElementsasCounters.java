//Libraries
package pkg30.arrayelementsascounters;
import java.util.Random;

//Class ArrayElementsasCounters
public class ArrayElementsasCounters {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        Random rand = new Random();
        int freq[]=new int[7];  //[0-6], [0] not used
        
        //Frequency Index Count
        for(int roll=1;roll<1000;roll++){
            ++freq[1+rand.nextInt(6)];  //1+(0-5)=1-6
        }//end Frequency roll/record
        
        
        ///Print Out Frequency Table
        System.out.println("Face\tFrequency");
        for(int face=1;face<freq.length;face++){
            System.out.println(face+"\t"+freq[face]);
        }//end table print out
        
    }//Main End
    
}//End Class ArrayElementsasCounters
