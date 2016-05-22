//Libraries
package pkg52.gui_w_jframe;
import java.awt.FlowLayout;   //Default layout managment
import javax.swing.JFrame;   //Basic windows Features like max min close
import javax.swing.JLabel;  //Outputs text and images on the screen

//tuna class start
public class tuna extends JFrame{
    //Declare local variables
    private JLabel item1;
    
    
    public tuna(){
    super("The Title Bar");          //gives us title
    setLayout(new FlowLayout());    //gives us default layout
    
    item1 = new JLabel("this is a sentence");   //Title of the JLabel
    item1.setToolTipText("This is Gonna show up on hover"); //Hover mode
    add(item1);                                 //to view it
    
    }
    
    
    
    
}//tuna class end
