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
//  Noun:       cat
//  action 1:   eats
cat.eat();
//  action 2:   sleeps
cat.sleep();
//  action 3:   purrs
cat.purr();
//  2)
//  Noun:       moon
//  action 1:   waxes
moon.wax();
//  action 2:   wanes
moon.wane();
//  action 3:   eclipses the sun
moon.eclipseTheSun();
//  3)
//  Noun:       boat
//  action 1:   heels
boat.heel();
//  action 2:   tacks
boat.tack();
//  action 3:   gybes
boat.gybe();
//  4)
//  Noun:       reader
//  action 1:   opens book
reader.openBook();
//  action 2:   reads book
reader.readBook();
//  action 3:   closes book
reader.closeBook();
//  5)
//  Noun:       president
//  action 1:   vetoes bill
president.vetoBill();
//  action 2:   resigns
president.resign();
//  action 3:   addresses the nation
president.addressTheNation();
//  6)          
//  Noun:       orchestra
//  action 1:   tunes up
orchestra.tuneUp();
//  action 2:   stands for applause
orchestra.standForApplause();
//  action 3:   elects a leader
orchestra.electLeader();
 
//  7)
//  Noun:       virus
//  action 1:   infects a person
virus.infect();
//  action 2:   propagates
virus.propagate();
//  action 3:   dies
virus.die();
//  8)          
//  Noun:       sherlock holmes (albeit a proper noun)
//  action 1:   solves crime
holmes.solveCrime();
//  action 2:   plays violin
holmes.playViolin();
//  action 3:   tales cocaine
holmes.takeCocaine();
//  9)
//  Noun:       mathematician   
//  action 1:   formulates an equation
mathematician.formulateEquation();
//  action 2:   solves an equation
mathematician.solveEquation();
//  action 3:   integrates a term
mathematician.integrateTerm();
 
//  10)
//  Noun:       water
//  action 1:   boils
water.boil();
//  action 2:   freezes
water.freeze();
//  action 3:   drips
water.drip();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
