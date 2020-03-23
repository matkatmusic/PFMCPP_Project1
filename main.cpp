#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
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
//  Noun: player
//  action 1: the player attacks
player.attack();
//  action 2: the player depends
player.depends();
//  action 3: the player moves
player.moves();

//  2)
//  Noun: dog
//  action 1: the dog eats
dog.eat()
//  action 2: the dog dig
dog.dig();
//  action 3: the dog bark
dog.bark();

//  3)
//  Noun: student
//  action 1: the student studies
student.study();
//  action 2: the student plays
student.play();
//  action 3: the student take a nap
student.takeANap();

//  4)
//  Noun: user
//  action 1: the user complains
user.complain();
//  action 2: the user log in
user.logOut();
//  action 3: the user log out
user.logIn(); 

//  5)
//  Noun: area
//  action 1 : the area is unlocked
area.unlocked();
//  action 2: the area is contaminated
area.contaminated();
//  action 3: the area is used;
area.used();

//  6)
//  Noun: data
//  action 1: the data is saved
data.saved();
//  action 2: the data is deleted
data.deleted();
//  action 3: the data is overwrited
data.overwrited();

//  7)
//  Noun: baby 
//  action 1: the baby cried
baby.cry();
//  action 2: the baby walks
baby.walk();
//  action 3: the baby eats
baby.eat();

//  8)
//  Noun: musician
//  action 1: the musician plays a gutar
musician.playGuiatr();
//  action 2:the musician composes
musician.compose();
//  action 3: the musician writes a note
musician.writeNote();

//  9)
//  Noun: moblie phone
//  action 1: the mobile phone was broken
mobilePhone.brokend();
//  action 2: the mobile phone was runned battery out
mobilePhone.runnedOut();
//  action 3: the moblie phone was launced
mobliePhone.launched();

//  10)
//  Noun: car
//  action 1: car was crashed
car.carshed();
//  action 2: car was slipped
car.slipped();
//  action 3: car was washed....
car.washed();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
