//Libraries
package pkg43.composition;

//Class Composition Start
public class apples {

    //Main Start
    public static void main(String[] args) {
        //Declare Objects
        potpie potObject = new potpie(10,17,1986);
        tuna tunaObject = new tuna("Mauricio", potObject);
        
        //Print out Tuna Object
        System.out.println(tunaObject);
    }
    
}//Class Composition End
