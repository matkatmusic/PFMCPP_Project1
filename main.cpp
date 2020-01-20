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

 Send me the the link to your repl.it in a DM on Slack

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
 Noun:       boy
 action 1:   the boy runs
 action 2:   the boy says
 action 3:   the boy dances
 */
boy.run();
boy.say(string textToSay);
boy.dance(DanceStyles styleToDance);

/*
 2)
 Noun:        guitar plectrum
 action 1:    do a downstroke
 action 2:    do an upstroke
 action 3:    dive bomb
 */
plectrum.downStroke(StringIndex 0);
plectrum.upStroke  (StringIndex 1);
plectrum.diveBomb(double fretsPerSecond);

/*
 3)
 Noun:        wavetable oscillator
 action 1:    change wavetables
 action 2:    get frequency
 action 3:    set frequency
 */
wavetableOscillator.setWavetable(AudioSampleBuffer<float>& wavetableToSet);
wavetableOscillator.getFrequency();
wavetableOscillator.setFrequency(440.0f);

/*
 4)
 Noun:       midi file
 action 1:   move contents up one octave
 action 2:   remove all black notes
 action 3:   quantize
 */
midiFile.adjustByOctave(1);
midiFile.removeNotes(ScaleArrays::GbPentatonicMajor);
midiFile.quantizeToCurrentGrid();

/*
 5)
 Noun:       audio file
 action 1:   fade in
 action 2:   normalize
 action 3:   gate below -12db
 */
audioFile.linearFadeIn(timeInMilliseconds 5.0f);
audioFile.normalizeToDecibelValue(-0.5f);
audioFile.removeBelowDecibelValue(-12.0f);

/*
 6)
 Noun:      teacher
 action 1:  correct homework
 action 2:  give grades
 action 3:  inspire success
 */
teacher.correctHomework((const char*)currentHomework&);
teacher.applyGrade(evaluatedGrade, currentHomework&);
teacher.sayLecture(createLecture(currentStudent.getStudentHistory(), Rhetoric::Encouraging::RandomEncouragement()), currentStudent);

/*
 7)
 Noun:      student
 action 1:  do homework
 action 2:  get grades
 action 3:  make synths
 */
student.doHomework(assignment);
student.makeCorrectDecisions = true;
student.makeVST(new AudioApplications::Synths::AmazingSynth);

/*
 8)
 Noun:       dog
 action 1:   eat food
 action 2:   poop on tree
 action 3:   bark at the neighbor
 */
dog->eat(food&, my_bowl);
dog->poopImmediately();
dog->declare(scaryMan, "I don't know you!");

/*
 9)
 Noun:      computer mouse
 action 1:  I clicked the left mouse button 
 action 2:  I moved the scroll wheel up
 action 3:  get current position
 */
computerMouse.onLeftButtonClick = [this] { mouseLeftButtonClicked(); };
computerMouse.onScrollWheelUp   = [this] { mouseScrollWheelUp();     };
computerMouse.getCurrentMousePosition();

/*
 10)
 Noun:       musical scale
 action 1:   extract diatonic triads
 action 2:   change root note to Ab
 action 3:   change to the third mode of the melodic minor
 */

MusicalScales::SevenNoteScales::ExtractDiatonicTriads(currentMusicalScale);
currentMusicalScale.changeRoot(8); // 0-11 indices of 12 notes
currentMusicalScale.setScaleAndMode(MelodicMinorModes, 3);

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
