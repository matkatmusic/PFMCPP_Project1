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
//  Noun:chicken
//  action 1:
chicken.clucks();
//  action 2:
chicken.sleeps();
//  action 3:
chicken.eats();
//  2)
//  Noun:skateboarder
//  action 1:
skateboarder.ollies();
//  action 2:
skateboarder.kickFlips();
//  action 3:
skateboarder.falls();
//  3)
//  Noun:doctor
//  action 1:
doctor.performsSurgey();
//  action 2:
doctor.performsCheckUp();
//  action 3:
doctor.eatsLunch();
//  4)
//  Noun:lawyer
//  action 1:
lawyer.filesLawSuit();
//  action 2:
lawyer.courtObjection();
//  action 3:
lawyer.studiesCase();
//  5)
//  Noun: fighter
//  action 1:
fighter.punch();
//  action 2:
fighter.kick();
//  action 3:
fighter.performKO();
//  6)
//  Noun: cat
//  action 1:
cat.meow();
//  action 2:
cat.growl();
//  action 3:
cat.sleeps();
//  7)
//  Noun: plant
//  action 1:
plant.grows();
//  action 2:
plant.sheds();
//  action 3:
plant.dies();
//  8)
//  Noun: DJ
//  action 1:
DJ.playsTrack();
//  action 2:
DJ.stopsTrack();
//  action 3:
DJ.transitionsTrack();
//  9)
//  Noun: Chef
//  action 1:
Chef.buysIngredients();
//  action 2:
Chef.cooksMeal();
//  action 3:
Chef.cleans
//  10) member
//  Noun:
//  action 1:
member.login();
//  action 2:
member.purchase();
//  action 3:
member.logout();


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
    std::cout << "Hello world!" << std::endl;
    return 0;
}
