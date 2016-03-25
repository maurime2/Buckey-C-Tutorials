//Libraries
package ch.pkg4._.pkg21.java;

public class Ch4_21Java {

//main start
    public static void main(String[] args) {
      int a=3,b=4,c=5;  
        int count=0;
        int times= 100;
        for(int i=1;i<=500;i++){
             
            for(int aa=3;aa<=times;aa++){
            
                    for(int bb=4;bb<=10000;bb++){
                        
                                    for(int cc=5;cc<=times;cc++){
                                        a=aa;
                                        b=bb;
                                        c=cc;
                                            if((((a*a)+(b*b))==(c*c))&&(i<=500)){
                                            System.out.printf("%d: ",i); //Prints new line 
                                            System.out.printf("%d,%d,%d \n",a,b,c); //Prints new line 
                                            i++;
                                            }
                                    }//End of c
                    }//End of B                
        }//End of A
            /*            
            for(b=0;a<=10000;c++){
            
            }
            
            for(c=0;a<=10000;c++){
            
            }
            */          
            
            

            
        }
        
        
    }//end main
    
}//end class
