//libraries
package pkg54.eventhandlerprogram;
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
        
        //action listeners
        thehandler handler = new thehandler();  //builds action object
        item1.addActionListener(handler);      //adds aciton listeners to each of
        item2.addActionListener(handler);     //the items
        item3.addActionListener(handler);
        passwordField.addActionListener(handler);
        }//public Tuna constructor
    
        //Class inside of class - will inherit all the stuff above
        public class thehandler implements ActionListener{ //only one method
            //handles the event
            public void actionPerformed(ActionEvent event){
                String string = "";
                
                //Get Strings
                if(event.getSource()==item1)    //getActionCommand means get text from that location...
                    string = String.format("field 1: %s", event.getActionCommand());
                    
                else if(event.getSource()==item2)    //getActionCommand means get text from that location...
                    string = String.format("field 2: %s", event.getActionCommand());
                
                else if(event.getSource()==item3)    //getActionCommand means get text from that location...
                    string = String.format("field 3: %s", event.getActionCommand());
                
                if(event.getSource()==passwordField)    //getActionCommand means get text from that location...
                    string = String.format("passwordField: %s", event.getActionCommand());
            
            //shows message dialog in the center of screen
            JOptionPane.showMessageDialog(null,string);
            
            }//actionPerformed end
        
        }//Private class thehandler end

}//public class tuna end