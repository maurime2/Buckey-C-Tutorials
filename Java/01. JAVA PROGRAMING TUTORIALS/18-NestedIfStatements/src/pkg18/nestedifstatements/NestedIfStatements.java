//Libraries
package pkg18.nestedifstatements;

//Class NestedIfStatements
public class NestedIfStatements {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int age = 60;
        
        //If statement
        if(age <50){
            System.out.println("you are young");
        }else{
            System.out.println("you are old");
            if(age >75){
                System.out.println("you are REALLY OLD!!!");
            }else{
                System.out.println("Don't worry, you arnt that old...");
            }
        }
    }//Main End
    
}//Class End
