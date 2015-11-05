/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Purpose: CHeckers Version.02 - Arrays
 * Created on October 21, 2015, 11:39 AM
 * 
 */
//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Function Prototypes
int fillArray(int, int []);      //Fills Board Array with Zero.
int fillArray1(int, int, int []);//Fills Board Array with Player 1 Peices.
int fillArray2(int, int, int []);//Fills Board Array with Player 1 Peices.
int printBoard(int, int []);    //Prints Board w/ Board Array.
int printTopW(int, int, int []);   //When tile row starts White, Top Part only.
int printBottomW(int, int, int []);  //When row starts White, Bottom Part only.
int printTopB(int, int, int []);    //When row starts Black, Top Part only.
int printBottomB(int, int, int []);//When row starts Black, Bottom Part only.
int select1(int, int, int, int []);      //Prompts User to Select Piece.
int move(int, int, int, int []);      //Prompts User to Move to a  new Location.
int change(int, int, int, int []);  //Change the values in the board

//Global Variables

//Main Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE = 33;          //Array Size.
    int Index = 0;          //Array Index.
    int Board[SIZE];       //Array That Holds Board Location and pieces.
    int piecesTot = 12;   //Holds total value each player starts off with.
    int player1 = 12;    //Player 1: Starts With 12.
    int player2 = 12;   //Player 2; Starts With 12.
    int pmove = 0;      //Holds Location of Desired Move
    int pieces = 0;   //Holds piece desired to move
    
    //Fill Array
    fillArray(SIZE, Board);             //Fills Board Array with Zero
    printBoard(SIZE, Board);     //Prints Board
    select1(SIZE, pieces, pmove, Board);     //player 1 select
    
  //Start Game - Fills Array with board pieces.
  //fillArray1(SIZE, player1, Board);  //Fills Board Array with O's [21-32]
  //fillArray2(SIZE, player2, Board); //Fills Board Array with X's [ 1-12]

  
    //Print Board
    printBoard(SIZE, Board);     //Prints Board
    
    //Exit Stage Right
    return 0;
}//Main Ends

