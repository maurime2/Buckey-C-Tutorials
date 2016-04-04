//Libraries
package pkg32.arraysinmethods;

//Class ArraysInMethods
public class ArraysInMethods {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int bucky[]={3,4,5,6,7};

        //Original
        System.out.println("Original: ");
        for(int y:bucky){
            System.out.println(y);
        }
        
        //Call the method to change elements + 5
        change(bucky);
        
        //New
        System.out.println("Original + 5: ");
        for(int y:bucky){
            System.out.println(y);
        }
        
    }//End Main
    
    //Method Change: Adds 5 to each element
    public static void change(int x[]){
        for(int counter = 0;counter<x.length;counter++){
            x[counter]+=5;
        }
    }
    
    
}//End Class ArraysInMethods
