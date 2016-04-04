//Librarie
package pkg12.switchstatement;

//Class SwitchStatement
public class SwitchStatement {

    //Main Start
    public static void main(String[] args) {
        //Declare Local Variables
        int age;
        age = 6;
    
        switch (age){
            case 1:
                System.out.println("You Can Crawl");
                break;
            case 2:
                System.out.println("You Can Talk");
                break;
            case 3:
                System.out.println("You Can Get Wrecked!!!");
                break;
            default:
                System.out.println("I dont know how old you are!!!");
        }//End Switch
        
        
    }//End Main
    
}//End Class SwitchStatement