//Functions

    //FILL ARRAY FUNCTION
    int fillArray(int SIZE, int Board []){  //Fills Board Array with Zero
    //Fill Array with Zero
        for(int i=0; i<SIZE;i++){
            Board[i]=0;
        }
        
        //Fill in Only One
        Board[0]=1;
        Board[32]=1;
        Board[25]=1;
        Board[28]=2;
        Board[19]=1;
        Board[18]=1;
        Board[13]=2;
    /*    
        //Output Array
        for(int i=0; i<SIZE;i++){
            //cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
    */  
    }//END OF: FILL ARRAY FUNCTION

    //FILL ARRAY FUNCTION: PLAYER1 - O
    int fillArray1(int SIZE, int player1, int Board []){  //Fills Board Array with Zero
    //Fill Array with Zero
        for(int i=21; i<SIZE;i++){
            Board[i]=1;
        }

        //Output Array
    /*  for(int i=0; i<SIZE;i++){
            cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
    */ 
    }//END OF: FILL ARRAY FUNCTION: PLAYER1

    //FILL ARRAY FUNCTION: PLAYER2 - X
    int fillArray2(int SIZE, int player2, int Board []){  //Fills Board Array with Zero
    //Fill Array with Zero
        for(int i=1; i<player2+1;i++){
            Board[i]=2;
        }

        //Output Array
    /*  for(int i=0; i<SIZE;i++){
            cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
    */ 
    }//END OF: FILL ARRAY FUNCTION: PLAYER2

    //PRINT BOARD
    int printBoard(int SIZE, int Board []){  //Fills Board Array with Zero
        //Print Line TOP
        
        for(int i=1;i<SIZE;i++){
        
            
            //Starts With White Space: TOP 
            while((i>=1 && i<=4)||(i>=9 && i<=12)||(i>=17 && i<=20)||(i>=25 && i<=28)){
                printTopW(SIZE, i, Board);
                i++;//Increment i
            }//End White Space Line TOP

            //Starts With White Space: Bottom            
            i=i-4;//To print Bottom
            while((i>=1 && i<=4)||(i>=9 && i<=12)||(i>=17 && i<=20)||(i>=25 && i<=28)){
                printBottomW(SIZE, i, Board);
                i++;//Increment i
            }//End White Space Line
            
            
            
            //Starts With Black Space
            while((i>=5 && i<=8)||(i>=13 && i<=16)||(i>=21 && i<=24)||(i>=29 && i<=32)){
                printTopB(SIZE, i, Board);
                i++;//Increment i
            }//End Black Space Line
            
            //Starts With Black Space: Bottom            
            i=i-4;//To print Bottom
            while((i>=5 && i<=8)||(i>=13 && i<=16)||(i>=21 && i<=24)||(i>=29 && i<=32)){
                printBottomB(SIZE, i, Board);
                i++;//Increment i
            }//End White Space Line
            
            
            
            
            //FIX COUNT
            i--;              //Subtract one to get back on track, 
                             //4white -> (5,6,7,8)black -> 9 before the loop
                            //White would start at 10 again, so we need to -1.
        }//End For Loop
        
        
        
    }//END OF: PRINT BOARD

    //TOP PART OF LINE: WHITE
    int printTopW(int SIZE, int Col, int Board []){  //Fills Board Array with Zero
        
        //Blank
        if(Board[Col]==0){
            cout<<"    ||||";
        }
        //O
        if(Board[Col]==1){
            cout<<" /\\ ||||";
        }
        //X
        if(Board[Col]==2){
            cout<<" \\/ ||||";
        }
        //Return Space
        if((Col==4)||(Col==12)||(Col==20)||(Col==28)){
        cout<<endl;
        }
    }//END OF: TOP PART OF LINE: WHITE

    //Bottom PART OF LINE
    int printBottomW(int SIZE, int Col, int Board []){  //Fills Board Array with Zero
        //Print Line TOP
        //Blank
        if(Board[Col]==0){
            cout<<"    ||||";
        }
        //O
        if(Board[Col]==1){
            cout<<" \\/ ||||";
        }
        //X
        if(Board[Col]==2){
            cout<<" /\\ ||||";
        }
        //Return Space
        if((Col==4)||(Col==12)||(Col==20)||(Col==28)){
        cout<<endl;
        }
    }//END OF: Bottom PART OF LINE

    //TOP PART OF LINE: BLACK
    int printTopB(int SIZE, int Col, int Board []){  //Fills Board Array with Zero
        //Print Line TOP
        //Blank
        if(Board[Col]==0){
            cout<<"||||    ";
        }
        //O
        if(Board[Col]==1){
            cout<<"|||| /\\ ";
        }
        //X
        if(Board[Col]==2){
            cout<<"|||| \\/ ";
        }
        //Return Space
        if((Col==8)||(Col==16)||(Col==24)||(Col==32)){
        cout<<endl;
        }
    }//END OF: TOP PART OF LINE: BLACK

    //BOTTOM PART OF LINE: BLACK
    int printBottomB(int SIZE, int Col, int Board []){  //Fills Board Array with Zero
        //Print Line TOP
        //Blank
        if(Board[Col]==0){
            cout<<"||||    ";
        }
        //O
        if(Board[Col]==1){
            cout<<"|||| \\/ ";
        }
        //X
        if(Board[Col]==2){
            cout<<"|||| /\\ ";
        }
        //Return Space
        if((Col==8)||(Col==16)||(Col==24)||(Col==32)){
        cout<<endl;
        }
    }//END OF: BOTTOM PART OF LINE: BLACK

    //Select FUNCTION
    int select1(int SIZE, int pieces, int pmove, int Board []){  //Fills Board Array with Zero
        //boolian
        bool p1 = false;
        bool p2 = false;
        
        //PLAYER 1 MUST SELECT THEIR OWN PIECE
        if(Board[0]==1){
        do{
        cout<<"Player 1: Select A Piece?: ";
        cin>>pieces;
            //Single PLayer 1 Piece
            //OUT OF BOUNDS CHECK FOR ARRAY
            if((pieces<=0)||(pieces>=33)){
                cout<<"That is an Invalid Input! Try Again!"<<endl;
            }//End of Out of Bounds Check
            //Empty Space Selected
            else if(Board[pieces]==0){
                cout<<"That is an empty space. Try Again!"<<endl;
            }//End of Empty space check
            //Players Piece
            else if(Board[pieces]==1){
                cout<<"You have selected Single Piece: "<<pieces<<endl;
                //OUTER PIECES
                if((pieces==9)||(pieces==17)||(pieces==25)||(pieces==8)||(pieces==16)||(pieces==24)||(pieces==32)){
                    if(Board[pieces-4]==0){
                        cout<<"Outer Piece Has Legal Moves!"<<endl;
                    p1=true;
                    }

                    //Check if Edible Left Side
                    if((pieces==9)||(pieces==17)||(pieces==25)){
                        if(((Board[pieces-4]==2)||(Board[pieces-4]==4))&&(Board[pieces-7]==0)){
                            cout<<"can Eat peace at:"<<pieces-4<<endl;
                            //TAKEN FUNCTION                                                                      //TAKEN FUNCTION
                        }
                    }//End of check Edible Left Side
                    
                    //Check if Edible Right Side
                    if((pieces==32)||(pieces==24)||(pieces==16)||(pieces==8)){
                            if(((Board[pieces-4]==2)||(Board[pieces-4]==4))&&(Board[pieces-9]==0)){
                                cout<<"Can Eat peace at:"<<pieces-4<<endl;
                                //TAKEN FUNCTION                                                                    //TAKEN FUNCTION
                            }
                    }//End of check Edible Left Side                    
                }//End Outer Pieces else if loop

                //INNER PEICES WITH DIFFERENCE OF 4 and 5
                else if((pieces==5)||(pieces==6)||(pieces==7)||
                        (pieces==13)||(pieces==14)||(pieces==15)||
                        (pieces==21)||(pieces==22)||(pieces==23)||
                        (pieces==29)||(pieces==30)||(pieces==31)){
                    if(Board[pieces-4]==0||Board[pieces-3]==0){
                    cout<<"Inner Piece 1 Has Legal Moves!!"<<endl;
                    p1=true;
                    }
                }
                //All Other Inner Peices with differenc of 
                else if((pieces==10)||(pieces==11)||(pieces==12)||
                        (pieces==18)||(pieces==19)||(pieces==20)||
                        (pieces==26)||(pieces==27)||(pieces==28)){
                    if((Board[pieces-4]==0)||(Board[pieces-5]==0)){
                    cout<<"Inner Piece 2 Has Legal Moves!!"<<endl;
                    p1=true;
                    }
                }
            }//End of Player Piece Else If
        
           //Players Piece - Kinged
            else if(Board[pieces]==3){
                cout<<"You have selected a Kinged Piece "<<pieces<<"."<<endl;
                p1=true;
            }
            //Opponents Piece
            else if(Board[pieces]==2){
                cout<<"You cannot move your opponents piece. Try Again!!!  "<<pieces<<"."<<endl;
            }
            //Everything Else
            if(p1==false){
            cout<<"Invalid Input. No Legal Moves Selected. Try Again!!!  "<<"."<<endl;
            }
        }while(p1==false);//End of User Select
        }
        
        //Call Move Function
        move(SIZE, pieces, pmove, Board);
    }//END OF: Player 1: Select FUNCTION
    
    
    //MOVE FUNCTION
    int move(int SIZE, int pieces, int pmove, int Board []){  //Fills Board Array with Zero
         bool p1 = false;
         bool p2 = false;
        //Logic to move to new spot
         
        if(Board[0]==1){
        do{
            do{
        cout<<"Where Would You Like to Move Piece "<<pieces<<" to? ";
        cin>>pmove;
        //If out of bounds, select again
        if(pmove<=0||pmove>=33){
        cout<<"In-valid move to:"<<pmove<<" Try Again!"<<endl;
        }
        }while(pmove<=0||pmove>=33);
        //Moving Up - Player 1
        if(Board[pieces]==1){
            //Left Border Move
            if((pieces==8)||(pieces==16)||(pieces==24)||(pieces==32)){
                cout<<"In Logic Right"<<endl;
                if((pmove+4==pieces)&&(Board[pmove]==0)){
                    cout<<"valid move to "<<pmove<<endl;
                    p1=true;
                }
                else{
                cout<<"In-valid move to "<<pmove<<", Try Again!"<<endl;
                    p1=false;
                }
            }
            //Right Border Move
            else if((pieces==9)||(pieces==17)||(pieces==25)){
                cout<<"In Logic Left"<<endl;
                if((pmove+4==pieces)&&(Board[pmove]==0)){
                    cout<<"valid move to "<<pmove<<endl;
                    p1=true;
                }
            }//End Right Border Move
            
            //Center Border Move
            else{
                cout<<"In Logic Middle"<<endl;
                if(((pmove+4==pieces)||(pmove+5==pieces))&&(Board[pmove]==0)){
                    cout<<"valid move to "<<pmove<<endl;
                    p1=true;
                }
            }//End Center Move
            //False Move
            if(p1==false){
                cout<<"In-valid move to:"<<pmove<<" from:"<<pieces<<" Try Again!!!"<<endl;
                select1(SIZE, pieces, pmove, Board);
            }
            
        }//End OF: PLAYER 1 MOVE UP

        //King'ed Piece - Player 1
        else if(Board[pieces]==3){
        
        }//End OF: PLAYER 1 Kinged
        

        }while(p1==false);//End of Move Do While Loop
        }//End Player 1: Choices to move
         
        //PLAYER 2 MOVES TO CHOSE 
        
        if(Board[0]==2){
        do{    
           do{
        cout<<"Where Would You Like to Move Piece "<<pieces<<" to? ";
        cin>>pmove;
        //If out of bounds, select again
        if(pmove<=0||pmove>=33){
        cout<<"In-valid move to:"<<pmove<<" Try Again!"<<endl;
        }
        }while(pmove<=0||pmove>=33);
            
            //Moving Down - Player 2
            if(Board[pieces]==2){

            }
            //Kinged Piece - Player 2
            else if(Board[pieces]==4){

            }//End OF: KINGED
            
        }while(p2==false);
        }

        //Go to Switch
        change(SIZE, pieces, pmove, Board);
    }//END OF: MOVE FUNCTION
    
    //MOVE FUNCTION
    int change(int SIZE, int pieces, int pmove, int Board []){  //Fills Board Array with Zero
        int temp = 0;
        
        //Player 1 Change
        if(Board[0]==1){
            Board[0]==2;
        }
        
        //Player 2 Change
        if(Board[0]==2){
            Board[0]==1;
        }
        
        //Stitch
            temp=Board[pieces];
            Board[pieces]=0;
            Board[pmove]=temp;
            
      printBoard(SIZE, Board);     //Prints Board      
    }