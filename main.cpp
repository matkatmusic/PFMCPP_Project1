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

// try new commit 2
//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: student
//  action 1: the student study
student.study();
//  action 2: the student rest
student.rest();
//  action 3: the student sleep
student.sleep();

//  2)
//  Noun: employee
//  action 1: the employee works
employee.work();
//  action 2: the employee eats
employee.eat();
//  action 3: the employee goes back home
employee.goesBackHome();

//  3)
//  Noun: computer
//  action 1: the computer calculates
computer.calculate();
//  action 2: the computer memorizes
computer.memorize();
//  action 3: the computer consumes energy
computer.consumeEnergy();

//  4) 
//  Noun: car
//  action 1: the car run
car.run();
//  action 2: the car consumes fuel 
car.consumeFuel();
//  action 3: the car consume ElectricEnergy
car.consumeElectricEnergy();

//  5)
//  Noun: bird
//  action 1: the bird fly
bird.fly();
//  action 2: the bird eat
bird.eat();
//  action 3: the bird protect It Self
bird.protectItSelf();

//  6)
//  Noun: scientist
//  action 1: the scientist reads
scientist.read();
//  action 2: the scientist thinks
scientist.think();
//  action 3: the scientist investigates
scientist.investigate();

//  7)
//  Noun: cloud
//  action 1: the cloud moves
cloud.move();
//  action 2: the cloud throws water
cloud.throwWater();
//  action 3: the cloud fills whit water
cloud.fillWater();

//  8)
//  Noun: dog
//  action 1: the dog fight
dog.fight();
//  action 2: the dog sleep
dog.sleep();
//  action 3: the dog run
dog.run();

//  9)
//  Noun: house
//  action 1: the house control the temperatue
house.controlTemperature();
//  action 2: the control humidity
house.controlHumidity();
//  action 3: the house alert fire
house.alertFire();

//  10)
//  Noun: cooker
//  action 1: the cooker work
cooker.work();
//  action 2: the cooker eat
cooker.eat();
//  action 3: the cooker rest
cooker.rest();

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
