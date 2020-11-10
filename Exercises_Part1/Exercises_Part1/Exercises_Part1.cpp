// Exercises_Part1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <cstdlib> 
#include <vector>
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
//return the number of elements placed above a certain index
int CountValuesAbove(std::vector<int>& inVector, int value )
{
    int numberOfElementsAbove = 0;
    for (int i = value; i < inVector.size()-1; i++)
    {
        numberOfElementsAbove++;
    }
    return numberOfElementsAbove;
}
//this function tests a couple of arrays against the above function and prints out the results on new lines
void Exercise13()
{
    std::vector<int> V1{ 1,2,3,5,6,7,9,10 };
    std::vector<int> V2{ 1,5,7,3,4 };
    std::vector<int> V3{ 3,7,8,9,50,23};

    for(int i = 1; i<5; i++)
    {
        int result1 = CountValuesAbove(V1, i);
        int result2 = CountValuesAbove(V2, i);
        int result3 = CountValuesAbove(V3, i);

        std::cout << "\nVector1 has " << result1 << " elements above the element of position " << i;
        std::cout << "\nVector2 has " << result2 << " elements above the element of position " << i;
        std::cout << "\nVector2 has " << result3 << " elements above the element of position " << i;

    }

}
//take two arrays(references) and compare their last element returns true if the last elements are the same false if they are not 
bool LastStringIsTheSame(std::vector<std::string> &FirstVector,std::vector<std::string> &SecondVector)
{
    //disallow the vectors/arrays to be empty
    if(FirstVector.size()>0&&SecondVector.size()>0)
    {
        if (FirstVector[FirstVector.size() - 1] == SecondVector[SecondVector.size() - 1])
        {
            std::cout << "\nThe last element in both arrays is the same";
            return true;
        }
    }
    std::cout << "\n" << "The last element of the arrays is not the same";
    return false;
}
//This function tests some pairs or arrays containing strings to a function that returns true if we have 
//the same word at the end of the compared arrays.
void Exercise14()
{
    std::vector<std::string> Sentence1{"Kalle","went","to","the","forest"};
    std::vector<std::string> Sentence2{"Nine","little", "bears","lived","in","the","forest" };
    std::vector<std::string> Sentence3{"The","forest","is","really","big"}; 

    bool compare1And2 = LastStringIsTheSame(Sentence1, Sentence2);
    bool compare2And3 = LastStringIsTheSame(Sentence2, Sentence3);
    bool compare1And3 = LastStringIsTheSame(Sentence1, Sentence3);
}
//multilies each element int in a sent in an Array with an input vaule int
void MultiplyValues(std::vector<int> &inVector, int factor)
{
    if(inVector.size()>0)
    {
        for(int i = 0; i<inVector.size()-1; i++)
        {
            std::cout<<"\n"<<inVector[i] * factor;
        }
    }
}
//This function creates an array and then calls a function that multiplies the elements of it by a value read from user input
void Exercise15()
{
    std::cout << "Input the value you want to multiply the array elements with"<<"\n";
    int multiplyVal = 0;
    std::cin >> multiplyVal;
    std::vector<int> MultiplicationTable{ 1,2,3,4,5,6,7,8,9,10 };
    MultiplyValues(MultiplicationTable,multiplyVal);

}
//in order to be able to easier execute the different snippets of code above I put them in a switch three using the user input 
// to drive the different smaller programs as defined above.
void MainLoop()
{
    while (!finished)
    {
        std::cout <<"\n"<< "Select a function from 1 to 15 to run or 0 to exit"<<"\n";
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
        case 13:
            Exercise13();
            break;
        case 14:
            Exercise14();
            break;
        case 15:
            Exercise15();
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

