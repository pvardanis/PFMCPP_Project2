#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 int
 char
 bool
 float 
 double
 void 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int modulesPassed = 18;
    int passengersCheckedIn = 198;

    char myName[] = "Panos";
    char UniversityDegree[] = "Electrical Engineer";
    char email[] = "somerandomemail@gmail.com"; FIXME do you really want this public?  your repo and repl.it are public

    bool finishedTask = false;
    bool washedDishes = false;
    bool sufficientEvidence = true;

    float moneyLeft = 95.68f;
    float radius = 6.5f;
    float distanceMeasured = 150.87f;

    double pi = 3.14159265359;
    double measuredElectronSpeed = 35.9875008268;
    double massOfParticle = 0.0000005802;
    
    ignoreUnused(number, modulesPassed, passengersCheckedIn,
                 myName, UniversityDegree, email, finishedTask,
                 washedDishes, sufficientEvidence, moneyLeft,
                 radius, distanceMeasured, pi, measuredElectronSpeed,
                 massOfParticle); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void fixBike(const char* brokenParts, float moneyLeft)
{
    ignoreUnused(brokenParts, moneyLeft);
}

/*
 2)
 */
void cookMeal(const char* recipe, bool cleanKitchen)
{
    ignoreUnused(recipe, cleanKitchen);
}

/*
 3)
 */
double processInput(float gain, double attackTime)
{
    ignoreUnused(gain, attackTime);
    return {};
}

/*
 4)
 */
void supermarket(int dailyCustomers, double income, bool cleanArea)
{
    ignoreUnused(dailyCustomers, income, cleanArea);
}

/*
 5)
 */
bool library(int numberOfBooks, float rentPerDay, const char* bookTitle)
{
    ignoreUnused(numberOfBooks, rentPerDay, bookTitle);
    return {};
}

/*
 6)
 */
void djConsole(bool autoqueue, float bpm, const char* genre)
{
    ignoreUnused(autoqueue, bpm, genre);
}

/*
 7)
 */
void multibandCompressor(bool playSound, float frequencyRange, float compressRatio)
{
    ignoreUnused(playSound, frequencyRange, compressRatio);
}

/*
 8)
 */
void study(const char* module, float hoursPerDay, bool finalProject)
{
    ignoreUnused(module, hoursPerDay, finalProject);
}
/*
 9)
 */
bool factory(bool finishedTask, int numberOfObjects, int workersOnShift)
{
    ignoreUnused(finishedTask, numberOfObjects, workersOnShift);
    return {};
}
/*
 10)
 */
bool washMachine(bool hasClothes, const char* programType, int temperature)
{
    ignoreUnused(hasClothes, programType, temperature);
    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    fixBike("brake", 58.5f);
    //2)
    cookMeal("spaghetti", false);
    //3)
    processInput(1.2f, 0.45);
    //4)
    supermarket(250, 1300.0, true);
    //5)
    library(1235, 2.5f, "1984");
    //6)
    djConsole(false, 85.5f, "hip hop");
    //7)
    multibandCompressor(true, 85.5f, 2.5f);
    //8)
    study("Physics I", 4.5f, true);
    //9)
    factory(false, 500, 12);
    //10)
    washMachine(false, "dark care", 30);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
