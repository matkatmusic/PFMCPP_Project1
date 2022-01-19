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
//  Noun:      Dog
//  action 1:  the dog barks
dog.bark();
//  action 2:  the dog sits
dog.sit();
//  action 3:  the dog eats
dog.eat();

//  2)
//  Noun:     foot
//  action 1: the foot stomps
foot.stomp();
//  action 2: the foot kicks
foot.kick();

//  action 3: the foot taps
foot.tap();

//  3)
//  Noun: tape
//  action 1: the tape plays
tape.play();
//  action 2: the tape warbles
tape.warble();
//  action 3: the tape spins
tape.spin();
//  4)
//  Noun:  wheel
//  action 1:  the wheel rotates
wheel.rotate();
//  action 2:  the wheel stops
wheel.stop();
//  action 3:  the wheel punctures
wheel.puncture();
//  5)
//  Noun:  cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat purrs
cat.purr();
//  action 3: the cat jumps
cat.jump();
//  6)
//  Noun:bird
//  action 1: the bird flies
bird.fly();
//  action 2: the bird calls
bird.call();
//  action 3: the bird hunts
bird.hunt();
//  7)
//  Noun: man
//  action 1: the man shouts
man.shout();
//  action 2: the man falls
man.fall();
//  action 3: the man punches
man.punch();
//  8)
//  Noun:  spider
//  action 1: the spider crawls
spider.crawl();
//  action 2: the spider spins its web
spider.spinsWeb();
//  action 3: the spider eats a fly
spider.eatsFly();
//  9)
//  Noun:  plant
//  action 1: the plant blooms
plant.bloom();
//  action 2: the plant dies
plant.die();
//  action 3: the plant wilts
plant.wilt();
//  10)
//  Noun: bottle
//  action 1: the bottle spills
bottle.spill();
//  action 2: the bottle smashes
bottle.smashes();
//  action 3: the bottle falls
bottle.fall();

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
