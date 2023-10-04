#include <iostream>

int main (){
    // This comment
    /*This 
    multi
    line
    comments
    okay*/

// Hello World
// std output = string that stored
// uncomment this code
/*    std::cout << "I'am Naual" << std::endl;
    std::cout << "I'am love cat" << '\n';
    std::cout << "I'am from Bandung"; */

// Variable and basic data type
//uncomment
    /*( basic data type(storing)
        integer (whole number)
            ex: int age = 21;
                int year = 2023;
        double (number include decimal)
            ex: double temprature = 24.6;
        char (single character)
            ex: char grade = 'A';
                char initial = 'AB' (it will cause error)

        boolean (boolean value/true or false)
            ex: bool power = true;
        string (object that represent a sequence of text)
        !! string are provided from standard name space to declare it:
        use >> std::string name = "Naufal";
               std::cout << name;
            ex: std::string name = "Naufal";


    )*/

/*  int x; //this first is declaration
    int y = 6;
    int sum = x + y;
    x = 5;
*/
/*
    int x = 5;
    int y = 7;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum <<'\n';
*/
/* This below example of string standar out 
    std::string name = "Naufal";

    std::cout << name;
*/

// Const keyword: specifies that variable's value is constant
// tells the compiler to prevent anything from modifiying it
// (read-only)
/*
ex: (inside main)
    double PI = 3.14
    const double PI = 3.14      (this will not change the value in const)
    double gravity = 9.83       (but maybe in worst case someone change it, so the value will also change)
    gravity = 10

    std::cout << PI;
*/

//Namespace =
/*           Provide a solution for preventing name conflicts
            in large project. Each entity needs a unique name.
            A namespace allows for identically name entities
            as long as the namespace are diffrent.
*/
//Typedef and type aliases
/*
// Typedefs and type aliases
    // typedef = reserved keyword used to create an additional name
    //                  (alias) for another data type.
    //                  New identifier for an existing type
    //                  Helps with readability and reduces typos
    //                  Use when there is a clear benefit
    //                  Replaced with 'using' (work better w/ templates)
ex :

#include <iostream>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Bro";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
//Arithmetic operator
#include <iostream>

int main() 
{
   int students = 20;

   // addition
   // ------------------
   //students = students + 1;
   //students+=1;
   //students++;

   // subtraction
   // ------------------
   //students = students - 1;
   //students-=1;
   //students--;

   // multiplication
   // ------------------
   //students = students * 2;
   //students*=2;

   // division
   // ------------------
   //students = students / 2;
   //students/=2;

   // modulus
   // ------------------ (Good for find odd or even num)
   //int remainder = students % 3;
   //std::cout << remainder;

   std::cout << students;

   return 0;
}
//Type conversion
     // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    ex:
#include<iostream>
 
int main() {
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; 

    std::cout << score << "%";

    return 0;
}

//User input 
    // cout << (insertion operator)
    // cin >> (extraction operator)
    ex:
#include <iostream>

int main() 
{
   std::string name;
   int age;

   std::cout << "What's your full name?: ";
   std::getline(std::cin >> std::ws, name);

   //Above the std::ws, because it were in position
     above the question so in age there's no line instead
     it's a new line.

   std::cout << "What's your age?: ";
   std::cin >> age;

   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age << " years old";

   return 0;

//Useful math related function

    ex:
#include <iostream>
#include <cmath>

int main() 
{
   double x = 3.99;
   double y = 4;
   double z;

   //z = std::max(x, y);
   //z = std::min(x, y);
   //z = pow(2, 4);
   //z = sqrt(9);
   //z = abs(-3);
   //z = round(x);
   //z = ceil(x);
   //z = floor(x);

   std::cout << z;

   return 0;
*/
//If statement
// if statement = do something if a condition is true.
//                if not, then don't do it.

/*  ex:

#include <iostream>

int main() 
{
   int age;

   std::cout << "Enter your age: ";
   std::cin >> age;

   if(age >= 18){
      std::cout << "Welcome to the site!";
   }
   else if(age < 0){
      std::cout << "You haven't been born yet!";
   }
   else{
      std::cout << "You are not old enough to enter!";
   }

   return 0;
}
//Switch 
//  switch = alternitive to using many "else if"
//           statements, compare one value againdt matching cases.
    ex:
#include <iostream>

int main() 
{
   char grade;

   std::cout << "What letter grade?: ";
   std::cin >> grade;

   switch(grade){
      case 'A':
         std::cout << "You did great!";
         break;
      case 'B':
         std::cout << "You did good";
         break;
      case 'C':
         std::cout << "You did okay";
         break;
      case 'D':
         std::cout << "You did not do good";
         break;
      case 'F':
         std::cout << "YOU FAILED!";
         break;
      default:
         std::cout << "Please only enter in a letter grade (A-F)";
   }

   return 0;

//Ternary Operator  ?:  
    replacement to an if/else statement

    condition ? expression1 : expression2;

    ex:
#include <iostream>

int main() 
{
   //int grade = 50;
   //grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

   //int number = 9;
   //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

   //bool hungry = true;
   //hungry ? std::cout << "You are hungry" : std::cout << "You are full";

   return 0;
}
*/
//Logical operator
/* // && "and" = check if two conditions are true
      || "OR"  = check if at least one conditions is true
      !  "Not" = reverses the logical state of operator
    ex:

#include <iostream>

int main() 
{
   int temp;
   bool sunny = false;

   std::cout << "Enter the temperature: ";
   std::cin >> temp;

   if(temp > 0 && temp < 30){
      std::cout << "The temperature is good!\n";
   }
   else{
      std::cout << "The temperature is bad!\n";
   }

   if(temp <= 0  || temp >= 30){
      std::cout << "The temperature is bad!\n";
   }
   else{
      std::cout << "The temperature is good!\n";
   }

   if(!sunny){
      std::cout << "It is cloudy outside!";
   }
   else{
      std::cout << "It is sunny outside!";
   }

   return 0;
}
*/
//String methode
/*
   length methode :  it will give you how much character in some string
   ex : 


   empty methode : check is string empty or not 
   return Boolean value
   ex :

   clear() : if you give an input it won't show the input you give
   ex :


   append : adding/appending string to another end of string  
   ex :

   at(index) : give char at given position
   ex :

   insert(index, char) : insert char in string


   find(char) : finding char in string, give position of char


   erase(begin index, end index) : erasing char in string

   You can read at string class in  c++.com web

*/
// While loop
/*

   ex :

#include <iostream>

int main() 
{
   std::string name;
   
   while(name.empty()){
      std::cout << "Enter your name: ";
      std::getline(std::cin, name);
   }
   
   std::cout << "Hello " << name;

   return 0;
}
*/
// Do while loop
/*
   Do some block of code first,
   THEN repeat again if condition is true
ex :

   #include <iostream>
 
int main()
{
   int number;

   do{
      std::cout << "Enter a positive #: ";
      std::cin >> number;
   }while(number < 0);

   std::cout << "The # is: " << number;

   return 0;
}

*/
// For loop
/*
   ex:
#include <iostream>
 
int main()
{
   for(int i = 10; i <20 ; i++){
      //count to 20
      std::cout << i << '\n';
   }
 
   std::cout << "HAPPY NEW YEAR!\n";  
 
   return 0;
*/
// Break & continue
/*
 Break = break out of a loop
 Continue = skiping current iteration

 ex:
#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            //break;
            //continue;
        }
        std::cout << i << '\n';
    }

    return 0;
*/
//Nested loop
/*
   Loop inside the loop
   Loop the Loop 

*/
// Random
/*
   pseudo-random = NOT truly random(but close)
   
   srand(seed())

*/
//Function



    return 0; 
}
