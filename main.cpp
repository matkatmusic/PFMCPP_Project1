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
//  Noun: truck
//  action 1: accelerate
truck.accelerate();
//  action 2: brake
truck.brake();
//  action 3: lower window
 truck.windowDown();
//  2)
//  Noun: battery
//  action 1: charge
battery.charge();
//  action 2: discharge
battery.discharge();
//  action 3: fail
 battery.fail();
//  3)
//  Noun: cow
//  action 1: eat grass
cow.eatGrass();
//  action 2: walk forward
cow.walkForward();
//  action 3: moo
 cow.Moo();
//  4)
//  Noun: Flower
//  action 1: grow stem
flower.growStem();
//  action 2: bloom
flower.bloom();
//  action 3: drop seed
 flower.dropSeed();
//  5)
//  Noun: tv
//  action 1: switch on
tv.switchOn();
//  action 2: search for inputs
tv.inputSearch();
//  action 3: open menu
 tv.openMenu();
//  6)
//  Noun: cloud
//  action 1: move
cloud.move();
//  action 2: release rain
cloud.rain();
//  action 3: release lightning
 cloud.lightning();
//  7)
//  Noun: washing machine
//  action 1: Wash cycle
wMachine.wash();
//  action 2: Spin cycle
wMachine.spin();
//  action 3: Dry cycle
 wMachine.dry();
//  8)
//  Noun: Lift
//  action 1: go up
lift.up();
//  action 2: go down
lift.down();
//  action 3: open doors
 lift.openDoors();
//  9)
//  Noun: amplifier
//  action 1: switch input
amp.inputSwitch();
//  action 2: increase treble
amp.trebleUp();
//  action 3: switch ouput
 amp.outputSwitch();
//  10)
//  Noun: microwave
//  action 1: start timer
microwave.timerStart();
//  action 2: release microwave radiation
microwave.releaseMicrowaves();
//  action 3: make sound
 microwave.makeSound();


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
