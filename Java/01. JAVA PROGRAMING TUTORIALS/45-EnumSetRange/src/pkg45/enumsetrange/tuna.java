//Libraries
package pkg45.enumsetrange;

//Class Tuna Enum Start
public enum tuna {
    //Declare Variables/Constants
    bucky("nice","22"),      //Enumerators:
    kelsey("cutie","10"),   //Constants with objects containing variables.
    julia("bigmistake","12"),
    nicole("italian","13"),
    candy("different","14"),
    erin("iwish","16");
    
    
    private final String desc;
    private final String year;
    
    //enumeration constructor
    tuna(String description, String birthday){
        desc = description;
        year = birthday;
    }
    
    //Methods to access variables
    public String getDesc(){
        return desc;
    }
    
    public String getYear(){
        return year;
    }
}

