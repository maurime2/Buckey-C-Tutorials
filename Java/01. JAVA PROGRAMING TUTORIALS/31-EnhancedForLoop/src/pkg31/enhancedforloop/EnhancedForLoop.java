//Libraries
package pkg31.enhancedforloop;

//Class EnhancedForLoop
public class EnhancedForLoop {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int bucky[]={3,4,5,6,7};
        int total=0;
        
        //Enhanced For Loop Example: Adding Array Elements
        for(int x: bucky){
            total+=x;
        }
        
        //Print Result
        System.out.println(total);
    }//end Main
    
}//End Class EnhancedForLoop
