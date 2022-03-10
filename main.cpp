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
//  Noun: honeyBee 
//  action 1: the honeyBee flies
honeyBee.fly();
//  action 2: the honeyBee stings
honeyBee.sting();
//  action 3: the honeyBee buzzes 
honeyBee.buzz();
//  2)
//  Noun: Synthesizer
//  action 1: the synthesizer detunes
synthesizer.detune();
//  action 2: the synthesizer oscillates 
synthesizer.oscillate();
//  action 3: the synthesizer generates envelopes 
synthesizer.generateEnvelopes();
//  3)
//  Noun: Carrot
//  action 1: the carrot grows
carrot.grow();
//  action 2: the carrot spoils 
carrot.spoil();
//  action 3: the carrot hardens
carrot.harden();
//  4)
//  Noun: Candle
//  action 1: the candle fills room with smell
candle.fillRoomWithSmell();
//  action 2: the candle burns wax
candle.burnWax();
//  action 3: the candle heats the glass
candle.heatTheGlass();
//  5)
//  Noun: Par Can 
//  action 1: the par can lights the stage
parCan.lightTheStage();
//  action 2: the par can loses charge 
parCan.loseCharge();
//  action 3: the par can connects to transmitter
parCan.connectToTransmitter();
//  6)  
//  Noun: keyboard
//  action 1: the keyboard clicks
keyboard.click();
//  action 2: the keyboard uses bluetooth
keyboard.useBluetooth();
//  action 3: the keyboard transmits data
keyboard.transmitData();
//  7)
//  Noun: the instrument cable
//  action 1: the instrument table tangles itself
instrumentCable.tangleItself();
//  action 2: the instrument cable carries signal
instrumentCable.carrySignal();
//  action 3: the instrument cable hums
instrumentCable.hum();
//  8)
//  Noun: cieling fan
//  action 1: the cieling fan spins
cielingFan.spin();
//  action 2: the cieling fan cools the room
cielingFan.coolTheRoom();
//  action 3: the cieling fan twists the pully
cielingFan.twistThePully();
//  9)
//  Noun: cell phone
//  action 1: the cell phone rings
cellPhone.ring();
//  action 2: the cell phone connects to the tower
cellPhone.connectToTheTower();
//  action 3: the cell phone dies
cellPhone.die();
//  10)
//  Noun: The Graduate 
//  action 1: the graduate walks 
graduate.walk();
//  action 2: the graduate thinks 
graudate.think();
//  action 3: the graduate claps 
graduate.clap();


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
