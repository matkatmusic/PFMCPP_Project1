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
 // Noun: fish
//  action 1: The fish eats
fish.eat();
//  action 2: The fish swims 
fish.swim();
//  action 3: The fish breeds
fish.breed();
//  2)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog plays
dog.play();
//  action 3: the dog sit
dog.sit();
//  3)
//  Noun: plane
//  action 1: the ship departs
ship.depart();
//  action 2: the ship sails
ship.sail();
//  action 3: the ship docks
ship.dock(); 
//  4)
//  Noun: car wash
//  action 1: the carwash shampoos and waxes
carWash.shampooAndWax();
//  action 2: the carwash rinses
carWash.rinse();
//  action 3: the car wash blow dries
carWash.blowDry();
//  5)
//  Noun: printer
//  action 1: the printer prints
printer.print();
//  action 2: the printer scans
printer.scan();
//  action 3: the printer cleans itself
printer.clean();
//  6)
//  Noun: engine
//  action 1: the engine starts
engine.start();
//  action 2: the engine accelerates
engine.accelerate();
//  action 3: the engine stops
engine.stop();
//  7)
//  Noun: tape recorder
//  action 1: the tape recorder records
tapeRecorder.record();
//  action 2: the tape recorder rewinds
tapeRecorder.rewind();
//  action 3: the tape recorder plays
tapeRecorder.play();
//  8)
//  Noun: coffee machine
//  action 1: the coffee machine grinds beans
coffeeMachine.grindBeans();
//  action 2: the coffee machine heats water 
coffeeMachine.heatWater();
//  action 3: the coffee machine brews coffee
coffeeMachine.brewCoffee();
//  9)
//  Noun: ticket barrier
//  action 1: the ticket barrier scans the ticket
ticketBarrier.scanTicket();
//  action 2: the ticket barrier authenticates the ticket 
ticketBarrier.authenticateTicket();
//  action 3: the ticket barrier opens the gate
ticketBarrier.openGate();
//  10)
//  Noun: elevator
//  action 1: the elevator opens the door
elevator.openDoor();
//  action 2: the elevator closes the door
elevator.closeDoor();
//  action 3: the elevator ascends
elevator.ascend();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
