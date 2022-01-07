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
//  Noun:       apple
//  action 1:   the apple drops from the tree
apple.drop()
//  action 2:   the apple rots
apple.rot()
//  action 3:   the apple sprouts
apple.sprout()
//  2)
//  Noun:       dog
//  action 1:   the dog sleeps
dog.sleep()
//  action 2:   the dog protec
dog.protec()
//  action 3:   the dog attack
dog.attack()
//  3)
//  Noun:       calculator
//  action 1:   the calculator adds
calc.add()
//  action 2:   the calculator divides
calc.divide()
//  action 3:   the calculator clears
calc.clear()
//  4)
//  Noun:       trogdor
//  action 1:   trogdor burninates
trogdor.burn()
//  action 2:   trogdor flies
trogdor.fly()
//  action 3:   trogdor memes
trogdor.meme()
//  5)
//  Noun:       Toby
//  action 1:   Toby reads info
toby.read()
//  action 2:   Toby writes info
toby.write()
//  action 3:   Toby stores info
toby.save()
//  6)
//  Noun:       Chrome
//  action 1:   Chrome opens a new tab
chrome.newTab()
//  action 2:   Chrome bookmarks a tab
chrome.newBookmark()
//  action 3:   Chrome refreshes a tab
chrome.refresh()
//  7)
//  Noun:       UFO
//  action 1:   the UFO hides
ufo.cloak()
//  action 2:   the UFO moves
ufo.warp()
//  action 3:   the UFO observes
ufo.scan()
//  8)
//  Noun:       telescope
//  action 1:   the telescope zooms
telescope.zoom()
//  action 2:   the telescope changes azimuth
telescope.azimuth()
//  action 3:   the telescope changes declination
telescope.declination()
//  9)
//  Noun:       JWST
//  action 1:   JWST connects to NASA
jwst.connect()
//  action 2:   JWST transmits data
jwst.transmit()
//  action 3:   JWST disconnects
jwst.disconnect()
//  10)
//  Noun:       clock
//  action 1:   the clock stores the time
clock.setTime()
//  action 2:   the clock stores the alarm time
clock.setAlarm()
//  action 3:   the clock alarms
clock.alarm()


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
