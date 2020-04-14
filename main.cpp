#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
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
//  Noun: Camera 
//  action 1: Camera captures 
camera.capture();
//  action 2: the camera zooms
camera.zoom();
//  action 3: the camera flashes
 camera.flash();
//  2) 
//  Noun: Dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog runs
dog.run();
//  action 3: the dog sniffs
dog.sniff();
//  3)
//  Noun: Sun
//  action 1: the sun sets
sun.set();
//  action 2: the sun shines
sun.shine();
//  action 3: the sun rises
sun.rise();
//  4)
//  Noun: Doctor
//  action 1: the doctor heals
doctor.heal();
//  action 2: the doctor diagnose
doctor.diagnose();
//  action 3: the doctor prescribes 
doctor.prescribe();
//  5)
//  Noun: Dolphin
//  action 1: the dolphin squeaks 
dolphin.squeak();
//  action 2: the dolphin swims
dolphin.swim();
//  action 3: the dolphin jumps
dolphin.jump();
//  6)
//  Noun: Rocket
//  action 1: the rocket launches 
rocket.launch();
//  action 2: the rocket explodes
rocket.explode();
//  action 3: the rocket lands
rocket.land();
//  7)
//  Noun: Ghost
//  action 1: the ghost fades
ghost.fade();
//  action 2: the ghost haunts
ghost.haunt();
//  action 3: the ghost possesses 
 ghost.possess();
//  8) 
//  Noun: Boat
//  action 1: the boat floats
boat.float();
//  action 2: the boat sails
boat.sail();
//  action 3: the boat sinks
boat.sink();
//  9)
//  Noun: Lightning
//  action 1: the lightning strikes
lightning.strike();
//  action 2: the lightning flashes
lightning.flash();
//  action 3: the lightning illuminates 
lightning.illuminate();
//  10)
//  Noun: Baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby laughs
baby.laugh();
//  action 3: the baby crawls
baby.crawl();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
