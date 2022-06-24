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
//  Noun:        train
//  action 1:    the train moves forward
train.forward
//  action 2:    the train moves reverse
train.reverse
//  action 3:    the train sounds whistle
train.soundWhistle
//  2)
//  Noun:        cat
//  action 1:    the cat eats
cat.eat
//  action 2:    the cat poops
cat.poop
//  action 3:    the cat sleeps
cat.sleep
//  3)
//  Noun:        helicopter
//  action 1:    the helicopter ascends
helicopter.ascend
//  action 2:    the helicopter descends
helicopter.descend
//  action 3:    the helicopter rotates
helicopter.rotate
//  4)
//  Noun:        thermostat
//  action 1:    the thermostat reads temp
thermostat.readTemp
//  action 2:    the thermostat tells furnace to heat room
thermostat.heatRoom
//  action 3:    the thermostat tells a/c to cool room
thermostat.coolRoom
//  5)
//  Noun:        dishwasher
//  action 1:    the dishwasher washes dishes
dishwasher.washDishes
//  action 2:    the dishwasher drains dirty water
dishwasher.drainWater
//  action 3:    the dishwasher drys dishes
dishwasher.dryDishes
//  6)
//  Noun:        waterSprayer
//  action 1:    the waterSprayer sprays a jet of water
waterSprayer.sprayJet
//  action 2:    the waterSprayer sprays a shower of water
waterSprayer.sprayShower
//  action 3:    the waterSprayer sprays a mist
waterSprayer.sprayMist
// 7)    
//  Noun:        securitySystem        
//  action 1:    the securitySystem arms home
securitySystem.armHome
//  action 2:    the securitySystem arms away
securitySystem.armAway
//  action 3:    the securitySystem checks sensors
securitySystem.checkSensors
//  8)
//  Noun:        printer
//  action 1:    the printer loads paper
printer.loadPaper
//  action 2:    the printer prints page
printer.printPage
//  action 3:    the printer sounds paperOutAlarm
printer.paperOutAlarm
//  9)
//  Noun:        clock
//  action 1:    the clock moves second hand
clock.moveSecondHand
//  action 2:    the clock moves minute hand
clock.moveMinuteHand
//  action 3:    the clock sounds alarm
clock.soundAlarm
//  10)
//  Noun:        solderingIron
//  action 1:    the solderingIron heats tip
solderingIron.heatTip
//  action 2:    the solderingIron checks temp
solderingIron.checkTemp
//  action 3:    the solderingIron turns off after 2 hours with timer
solderingIron.turnOffTimer


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
