/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg38.publicprivateandthis;

//Start tuna Class
public class tuna {
    //declare tuna local variables
    private int hour;
    private int minute;
    private int seconds;
    
    public void setTime(int hour, int minute, int seconds){
        //This uses local variables in setTime method.
        //without this, it would use the global variables in tuna
        this.hour    = ((hour>=0 && hour<24)? hour: 0);  //if hour between 0 and 24, use it
        this.minute  = ((minute>=0 && minute<60)? minute: 0); //
        this.seconds = ((seconds>=0 && seconds<60)? seconds: 0);//
    }
    
    public String toMilitary(){
        return String.format("%02d:%02d:%02d", hour,minute,seconds);
    }
    
    public String toString(){
        return String.format("%d:%02d:%02d %s",( (hour==0||hour==12)?12:hour%12), minute,seconds, (hour<12?"AM":"PM")  );
    }
}//end tuna class

