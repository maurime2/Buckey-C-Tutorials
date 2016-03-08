//Libraries
package deckofcardstest;

//Class
public class DeckOfCardsTest {

    //Main
    public static void main(String[] args)
    {
        DeckOfCards myDeckOfCards = new DeckOfCards();
        myDeckOfCards.shuffle();    //Place cards in random order
        
        //print all 52 cards in the order in which they are delt
        for(int i=1; i <= 52; i++)
        {
            //deal and display a Card
            System.out.printf("%-19s", myDeckOfCards.dealCard());
            
            if(i % 4 == 0)  //output a newline after every fourth card
            {
                System.out.println();
            }
        }
    }//Main End
}//End Class