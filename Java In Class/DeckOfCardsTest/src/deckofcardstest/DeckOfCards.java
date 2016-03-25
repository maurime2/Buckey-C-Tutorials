//Libraries
package deckofcardstest;
import java.security.SecureRandom;

//Class
public class DeckOfCards
{
    private Card[] deck;    //array of cards objects
    private int currentCard;    // index of next Card to be delt (0-51)
    private static final int NUMBER_OF_CARDS = 52;  //Constant # of cards
    
    //Random Number Generator
    private static final SecureRandom randomNumbers = new SecureRandom();
    
    //Constructor fills deck of cards()
    public DeckOfCards()
    {
    String[] faces = {"Ace","Deuce","Three","Four","Five","Six",
                      "Seven","Eight","Nine","Ten","Jack","Queen","King"};
    String[] suits = {"Hearts","Diamonds","Clubs","Spades"};
    
    deck = new Card[NUMBER_OF_CARDS];   //Create array of card objects
    currentCard = 0;    //first card fealt will be deck[0]
    
    //Populate deck with Card objects
    for(int count = 0; count<deck.length; count++)
    {
        deck[count] = new Card(faces[count % 13], suits[count/13]);
    }
    
    
    }//End of DeckOfCards class. 
    
    //Shuffle Deck of cards with one-pass algorithm
    public void shuffle()
    {
        //next call to method dealCard should start at deck[0] again
        currentCard = 0;

        //For Each card, pick another random card (0-51) and swap them
        for(int first = 0; first < deck.length; first++)
        {
            //select a random number between 0 and 51
            int second = randomNumbers.nextInt(NUMBER_OF_CARDS);
            
            //swap current card with random selected card
            Card temp = deck[first];
            deck[first] = deck[second];
            deck[second] = temp;
        }
    }//End of shuffle class
    
    //deal one card
    public Card dealCard()
    {
        //determine whether cards remain to be dealt
        if (currentCard < deck.length)
        {
            return deck[currentCard++]; // return current card in array
        }
        else
        {
            return null;    //return null to indicate that all cards were dealt
        }
    }
    
    
}//End Class