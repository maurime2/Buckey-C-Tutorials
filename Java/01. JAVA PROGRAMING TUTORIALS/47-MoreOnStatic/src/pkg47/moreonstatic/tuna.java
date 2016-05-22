//Libraries
package pkg47.moreonstatic;

//Class tuna start
public class tuna {
    private String first;
    private String last;
    private static int members = 0;  //All members or objects can see it
                                    //One thing to update as opposed to many
    //Tuna Constructor
    public tuna(String fn, String ln){
        first = fn;
        last = ln;
        members++;
        System.out.printf("Constructor for %s %s, members in the club: %d\n", first, last, members);
    }
    
    //RETURN METHODS
    public String getFirst(){
        return first;           //Returns first name
    }
    public String getLast(){
        return last;            //Returns last name
    }
    public static int getMembers(){
        return members;         //Returns members
    }
    
    
}//class tuna end