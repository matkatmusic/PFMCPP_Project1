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
//  Noun:  dog
//  action 1:  the dog barks
dog.bark();
//  action 2:  the dog sleeps  
dog.sleep();
//  action 3:  the dog eats
dog.eat();
//  2)
//  Noun:  sun
//  action 1:  the sun rises
sun.rise();
//  action 2:  the sun sets
sun.set();
//  action 3:  the sun shines
sun.shine()
//  3)
//  Noun:  horse
//  action 1:  the horse walks
horse.walk();
//  action 2:  the horse trots
horse.trot();
//  action 3:  the horse gallops
horse.gallop();
//  4)
//  Noun:  television
//  action 1: shows video
television.showVideo();
//  action 2:  consumes electricity
television.consumeElectricity();
//  action 3:  makes sound
television.makeSound();
//  5)
//  Noun:  doctor
//  action 1:  prescribes medicine
doctor.prescribeMedicine();
//  action 2:  checks for ailment
doctor.checkForAilment();
//  action 3:  collects fee
doctor.collectFee();
//  6)
//  Noun:  god
//  action 1:  god creates
god.create();
//  action 2:  god destroys
god.destroy();
//  action 3:   god protects
god.protect();
//  7)
//  Noun:  tree
//  action 1:  tree grows
tree.grow();
//  action 2:  tree sheds its leaves
tree.shedLeaves();
//  action 3:  tree bends
tree.bend();
//  8)
//  Noun:  bird
//  action 1:  bird chirps
bird.chirp();
//  action 2:  birds fly
bird.fly();
//  action 3: bird flaps its wings
bird.flapWing();
//  9)
//  Noun:  baby
//  action 1:  baby cries
baby.cry();
//  action 2:  baby crawls
baby.crawl();
//  action 3: baby sleeps
baby.sleep();
//  10)
//  Noun:  glass
//  action 1:  glass reflects
glass.reflect();
//  action 2:  glass refracts
glass.refract();
//  action 3: glass shines
glass.shine();



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
