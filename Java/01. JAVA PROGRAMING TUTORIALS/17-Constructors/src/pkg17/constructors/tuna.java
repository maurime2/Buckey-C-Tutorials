//Libraries
package pkg17.constructors;

//ClassTuna 
public class tuna {
     //declare tuna variables
    private String girlName;
    
    //COnstructor Object
    public tuna(String name){
        girlName=name;
    }
    
    //method setName
    public void setName(String name){
        girlName=name;
    }//end method setName
    
    //Method getName
    public String getName(){
        return girlName;
    }
    
    //Method saying
    public void saying(){
        System.out.printf("Your first girlfriend was %s\n", getName());
    }
}//end class tuna
