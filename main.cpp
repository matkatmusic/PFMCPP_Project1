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
//  Noun:       alarmClock
//  action 1:   the alarmClock ticks
alarmClock.tick();
//  action 2:   the alarmClock rings
alarmClock.ring();
//  action 3:   the alarmClock vibrates
alarmClock.vibrate();
//  2)
//  Noun:       scissor
//  action 1:   the scissor cuts
scissor.cut();
//  action 2:   the scissor opens
scissor.open();
//  action 3:   the scissor glides
scissor.glide();
//  3)
//  Noun:       snow
//  action 1:   the snow falls
snow.fall();
//  action 2:   the snow melts
snow.melt();
//  action 3:   the snow hardens
snow.harden();
//  4)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird sleeps
bird.sleep();
//  action 3:   the bird lays eggs
bird.layEgg();
//  5)
//  Noun:       milk
//  action 1:   the milk spoils
milk.spoil();
//  action 2:   the milk spills
milk.spill();
//  action 3:   the milk churns
milk.churn();
//  6)
//  Noun:       tree
//  action 1:   the tree falls
tree.fall();
//  action 2:   the tree shakes
tree.shake();
//  action 3:   the tree drops fruit
tree.dropFruit();
//  7)
//  Noun:       string
//  action 1:   the string ties
string.tie();
//  action 2:   the string stretches
string.stretch();
//  action 3:   the string breaks
string.break();
//  8)
//  Noun:       tooth
//  action 1:   the tooth aches
tooth.ache();
//  action 2:   the tooth chips
tooth.chip();
//  action 3:   the tooth falls out
 tooth.fallOut();
//  9)
//  Noun:       ball
//  action 1:   the balll bounces
ball.bounce();
//  action 2:   the ball pops
ball.pop();
//  action 3:   the ball rolls
ball.roll();
//  10)
//  Noun:       metal
//  action 1:   the metal rusts
metal.rust();
//  action 2:   the metal bends
metal.bend();
//  action 3:   the metal cools
metal.cool();


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
