//libraries
package pkg43.composition;

//CLass tuna Start
public class tuna {
    //Declare Members of class Tuna
    private String name;
    private String birthday;
    
    //Public Tuna Constructor
    public tuna(String theName, potpie theDate){
        //declare variables for tuna constructor
        name = theName;
        System.out.printf("theDate: %s\n", theDate);
        birthday = theDate.toString();
        //birthday = theDate;    //dose not work. 
                                //ints must be converted to Strings
    }
    
    public String toString(){
        return String.format("My name is %s, my birthday is %s",name, birthday);
    }
    
}//end class tuna