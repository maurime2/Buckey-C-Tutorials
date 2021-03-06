//Libraries
package discussion;                 //Homework: 7.11 Invoice Class: this program has 2 instance variables. Program in hw needs 4 
                                   //
//Public Class: Discussion
public class Discussion {       //Access Modifier: public, provate, protected
                                        //Public:  Any and all code can access it
                                        //Proivate: Only the class or methods in 
                                        //          which the variable or method 
                                        //          is declared in, can access.
                                        //Protected: Mostly for inheritence.
                                        //           class - want the class inherit the atributes or propeties of the other
                                        //          class that inherits is called the child class
                                        //          class that the atributes are inherit from is called the parent class
                                        //          Works with inheritance in which the parent class entities are private, but public in child class.
                                            //Instance variables: a variable declared inside the class to used by the class
                                            //                      data member or atributr, property of the class
                                            //
                                        //Constructors: TO have a base method that allows us to initialize our class level variables
                                        //              you can have overloaded constructors.
                                        //              can take up parameters, VOID METHOD, dont return anything
                                        //              Have to have the same name as the class.
                                            //UML CLASS DIAGRAMS: 3 Parts:  Class Name
                                            //                              Instance Variables OR Atributes          [+ => Public]  [- => Private]  [# => protected]
                                            //                              Methods
                                      // Accessers: Acces the data of                           [GETER]
                                      //Mutator FUnctions: Change the value a variable    [SETTER]
                                            // Each instance variable needs a getter and a setter.
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
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |
                                            //     |

    //Main
    public static void main(String[] args) {
        
        Person a_person = new Person();
        Person b_person = new Person("Bill","123-45-6789");
        Person c_person = new Person(b_person);
        Person d_person = new Person("Bill","123456789");
        //Set Name
        //a_person.name="Bill";
        
        //Call Name and SSN
        
        System.out.println("A Person Name: " + a_person.getName());
        System.out.println("a_person ssn: "+ a_person.getSSN());
        
        
        System.out.println("b_person Name: " + b_person.getName());
        System.out.println("b_person ssn: "+ b_person.getSSN());
        
        System.out.println("c_person Name: " + c_person.getName());
        System.out.println("c_person ssn: "+ c_person.getSSN());
        
        System.out.println(b_person.toString());
        
    }//End of main
    
}//end of Public Class: Discussion
