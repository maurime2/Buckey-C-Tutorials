//Libraries
package discussion_110515;

//Class Discussion
public class Discussion_110515 {

    //Main Class
    public static void main(String[] args) {
        Date a = new Date();
        Date b = new Date(a);
        
        System.out.println("Object a: "+a.toString());
        System.out.println("Object b: "+b.toString());
        
        b.setYear(2016);
        System.out.println("object b (Year should be 2016);"+b.toString());
        
    }//End Main
    
}//Class Discussion End
