// Exercises_Part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>
//Variables
bool finished = false;//when this is triggered we stop the exefile from running
int userSelection = 0;
//functions

//because the unsigned int cannot be negative the outbut value will be wrong(I believe it defaults to whatever is the maximum value of an unsigned int)
void Exercise1()
{
    unsigned int score = 100;
    score = score - 1000;
    std::cout << "Score " << score << "\n";
}
//Spells out the sizes of all the standard variables in C++ minus string 
void Exercise2()
{
    int intSize = sizeof(int);
    int shortSize = sizeof(short);
    int longlongSize = sizeof(long long);
    int floatSize = sizeof(float);
    int doubleSize = sizeof(double);
    int boolSize = sizeof(bool);
    int charSize = sizeof(char);

    std::cout << "\n"<<"The size of an int is " <<intSize;
    std::cout << "\n" << "The size of a long long int is " << longlongSize;
    std::cout << "\n" << "The size of a float is " << floatSize;
    std::cout << "\n" << "The size of a double is " << doubleSize;
    std::cout << "\n" << "The size of a short is " << shortSize;
    std::cout << "\n" << "The size of a bool is " << boolSize;
    std::cout << "\n" << "The size of a char is " << charSize;
}
//create a cube based on user input
void Exercise3()
{
    float cubeWidth = 0;
    float cubeDebth = 0;
    float cubeHeight = 0;
    std::cout << "\n" << "This program allow you to create a cube. \n In order to create your cube define the following: Width, Depth and Height" << "\n";
    std::cin >> cubeWidth;
    std::cin >> cubeDebth;
    std::cin >> cubeHeight;

    float cubeVolume = cubeWidth * cubeDebth * cubeHeight;

    std::cout << "\n" << "Congratulations you created a cube of the width of " << cubeWidth << ",depth of " << cubeDebth << ",height of," << cubeHeight << "and a volume of " << cubeVolume << ".\n";
}
//ask user for their name and print out 
void Exercise4()
{
    std::cout << "\n"<<"Please type your surename to the console";
    std::string sureName;
    std::cin >> sureName;
    
    std::cout <<"\n"<< sureName <<", "<< sureName[0];
}
//ask for a number between 1 and 100 and grade it based on its size if 0 or an invalid input is entered the function is exited 
void Exercise5()
{
    int userInput = 1;
    std::string grade = "";
    while (userInput != 0)
    {
        std::cout << "\n" << "Enter a number between 1 and 100.\n";
        std::cin >> userInput;
        if(userInput>0 && userInput<=100)
        {
            if (userInput > 90)
                grade = "A*";
            else if (userInput >= 70 && userInput < 90)
                grade = "A";
            else if (userInput >= 50 && userInput < 70)
                grade = "B";
            else if (userInput < 50)
                grade = "C";
            
            std::cout << "\n Your grade is: " << grade;
        }
        else if(userInput>100)
        {
            std::cout << "\n" << "Faulty input you cannot enter a number higher than 100."<<"\n";
        }
    }

}
//write the multiplication table for input number(has to be positive)
void Exercise6()
{
    int Userinput = 0;
    int result = 0;
    std::cout << "\n" << "Input a number to get the multiplication table for said number. Has to be positive"<<"\n";
    std::cin >> Userinput;
    if (Userinput >= 0)
    {
        for (int i = 1; i < 11; i++)
        {
            result = i * Userinput;
            std::cout << result << "\n";
        }
    }
    else
        std::cout << "\n" << "Faulty input, cannot be negative";
}
//count down from from user input number until 0 is reached 
void Exercise7()
{
    int userInput = 0;
    std::cout << "\n" << "Input a number higher than zero!"<<"\n";    
    std::cin >> userInput;
    if (userInput > 0)
    {
        while (userInput > 0)
        {
            --userInput;
            std::cout << userInput << "\n";
        }
    }
    else
        std::cout << "\n" << "Faulty input has to be bigger than 0." << "\n";
}
//analyse a string type out the number of e, o, lower case and upper case letters
void Exercise8()
{
    std::string input;
    int numOfOs = 0;
    int numOfEs = 0;
    int lowerCase = 0;
    int upperCase = 0;
    std::cout << "\n"<<"Write a sentence or word you want to have analyzed"<<"\n";
    std::getline(std::cin>>std::ws,input);
    if (input != "")
    {
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == 'o' || input[i] == 'O')
                ++numOfOs;
            else if (input[i] == 'e' || input[i] == 'E')
                ++numOfEs;
            if (input[i] == tolower(input[i]))
                ++lowerCase;
            else if (input[i] == toupper(input[i]))
                ++upperCase;
        }
        std::cout << "\n" << "Number of O: " << numOfOs << "\n" << "Number of E: " << numOfEs << "\n" << "Amount of upperCase: " << upperCase << "\n" << "Amount of Lower case: " << lowerCase<<"\n";
    }
    else
        std::cout << "\n" << "Input was empty please enter a word or sentence you want analysed";
}
//This function writes out The phrase Hello 20 times to the console
void Exercise9()
{
    for(int i = 0; i <20; i++)
    {
        std::cout << "Hello" << "\n";
    }
}
//Bolean function needed for exercise 10 takes two strings 
bool StartsWithSameLetter(std::string input1,std::string input2)
{
    if (input1[0] == input2[0])
        return true;
    return false;
}
//This function asks the user for the input of two strings, then calls a bool function defined above that returns true if the strings start with the same letter
void Exercise10()
{
    std::string firstString ="";
    std::string secondString= "";

    std::cout<< "Type two words or sentences and then press enter to have them analyzed"<<"\n";
    std::getline(std::cin>>std::ws,firstString);
    std::cout << "First line or word entered please type the next" <<"\n";
    std::getline(std::cin >> std::ws, secondString);
    if (StartsWithSameLetter(firstString, secondString))
        std::cout << "Your words/ sentences both start with the same letter"<<"\n";
    else
        std::cout << "Your words/ sentences start with different letters"<<"\n";
}
//This function generates a number between a set max an min amount
void Exercise11()
{     
    srand(time(0));
    
    int output = rand() % 25 + 1;

    std::cout << "\n" << "Randomly selected: " << output << "\n";
}
//This function ask the user for inputing a number between 1 and 100 then draws a number in the same range by it self
//and tells the user it won or lost dependent on if the number choosen was the same as the one generated by the computer
void Exercise12()
{
    int guess;
    std::cout << "Please input a number between 1 and 100 if you pick the same number as the computer you win"<<"\n";
    std::cin >> guess;
    if (guess > 0 && guess <= 100)
    {
        srand(time(0));
        int computerPick = rand() % 100 + 1;
        if (guess == computerPick)
            std::cout << "\n" << "Congratulations you won both you and the computer picked" << guess << "\n";
        else
            std::cout << "\n" << "You lost, you picked " << guess << " while the computer picked " << computerPick << "\n";
    }
    else
        std::cout << "Faulty input number must be between 1 and 100" << "\n";
}
//in order to be able to easier execute the different snippets of code above I put them in a switch three using the user input 
// to drive the different smaller programs as defined above.
void MainLoop()
{
    while (!finished)
    {
        std::cout <<"\n"<< "Select a function from 1 to 12 to run or 0 to exit"<<"\n";
        std::cin >> userSelection;
        switch (userSelection)
        {
        case 1:
            Exercise1();
            break;
        case 2:
            Exercise2();
            break;
        case 3:
            Exercise3();
            break;
        case 4:
            Exercise4();
            break;
        case 5:
            Exercise5();
            break;
        case 6:            
            Exercise6();
            break;
        case 7:           
            Exercise7();
            break;
        case 8:            
            Exercise8();
            break;
        case 9:
            Exercise9();
            break;
        case 10:
            Exercise10();
            break;
        case 11: 
            Exercise11();
            break;
        case 12:
            Exercise12();
            break;
        case 0:
            finished = true;
        }
    }
}
//main function
int main()
{
    MainLoop();
}

