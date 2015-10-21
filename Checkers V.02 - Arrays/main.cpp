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
    int move = 0;      //Holds Location of Desired Move
    int pieces = 0;   //Holds piece desired to move
    
    //Fill Array
    fillArray(SIZE, Board);             //Fills Board Array with Zero
    
    //Print Board
    printBoard(SIZE, Board);     //Prints Board

    //Move
    select1(SIZE, pieces, move, Board);     //player 1 select
    
    //Start Game - Fills Array with board pieces.
//  fillArray1(SIZE, player1, Board);  //Fills Board Array with O's [21-32]
//  fillArray2(SIZE, player2, Board); //Fills Board Array with X's [ 1-12]

    
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
        Board[32]=1;
    /*    
        //Output Array
        for(int i=0; i<SIZE;i++){
            //cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
    */  
    }//END OF: FILL ARRAY FUNCTION

    //FILL ARRAY FUNCTION: PLAYER1
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

    //FILL ARRAY FUNCTION: PLAYER2
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
    int select1(int SIZE, int pieces, int move, int Board []){  //Fills Board Array with Zero
        cout<<"Player 1: Select A Peice?: ";
        cin>>move;
        
        if(Board[move]/=0){
            cout<<"Valid move!"<<endl;
        }
        
    }//END OF: Player 1: Select FUNCTION
    
    
    //MOVE FUNCTION
    int move(int SIZE, int pieces, int move, int Board []){  //Fills Board Array with Zero
        cout<<"Where Would You Like to Move it to?: ";
        cin>>move;
        
        if(Board[move]/=0){
            cout<<"Valid move!"<<endl;
        }
        
    }//END OF: MOVE FUNCTION