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
//  Noun:     bike
//  action 1: tires pop
bike.popTire();
//  action 2: stops
bike.stop();
//  action 3: accelerates
bike.accelerate();
//  2)
//  Noun:     elevator
//  action 1: close doors
elevator.closeDoors();
//  action 2: calls help
elevator.connectToEmergencyServices();
//  action 3: goes to lobby
elevator.goToLobby()
//  3)
//  Noun:     guitar
//  action 1: string breaks
guitar.breakString();
//  action 2: increase pitch of string
guitar.increaseStringPitch();
//  action 3: switch pickout wiring
guitar.outputPickup();
//  4)
//  Noun:     tv
//  action 1: display different channel
tv.newChannel();
//  action 2: play audio
tv.playAudio();
//  action 3: connect to wifi
tv.connectWifi();
//  5)
//  Noun:     plane
//  action 1: consume gas
place.burnGas();
//  action 2: descend
plane.descend();
//  action 3: landing gear
plane.extendLandingGear();
//  6)
//  Noun:     car
//  action 1: engange clutch
car.engageClutch();
//  action 2: break engine
car.breakEngine();
//  action 3: signal turning
car.flashTurnSignal();
//  7)
//  Noun:     headphones
//  action 1: play sound
headphones.playSound();
//  action 2: charge battery
headphones.chargeBattery();
//  action 3: increase speaker output
headphones.increaseOutput();
//  8)
//  Noun:     ship
//  action 1: drop anchor
ship.dropAnchor();
//  action 2: turns left
ship.turnRudderLeft();
//  action 3: blow horn
ship.blowHorn();
//  9)
//  Noun:     dog
//  action 1: catch frisbee
dog.catchFrisbee();
//  action 2: dig holes
dog.dig();
//  action 3: eats food
dog.eat();
//  10)
//  Noun:     coffee maker
//  action 1: heat heating element
coffeeMaker.heatElement();
//  action 2: start timer
coffeeMaker.startTimer();
//  action 3: grind coffee beans
coffeMaker.grindBeans();


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
