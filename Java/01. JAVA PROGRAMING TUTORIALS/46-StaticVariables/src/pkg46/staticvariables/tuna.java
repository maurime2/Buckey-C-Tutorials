//libraries
package pkg46.staticvariables;

//Class Tuna start
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
    
    
}//class tuna end
