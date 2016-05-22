//Libraries
package pkg50.graphicaluserinterfacegui;
import javax.swing.JOptionPane;


//Class apples start
public class apples {

    //main start
    public static void main(String[] args) {
        // Declare Local Variables
        String fn = JOptionPane.showInputDialog("Enter First Number: ");
        String sn = JOptionPane.showInputDialog("Enter Second Number: ");
        
        int num1 = Integer.parseInt(fn);
        int num2 = Integer.parseInt(sn);
        int sum = num1+num2;
        
        JOptionPane.showMessageDialog(null, "The answer is: " + sum, "The Title", JOptionPane.PLAIN_MESSAGE);
        
    }//main end
    
}//class apples end
