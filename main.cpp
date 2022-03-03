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
//  Noun:        phone
//  action 1:    the phone receives data
phone.receiveData();
//  action 2:    the phone sends data
phone.sendData();
//  action 3:    the phone rings
phone.ring();
//  2)
//  Noun:        coffee machine
//  action 1:    the coffee is heating up
coffeeMachine.heatUp();
//  action 2:    the coffee machine draws power
coffeeMachine.drawPower();
//  action 3:    the coffee machine make coffee
coffeeMachine.makeCoffee();
//  3)
//  Noun:        mixing console
//  action 1:    the mixing console moves faders
mixingConsole.moveFader();
//  action 2:    the mixing console shows metering
mixingConsole.showMetering();
//  action 3:    the mixing console changes level
mixingConsole.changeLevel();
//  4)
//  Noun:        calculator
//  action 1:    the calculator adds numbers
calculator.addNumber();
//  action 2:    the calculator substracts numbers
calculator.substractNumber();
//  action 3:    the calculator multiplies numbers
calculator.multiplyNumber();
//  5)
//  Noun:        alarm clock  
//  action 1:    the alarm clock shows the current time
alarmClock.showCurrentTime();
//  action 2:    the alarm clock shows the alarm time
alarmClock.showAlarmTime();
//  action 3:    the alarm clock activates the alarm
alarmClock.activateAlarm();
//  6)
//  Noun:        tresor
//  action 1:    the tresor locks the door
tresor.lockDoor(); 
//  action 2:    the tresor unlocks the door
tresor.unlockDoor();
//  action 3:    the tresor checks the code
tresor.checkCode();
//  7)
//  Noun:        atm
//  action 1:    the atm verifies the pin
atm.verifyPin();
//  action 2:    the atm gets the money
atm.getMoney();
//  action 3:    the atm opens drawer
atm.openDrawer();
//  8)
//  Noun:        drill
//  action 1:    the drill moves clockwise
drill.moveClockwise();
//  action 2:    the drill moves counter clockwise
drill.moveCounterClockwise();
//  action 3:    the drill shows battery status
drill.showBatteryStatus();
//  9)
//  Noun:        alarm monitor
//  action 1:    the alarm monitor triggers alarm
alarmMonitor.triggerAlarm();
//  action 2:    the alarm monitor updates alarm
alarmMonitor.updateAlarm();
//  action 3:    the alarm monitor removes alarm
alarmMonitor.removeAlarm();
//  10)
//  Noun:        equalizer
//  action 1:    the equalizer changes frequency
equalizer.changeFrequency();
//  action 2:    the equalizer changes q-factor
equalizer.changeQfactor();
//  action 3:    the equalizer changes gain
equalizer.changeGain();


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
