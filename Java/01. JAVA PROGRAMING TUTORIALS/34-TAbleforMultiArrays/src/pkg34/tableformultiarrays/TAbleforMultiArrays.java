//Libraries
package pkg34.tableformultiarrays;

//Class TAbleforMultiArrays
public class TAbleforMultiArrays {

    //Start Main
    public static void main(String[] args) {
        //Declare Local Variables           //Multidimentional Arrays
        int firstarray [][]={{8,9,10,11},   //
                             {12,13,14,15}};
        int secondarray[][]={{30,31,32,33},
                             {43},
                             {4,5,6}};
        System.out.println("This is our first Array:");
        display(firstarray);
        
        System.out.println("This is our Second Array:");
        display(secondarray);
    }//End Main
    
    public static void display(int x[][]){
        for(int row=0;row<x.length;row++){
            for(int column=0;column<x[row].length;column++){
            System.out.print(x[row][column]+"\t");
            }
            System.out.println();
        }
    }
    
}//End Class TAbleforMultiArrays
