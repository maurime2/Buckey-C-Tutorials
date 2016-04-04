//Libraries
package pkg19.elseifstatement;

//Class ElseIfStatement
public class ElseIfStatement {

    //Main Start
    public static void main(String[] args) {
        int age = 55;
        
        if (age>=60)
            System.out.println("You Are a seniout Citizen.");
        else if (age >= 50)
            System.out.println("You Are in your 50's");
        else if (age >=40)
            System.out.println("You Are in your 40's");
        else
            System.out.println("You Are a Young Buck");
    }//End Main
    
}//End Class ElseIfStatement
