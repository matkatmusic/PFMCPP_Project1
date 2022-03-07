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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:      fruit
//  action 1:  fruit grows
fruit.grow();
//  action 2:  fruit ripens
fruit.ripen();
//  action 3:  fruit rots
fruit.rot();
  
//  2)
//  Noun:     horse
//  action 1: horse trots
horse.trot();
//  action 2: horse runs
horse.gallop();
//  action 3: horse sleeps
horse.canter();

//  3)
//  Noun:     tiger
//  action 1: tiger climbs a tree
tiger.climbTree();
//  action 2: tiger stalks prey
tiger.stalkPrey();
//  action 3: tiger kills prey
tiger.killPrey();

//  4)
//  Noun:     key
//  action 1: key locks
key.lock();
//  action 2: key unlocks
key.unlock();
//  action 3: key gets stuck
key.getStuck();

//  5)
//  Noun:     fabric
//  action 1: fabric tears
fabric.rip();
//  action 2: fabric shrinks in dryer
fabric.shrinkInDryer();
//  action 3: fabric dries
fabric.dry();

//  6)
//  Noun:     rocket
//  action 1: rocket launches
rocket.launch();
//  action 2: rocket explodes
rocket.explode();
//  action 3: rocket vents tanks
rocket.ventTanks();

//  7)
//  Noun:     website 
//  action 1: website streams a video
website.videoStream();
//  action 2: website crashes
website.crash();
//  action 3: website loads
website.load();

//  8)
//  Noun:     sun
//  action 1: sun rises
sun.rise();
//  action 2: sun sets
sun.set();
//  action 3: sun emits a solar flare
sun.emitFlair();

//  9)
//  Noun:     racecar
//  action 1: racecar accelerates
racecar.accelerate();
//  action 2: racecar decelerates
racecar.decelerate();
//  action 3: racecar crashes
racecar.crash();

//  10)
//  Noun:     hair
//  action 1: hair grows
hair.grow();
//  action 2: hair falls out
hair.fallOut();
//  action 3: hair greys
hair.grey();


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
