#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <unistd.h>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>


using namespace std;

int stickGame();

void printASCII(string filename) {
  string line = "";
  ifstream inFile;
  inFile.open("art.txt");
  getline(inFile, line);

  if (inFile.is_open()) {

    while (getline(inFile, line)) {
      cout << line << endl;
    }
  } else {
    cout << "File Failed to load" << endl;
  }
}
void healthReset(int& playerHealth, int choice);

int nerd(int enemyHealth);
int jock(int enemyHealth);
int emo(int enemyHealth);
int frat(int enemyHealth);
void arrStat(int);
//functions for player types
int main() {
  string name; // Used for user to enter name
  int choice;  // choice for class
  char letter;
  int playerHealth;
  int turns[0];
  int count = 0;

   srand (time(0));
   int ai = rand() % 20 + 5;

  for (int i=0;i <= 65;i++){
    cout << "*";
  }
    
  
cout <<"\n";
  string filename = "art.txt";    
  printASCII(filename);
  cout << "\n";
   for (int i=0;i <= 65;i++){
    cout << "*";
  }

do{
  cout << "\n\n\n\n\nPlease enter the name of your character" << endl;
  cin >> name;

  cout << "Do you want this name y or n " << endl;
  cin >> letter;
  
  }while(letter != 'Y' && letter != 'y');

 
  system("clear");
  cout << "[Announcer]"<<endl;
  cout << "\nHello " << name
       << " Welcome to the school, since you are new here \nwhy dont we get "
          "started\n"
       << endl;

  cout << "Since you don't know what class you are how about we pick one here "
          "are some of the options and some stats\n "
       << endl;

  cout << "Nerd has low dammage, high health \n" << endl;

  cout << "Jock has high damage, medium health \n" << endl;

  cout << "Emo medium damage, medium health\n" << endl;

  cout << "Frat High damage, low health.\n" << endl;

  start:
  cout << "What kind of student do you want to be \n\n1.Nerd   \n2.Jock\n3.Emo "
          "Kid\n4.Frat\n5.For stick game"
       << endl;
  
  
  while (!(cin >> choice)) {
    cout << "you can only enter 1 2 3 or 4" << endl;
    cout << "What kind of student do you want to be \n\n1.Nerd   \n2.Jock\n3.Emo "
          "Kid\n4.Frat\n5.For stick game"
       << endl;
    cin.clear();
    cin.ignore(123,'\n');
  }
  

  
  
  system("clear");
  // Switch statement for user to select their class

  
  switch (choice) {
  case 1:
    cout<< "\n[Inner Thoughts]"<<endl;
    cout << "You have chosen the class Nerd" << endl;
    cout << "Looks like you chose Nerd " << name
         << " I'm more of a chill kind of guy but you do you man sorry if you "
            "get picked on and no i cant help since im pretty much just a "
            "voice in your head. or am I... ?"
         << endl;
  
  

    break;

  case 2:
    cout<< "\n[Inner Thoughts]"<<endl;
    cout << "You have chosen the class Jock" << endl;
    cout << "You chose big strong man I get it maybe compensating for "
            "something if not man whats the reason for choosing this guy hes "
            "kinda mean I mean have you seen old 90s school moving "
         << name << endl;
  
      
    break;

  case 3:
    cout<< "\n[Inner Thoughts]"<<endl;
    cout << "You have chosen the class Emo Kids" << endl;
    cout << "Quiet kid are you doing alright\n"
         << name
         << "this guys pretty dark im suppriesed you pick him maybe your sick "
            "in the mind i mean if you need someone to talk to or maybe not i "
            "am a voice in your head maybe thats why your crazy am I making "
            "you crazy imposible im too cool to make you crazy right?"
         << endl;
  
    
    break;

  case 4:
    cout<< "\n[Inner Thoughts]"<<endl;
    cout << "You have chosen the class frat\n" << endl;
    cout << "You chose frat kid " << name
         << " choosing this tells me a lot about you idk about you im not sure "
            "I want to talk to you anymore I know how you guys work. I will "
            "help you but i aint joining your frat group."
         << endl;


    break;

    case 5:
      
    stickGame();
      return 0;
    break;
    
    default :

    goto start;
    break;

  
    
  }
    
  cin.ignore();
cout << "\nPress Enter to continue...";
  cin.get();

 system("clear");
  cout << "[Announcer]"<<endl;
  cout << "Ok, lets talk about battles, yes battles no not gunslinging "
          "battles "
       << "or fighting kind of battles but nice strategic battles against "
          "exams or maybe even professors. "
       << endl; 

cout << "\nPress Enter to continue...";
  cin.get();
  system("clear");
  
  cout << "[Announcer]"<<endl;
  cout << "So for battles a list of different attacks will come up on your screen and those are your attack "
    << "moves you will use these to chose your attack and they will deal dammage " << "and of course you will be attacked back lets give this battle a try. " << endl;
  
cout << "\nYour first fight is in orientation were we start our journey into University\n" << endl;
cout << "Your first problem to fight is your anti social life due to the older students forcing you to meet and talk to new people" << endl;
  
cout<< "\n[Inner Thoughts]"<<endl;
cout << "Kinda weird you can't talk to people but to each there own" << endl;
    
cout << "Alright stop talking to yourself lets begin" << endl;
  cout << "\nPress Enter to continue...\n";  // Battle Template STARTS here
  cin.get();
  system("clear");

  

  healthReset(playerHealth, choice);

  int enemy = 50;  // Change enemy health here
 while (enemy > 0 && playerHealth > 0){
  
    if (choice == 1){
      srand (time(0));
    ai = rand() % 10 + 1;
    cout<<"Social Anxiety attacks!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Players HP : "<< playerHealth<<endl;
    enemy = nerd(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
    }
      
    else if(choice == 2){
   srand (time(0));
    ai = rand() % 10 + 1;
      cout<<"Social Anxiety attacks!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = jock(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
      } 
      
    else if (choice == 3){
      srand (time(0));
    ai = rand() % 10 + 1;
    cout<<"Social Anxiety attacks!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = emo(enemy);
      srand (time(0));
    ai = rand() % 10 + 1;
    playerHealth -= ai;
      sleep(1);
      system("clear");
      }
      
    else if (choice == 4){
     srand (time(0));
    ai = rand() % 10 + 1;
      cout<<"Social Anxiety attacks!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
      enemy = frat(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
      }
    turns[0] = count++;
   
  }
  if(enemy < 0){
    cout<< "\n[Inner Thoughts]"<<endl;
    cout<<"It took "<< turns[0] <<" turns to beat the enemy."<<endl;
    cout<<"You have another class to get to ya' know? What took you forever?!"<<endl;
  }
  else if(playerHealth < 0){    
    cout<< "\n[Inner Thoughts]"<<endl;
    cout<<" GAME OVER\n YOU LOSE, MAN YOU SUCK! \n\n!!! TIME TO TAKE OUT ANOTHER LOAN !!!";
    return 0;
  }  //  Battle Template ENDS Here
  
//story starts again

  // First Exam Chapter
 cout << "Now we begin our University life!" << endl;
  cout<< "\n[Inner Thoughts]"<<endl;
  cout << "Man we got here early are you scared to be late to class or something?!" << endl;
 cout << "Maybe we can go to the food court and grab some breakfast" << endl;
  
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");
  
  cout<< "[Inner Thoughts]"<<endl;
  cout << "Damn to think they would be closed for the first day of school" << endl;
  cout << "Guess we can just go to our class and think about the worst possible outcomes" << endl;
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");

  cout << "\n\t\t\t [Time Skip]" << endl;
  cout << "\t1 Month into the Semester" << endl;
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");
  
  cout<< "[Inner Thoughts]"<<endl;
  cout << "We made some progress in class and got to meeting some new and old friends ";
  cout << "Managing all the classes has been tiresome, but we are starting to get the swing of things.";
  cout << "Even though we are reminiscing of what has happened we should probably start studying for ";
  cout << "the first exams that we have tomorrow" << endl;
  cout << "Man do we love procrastinating" << endl;

  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");

  cout << "\t\t[The Next Day]" << endl;
  sleep(1);
  system("clear");

  cout<< "[Inner Thoughts]"<<endl;
  cout << "Spent all night studing and pretty confident in this first exam" << endl;
  
 cout << "Alright stop talking to yourself lets get this Exam done" << endl;
  
cout << "As you enter the testing room a giant humanoid paper with 'test' written along its chest attacks you!" << endl;

  cout << "\n[Mahboobeh Haghparast]"<< endl;
  cout << "Your first exam will be fighting this test to the death mwahaha\n";
  
  cout << "\nPress Enter to continue...\n";  // Battle Template STARTS here
  cin.get();
  system("clear");

    healthReset(playerHealth, choice);

  enemy = 80;  // Change enemy health here
 while (enemy > 0 && playerHealth > 0){
  
    if (choice == 1){
      srand (time(0));
    ai = rand() % 15 + 10;
    cout<<"The Exam Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Players HP : "<< playerHealth<<endl;
    enemy = nerd(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
    }
      
    else if(choice == 2){
   srand (time(0));
    ai = rand() % 15 + 10;
      cout<<"The Exam Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = jock(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
      } 
      
    else if (choice == 3){
      srand (time(0));
    ai = rand() % 10 + 1;
    cout<<"The Exam Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = emo(enemy);
      srand (time(0));
    ai = rand() % 15 + 10;
    playerHealth -= ai;
      sleep(1);
      system("clear");
      }
      
    else if (choice == 4){
     srand (time(0));
    ai = rand() % 15 + 10;
      cout<<"The Exam Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
      enemy = frat(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
      }
    turns[0] = count++;
   
  }
  if(enemy < 0){
    cout<< "[Inner Thoughts]"<<endl;
    cout<<"It took "<< turns[0] <<" turns to beat the enemy."<<endl;
    cout<<"You have another class to get to ya' know? What took you forever?!"<<endl;
  }
  else if(playerHealth < 0){    
    cout<< "\n[Inner Thoughts]"<<endl;
    cout<<" GAME OVER\n YOU LOSE, MAN YOU SUCK! \n\n!!! TIME TO TAKE OUT ANOTHER LOAN !!!";
    return 0;
  } 
  //second exam chapter
  
  cout<< "\n[Inner Thoughts]"<<endl;
  cout << "First exam went pretty well I think I did pretty good ";
  cout << "should probably study more though before the exam" << endl;
  cout << "Nah i'd rather play video games or go out with friends" << endl;

  cout << "\n Better get back to my other classes for now and explore around the campus" << endl;
  cout << "I hear that the relaxation room is pretty nice" << endl;

  
  cout << "\n\t\t\t [Time Skip]" << endl;
  cout << "\t2 Months into the Semester" << endl;
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");
  
  cout<< "\n[Inner Thoughts]"<<endl;
  cout << "Man has time flown and the events I have been doing for identity point have been fun ";
  cout << "but I mostly go for the free food they always have" << endl;
  cout << "Midterms are coming up pretty soon should probably start preparing for that. or not...";

  
  
  cout << "\t\t[The Day Before Midterms]" << endl;
  cout<< "\n[Inner Thoughts]"<<endl;
  cout << "I'm ready to start studing for the midterms kinda just want to relax due to all this    homework!";
  cout << " but I am determined to get this done" << endl;
  
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");
  
  cout << "\t\t[The Next Day]" << endl;
  sleep(1);
  system("clear");

  cout << "Man I didn't sleep at all last night and I couldn't learn the material hopefully I pass" <<endl; 

  cout << "Alright lets get this over with I want to sleep" << endl;

  cout << "As you enter the classroom and sit in your seat you hopelessly wish for a normal test.";
  cout << " You begin to take out a pencil when all of a sudden the floor beneath you dissapears!";
  cout << " getting up from the fall you see professor Coulibaly riding a dragon!\n";
  
  cout << "\n[Nene Coulibaly]"<<endl;
  cout << "Hello my dear student! it is time for you to face my trig breathing dragon!\n";
  
  
  cout << "\nPress Enter to continue...\n";  // Battle Template STARTS here
  cin.get();
  system("clear");
  
  
  healthReset(playerHealth, choice);

  enemy = 100;  // Change enemy health here
 while (enemy > 0 && playerHealth > 0){
  
    if (choice == 1){
      srand (time(0));
    ai = rand() % 25 + 15;
    cout<<"The Dragon Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Players HP : "<< playerHealth<<endl;
    enemy = nerd(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
    }
      
    else if(choice == 2){
   srand (time(0));
    ai = rand() % 20 + 11;
      cout<<"The Dragon Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = jock(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
      } 
      
    else if (choice == 3){
      srand (time(0));
    ai = rand() % 21 + 10;
    cout<<"The Dragon Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = emo(enemy);
      srand (time(0));
    ai = rand() % 20 + 15;
    playerHealth -= ai;
      sleep(1);
      system("clear");
      }
      
    else if (choice == 4){
     srand (time(0));
    ai = rand() % 20 + 12;
      cout<<"The Dragon Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
      enemy = frat(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
      }
    turns[0] = count++;
   
  }
  if(enemy < 0){
    cout<< "[Inner Thoughts]"<<endl;
    cout<<"It took "<< turns[0] <<" turns to beat the enemy."<<endl;
    cout<<"You have another class to get to ya' know? What took you forever?!"<<endl;
  }
  else if(playerHealth < 0){    
    cout<< "\n[Inner Thoughts]"<<endl;
    cout<<" GAME OVER\n YOU LOSE, MAN YOU SUCK! \n\n!!! TIME TO TAKE OUT ANOTHER LOAN !!!";
    return 0;
  } 
  // Final chapter Exam


  cout<< "[Inner Thoughts]"<<endl;
 cout << "Midterm were kinda a bust but I think I passed kinda made me feel sick" << endl;
  cout << "Shoot, finals are next I better get myself ready for this next Exam ";
  cout << "might get some tutoring to help out" << endl;

  cout << "\n Nah who needs tutoring when I can study all night" << endl;

  cout << "Time to go to the relaxation room and take nice power nap" << endl;

  
  cout << "\n\t\t\t [Time Skip]" << endl;
  cout << "\t3 Months into the Semester" << endl;
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");
  
    cout<< "[Inner Thoughts]"<<endl;
    cout << "Been thinking about the Final Exams and idk if im ready" << endl;
    cout << "Kinda scary thinking about the programming Exam" << endl;

    cout << "Shouldn't sweat it though been taking a lot of notes in class" << endl;

  
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");

    cout << "\t\t[The Day Before Finals]" << endl;
  sleep(1);
  system("clear");

  cout << "Shoot I been studing since this morning I know I got this" << endl;
  cout << "Professor Rita and Profressor Hasan you better watch out ima ace the Final" << endl;
  
  cout << "You enter the testing room prepared expecting the worst but you enter to see ";
  cout << "Dr.Sperry and professor Hassan in martial arts uniforms awating battle. ";
  cout << "Without talking they leap to attack you!";

  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");

  healthReset(playerHealth, choice);

  enemy = 115;  // Change enemy health here
 while (enemy > 0 && playerHealth > 0){
  
    if (choice == 1){
      srand (time(0));
    ai = rand() % 18 + 13;
    cout<<"Rita and Hassan Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Players HP : "<< playerHealth<<endl;
    enemy = nerd(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
    }
      
    else if(choice == 2){
   srand (time(0));
    ai = rand() % 20 + 11;
      cout<<"Rita and Hassan Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = jock(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
    
      } 
      
    else if (choice == 3){
      srand (time(0));
    ai = rand() % 18 + 9;
    cout<<"Rita and Hassan Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
    enemy = emo(enemy);
      srand (time(0));
    ai = rand() % 15 + 10;
    playerHealth -= ai;
      sleep(1);
      system("clear");
      }
      
    else if (choice == 4){
     srand (time(0));
    ai = rand() % 27 + 10;
      cout<<"Rita and Hassan Attacks Back!"<<endl;
      sleep(1);
      system("clear");
      cout<<"Player HP : "<< playerHealth<<endl;
      enemy = frat(enemy);
      playerHealth -= ai;
      sleep(1);
      system("clear");
      }
    turns[0] = count++;
   
  }
  if(enemy < 0){
    cout<< "[Inner Thoughts]"<<endl;
    cout<<"It took "<< turns[0] <<" turns to beat the enemy."<<endl;
    cout<<"You have another class to get to ya' know? What took you forever?!"<<endl;
  }
  else if(playerHealth < 0){    
    cout<< "\n[Inner Thoughts]"<<endl;
    cout<<" GAME OVER\n YOU LOSE, MAN YOU SUCK! \n\n!!! TIME TO TAKE OUT ANOTHER LOAN !!!";
    return 0;
  } 

  cout << "[Professor Rita and Hassan]" << endl;
  cout << "\n *In unison* \n";
    cout << "How did you pass it was difficult what trickery did you use" << endl;

   cout << name << ": All I did was study and practice different programs at home" << endl;
  cout << " I also made sure to go over the main topics you put in the study guide" << endl;

  cout<< "\n[Inner Thoughts]"<<endl;
  cout << " Looks like I came out on top this time maybe Next Semester won't be as easy" << endl;

 
  
  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");

  cout << "\t\t[alarm]" << endl;
  cout << "bzzz... bzzz... bzzz..." << endl;

  cout<< "\n[Inner Thoughts]"<<endl;
  cout << "What time is it, is it time for school already" << endl;
  cout << "Wait, didn't I finish the first semester already" << endl;
  cout <<"\n [checks calander]" << endl;
  cout << "ITS THE FIRST DAY OF SCHOOL!!!!!" << endl;

  cout << "\nPress Enter to continue...\n"; 
  cin.get();
  system("clear");


  cout << "GAME OVER YOU WIN !!!!" << endl;
  cout << "OR DID YOU" << endl;

  return 0;
}

int nerd(int enemyHealth){

  attack:
  cout<<"Enemy Health is: "<<enemyHealth<<endl;
  
  char battle;
  int Pencil, Gamer,Facts,run;
   
   
cout << "------------------------------------------"<<endl;
cout << "A: Pencil Stab" << setw(21) <<"B: Gamer" << endl;
cout << "\n" << "C: Facts" << setw(26) << "D: Run " << endl;
cout << "------------------------------------------"<< endl;

 
  cin >> battle;
  switch(battle){
    case 'A':
    case 'a':
      srand (time(0));
      cout << "You used Pencil Stab" << endl;
      Pencil = rand() % 25 + 8;
      enemyHealth -= Pencil;
      cout << "You did " << Pencil << " damage" << endl;
        sleep(1);
        
      break;

    case 'B':
      case 'b':
        srand (time(0));
      cout << "You used Gamer" << endl;
        Gamer = rand() % 23 + 9;
      enemyHealth -= Gamer;
        cout << "You did " << Gamer << " damage" << endl;
        sleep(1);
      break;

    case 'C':
      case 'c':
        srand (time(0));
     cout << "You used Facts" << endl;
        Facts = rand() % 26 + 10;
      enemyHealth -= Facts;
        cout << "You did " << Facts << " damage" << endl;
        sleep(1);
      break;

    case 'D': 
      case 'd':
        
     cout << "You used run, don't think you can run from this bud "
    << "don't be a coward" << endl;
        sleep(2);
     break;

    default: 
      cout << "Are you trying to get us killed!!" << endl;
      cout << "Try again" << endl;
     
  }
  
    return enemyHealth;
  }

int jock(int enemyHealth) {
  char battle;
  int swirly, bully, rush;
  cout<<"Enemy Health is: "<<enemyHealth<<endl;
  
cout << "------------------------------------------"<<endl;
cout << "A: Rush" << setw(21) << "B: Swirly" << endl;
cout << "\n" << "C: Bully" << setw(18) << "D: Run " << endl;
cout << "------------------------------------------"<< endl;
   
  attack:
  cin >> battle;
  switch(battle){
    case 'A':
    case 'a':
      srand (time(0));
      cout << "You used Rush" << endl;
      rush = rand() % 19 + 10;
      enemyHealth -= rush;
      cout << "You did " << rush << " damage" << endl;
      
      break;

    case 'B':
      case 'b':
        srand (time(0));
      cout << "You used Swirly" << endl;
        swirly = rand() % 20 + 9;
      enemyHealth -= swirly;
      cout << "You did " << swirly << " damage" << endl;
      break;

    case 'C':
      case 'c':
        srand (time(0));
     cout << "You used Bully" << endl;
         bully = rand() % 21 + 10;
      enemyHealth -= bully;
      cout << "You did " << bully << " damage" << endl;
      break;

    case 'D': 
      case 'd':
     cout << "You used run, don't think you can run from this bud "
    << "don't be a coward" << endl;
     break;

    default: 
      cout << "Are you trying to get us killed!!" << endl;
      cout << "Try again" << endl;
  }
  return enemyHealth;
}

int emo(int enemyHealth) {
  char battle;
  int guitar,slice,death;
  cout<<"Enemy Health is: "<<enemyHealth<<endl;
  
cout << "------------------------------------------"<<endl;
cout << "A: Guitar Whack" << setw(17) <<"B: Slice" << endl;
cout << "\n" << "C: Rock Album"<< setw(18) << "D: Run " << endl;
cout << "------------------------------------------"<< endl;

  attack:
  cin >> battle;
  switch(battle){
    case 'A':
    case 'a':
      srand (time(0));
      cout << "You used Guitar Whack" << endl;
      guitar = rand() % 19 + 8;
      enemyHealth -= guitar;
      cout << "You did " << guitar << " damage" << endl;
      break;

    case 'B':
      case 'b':
        srand (time(0));
      cout << "You used Slice" << endl;
        slice = rand() % 20 + 9;
      enemyHealth -= slice;
      cout << "You did " << slice << " damage" << endl;
      break;

    case 'C':
      case 'c':
        srand (time(0));
     cout << "You used Rock Album" << endl;
         death = rand() % 25 + 15;
      enemyHealth -= death;
      cout << "You did " << death << " damage" << endl;
      break;

    case 'D': 
      case 'd':
     cout << "You used run, don't think you can run from this bud "
    << "don't be a coward" << endl;
     break;

    default: 
      cout << "Are you trying to get us killed!!" << endl;
      cout << "Try again" << endl;
  }
  return enemyHealth;
}

int frat(int enemyHealth) {
  
  cout<<"Enemy Health is: "<<enemyHealth<<endl;
  
  char battle;
  int tackle,boys,Beer;
  cout << "------------------------------------------"<<endl;
cout << "A: Tackle" << setw(29) <<"B: The Boys  " << endl;
cout << "\n" << "C: Beer" << setw(28) << "D: Run " << endl;
cout << "------------------------------------------"<< endl;

  attack:
  cin >> battle;
  switch(battle){
    case 'A':
    case 'a':
      
      cout << "You used Tackle" << endl;
      srand (time(0));
       tackle = rand() % 20 + 10;
      enemyHealth -= tackle;
      cout << "You did " << tackle << " damage" << endl;
      break;

    case 'B':
      case 'b':
      cout << "You used The Boys" << endl;
        srand (time(0));
        boys = rand() % 19 + 12;
      enemyHealth -= boys;
      cout << "You did " << boys << " damage" << endl;
      break;

    case 'C':
      case 'c':
     cout << "You used Beer" << endl;
        srand (time(0));
        Beer = rand() % 18 + 14;
      enemyHealth -= Beer;
      cout << "You did " << Beer << " damage" << endl;
      break;

    case 'D': 
      case 'd':
     cout << "You used run, don't think you can run from this bud "
    << "don't be a coward" << endl;
     break;

    default: 
      cout << "Are you trying to get us killed!!" << endl;
      cout << "Try again" << endl;
  }
  return enemyHealth;
}

void healthReset(int& playerHealth, int choice){
  if(choice == 1){
     playerHealth = 175;  // Nerd Class
    }
  else if(choice == 2){
     playerHealth = 150;  // Jock Class
    }
  else if (choice == 3){
      playerHealth = 150;  // Emo Class
    }
  else if(choice == 4){
      playerHealth = 125;  // Frat Class
    }
}


int stickGame(){
   const int total = 21;
    int remove, remainder;
    bool winner = false;
    
    remainder = total;
    
    while (!winner)
    {
        if (remainder >= 0)
        {
            cout << "There are " << remainder << " sticks." << endl;
            cout << "Player 1, pick a number between 1 and 4." << endl;
            cin >> remove;
        }
            if ( remove > 0 && remove < 5)
            {
                cout << "You have removed " << remove << " sticks." << endl;
                remainder -= remove;
            }
            else
            {
                cout << "Invalid number" << endl;
                cout << "Please enter a number between 1 and 4." << endl;
                cin >> remove;
                cout << "You have removed " << remove << " sticks." <<endl;
                remainder -= remove;
            }
            if (remainder >= 0)
            {
                cout << "There are " << remainder << " sticks." << endl;
                cout << "Player 2, pick a number between 1 and 4." << endl;
                cin >> remove;
            }
            if ( remove > 0 && remove < 5)
            {
                cout << "You have removed " << remove << " sticks" << endl;
                remainder -= remove;}
            else
            {
                cout << "Invalid number" << endl;
                cout << "Please enter a number between 1 and 4." << endl;
                cin >> remove;
                cout << "You have removed " << remove << " sticks" <<endl;
                remainder -= remove;
            }
            if (remainder <= 0)
            {
                winner = true;
                cout << "Game Over";
              return 0;
            }
    }
    
    
}
