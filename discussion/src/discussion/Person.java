            //      uml class diagram
            //      ____________________________
            //     |    PERSON                  |
            //     |____________________________|
            //     | + name: string             |
            //     | - ssn: string              |
            //     |____________________________|
            //     | + setname (string) void    |
            //     | + getName(): string        |
            //     | + getssn(string); string   |
            //     | + getssn(); string         |
            //     |____________________________|
//Libraries
package discussion;

//Class Person: Class Name
public class Person {
    
    
    //Instance Variables
    public String name;
    private String ssn;
    
    //Getters / Setters
        //Setter for name
        public void setName(String newName)
        {
            this.name = newName;            //this.name is assigned to new name
        }

        //Getter for name
        public String getName()
        {
            return this.name;
        }
    
        //Setter for SSn
        public void setSSN(String newSSN)       //Cammle Casing COnvection: 
        {
            this.ssn=newSSN;
        }
        
        //getter for ssn
        public String getSSN()
        {
            return this.ssn;
        }
    
        
    //Example of Public inner class
    public class someInnerClass
    {
    }

    //Example of Private inner class
    private class someAnotherClass
    {
    }
    
}//End of Class Person
