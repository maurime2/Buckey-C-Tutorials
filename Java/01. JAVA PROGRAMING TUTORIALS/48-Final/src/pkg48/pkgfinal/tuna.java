package pkg48.pkgfinal;

//Class tuna start
public class tuna {
    private int sum;
    private final int NUMBER;
    
    public tuna(int x){
        NUMBER = x;
    }
    public void add(){
        sum+=NUMBER;
    }
    public String toString(){
        return String.format("sum = %d\n", sum);
    }
    
}//Class tuna end
