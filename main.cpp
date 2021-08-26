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
//  Noun:       hand
//  action 1:   the hand grabs
hand.grab();
//  action 2:   the hand opens
hand.open();
//  action 3:   the hand closes
hand.close();

//  2)
//  Noun:       eagle
//  action 1:   the eagle eats
eagle.eat();
//  action 2:   the eagle flies
eagle.fly();
//  action 3:   the eagle lands
eagle.land();

//  3)
//  Noun:       water
//  action 1:   the water flows
water.flow();
//  action 2:   the water evaporates
water.evaporate();
//  action 3:   the water remembers
//  https://en.wikipedia.org/wiki/Water_memory
water.remember();

//  4)
//  Noun:       sun
//  action 1:   the sun shines
sun.shine();
//  action 2:   the sun rises
sun.rise();
//  action 3:   the sun sets
sun.set();

//  5)
//  Noun:       yogi
//  action 1:   the yogi meditates
yogi.meditate();
//  action 2:   the yogi breathes
yogi.breathe();
//  action 3:   the yogi loves
yogi.love();

//  6)
//  Noun:       string
//  action 1:   the string vibrates
string.vibrate();
//  action 2:   the string tightens
string.tighten();
//  action 3:   the string loosens
string.loosen();
 
//  7)
//  Noun:       dog
//  action 1:   the dog barks  
dog.bark();
//  action 2:   the dog sleeps 
dog.sleep();
//  action 3:   the dog runs
dog.run();

//  8)
//  Noun:       cat
//  action 1:   the cat scratches
cat.scratch();
//  action 2:   the cat miaws
cat.miaw();
//  action 3:   the cat purrs
cat.purr();

//  9)
//  Noun:       body
//  action 1:   the body feels
body.feel();
//  action 2:   the body moves   
body.move();
//  action 3:   the body works
body.work();

//  10)
//  Noun:       soul
//  action 1:   the soul travels
soul.travel();
//  action 2:   the soul remembers
soul.remember();
//  action 3:   the soul beats
soul.beat();
 


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
