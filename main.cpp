#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1 OK!

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
//  Noun: car
//  action 1: the car turns
car.turns();
//  action 2: the car accelerate
car.accelerate();
//  action 3: the car stop
car.stop();
//  2)
//  Noun: computer
//  action 1: the computer suspend
computer.suspend();
//  action 2: the computer hibernate
computer.hibernate();
//  action 3: the computer shutDown
computer.shutDown();
//  3)
//  Noun: oven
//  action 1: the oven heats
oven.getHeat();
//  action 2: the oven colds
oven.getCold();
//  action 3: the oven keep temperature
oven.keepTemperature();
//  4)
//  Noun: pet
//  action 1: the pet eat
pet.eat();
//  action 2: the pet sleep
pet.sleep();
//  action 3: the pet play
pet.play();
//  5)
//  Noun: TV
//  action 1: the TV change the channel
tv.changeChannel();
//  action 2: the TV change the source
tv.changeSource();
//  action 3: the TV standby
tv.standby();
//  6)
//  Noun: elevator
//  action 1: the elevator go up
elevator.goUp();
//  action 2: the elevator go down
elevator.goDown();
//  action 3: the elevator open the door
elevator.openDoor();
//  7)
//  Noun: air conditioner
//  action 1: the air conditioner check the temperature
airConditioner.checkTemperature();
//  action 2: the air conditioner cold the air
airConditioner.cold();
//  action 3: the air conditioner ventilate 
airConditioner.ventilate();
//  8)
//  Noun: fax
//  action 1: the fax give transfer tone
fax.giveTone();
//  action 2: the fax receive
fax.receiveData();
//  action 3: the fax send
fax.sendData();
//  9)
//  Noun: train barrier
//  action 1: the train barrier open the fence
trainBarrier.open();
//  action 2: the train barrier close the fence
trainBarrier.close();
//  action 3: the train barrier bell rings
trainBarrier.ring();
//  10)
//  Noun: automatic light sensor
//  action 1: the light sensor turn on the lights
lightSensor.autoTurnON();
//  action 2: the light sensor turn off the lights
lightSensor.autoTurnOFF();
//  action 3: the light sensor change the actual state of the lights
lightSensor.manualTurn();


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
