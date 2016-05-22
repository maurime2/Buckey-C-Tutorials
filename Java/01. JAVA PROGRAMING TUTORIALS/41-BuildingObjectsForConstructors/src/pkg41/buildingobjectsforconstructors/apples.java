//Libraries
package pkg41.buildingobjectsforconstructors;

//class apples start
public class apples {

    //Main Start
    public static void main(String[] args) {
        //Declare Variables/Objects
        tuna tunaObject  = new tuna();
        tuna tunaObject2 = new tuna(5);
        tuna tunaObject3 = new tuna(5,13);
        tuna tunaObject4 = new tuna(5,13,43);
        
        //Print out Military Time Default
        System.out.printf("%s\n", tunaObject.toMilitary());
        System.out.printf("%s\n", tunaObject2.toMilitary());
        System.out.printf("%s\n", tunaObject3.toMilitary());
        System.out.printf("%s\n", tunaObject4.toMilitary());
        
        
    }//Main End
    
}//end class apples
