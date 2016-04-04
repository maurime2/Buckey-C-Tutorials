//Libraries
package pkg29.summingelementsofarrays;

//Class SummingElementsOfArrays
public class SummingElementsOfArrays {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int buckey[]={21,16,86,21,3};
        int sum=0;
        
        //Add each element of buckey into sum
        for(int counter = 0; counter<buckey.length;counter++){
            sum+=buckey[counter];
        }//end sum Loop
        
        //Print Sum
        System.out.println("The sum of theise numbers is: "+ sum);
    }//End Main
    
}//End Class SummingElementsOfArrays
