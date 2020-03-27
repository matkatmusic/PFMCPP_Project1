#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
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
//  Noun: phone
//  action 1: send call
phone.sendCall();

//  action 2: receive call
phone.receiveCall();

//  action 3: send SMS message
phone.sendSMS();
 
//  2)
//  Noun: computer
//  action 1: boots in to startup
computer.startup();

//  action 2: open file
computer.openFile();

//  action 3: reads from keyboard
computer.readKeyboard();
 
//  3) 
//  Noun: crock pot 
//  action 1: turn up warming element 
crockPot.heatUp();

//  action 2: turn warming element down
crockPot.heatDown();

//  action 3: start timer countdown
crockPot.startTimer();
 
//  4)
//  Noun: fitbit
//  action 1: read pulse
fitbit.readPulse();

//  action 2: send data to app
fitbit.sync(); 

//  action 3: run charging cycle
fitbit.charge();
 
//  5) 
//  Noun: electric guitar
//  action 1: output signal from jack
electricGuitar.outputSignal();

//  action 2: routes and mixes pickup outputs
electricGuitar.routePickups();

//  action 3: sense string vibrations
electricGuitar.readPickup();
 
//  6)
//  Noun: monkey
//  action 1: throw it's own poo
monkey.throwPoo();

//  action 2: swing from a tree
monkey.swing();

//  action 3: eat bananas 
monkey.eatBanana();
 
//  7)
//  Noun: tree 
//  action 1: sways in the breeze
tree.sway();

//  action 2: takes energy from the sun
tree.photosynthesize();

//  action 3: drop it's leaves
tree.shedLeaves();
 
//  8)
//  Noun: toilet
//  action 1: flushes
toilet.flush();

//  action 2: fills it's tank
toilet.fillTank();

//  action 3: becomes clogged
toilet.clogs();
 
//  9)
//  Noun: hot tub
//  action 1: set temperature 
hotTub.setTemperature();

//  action 2: shoots air out of jets
hotTub.enableJets();

//  action 3: bubbles the water
hotTub.bubble();
 
//  10)
//  Noun: glasses 
//  action 1: collapse it's arms for storage
glasses.foldArms();

//  action 2: focuses light 
glasses.focusLight();

//  action 3: breaks ): 
glasses.break(); 
 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
