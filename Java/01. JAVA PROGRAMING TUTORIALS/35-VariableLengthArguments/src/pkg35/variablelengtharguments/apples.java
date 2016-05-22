//Libraries
package pkg35.variablelengtharguments;

//Public Class
public class apples {

    //Main Start
    public static void main(String[] args) {
        //Devlare Variables
        
        //print out average
        System.out.println(average(43,56,76,8,65,76,2,31));
        
        //Exit Stage Right
        
    }
    
public static int average (int...numbers){
    int total = 0;
    for(int x:numbers)
        total+=x;
    
    return total/numbers.length;
}
    
}
