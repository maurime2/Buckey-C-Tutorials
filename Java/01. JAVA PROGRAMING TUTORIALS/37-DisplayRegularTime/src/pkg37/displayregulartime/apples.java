//Libraries
package pkg37.displayregulartime;

//Class Start
public class apples{
    //Declare Global Variables
    
    //Main Start
    public static void main(String[] args) {
        //Declare Variables/Objects
        tuna tunaObject = new tuna();
        System.out.println("Default Time:");
        System.out.println(tunaObject.toMilitary());  //default is 00:00:00
        System.out.println(tunaObject.toString());  //default is 00:00:00
        
        //Set Time
        tunaObject.setTime(13, 27, 6);
        System.out.println("Set Time:");
        System.out.println(tunaObject.toMilitary());  //default is 00:00:00
        System.out.println(tunaObject.toString());  //default is 00:00:00
    }//Main End
    
}//End Class Tuna
