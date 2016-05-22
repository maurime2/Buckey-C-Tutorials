//Libraries
package pkg47.moreonstatic;

//Class Apples Start
public class apples {

    //Main Class Start
    public static void main(String[] args) {
        //Declare variables
        tuna member1 = new tuna("Megan","Fox");
        tuna member2 = new tuna("Natalie","Portman");
        tuna member3 = new tuna("Taylor","Swift");
    
        System.out.println();
        System.out.println(member1.getFirst()+" "+member1.getLast());     //Unique
        System.out.println(member1.getMembers());   //Shared
        
        System.out.println();
        System.out.println(member2.getFirst()+" "+member2.getLast());     //Unique
        System.out.println(member2.getMembers());   //Shared
        
        //Accessing Static Objects
        System.out.println();
        //System.out.println(tuna.getFirst());   //needs objects to access
        //System.out.println(tuna.getLast());   //needs objects to access
        System.out.println(tuna.getMembers());   //Access directly with class
                                                //name because its static
    }//Main End
    
}//class apples end
