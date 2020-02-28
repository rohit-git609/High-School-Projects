// do check randomizing...............
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int point=0,life=3,q=1;
void main()
{
 randomize();
 void quiz(int);
 clrscr();
 int Q;
 cout<<" Welcome to the Mind Tester...."<<endl<<endl;
 getch();
 cout<<"The rules of this game are simple :"<<endl;
 getch();
 cout<<endl<<"   1. We will display a question and four corresponding choices"<<endl<<"     out of which only one is correct"<<endl<<"   2. Choose the option which you feel is correct."<<endl<<"   3. You have only three lives, PLAY CAREFULLY!!!"<<endl<<"   4. For every correct answer you will be awarded 5 points"<<endl;
 getch();
 cout<<endl<<" So, hope you are ready because your mind is about to be tested.... GOOD LUCK "<<endl;
 getch();


 do
 {

    clrscr ();
    cout<<"  Points : "<<point<<endl<<" Lives : "<<life<<endl<<endl;




 Q=random(10);
 quiz(Q);


  q++;


  if(life==0)
  break;


 getch();


 }while(point<50);



  getch();
  if(life==0)
  cout<<"GAME OVER"<<endl<<endl<<"You scored "<<point<<" points "<<endl<<endl<<" Better luck next time "<<endl;

 getch();

}

void quiz(int Q)
{
 void ans(int,int);
 int C;
 switch(Q)
 {
 case 0: cout<<"Q"<<q<<"  Which one of the following is a noble gas ? "<<endl<<endl<<" 1. Radium"<<endl<<" 2. Thorium "<<endl<<" 3. Radon "<<endl<<" 4. Flourine"<<endl ;
	 break;
 case 1: cout<<"Q"<<q<<"  Who was the first Indian to win a noble prize? "<<endl<<endl<<" 1. Dr. C V Raman"<<endl<<" 2. Mother Teresa "<<endl<<" 3. Kailash Satyarthi "<<endl<<" 4. Rabindranath  Tagore "<<endl ;
	 break;
 case 2: cout<<"Q"<<q<<"  Who  discovered penicillin ? "<<endl<<endl<<" 1. Alexander Fleming"<<endl<<" 2. Louis Pasteur"<<endl<<" 3. Madame Curie "<<endl<<" 4. Alexander Grahm Bell"<<endl ;
	 break;
 case 3: cout<<"Q"<<q<<"  Who discovered neutron ? "<<endl<<endl<<" 1. J J Thomson "<<endl<<" 2. Ernest Rutherford "<<endl<<" 3. Erwin Schrodinger "<<endl<<" 4. James Chadwick "<<endl ;
	 break;
 case 4: cout<<"Q"<<q<<"  Who was the first President of India ? "<<endl<<endl<<" 1. Pranab Mukherjee"<<endl<<" 2. Rajendra prasad"<<endl<<" 3. Pratibha Patil"<<endl<<" 4. Sarvepalli Radhakrishnan"<<endl ;
	 break;
 case 5: cout<<"Q"<<q<<"  What is the national sport of India ? "<<endl<<endl<<" 1. Cricket "<<endl<<" 2. Hockey"<<endl<<" 3. Football "<<endl<<" 4. Chess"<<endl ;
	 break;
 case 6: cout<<"Q"<<q<<"  Which of the following is not a web Browser ? "<<endl<<endl<<" 1. Internet Explorer"<<endl<<" 2. Mozilla Firefox "<<endl<<" 3. Appple Safari "<<endl<<" 4. Microsoft Surfer "<<endl ;
	 break;
 case 7: cout<<"Q"<<q<<"  Who wrote the book Wings of Fire ? "<<endl<<endl<<" 1. Dr. A P J Abdul Kalam"<<endl<<" 2. William Shakespeare "<<endl<<" 3. Rabindranath Tagore "<<endl<<" 4. Navdeep Singh Rathore"<<endl;
	 break;
 case 8: cout<<"Q"<<q<<"  Which of the following sports does Tiger Woods play? "<<endl<<endl<<" 1. Basketball"<<endl<<" 2. Baseball "<<endl<<" 3. Football"<<endl<<" 4. Golf"<<endl;
	 break;
 case 9: cout<<"Q"<<q<<"  What is the capital of Tripura? "<<endl<<endl<<" 1. Agartala "<<endl<<" 2. Aizwal "<<endl<<" 3. Kohima"<<endl<<" 4. Itanagar"<<endl ;
	 break;
/* case 10:cout<<"Q"<<q<<"   "<<endl;
	 break;*/
  }
	 cin>>C;
	 ans(Q,C);
}

void ans(int Q,int C)
{
 int x=0;
 switch(Q)
 {
  case 0: if (C!=3)
	  {
	  x++;
	  cout<<"\n Wrong answer.... The answer is (3)"<<endl;
	  }
	  break;
  case 1: if (C!=4)
	  {
	  x++;
	  cout<<"\n Wrong answer.... The answer is (4)"<<endl;
	  }
	  break;
  case 2: if (C!=1)
	  {
	  x++;
	  cout<<"\n Wrong answer.... The answer is (1)"<<endl;
	  }
	  break;
  case 3: if (C!=4)
	  {
	  x++;
	  cout<<"\n Wrong answer.... The answer is (4)"<<endl;
	  }
	  break;
  case 4: if (C!=2)
	  {
	  x++;
	  cout<<"\n Wrong answer..... The answer is (2)"<<endl;
	  }
	  break;
  case 5: if (C!=2)
	  {
	  x++;
	  cout<<"\n Wrong answer..... The answer is (2)"<<endl;
	  }
	  break;
  case 6: if (C!=4)
	  {
	  x++;
	  cout<<"\n Wrong answer..... The answer is (4)"<<endl;
	  }
	  break;
  case 7: if (C!=1)
	  {
	  x++;
	  cout<<"\n Wrong answer...... The answer is (1)"<<endl;
	  }
	  break;
  case 8: if (C!=4)
	  {
	  x++;
	  cout<<"\n Wrong answer...... The answer is (4)"<<endl;
	  }
	  break;
  case 9:if (C!=1)
	  {
	  x++;
	  cout<<"\n Wrong anwer..... The answer is (1)"<<endl;
	  }
	  break;
  }
	   if(x==0)
	  {
	  cout<<endl<<endl<<"        Correct anwer"<<endl;
	  point=point+5;


	   if(point==5)
	  {
	  getch();
	  cout<<" You just earned your first 5 points "<<endl;
	  }

	   if(point==20)
	  {
	  getch();
	  cout<<" I think you are a smartie....  "<<endl;
	  }

	   if(point==35)
	  {
	  getch();
	  cout<<" You are playing quite well "<<endl;
	  }
	  /** if(point==50)
	  cout<<" Wooh hooo you just won the game, CONGRATULATIONS!!! ";
	  */
	  }


	  else
	  {
	  life--;

	   if(life==2)
	   {
	   getch();
	  cout<<" Hey gamer, you just lost a life. Be a little more careful on the next one."<<endl;
	   }

	   if(life==3)
	    {
	    getch();
	  cout<<" You only one life left, another wrong answer and Game over "<<endl;
	     }
	  }

    }
