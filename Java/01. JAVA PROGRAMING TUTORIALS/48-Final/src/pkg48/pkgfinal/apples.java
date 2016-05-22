//Libraries
package pkg48.pkgfinal;

//Class apple
public class apples {

    //Main Start
    public static void main(String[] args) {
        //Declare local variables/Object
        tuna tunaObject = new tuna(10);
        
        //Call sum in a for loop, 5 times
        for(int i=0; i<5;i++){
            tunaObject.add();
            System.out.printf("%s", tunaObject);
            //tunaObject.Number=15; //Cant Change FINAL
        }
        
    }//Main end
}//Class apples end
