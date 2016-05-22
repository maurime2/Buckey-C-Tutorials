//Libraries
package pkg39.multipleconstructors;

//tuna Class Start
public class tuna {
   private int hour;
   private int minute;
   private int second;
   
   public tuna(){
       this(0,0,0);
   }
   public tuna(int h){
       this(h,0,0);
   }
   public tuna(int h, int m){
       this(h,m,0);
   }
   public tuna(int h, int m, int s){
       setTime(h,m,s);
   }
   public void setTime(int h, int m, int s){
       //setHour(h);            //Need to declare each of these methods
       //setMinute(m);         //also need to make methods to return each of
       //setSecond(s);        //these back into main.
   }
   
   

}//Rnd tuna Class
