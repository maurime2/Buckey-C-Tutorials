//Libraries
package pkg57.overridingrules;

//class apples start
public class apples {

    //main start
    public static void main(String[] args) {
        //Declare local variables
        fatty bucky = new fatty();
        //food fo = new food(); //cant ennstanciate because food is an abstract class
        food tu = new tuna();
        food pp = new potpie();
        
        //Pass object into methods
        //bucky.digest(fo);
        bucky.digest(tu);
        bucky.digest(pp);
        
        
    }//main end
    
}//class apples start
