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
//  Noun: computer
//  action 1: Runs Code
computer.runCode();
//  action 2: Cost Money
computer.costMoney();
//  action 3:Store Information
computer.storeInformation();
//  2)
//  Noun:Keyboard
//  action 1 Types Characters
keyboard.typeCharacters();
//  action 2: Control the computer
keyboard.controlComputer();
//  action 3:costs Money
keyboard.costMoney();
//  3)
//  Noun:lightBulb    
//  action 1:Spreads Light
lightBulb.spreadLight();
//  action 2:Genates Heat
lightBulb.generateHeat();
//  action 3:Costs Money
lightBulb.costMoney
//  4)
//  Noun:Car
//  action 1:Goes Places
car.drive();
//  action 2:Burns Fuel
car.burnFuel();
//  action 3:Costs Money
car.costMoney();
//  5)
//  Noun:bottle
//  action 1:Holds Water
bottle.holdWater();
//  action 2:Can act as a paper weight and hold down papers
bottle.actAsPaperWeight();
//  action 3:Costs Money
bottle.costMoney();
//  6)
//  Noun:Pen
//  action 1:Can write
pen.write();
//  action 2:Can draw()
pen.draw();
//  action 3: Costs Money
pen.costMoney();
//  7)
//  Noun: Phone
//  action 1:used to make calls
phone.call();
//  action 2:used to take pictures
phone.takePictures();
//  action 3:Cost Money
phone.costMoney();
//  8)
//  Noun:Mosquito
//  action 1:drinks blood
mosquito.drinkBlood();
//  action 2:spread Dengue
mosquito.spreadDengue();
//  action 3:Grows in swamps
mosquito.growInSwamps();
//  9)
//  Noun:Umbrella
//  action 1:Sheids from rain
umbrella.protectFromRain();
//  action 2:Can be used to poke others();
umbrella.pokeOtherPeople();

//  action 3:Cost Money
umbrella.costMoney();
//  10)
//  Noun:Fan
//  action 1:Used to keep us cool
fan.keepPeopleCool();
//  action 2:Used to dry stuff
fan.speedUpDrying();
//  action 3:Costs Money
fan.costMoney();
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
