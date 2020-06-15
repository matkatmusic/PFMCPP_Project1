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
//  Noun:   camera
//  action 1:   the camera advances film
camera.advanceFilm();

//  action 2:   the camera takes a photo
camera.takePhoto();

//  action 3:   the camera rewinds film
camera.rewindFilm();
 
//  2)
//  Noun:   radio       
//  action 1:   the radio powers on
radio.turnOn();

//  action 2:   the radio tunes a station
redio.tuneStation();

//  action 3:   the radio turns up the volume
radio.raiseVolume();

//  3)
//  Noun:   dog
//  action 1:   the dog barks
dog.bark();

//  action 2:   the dog walks
dog.walk();

//  action 3:   the dog heels
dog.heel();

//  4)
//  Noun:   car
//  action 1:   the car drives
car.drive();

//  action 2:   the car brakes
car.brake();

//  action 3:   the car signals a turn
car.signalTurn();

//  5)
//  Noun:   vcr
//  action 1:   the vcr plays the tape
vcr.playTape();

//  action 2:   the vcr fast-forwards the tape
vcr.fastForwardTape();

//  action 3:   the vcr ejects the tape
vcr.ejectTape();

//  6)
//  Noun:   dryer
//  action 1:   the dryer starts cycle
dryer.startCycle();

//  action 2:   the dryer spins
dryer.spin();

//  action 3:   the dryer cools down
dryer.coolDown();
 
//  7)
//  Noun:   oven
//  action 1:   the oven sets the temperature
oven.setTemp();

//  action 2:   the oven bakes
oven.bake();

//  action 3:   the oven shuts offoven.shutOff();
 
//  8)
//  Noun:   train
//  action 1:   the train opens doors
train.openDoors();

//  action 2:   the train rolls forward
train.rollForward();

//  action 3:   the train stops
trian.stop();

//  9)
//  Noun:   calculator
//  action 1:   the calculator adds
calculator.add();

//  action 2:   the calculator subtracts
calculator.subtract();

//  action 3:   the calculator clears the display
calculator.clearDisplay():

//  10)
//  Noun:   taxi
//  action 1:   the taxi piks up a fare
taxi.pickupFare();

//  action 2:   the taxi starts the meter
taxi.startMeter();

//  action 3:   the taxi starts the trip
taxi.startTrip();
 
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
