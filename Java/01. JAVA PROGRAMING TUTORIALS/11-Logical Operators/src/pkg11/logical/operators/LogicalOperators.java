package pkg11.logical.operators;
//Class Start
public class LogicalOperators {

    public static void main(String[] args) {
        int boy, girl;
        boy= 18;
        girl=68;
        
        //If both of theise conditions are met, You can enter
        if (boy>10 && girl <60){
            System.out.println("You Can Enter!");
        }
        //If not met, you are too young
        else{
            System.out.println("You Are too YOUNG!!!");
        }
        
        
        girl=99;
        //If ONE of theise conditions are met, You can enter
        if (boy>10 || girl <60){
            System.out.println("You Can Enter!");
        }
        //If Both are not met, you are too young
        else{
            System.out.println("You Are too YOUNG!!!");
        }
        
        
    }
    
}//Class End
