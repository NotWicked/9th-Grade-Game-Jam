//Use visual studio
#include<iostream>
#include<Windows.h>
#include<string>
#include<thread>
#include<chrono>
using namespace std;
using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
#include<time.h>
void slow_print(const string&, unsigned int);
int main() 
{
	string name, enemey;
	int  unemployed = 5, toyMakers = 1, Guards = 1, amount1, amount2, Toys = 0, lives = 2, Dmg, day = 0, play;
	//loading bar code
	system("color 2f");
	system("color 0e");
	char a, b;
	a = 177;
	b = 219;
	cout << "\n\n\n\t\t\t\t\tloading...";
	cout << "\n\n\n";
	cout << "\t\t\t\t\t ";
	for (int i = 0; i <= 25; i++)
		cout << a;
	Sleep(150);
	cout << "\r";
	cout << "\t\t\t\t\t ";
	for (int i = 0; i <= 25; i++)
	{
		cout << b;
		Sleep(200);
	}
	//Welcome screen
	slow_print("\nWelcome to santa's village!\n", 60);
	slow_print("The Objective is to keep your village from getting taken over by evil enemeies until chrismas (day 25) and to make your quota 150 toys by christmas.\n", 60);
	slow_print("Do you know how to play? (1 for yes / 2 for no)", 60);
	cin >> play;
	if (play == 2) {
		slow_print("The toymakers make toys.\n The toys gives you more unemployed people.\n The Guards protect you from the enmeies.\n Have fun out there!\n", 60);
	}
	slow_print("What is your name? \n",60);
	cin >> name;
	bool game = TRUE;
	while (game == TRUE)
	{
		day++;
		if (day == 25) 
		{
			if (day == 25 and Toys >= 150)
			{
				slow_print("Congrats you made it to christmas!", 20);
				day = 0;
				day = day / 0;
			}
			else 
			{
				slow_print("You failed santa is very disappointed and now some kids wont get there chrismas gifts this year.", 60);
				day = 0;
				day = day / 0;
			}
		}
		cout << name << "'s village\n";
		cout << "------------------------------------------------------------------------------------------------------\n";
		cout << "Lives: " << lives << '\n';
		cout << "Day: " << day << '\n';
		cout << "Toys: " << Toys << '\n';
		cout << "Toy Makers: " << toyMakers << '\n';
		cout << "Guards: " << Guards << '\n';
		cout << "Unemployed: " << unemployed << '\n';
		slow_print("How many people do you wanna put as a Toy Maker?\n", 20);
		cin >> amount1;
		if (unemployed >= amount1)
		{
			unemployed = unemployed - amount1;
			toyMakers = toyMakers + amount1;
		}
		else
		{
			cout << "Amount invaild\n";
		}
		slow_print("How many people do you wanna put as a Guard?\n", 20);
		cin >> amount2;
		if (unemployed >= amount2)
		{
			unemployed = unemployed - amount2;
			Guards = Guards + amount2;
		}
		else
		{
			cout << "Amount Invaild\n";
		}
		Toys = Toys + toyMakers * 0.3;
		if (Toys + toyMakers * 0.3 < 1) {
			Toys++;
		}
		unemployed = unemployed + Toys * 0.3;
		if (unemployed + Toys * 0.3 < 1) {
			unemployed++;
		}
		if (day >= 5)
		{
		int randomNum = 0;
		srand(time(0));  // once with the variable section

		randomNum = rand() % 4 + 1;   //random number in the range 1 to 4
		if (randomNum == 4)
		{
			int randomNum2 = 0;
			srand(time(0));  // once with the variable section

			randomNum2 = rand() % 10 + 1;   //random number in the range 1 to 4
			if (randomNum2 == 1)
			{
				enemey = "Army of Snowmen ";
			}
			if (randomNum2 == 2)
			{
				enemey = "The Grinch ";
			}
			if (randomNum2 == 3)
			{
				enemey = "Jack frost ";
			}
			if (randomNum2 == 4)
			{
				enemey = "Scrooge ";
			}
			if (randomNum2 == 5)
			{
				enemey = "Professor Hinkle (frosty the snowman) ";
			}
			if (randomNum2 == 6)
			{
				enemey = "Marv and Harry (Home alone) ";
			}
			if (randomNum2 == 7)
			{
				enemey = "Evil Elfves ";
			}
			if (randomNum2 == 8)
			{
				enemey = "Christmas Tree Army ";
			}
			if (randomNum2 == 9)
			{
				enemey = "Krampus ";
			}
			if (randomNum2 == 10)
			{
				enemey = "Kids on the naughty list ";
			}
			string one = name + " village is being attacked by " + enemey + '\n';
			slow_print(one, 60);
			if (enemey == "Army of Snowmen")
			{
			
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 4 + day * 2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
				
			}
			if (enemey == "The Grinch ")
			{
			
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 4 + day * 2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";;
			}
			if (enemey == "Jack frost ")
			{
				
				srand(time(0));
				Dmg = rand() % day * 4 + day * 2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Scrooge ")
			{
				
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 4 + day * 2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Professor Hinkle (frosty the snowman) ")
			{

				
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 4 + day * 2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Marv and Harry (Home alone) ")
			{
				int steal;
				srand(time(0));
				steal = rand() % Toys + Toys/2;
				Toys = Toys - steal;
				cout << "Marv and Harry Stole Toys from your village Stolen amount: " << steal << '\n';

			}
			if (enemey == "Evil Elfves ")
			{
				
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 4 + day *2;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Christmas Tree Army ")
			{
				
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 2 + day;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Krampus ")
			{
				
				srand(time(0));
				Dmg = rand() % day * 2 + day;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (enemey == "Kids on the naughty list ")
			{
				
				srand(time(0));  // once with the variable section

				Dmg = rand() % day * 2 + day;
				Guards = Guards - Dmg;
				cout << "The " << enemey << " did " << Dmg << " Damage!\n";
			}
			if (Guards <= 0) {
				lives = lives - 1;
				Guards = 0;
			}
		} 
		if (lives == 0) {
			game = false;
			slow_print("Your dead, sucks to be you!", 60);
		}
		}
	}
}
void slow_print(const string& message, unsigned int milli_per_char)
{

	for (const char c : message)
	{
		cout << c << flush;
		sleep_for(milliseconds(milli_per_char));
	}
}