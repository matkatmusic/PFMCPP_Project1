#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: bow
 action 1: string the bow
 action 2: insert an arrow in the bow
 action 3: fire an arrow
 */

 bow.string();
 bow.insertArrow();
 bow.fireArrow();


/*
 2)
 Noun: shower
 action 1: turn on the shower
 action 2: change the shower temperature 
 action 3: shampoo you hair underneath the shower
 */

 shower.on();
 shower.changeTemperature();
 shower.shampooHair();

/*
 3)
 Noun: potato
 action 1: boil the potato
 action 2: slice the potato
 action 3: eat the potato
 */

potato.boil();
potato.slice();
potato.eat();

/*
 4)
 Noun: console
 action 1: insert a videogame into the console
 action 2: start the videogame on the console
 action 3: finish the game on the console
 */

 console.insertVideogame();
 console.startVideogame();
 console.finishVideogame();

/*
 5)
 Noun: singer
 action 1: the singer takes some water
 action 2: the singer warms up the voice
 action 3: the singer start singing
 */

 singer.drinkWater();
 singer.warmingupVoice();
 singer.startSinging();

/*
 6)
 Noun: elevator
 action 1: call the elevator
 action 2: select a destination in the elevator
 action 3: push the emergency button in the elevator
 */

 elevator.call();
 elevator.selectDestination();
 elevator.pushEmergencyButton();

/*
 7)
 Noun: agenda
 action 1: schedule a date in the agenda
 action 2: find the next appointment in the agenda
 action 3: search for my birthday in the agenda
 */

 agenda.scheduleDate();
 agenda.findNextAppointment();
 agenda.searchMyBirthday();

/*
 8)
 Noun: television
 action 1: turn on television
 action 2: switch television channel
 action 3: increase the volume
 */

 television.on();
 television.switchChannel();
 television.increaseVolume();

/*
 9)
 Noun: baby
 action 1: change the diaper of the baby
 action 2: cuddle the baby
 action 3: feed the baby 
 */

baby.changeDiaper();
baby.cuddle();
baby.feed();

/*
 10)
 Noun: laundry
 action 1: sort the laundry
 action 2: put the laundry in the washing machine
 action 3: hang the clean laundry
 */

 laundry.sort();
 laundry.insertIntoWashingMachine();
 laundry.hang();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
