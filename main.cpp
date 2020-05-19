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
//  Noun: cat
//  action 1: meow
cat.meow();
//  action 2: sleeps
cat.sleeps();
//  action 3: drinks Water
cat.drinksWater();
//  2)
//  Noun: clothes
//  action 1: wears
clothes.wears();
//  action 2: wash
clothes.wash();
//  action 3:iron
clothes.iron();
//  3)
//  Noun: car
//  action 1: travel
car.travel();
//  action 2: drift
car.drift();
//  action 3:turn left
car.turnLeft();
//  4)
//  Noun: kid
//  action 1: plays
kid.plays();
//  action 2: not study
kid.notStudy();
//  action 3: argues
kid.argues();
//  5)
//  Noun: politic
//  action 1: is speeching
politic.isSpeeching();
//  action 2: is being negotiated
politic.isBeingNegotiated();
//  action 3: shouts
politic.shouts(); 
//  6)
//  Noun: eq
//  action 1: turn on
eq.turnOn();
//  action 2:add mid frequency
eq.addMidFrequency();
//  action 3:subtract low mid frequency 
 eq.subtractLowMidFrequency();
//  7)
//  Noun:teacher
//  action 1:give lessons
teacher.giveLessons();
//  action 2:check exercises
teacher.checkExercises();
//  action 3:announce the results
teacher.announceTheResults(); 
//  8)
//  Noun:bass
//  action 1:ring the string
bass.ringTheString
//  action 2:make sound
bass.makeSound
//  action 3:record
 bass.record();
//  9)
//  Noun:constructor
//  action 1:measure
constructor.measure();
//  action 2:adjust
constructor.adjust();
//  action 3:build a house
constructor.buildAHouse 
//  10)
//  Noun:ear
//  action 1:vibrates
ear.vibrates();
//  action 2:understands sound
ear.UnderstandsSound();
//  action 3:rests
 ear.rests();


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
  
    std::cout << "good to go!" << std::endl;
    return 0;    
}
