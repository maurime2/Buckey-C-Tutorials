//Libraries
package pkg55.introtopolymorphism;

//Class apples start
public class apples {

    //Main start
    public static void main(String[] args) {
        //Declare local variables
        //food bucky = new tuna();          //bucky = reference variable
                                         //first tuna is a data type
                                        //tuna is of the tuna type
                                       //tuna is also of the food type
        //polymorphic array
        food bucky[]=new food[2];  // polymorphic array that can hold objects
        bucky[0] = new potpie();     // of tuna and pot pie
        bucky[1] = new tuna();
        
        for(int x=0;x<2;++x){
            bucky[x].eat();
        }
        
                
    }//main end
    
}//Class apples End
