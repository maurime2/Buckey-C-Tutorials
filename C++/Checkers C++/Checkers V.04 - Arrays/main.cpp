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

//Function Prototypes: Fill Array
//int fillLegal (int []);             //Fills Legal board with defult settings
int fillArray(int, int []);      //Fills Board Array with Zero.
int fillArray1(int, int, int []);//Fills Board Array with Player 1 Pieces.
int fillArray2(int, int, int []);//Fills Board Array with Player 1 Pieces.

//Function Prototypes: Print Board
int printBoard(int, int []);    //Prints Board w/ Board Array.
int printTopW(int, int, int []);   //When tile row starts White, Top Part only.
int printBottomW(int, int, int []);  //When row starts White, Bottom Part only.
int printTopB(int, int, int []);    //When row starts Black, Top Part only.
int printBottomB(int, int, int []);//When row starts Black, Bottom Part only.

//Function Prototypes: User Inputs - Select Piece and Move
int select(int, int, int, int []);      //Prompts User to Select Piece.
int p1select(int, int, int, int [],bool,bool,bool,bool);      //Prompts User to Select Piece.
int p2select(int, int, int, int [],bool,bool,bool,bool);      //Prompts User to Select Piece.

int move(int, int, int, int []);      //Prompts User to Move to a  new Location.

//Function Prototypes: Check Moves and Eats
bool cMoves(int, int, int, int [],bool ,bool ,bool, bool);      //Prompts User to Select Piece.

