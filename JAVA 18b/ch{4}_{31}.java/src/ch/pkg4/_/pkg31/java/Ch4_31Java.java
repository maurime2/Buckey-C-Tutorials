
package ch.pkg4._.pkg31.java;
import java.util.Scanner;

//Class
public class Ch4_31Java {

    //Main
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);//creates a scanner "input"
        
        float item1=0f;
        float item2=0f;
        float item3=0f;
        float item4=0f;
        float item5=0f;
        float item6=0f;
        
        float total=0f;
        float calc1 = 0.23f;
        float calc2 = 0.30f;
        
        boolean i=true; 
        
        
        do{
            System.out.print("Enter a total for Housing       : ");
            item1=input.nextFloat();
            System.out.print("Enter a total for Food          : ");
            item2=input.nextFloat();
            System.out.print("Enter a total for transportation: ");
            item3=input.nextFloat();
            System.out.print("Enter a total for Education     : ");
            item4=input.nextFloat();
            System.out.print("Enter a total for Healthcare    : ");
            item5=input.nextFloat();
            System.out.print("Enter a total for Vacations     : ");
            item6=input.nextFloat();
            i=false;
        }while(i);
        
        total=item1+item2+item3+item4+item5+item6;
        float calc11=((total*calc1)+total);
        float calc22=((total*calc2)+total);
        
        System.out.printf("Calculation tax for 23%% tax %.2f\n",calc11);
        
        System.out.printf("Calculation tax for 30%% tax %.2f",calc22);
        
        
    }//End Main
    
}//End Class
