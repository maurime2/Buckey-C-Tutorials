//Libraries
package pkg43.composition;

public class potpie {
    //declare variables
    private int month;
    private int day;
    private int year;
    
    //potpie constructor
    public potpie (int m, int d, int y){
        month = m;
        day = d;
        year = y;
        
        //Print Cunstructor
        System.out.printf("The Constructor for this is: %s\n", this);
    }
    
    //To String Method
    public String toString(){
        return String.format("%d,%d,%d",month,day,year); //Called when string
    }                                                   //is needed
    
}//End Class potpie