//Empty Space Check
bool cMin5(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 5 down
bool cMin4(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 4 down
bool cMin3(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 3 down
bool cPlu5(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 5 Up.
bool cPlu4(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 4 Up.
bool cPlu3(int, int, int, int [],bool ,bool, bool);      //Checks For Empty Space 3 Up.

//Eat Function Check
bool cEat(int, int, int, int [],bool ,bool ,bool, bool);      //Prompts User to Select Piece.

//Function Prototypes: Change
int change(int, int, int, int []);  //Change the values in the board


//Global Variables

                //Main Starts Here
                int main(int argc, char** argv) {
                    //Declare Variables
                    int SIZE = 35;            //Array Size.
                    int Index = 0;           //Array Index.
                    int Board[SIZE];        //Array That Holds Board Location and pieces.
                    int legal[10];         //Legal moves [0=player][1-4=moves][5-8=eat moves][9=Kinged or single piece]
                    int piecesTot = 12;   //Holds total value each player starts off with.
                    int player1 = 12;    //Player 1: Starts With 12.
                    int player2 = 12;   //Player 2; Starts With 12.
                    int pmove = 0;     //Holds Location of Desired Move
                    int pieces = 0;   //Holds piece desired to move

                  //Fill Array - Fills Array with board pieces.
                        //fillLegal (legal);
                        fillArray (SIZE, Board);  //Fills Board Array with O's [21-32]  
                    //    fillArray1(SIZE, player1, Board);  //Fills Board Array with O's [21-32]
                    //    fillArray2(SIZE, player2, Board); //Fills Board Array with X's [ 1-12]

                  //Start Game   
                        printBoard(SIZE, Board);     //Prints Board
                        select(SIZE, pieces, pmove, Board);
                               // move(SIZE, pieces, pmove, Board);   //Call Move Function

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
     ///*   
        //Fill in Only One
        Board[0]=1;
        Board[32]=3;
        Board[19]=1;
        Board[14]=3;
        Board[11]=1;
        Board[2]=3;
        Board[9]=3;
    //*/     
        //Output Array
        for(int i=0; i<SIZE;i++){
            cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
    
    }//END OF: FILL ARRAY FUNCTION

    //FILL ARRAY FUNCTION: PLAYER1 - O
    int fillArray1(int SIZE, int player1, int Board []){  //Fills Board Array with Zero
    //Fill Array with Zero
        for(int i=21; i<(SIZE-2);i++){
            Board[i]=1;
        }
            //Location 33 holds number of pieces of Player 1
            Board[33]=12;
            //Location 0 holds Player Turn: 1 for Player 1, 2 for Player 2
            Board[0]=1;
            
        //Output Array
      for(int i=0; i<SIZE;i++){
            cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
     
    }//END OF: FILL ARRAY FUNCTION: PLAYER1

    //FILL ARRAY FUNCTION: PLAYER2 - X
    int fillArray2(int SIZE, int player2, int Board []){  //Fills Board Array with Zero
    //Fill Array with Zero
        for(int i=1; i<player2+1;i++){
            Board[i]=2;
        }
            //Location 34 holds number of pieces of Player 2
            Board[34]=12;
            
        //Output Array
      for(int i=0; i<SIZE;i++){
            cout<<"Reference "<<i<<": "<<Board[i]<<endl; //Displays Array Val.
        }
     
    }//END OF: FILL ARRAY FUNCTION: PLAYER2

    //PRINT BOARD
    int printBoard(int SIZE, int Board []){  //Fills Board Array with Zero
        //Print Line TOP
        for(int i=1;i<SIZE-2;i++){
            //WHITE SPACE START
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

            
            //Black Space START
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
            //FIX COUNT           //Subtract one to get back on track, 
            i--;                 //4white -> (5,6,7,8)black -> 9 before the loop
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
         //O KINGED
        if(Board[Col]==3){
            cout<<"//\\\\||||";
        }
        //X - KINGED
        if(Board[Col]==4){
            cout<<"\\\\//||||";
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
        //O - KINGED
        if(Board[Col]==3){
            cout<<"\\\\//||||";
        }
        //X -KINGED
        if(Board[Col]==4){
            cout<<"//\\\\||||";
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
        //O - KINGED
        if(Board[Col]==3){
            cout<<"||||//\\\\";
        }
        //X - KINGED
        if(Board[Col]==4){
            cout<<"||||\\\\//";
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
        //O - KINGED
        if(Board[Col]==3){
            cout<<"||||\\\\//";
        }
        //X - KINGED
        if(Board[Col]==4){
            cout<<"||||//\\\\";
        }
        //Return Space
        if((Col==8)||(Col==16)||(Col==24)||(Col==32)){
        cout<<endl;
        }
    }//END OF: BOTTOM PART OF LINE: BLACK

    //Select FUNCTION
    int select(int SIZE, int pieces, int pmove, int Board []){  //Select Piece
        //boolian
        bool p1 = false;
        bool p2 = false;
        bool kinged = false;
        bool eat = false;
        
        //PLAYER 1 MUST SELECT THEIR OWN PIECE
        if(Board[0]==1){
        p1select(SIZE, pieces, pmove, Board, p1 , p2 ,kinged ,eat);
        }
        
        //PLAYER 2 MUST SELECT THEIR OWN PIECE
        else if(Board[0]==2){
        p2select(SIZE, pieces, pmove, Board, p1 , p2 ,kinged ,eat);
        }
        
    }//END OF: Player 1: Select FUNCTION
    
    //P1 Select FUNCTION
    int p1select(int SIZE, int pieces, int pmove, int Board [],bool p1,bool p2,bool kinged,bool eat){  //Select Piece
         if(Board[0]==1){
            do{
                cout<<"Player 1: Select A Piece?: ";
                cin>>pieces;

                //Single Player 1 Piece
                    //OUT OF BOUNDS CHECK FOR ARRAY
                    if((pieces<=0)||(pieces>=33)){
                        cout<<"That is an Invalid Input! Try Again!"<<endl;
                    }//End of Out of Bounds Check
                    //Empty Space Selected
                    else if(Board[pieces]==0){
                        cout<<"That is an empty space. Try Again!"<<endl;
                    }//End of Empty space check
                    //Player 2's Piece Selected
                    else if((Board[pieces]==2)||(Board[pieces]==4)){
                        cout<<"That is Your Opponents Piece!!! Try Again!"<<endl;
                    }//End of Player 2's Check
                    //Players Piece
                    else if(Board[pieces]==3){
                        cout<<"You have selected a Kinged Piece: "<<pieces<<endl;
                        kinged = true;
                        p1=cMoves(SIZE,pieces,pmove,Board,p1,p2,kinged,eat);
                        //Check Eat
                    }
                    else if(Board[pieces]==1){
                        cout<<"You have selected Single Piece: "<<pieces<<endl;
                        p1=cMoves(SIZE,pieces,pmove,Board,p1,p2,kinged,eat);
                        //Check Eat
                    }//End of Player Piece Else If
                
                //Print Board Again If Error...
                if(p1==false){
                   printBoard(SIZE, Board);     //Prints Board 
                }
                
            }while(p1==false);//End of User Select
        }//End of Player 1 Select
    }//End of function p1select
    
    //Check Moves
    bool cMoves(int SIZE, int pieces, int pmove, int Board [],bool p1,bool p2,bool kinged, bool eat){  //Checks if piece selected can move
        //Check Player 1 Moves
            //Player 1: Single Piece Check
            if(Board[pieces]==1){
                //OUTER PIECES - Check For Outer Pieces
                if((pieces==9)||(pieces==17)||(pieces==25)||
                   (pieces==8)||(pieces==16)||(pieces==24)||(pieces==32)){
                        cout<<endl<<"Outer ";
                    //Check If Outer Pieces have Legal Moves
                    p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                
                }//End Outer Pieces Check

                //Check For Inner Pieces: 4 and 3 spaces behind
                if((pieces==5) ||(pieces==6) ||(pieces==7)||
                   (pieces==13)||(pieces==14)||(pieces==15)||
                   (pieces==21)||(pieces==22)||(pieces==23)||
                   (pieces==29)||(pieces==30)||(pieces==31)){
                        cout<<endl<<"Inner ";
                    //Check 4 spaces Behind 
                    p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                    
                    //Check 3 spaces Behind 
                    p1=cMin3(SIZE, pieces,pmove, Board,p1,kinged,eat);
                    
                }//End of Inner Pieces Check: 4 & 3
                
                //Check For Inner Pieces: 5 and 4 spaces Behind
                if((pieces==10)||(pieces==11)||(pieces==12)
                        ||(pieces==18)||(pieces==19)||(pieces==20)
                        ||(pieces==26)||(pieces==27)||(pieces==28)){
                            cout<<endl<<"Inner ";
                    //Check 5 spaces Behind
                    p1=cMin5(SIZE, pieces,pmove, Board,p1,kinged,eat);
                    
                    //Check 4 spaces Behind 
                    p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                
                }//End of Inner Pieces Check: 5 & 4
            }//End Of Single Player 1 Pieces Check
            
            //Check Player 1: Kinged Pieces
            if(Board[pieces]==3){
                //Player 1: Kinged Legal Check TOP: +3 && +4
                if((pieces==2)||(pieces==3)||(pieces==4)){
                    cout<<endl<<"Kinged Top ";
                //Kinged: 2 way check
                     //Check 4 spaces Ahead
                        p1=cPlu4(SIZE, pieces,pmove, Board,p1,kinged,eat);

                        //Check 3 spaces Behind 
                        p1=cPlu3(SIZE, pieces,pmove, Board,p1,kinged,eat);
                }
                
                //Player 1: Kinged Legal Check TOP: +3 && +4
                else if((pieces==1)){
                    cout<<endl<<"Kinged Top ";
                    //Kinged: 1 way check
                        //Check 4 spaces Ahead
                        p1=cPlu4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                }
                
                //Player 1: Kinged Legal Check  INNER: -4,-3 && +4,+5.
                else if((pieces==5)||(pieces==6)||(pieces==7)||
                   (pieces==13)||(pieces==14)||(pieces==15)||
                   (pieces==21)||(pieces==22)||(pieces==23)){
                            cout<<endl<<"Kinged Inner ";
                    //Kinged: 4 way check
                        //Check 4 spaces Behind 
                        p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);

                        //Check 3 spaces Behind 
                        p1=cMin3(SIZE, pieces,pmove, Board,p1,kinged,eat);

                        //Check 5 spaces Ahead
                        p1=cPlu5(SIZE, pieces,pmove, Board,p1,kinged,eat);

                        //Check 4 spaces Behind 
                        p1=cPlu4(SIZE, pieces,pmove, Board,p1,kinged,eat);

                  cout<<endl;
                }
                
                //Player 1: Kinged Legal Check: -5,-4 && +3,+4.
                else if((pieces==10)||(pieces==11)||(pieces==12)||
                   (pieces==18)||(pieces==19)||(pieces==20)||
                   (pieces==26)||(pieces==27)||(pieces==28)){
                            cout<<endl<<"Kinged Inner ";
                    //Kinged: 2 way check
                        //Check 5 spaces Behind 
                        p1=cMin5(SIZE, pieces,pmove, Board,p1,kinged,eat);
                        //Check 4 spaces Behind 
                        p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                         //Check 3 spaces Ahead
                        p1=cPlu3(SIZE, pieces,pmove, Board,p1,kinged,eat);
                        //Check 4 spaces Behind 
                        p1=cPlu4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                }
                
                //Player 1: Kinged Legal Check Bottom: -4 && -3,
                else if((pieces==29)||(pieces==30)||(pieces==31)){
                            cout<<endl<<"Kinged Bottom ";
                    //Kinged: 2 way check
                        //Check 4 spaces Behind
                        p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                        //Check 3 spaces Behind
                        p1=cMin3(SIZE, pieces,pmove, Board,p1,kinged,eat);
                }
                
                //Player 1: Kinged Legal Check Bottom: -4 && -3,
                else if((pieces==32)){
                            cout<<endl<<"Kinged Bottom ";
                    //Kinged: 2 way check
                        //Check 4 spaces Behind
                        p1=cMin4(SIZE, pieces,pmove, Board,p1,kinged,eat);
                }
         }//End Check Player 1: Kinged Pieces.
         
            
            
        //Check Player 2 Moves
            //Player 2: Single Piece Check
            if(pieces==2){
            }
       
            //Player 2: Kinged Legal Check
            else if(pieces==3){
            }
            
    }//End Check Moves
    
    //Check Eat
    bool cEat(int SIZE, int pieces, int pmove, int Board [],bool p1,bool p2,bool kinged, bool eat){  //Checks if Piece Selected can eat
        
    }
    
    //Check Move Functions
        //Check Minus 5
        bool cMin5(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                        //Check 5
                        if(Board[pieces-5]==0){
                            cout<<"Piece Has Legal Move: "<<pieces-5<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 4 spaces Behind.
                        return p=false;
        }

        //Check Minus 4
        bool cMin4(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                        //Check 4 spaces Behind 
                         if(Board[pieces-4]==0){
                            cout<<"Piece Has Legal Move: "<<pieces-4<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 3 Spaces Behind.
                         return p=false;
        }

        //Check Minus 3
        bool cMin3(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                        //Check 3 spaces Behind 
                         if(Board[pieces-3]==0){
                            cout<<"Piece Has Legal Move: "<<pieces-3<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 3 Spaces Behind.
                         return p=false;
        }


        //Check Plus 5
        bool cPlu5(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                         //Check 5 spaces Behind 
                         if(Board[pieces+5]==0){
                            cout<<"Piece Has Legal Move: "<<pieces+5<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 3 Spaces Behind.
                         return p=false;
        }

        //Check Plus 4
        bool cPlu4(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                        //Check 4 spaces Behind 
                         if(Board[pieces+4]==0){
                            cout<<"Piece Has Legal Move: "<<pieces+4<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 3 Spaces Behind.
                         return p=false;
        }

        //Check Plus 3
        bool cPlu3(int SIZE, int pieces, int pmove, int Board [],bool p,bool kinged, bool eat){  //Checks if piece selected can move
                        //Check 3 spaces Behind 
                         if(Board[pieces+3]==0){
                            cout<<"Piece Has Legal Move: "<<pieces+3<<endl;
                            return p=true;
                        }//End Legal Check If Statement: 3 Spaces Behind.
                         return p=false;
        }
        
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
                select(SIZE, pieces, pmove, Board);
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
    
    int fillLegal (int legal[]){
        //fill array with defult values
        legal[0]=1;
        for(int i=1;i<=9;i++){
            legal[i]=0;
            cout<<"This is in legal array: "<<legal[i]<<endl;
        }
    }