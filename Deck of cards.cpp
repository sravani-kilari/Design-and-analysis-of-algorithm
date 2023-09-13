#include <bits/stdc++.h>
#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
class cards
{
    int n,i,j;
    string select_C,random,Choice_C;
    string a[53] ={ "B2","B3","B4","B5","B6","B7","B8","B9","B10","B-Ace","B-King","B-Queen","B-Jack",
                "R2","R3","R4","R5","R6","R7","R8","R9","R10","R-Ace","R-King","R-Queen","R-Jack",
                "G2","Y3","Y4","Y5","Y6","Y7","Y8","Y9","Y10","Y-Ace","Y-King","Y-Queen","Y-Jack",
                "W2","W3","W4","W5","W6","W7","W8","W9","W10","W-Ace","W-King","W-Queen","W-Jack","JOKER"};
    string b[53] ={ "B2","B3","B4","B5","B6","B7","B8","B9","B10","B-Ace","B-King","B-Queen","B-Jack",
                "R2","R3","R4","R5","R6","R7","R8","R9","R10","R-Ace","R-King","R-Queen","R-Jack",
                "G2","Y3","Y4","Y5","Y6","Y7","Y8","Y9","Y10","Y-Ace","Y-King","Y-Queen","Y-Jack",
                "W2","W3","W4","W5","W6","W7","W8","W9","W10","W-Ace","W-King","W-Queen","W-Jack","JOKER"};
	public:
        void shuffle()
        {
        	srand(time(0));
            for (int i=0; i<53 ;i++)
            {
                // Random for remaining positions.
                int r = i + (rand() % 53 -i);

                swap(a[i], a[r]);	
            }
            cout<<"\n\t\tCARDS HAVE BEEN SHUFFLED SUCCESSFULLY !!!!\n\n";
            for (i=0;i<53;i++)
            {
                if(i % 13 == 0)
                {
                    cout<<"\n\n";
                }
                cout<<a[i]<<"  ";
            }
        }

        void display()
        {
            for (i=0;i<53;i++)
            {
                if(i % 13 == 0)
                {
                    cout<<"\n\n";
                }
                cout<<b[i]<<"  ";
            }
        }
        /*void display2()
        {
        	for (i=0;i<53;i++)
            {
                if(i % 13 == 0)
                {
                    cout<<"\n\n";
                }
                cout<<a[i]<<"  ";
            }
		}*/
		void game1()
		{	
			shuffle();
			cout<<"\n		Enter no.of players to be played : ";
            cin>>n;
            // Initialize seed randomly
            if(n>=2 && n<=4)
            {
            	j=1;
                for (i=0; i<53 - (53-(n*13)); i++)
                {
                    if(i % 13 == 0)
                    {
                        cout<<"\n\n			Player"<<j<<": ";
                        j++;
                    }
                    cout <<a[i] << "  ";
                }
        	}
            else
            {
                cout<<"Minimum 2 players required to play the game!";
            }
            cout << endl;
			if(n>=2 && n<=4)
            {
                for (i=0; i<53 - (53-(n*13)); i++)
            	{
                	if(a[i] == "JOKER")
                	{
					 		if(i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i== 8 || i == 9 || i == 10 || i == 11 || i == 12)
                    		cout<<"\n\t\t			Result = PLAYER 1 WINS\n";
                    		else if(i == 13 || i == 14 || i == 15 || i == 16 || i == 17 || i == 18 || i == 19 || i == 20 || i== 21 || i == 22 || i == 23 || i == 24 || i == 25)	
                    			cout<<"\n\t\t			Result = PLAYER 2 WINS\n";
                    		else if(i == 26 || i == 27 || i == 28 || i == 29 || i == 30 || i == 31 || i == 32 || i == 33 || i== 34 || i == 35 || i == 36 || i == 37 || i == 38)
                    			cout<<"\n\t\t			Result = PLAYER 3 WINS\n";
                    		else if(i == 39 || i == 40 || i == 41 || i == 42 || i == 43 || i == 44 || i == 45 || i == 46 || i == 47 || i == 48 || i == 49 || i == 50 || i == 51 || i == 52)
                    			cout<<"\n\t\t			Result = PLAYER 4 WINS\n";	
					}		
            	}
        	}
		}
		void game2()
		{
			shuffle();
            cout<<"\n\t\t";
            for(i=0;i<5;i++)
            {
                cout<<a[i]<<"  ";
            }
            random = a[rand()%5];

                cout<<"\n\n  		Select any card from above 5  : ";
                cin>>select_C;
                if(select_C == random)
                {
                    cout<<"\n  Computer's Choice   : "<<random
                        <<"\n  User's Choice : "<<select_C
                        <<"\n  Hurray!!, the USER has won the game\n\n";                 
				}
                else
                {
                    cout<<"\n  Computer's Choice    : "<<random
                        <<"\n  User's Choice : "<<select_C
                        <<"\n  Sorry, the USER has Lost the game\n\n"; 
                }
		}
};

int main()
{
    cards CARDS;
    ofstream fout;
    int choice;
    system("Color 3");
	cout<<"\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb                                              \xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb       ******************************         \xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb       *        A DECK OF CARDS     *         \xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb       *	     GAMES            *         \xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb       ******************************         \xdb\xdb\n";
    cout<<"\t\t\t\t\xdb\xdb                                              \xdb\xdb";
    cout<<"\n\t\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
    while(1)
    {
    cout<<"\n 				********************";
    cout<<"\n 				|  M   E   N   U   |\n";
    cout<<" 				********************\n";
	cout<<"\n				1.Display Initial Cards";
    cout<<"\n\n				2.Shuffle the Cards";
    cout<<"\n\n				3.Display Shuffled Cards";
    cout<<"\n\n				4.Game 1";
    cout<<"\n\n				5.Game 2";
    cout<<"\n\n				6.Exit";
	cout<<"\n\n\n		Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1: CARDS.display();
                    break;
            case 2: fout.open("F1.txt");
					for(int k=0;k<10;k++)
            		{
            			CARDS.shuffle();
					}
					fout.app("F1.txt");
					fout.close();
					break;
            /*case 3: CARDS.display2();
					break;*/  
			case 4: CARDS.game1();
					break;  
            case 5: CARDS.game2();
                    break;
            case 6: exit(0);        
            default: cout<<"Please ENTER a VALID Choice.....";
                     break;
        }
    }
    return 0;
}
