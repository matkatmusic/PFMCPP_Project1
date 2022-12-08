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
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone consumes electricity
phone.consumeElectricity();
//  action 3: the connects to the network
phone.connectToNetwork();
//  2)
//  Noun: finger
//  action 1: the finger points
finger.point();
//  action 2: the finger scratches an itch
finger.scratchItch();
//  action 3: the finger curls
finger.curl();
//  3)
//  Noun: monkey
//  action 1: the monkey dances
monkey.dance();
//  action 2: the monkey eats a banana
monkey.eatBanana();
//  action 3: the monkey climbs a tree
monkey.climbTree();
//  4)
//  Noun: programmer 
//  action 1: The programmer types lines of code
programmer.typeLinesOfCode();
//  action 2: The programmer debugs their code
programmer.debugCode();
//  action 3: The programmer swears 
programmer.swear();
//  5)
//  Noun: star
//  action 1: The star shines
star.shine();
//  action 2: The star collapses into a black hole
star.collapseIntoBlackHole();
//  action 3: The star explodes into a supernova
star.explodeIntoSupernova();
//  6)
//  Noun: baby
//  action 1: The baby cries
baby.cry();
//  action 2: The baby plays with her toy
baby.playWithToy();
//  action 3: The baby burps
baby.burp();
//  7)
//  Noun: singer
//  action 1: the singer sings
singer.sing();
//  action 2: the singer dances
singer.dance();
//  action 3: the singer's never gonna give you up
singer.neverGiveYouUp();
//  8)
//  Noun: paint
//  action 1: The paint covers the wall
paint.coverWall();
//  action 2: The paint runs down the brush
paint.runDownBrush();
//  action 3: The paint dries
paint.dry();
//  9)
//  Noun: ghost
//  action 1: the ghost haunts the house
ghost.hauntHouse();
//  action 2: the ghost passes through a wall
ghost.passThroughWall();
//  action 3: the ghost runs away from the ghostbuster
ghost.runAwayFromGhostbuster();
//  10)
//  Noun: santa
//  action 1: Santa brings presents
santa.bringPresents();
//  action 2: Santa comes down the chimney
santa.comeDownChimney();
//  action 3: Santa checks the naughty list
santa.checkNaughtyList();

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
