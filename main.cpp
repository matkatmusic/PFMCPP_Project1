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
//  Noun: dog
//  action 1: bark
dog.bark();

//  action 2: calculate the dog's age
dog.calcAge();

//  action 3: get the dog's age
dog.getAge();
 
//  2)
//  Noun: weapon
//  action 1: fire at target (single release of a weapon)
weapon.shootAtTarget();

//  action 2: Ammunation recharge
weapon.recharge();

//  action 3: Ammunation that fails to function as intended
weapon.fail();
 
//  3)
//  Noun: bicyle
//  action 1: break
bicycle.break();

//  action 2: set a speed
bicycle.setSpeed(int speed);

//  action 3: get the speed
bicycle.getSpeed();
 
//  4)
//  Noun: person
//  action 1: introduce himself
person.introduce();

//  action 2: tell it's first name
person.tellFirstName();

//  action 3: tell it's last name
person.tellLastName();
 
//  5)
//  Noun: baby
//  action 1: cry
baby.cry();

//  action 2: eat
baby.eat();

//  action 3: sleep
baby.sleep();
 
//  6)
//  Noun: mouse
//  action 1: move y-direction
mouse.moveYDirection(int target);

//  action 2: move x-direction
mouse.moveXDirection(int target);

//  action 3: get coordinate
mouse.getCoordinate();
 
//  7)
//  Noun: helicopter
//  action 1: takeoff
helicopter.takeoff();

//  action 2: speed up
tire.speedUp();

//  action 3: helicopter land
tire.landOnGround();
 
//  8)
//  Noun: bank account
//  action 1: deposit money
bankAccount.deposit(float amount);

//  action 2: withdraw some cash
bankAccount.withdram(float amount);

//  action 3: transfer some cash
bankAccount.transfer(float amount, BankAcount target);
 
//  9)
//  Noun: power supply
//  action 1: maintain a certain voltage
powerSupply.maintainVoltage(float targetVoltage);

//  action 2: maintain a certain current
powerSypply.maintainCurrent(float targetCurrent);

//  action 3: display power consumpiton
powerSupply.displayPower();
 
//  10)
//  Noun: plane
//  action 1: pitch
plane.pitch()
//  action 2: yaw
plane.yaw();

//  action 3: roll
plane.roll();
 


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
