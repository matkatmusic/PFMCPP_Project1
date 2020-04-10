#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
//  Noun:         dog
//  action 1:     bark
dog.bark();
//  action 2:     run
dog.run();
//  action 3:     sleep
dog.sleep(); 
//  2)
//  Noun:         ball
//  action 1:     bounce
ball.bounce();
//  action 2:     stop
ball.stop();
//  action 3:     roll
ball.roll();
//  3)
//  Noun:         cellPhone
//  action 1:     ring
cellPhone.ring();
//  action 2:     vibrate
cellPhone.vibrate();
//  action 3:     discharge
cellPhone.discharge();
 
//  4)            
//  Noun:         compiler 
//  action 1:     compile
compiler.compile();
//  action 2:     stop
compiler.stop();
//  action 3:     break
compiler.break();
//  5)
//  Noun:         pc
//  action 1:     reboot
pc.reboot();
//  action 2:     run
pc.run();
//  action 3:     load
pc.load(); 
//  6)
//  Noun:         productManager
//  action 1:     sleep
productManager.sleep();
//  action 2:     complain
productManager.complain();
//  action 3:     doMeanThings
productManager.doMeanThings(); 
//  7)
//  Noun:         deliveryBoy
//  action 1:     deliverNewspapper
deliveryBoy.deliverNewspapper();
//  action 2:     deliverBox
deliveryBoy.deliverBox();
//  action 3:     deliverLetter
deliverBoy.deliverLetter(); 
//  8)
//  Noun:         oldLady
//  action 1:     beNice
oldLady.beNice();
//  action 2:     beRude
oldLady.beRude();
//  action 3:     becomeQueen
oldLady.becomQueen(); 
//  9)            
//  Noun:         developer
//  action 1:     writeCode
developer.writeCode();
//  action 2:     commitCode
devloper.commitCode();
//  action 3:     testCode
developer.testCode(); 
//  10)
//  Noun:         donaldTrump
//  action 1:     twitt
donaldTrump.twitt();
//  action 2:     yell
donaldTrump.yell();
//  action 3:     cry
donaldTrump.cry(); 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
