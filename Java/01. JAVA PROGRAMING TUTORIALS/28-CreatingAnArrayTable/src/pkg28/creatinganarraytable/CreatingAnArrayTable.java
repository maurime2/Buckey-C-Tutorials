//Libraries
package pkg28.creatinganarraytable;

//Class CreatingAnArrayTable
public class CreatingAnArrayTable {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int buckey[]={32,12,18,54,2};
        
        //Print Out Index and Values Table
        System.out.println("Index\tValue");
        for(int counter=0;counter<buckey.length;counter++){
            System.out.println(counter+"\t"+buckey[counter]);
        }
    }//End Main
    
}//End Class CreatingAnArrayTable
