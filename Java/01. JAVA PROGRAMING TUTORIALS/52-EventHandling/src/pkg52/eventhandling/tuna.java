//libraries
package pkg52.eventhandling;    //
import java.awt.FlowLayout;         // Layout
import java.awt.event.ActionListener;// Listens for inputs
import java.awt.event.ActionEvent;  // Events
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JPasswordField;
import javax.swing.JOptionPane;


//class tuna start
public class tuna extends JFrame{
    //Declare local variables
    private JTextField item1;
    private JTextField item2;
    private JTextField item3;
    private JPasswordField passwordField;
    
    //Window constructor
    public tuna(){
        super("The Title");             //title
        setLayout(new FlowLayout());    //layout
        
        //add items
        item1 = new JTextField(10);
        add(item1);                 //adds item1 to this window
        item2 = new JTextField("Enter Text Here");
        add(item2);
        item3 = new JTextField("Uneditable",20);
        item3.setEditable(false);   //UNEDDITABLE
        add(item3);
        passwordField = new JPasswordField("myPass");   //Will show up in astrix
        add(passwordField);                             
        
    }
    
}//class tuna end
