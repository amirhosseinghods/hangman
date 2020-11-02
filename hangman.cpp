#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include<Windows.h>
#include <algorithm>
#include<dos.h>
#include<conio.h>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;
string name;
string hads();
int record;
int Fill(char hades, string secretword, string &guessword)
{
		system("cls");
	int i;
	int matches = 0;
	int len = secretword.length();
	for (i = 0; i< len; i++)
	{
		if (hades == guessword[i])
			return 0;
		if (hades == secretword[i])
		{
			guessword[i] = hades;
			matches++;
		}
	}
	return matches;
}
void game(){
	int s[10];
	string word;
	char letter;
int wrong=0,max;
	
	
	cout<<"enter your name: ";
	cin>>name;
		system("cls");
	cout<<"enter max try: ";
	cin>>max;
		system("cls");
	string hadsz = hads();	
	word = hadsz;
	clock_t startTime = clock();
	string unknown(word.length(), '*');
	while(wrong<max){
	cout << "\n\n" << unknown;
			cout << "\n\nGuess a letter: ";
			cin >> letter;	
				if (Fill(letter, word, unknown) == 0)
			{
				cout << endl << "That letter isn't in there!" << endl;
				wrong++;
			}
			else
			{
				cout << endl << "You found a letter!" << endl;
			}
			cout << "You have " << max - wrong;
			cout << " guesses left." << endl;
			if (word == unknown)
			{
				int k;
				cout << word << endl;
				int b = clock()/1000;
				cout << "Yeah! You got it!\n";
				record= ceil((max-wrong)*1000/log(b));
				ofstream myfile;
				myfile.open ("records.txt",ios::app);
				myfile << name<<" "<<record<<"\n";
				myfile.close();
				cout<<endl<<"your scor is : "<<record;
				cout<<endl<<"do yo want to play again?";
				cout<<endl<<"1:true\n2:false\n3:see records\n"<<endl;
				cin>>k;
				if(k==1){
					system("cls");
					game();
				}
				else if(k==2){
					system("cls");
					cout<<"good bye!!";
					exit(0);
				}
				else if(k==3){
					system("cls");
					void records();
					records();
				}
				break;
			}
			}
		if (wrong == max)
		{
			cout << "\nSorry, you lose...you've been hanged." << endl;
			cout << "The word was : " << word << endl;
		}
		cin.ignore();
		cin.get();
		
}
void records(){
	string line;
ifstream myfile ("records.txt",ios::app);
while ( getline (myfile,line) )
{
cout << line << '\n';
}
myfile.close();
cout<<endl<<"do you want to come back? ";
cout<<endl<<"1: Yes\t 2:No";
int m;
cin>>m;
if(m==1){
	int main();
	main();
	}
	else{
		exit(0);
	}
}
int main(){
	system("color F0");
	cout<<"welcome to hangman game!!!\n";
	Sleep(2000);
	system("cls");
	cout<<"please enter the number that you want: ";
	int x;
	cout<<endl<<"1: play game!\n2 : records! \n3 : exit "<<endl;

	cin>>x;
	switch(x){
		case 1:
			system("cls");
			game();
			break;
		case 2:
			records();
			break;
		case 3:
			exit(0);	
	}
	
	
}
string convertToString(char* a, int size) 
{ 
    int i; 
    string s = ""; 
    for (i = 0; i < size; i++) { 
        s = s + a[i]; 
    } 
    return s; 
}
string hads(){
    int i=0, len, j;
	string s = "amir hossein";
    char p[s.length()]; 
 
    for (i = 0; i < sizeof(p); i++) { 
        p[i] = s[i]; 
    } 
    len= sizeof(p);

    for( i = 0; i < sizeof(p); i++)
    {
        if (p[i] == ' ')
        {
            for (j = i; j < sizeof(p); j++)
                p[j] = p[j+1];
            len--;
        }
    }
    int a_size = sizeof(p)-1;
    string s_a = convertToString(p, a_size);
    return s_a;
}
