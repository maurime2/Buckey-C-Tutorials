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
            //     | + setSSN(); Boolian         |
            //     | + Person(); void           |
            //     | + Person(string, string);  |
            //     | + Person(Person);          |  <= Copy COnstructor, takes in the class
            //     |____________________________|
//Libraries
package discussion;

//Class Person: Class Name
public class Person {
    
    
    //Instance Variables
    private String name;
    private String ssn;
    
    //Constructors              //Singelton Pattern: A singelton is a class in whitch your program you can have one instance, one object of that class.
    public Person()             //                      constructor needs to be private, you create it, you check the count with a static member variable, if the counter is set to 0, you create the object
    {                           //                      after creation you increment counter. If its already one, you dont create a new object. It forces the system to only have one instance of this object
        
    }
    
    //Overloaded COnstructor
    public Person(String personName, String personSSN)
    {   this.name=personName;
        if (setSSN(personSSN)==false)
        {
            System.out.println("Invalid Social Security Number");
        }
    
        //this.ssn=personSSN;
    }
    
    //Copy COnstructor
    public Person(Person source)
    {
        this.name=source.name;
        this.ssn=source.ssn;
    }
    
    
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
        public boolean setSSN(String newSSN)       //Cammle Casing COnvection: 
        {
            if(newSSN.length() != 11)
            {
                return false;
            } 
            
            String part1=newSSN.substring(0,3); //XXX-XX-XXX
            String part2=newSSN.substring(4,6); //XXX-XX-XXX            
            String part3=newSSN.substring(7); //XXX-XX-XXX
            
            //Check 1
            if(newSSN.charAt(3) != '-' || newSSN.charAt(6) != '-')
            {
                return false;
            }
            if(!hasDigits(part1) ) return false;
            if(!hasDigits(part2) ) return false;
            if(!hasDigits(part3) ) return false;
            
            return true;
            
            
        }
        
        //getter for ssn
        public String getSSN()
        {
            return this.ssn;
        }
    
        //Utility Functions
        @Override                       //OverRide, Dont remember why
        public String toString()        //
        {
            return this.name+", "+this.ssn;
        }
        
        private boolean hasDigits(String src)
        {
            boolean result = true;
            for(int i= 0; i<src.length(); i++)
            {
                if(src.charAt(i)< '0' && src.charAt(i)>9)
                {
                return false;
                }
                
            }
            
            return true;
        
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
