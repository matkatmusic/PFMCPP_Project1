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
//  Noun: guitar
//  action 1: guitar plays note
guitar.playsNote();
//  action 2: guitar plays note
guitar.playsChord();
//  action 3: guitar stop note
guitar.stopNote();
//  2)
//  Noun: plane
//  action 1: plane takes off
plane.takesOff();
//  action 2: plane flies
plane.flies();
//  action 3: plane lands
plane.lands();
//  3)
//  Noun: Clock
//  action 1:
clock.displayTime()
//  action 2:
clock.tick()
//  action 3:
clock.setAlarm();
//  4)
//  Noun: computer
//  action 1:
computer.powerOn();
//  action 2:
computer.runProgram();
//  action 3:
computer.restart();
//  5)
//  Noun: tree
//  action 1:
tree.hasGrow();
//  action 2:
tree.photosynthesize();
//  action 3:
tree.shedLeaves()
//  6)
//  Noun: Bird
//  action 1:
bird.fly();
//  action 2:
bird.sing();
//  action 3:
bird.buildNest();
//  7)
//  Noun: Car
//  action 1:
car.startEngine();
//  action 2:
car.honk();
//  action 3:
car.fullLevel();
//  8)
//  Noun: Dog
//  action 1:
dog.bark();
//  action 2:
dog.sleep();
//  action 3:
dog.grow();
//  9)
//  Noun: Person
//  action 1:
person.speak();
//  action 2:
person.walk();
//  action 3:
person.eat();
//  10)
//  Noun: Book
//  action 1:
book.searchBook();
//  action 2:
book.getTitle()
//  action 3:
book.removeBook();
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
