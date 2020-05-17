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
//  Noun:       dog
//  action 1:   bark
dog.bark();
//  action 2:   sleep
dog.sleep();
//  action 3:   eat
dog.eat();
//  2)
//  Noun:       dad
//  action 1:   clean house
dad.cleanHouse();
//  action 2:   mow the lawn
dad.mowLawn();
//  action 3:   cook
dad.cook(); 
//  3)
//  Noun:       kid
//  action 1:   cry
kid.cry();
//  action 2:   play
kid.play();
//  action 3:   study
kid.study();
//  4)
//  Noun:       girl   
//  action 1:   speak
girl.speak();
//  action 2:   run
girl.run();
//  action 3:   read a book
girl.readBook();
//  5)
//  Noun:       mouth
//  action 1:   open
mouth.open();
//  action 2:   close
mouth.close();
//  action 3:   make a sound
mouth.makeSound();
 
//  6)
//  Noun:       teacher
//  action 1:   teach
teacher.teach();
//  action 2:   study
teacher.study();
//  action 3:   yell
teacher.yell();
//  7)
//  Noun:       student
//  action 1:   learn
student.learn();
//  action 2:   make a noise
student.makeNoise();
//  action 3:   argue
student.argue(); 
//  8)
//  Noun:       chicken
//  action 1:   enter cage
chicken.enterCage();
//  action 2:   escape cage
chicken.escapeCage();
//  action 3:   run
chicken.run();
//  9)
//  Noun:       person
//  action 1:   wear
person.wear();
//  action 2:   walk
person.walk();
//  action 3:   work
person.work();
//  10)
//  Noun:       airplane   
//  action 1:   take off
airplane.takeOff();
//  action 2:   fly
airplane.fly();
//  action 3:   land
airplane.land(); 


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
