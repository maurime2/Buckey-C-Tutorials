//libraries
package pkg36.timeclass;

//Start tuna Class
public class tuna {
    //declare variables
    private int hour;
    private int minute;
    private int seconds;
    
    public void setTime(int h, int m, int s){
        hour    = ((h>=0 && h<24)? h: 0);  //if hour between 0 and 24, use it
        minute  = ((m>=0 && h<60)? m: 0); //
        seconds = ((s>=0 && h<60)? s: 0);//
    }
    
    public String toMilitary(){
        return String.format("%02d:%02d:%02d", hour,minute,seconds);
    }
    
}//end tuna class
