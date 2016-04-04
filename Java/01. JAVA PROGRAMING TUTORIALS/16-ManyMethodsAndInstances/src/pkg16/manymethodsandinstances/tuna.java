//Libraries
package pkg16.manymethodsandinstances;

//Class tuna
public class tuna {
    //declare tuna variables
    private String girlName;
    
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
}//end Class tuna
