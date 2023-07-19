#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */

//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1) 
//  Noun: baby
//  action 1: Baby is Cry
baby.isCry();

//  action 2: Baby play with toy
baby.playWithToy();


//  action 3: Baby is sleep
baby.isSleep();

//  2)
//  Noun: ship
//  action 1: ship is sailing
ship.isSailing();

//  action 2: ship anchor on the Jakarta port
ship.anchorOnJakartaPort();

//  action 3: ship is bigger than bicycle
ship.biggerThanBicyle();

//  3)
//  Noun: bicycle 
//  action 1:  bicycle round the city
bicylce.roundCity();

//  action 2: bicycle to the mountain
bicycle.toMountain();

//  action 3: bicycle to the beach
bicycle.toBeach();

//  4)
//  Noun: phone
//  action 1: phone calling sister
phone.callSister();

//  action 2: phone play games
phone.playGames();

//  action 3: phone listen to music
phone.listenMusic();

//  5)
//  Noun: table
//  action 1: table put the beer
table.putBeer();

//  action 2: table sale with chair
table.saleWithChair();

//  action 3: table get replaced
table.getReplaced();

//  6)
//  Noun: fan
//  action 1: fan cooling the living room
fan.coolingLivingRoom();

//  action 2: fan consume electricity
fan.consumeElectricity();

//  action 3: fan is cheaper than AC
fan.isCheaperThanAC();

//  7)
//  Noun: computer
//  action 1:  computer playing games
computer.playGames();

//  action 2: computer calculate Math
computer.calcMath();

//  action 3: computer learning model
computer.learnModel();

//  8)
//  Noun: foot
//  action 1: foot step on rock
foot.stepOnRock();

//  action 2: foot to walk
foot.toWalk();

//  action 3: foot kick the ball
foot.kickBall();

//  9)
//  Noun: Monitor
//  action 1: Monitor conect to Computer
monitor.connectToComputer();
//  action 2: Monitor adjust brightness
monitor.adjBrightness();
//  action 3: Monitor select preset color grading
monitor.selectPresetColor();
//  10)
//  Noun: glass
//  action 1: glass sale on pair
glass.saleOnPair();

//  action 2: glass arranged on a shelf
glass.arrangeOnShelf();

//  action 3: glass is out of stock
glass.outOfStock();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
