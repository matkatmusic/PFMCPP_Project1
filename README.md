# PFM::C++ For Musicians Repl.it project template
# DO NOT EDIT the .replit file or this README.md file.
# Welcome to PFM::C++ For Musicians

# IMPORTANT
**Please set your Github username, your Slack username, and your Repl.it username to the SAME name.**

This helps me keep track of which repo goes with which repl.it, and which repl.it goes with which slack user when you submit tasks.

## FORK this project template to your Github account
Sign in to your Github account you created in the PFM Chapter 1 videos.


You're going to **FORK this repository** into your github account.

Click the **Fork** button on the top right.

1) Once the repository has been forked, you're going to add a Collaborator: `matkatmusic`  
2) Click **Settings** to access the repository settings.  Click on Collaborators.  Enter `matkatmusic`. 
3) Click on my name to add me as a collaborator. 
# Send me a DM in Slack...
...letting me know you added me to the repo, and **share the Invite link to your repository** by doing the following:
- Copy the URL of your repo and add `/invitations` at the end of the URL.
- it should look like this: `https://github.com/YourUserName/pfmcpp_project1/invitations`
- Paste it in the DM
I have no way of knowing if I updated your project recently, or if you updated it recently, so I need you to share the link in the DM

Github will send me an invite link but I might miss it, so DM me. 
You can proceed to the next section without waiting for me to accept the invite.
# Import this project into your `Repl.it` account.

1) Visit [https://repl.it/login](https://repl.it/login)
2) Sign up and use **Github** as the means of signing in. It will be the middle button on that page, in between Google's `G` and Facebook's `f`.
When you pick a user name, please pick the same name that you use in Github/Slack

3) Once you're logged in to **Repl.it**, click `Import Repo` on the upper right.  If it prompts you to sign up for the Hacker plan, just click **Cancel** or click outside of the prompt.

4) **Repl.it** may ask you to grant it permission to access your Github account.  If so, grant it access.

5) You should see the repo you just cloned listed under **your repositories**. Choose that repo.
Repl.it will clone your repo.  You should see some text like this on the right-hand pane:
```
cloning into https://github.com/youraccount/pfmcpp_project1...
remote: Enumerating objects: 6, done.
remote: Counting objects: 100% (6/6), done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 6 (delta 0), reused 6 (delta 0), pack-reused 0
From https://github.com/youraccount/pfmcpp_project1
 * [new branch]      master     -> origin/master
origin/HEAD set to master
HEAD is now at 1badb5c Initial Commit
```
6) Once **Repl.it** finishes cloning your repo, click the `Invite` button.

7) invite `matkatmusic` as a collaborator via the `Search by username` field at the bottom of the popup.

# Send me a DM in Slack...
...letting me know you added me to the Repl.it, and **share the Invite link to your Repl.it** by doing the following:
- Copy the URL of your repl.it.
- it should look like this: `https://repl.it/@YourUserName/pfmcpp_project1`
- Paste it in the DM
I have no way of knowing if I updated your project recently, or if you updated it recently, so I need you to share the link in the DM

8) Click on the file browser on the left, and select `main.cpp`.

# I will join your repo & repl.it and add the assignment

1) Once I accept your invite to collaborate on **GitHub** and **Repl.it**, I will edit `main.cpp` and add the assignment.

2) Once I commit and push the assignment, I'll be waiting on you to do the work.

3) Refresh the **Repl.it** page, switch to the **version control** view on the left, and click "pull" when it prompts you to update.

# Make a branch

1) in `Repl.it`, you can make a branch `[+]` via the Source Control widget on the left.  Make a branch

2) complete the assignment instructions.  Do not delete the instructions.

3) This course loosely follows the JUCE Coding Standards: https://juce.com/discover/stories/coding-standards
The easiest way to show the coding style is with a short snippet:
```
//no spaces around '(', spaces around '=', variable names are relevant 
bool rentACar(int rentalDuration, int carType = 0)    
{   //curly braces go on their own line                                                  
    ignoreUnused(rentalDuration, carType);   //indentation is set to 4 SPACES.  set this in Repl.it settings
    return true;
}
                           //a blank line between functions or types.
struct RelatedType //Types begin with a capital letter and use CamelCase
{
   double val, optimalVal; //member variables use camelCase, and begin with a lowercase letter.
                           //a blank line between member variables and member functions
   void setTypeToRelateTo(const OtherType& typeToRelateTo);  //member functions follow the same style guide as regular functions
};
```
**Set the repl.it indentation to '4' in the repl.it settings on the left.**

4) Once you complete the instructions, or if you get stuck, commit your changes on the branch.
If **Repl.it** prompts you that it is **Unable to connect to this GitHub repository**, click the 'Connect' button.  Make a small change (like adding a space somewhere) and try commiting again.  You can click on the commit message itself to be shown the commit in your Github repo.

5) **Send me a Direct Message in Slack that you committed your completed assignment**, including the link to your Repl.it  

6) I will review the assignment.
    - If it's completed to my satisfaction, I will ask you to go to Github and create a `Pull Request`.	
    - If it's not completed to my satisfaction, I will add some `FIXME`'s to the code which will break compilation.  You'll need to read the error messages, fix the code, and commit your changes, which I will then review.

# Create a Pull Request (PR)
1) Click on `Pull Requests` in your repo.
2) create a Pull request.
3) Github is going to show a page with several combo boxes.  
- These combo boxes let you choose which repository branch you want to PULL FROM (yours) and which repository you want to PULL INTO
- The combo box on the left shows the 'base' repo.  this is the repository to PULL INTO
- the combo box on the right shows the 'head' repo.  This is the repository to PULL FROM
- Since you FORKED my template repository, it's going to set the base repository to MY project template.
- you need to change this 'base' combo box to be YOUR repo. 
- you need to then change the 'head' combo box to be the branch you just finished working on. 
4) Once you set the combo boxes correctly (it should say "master" on the left and "Part X" on the right), you can create the pull request
5) If it says "MatkatMusic" at all in the page URL or in the combo boxes, you are trying to PULL INTO the project template. 
- You need to CHANGE the base repository to YOUR repository.  
6) On the right side, 
    - under Reviewers, request 'matkatmusic'.  By doing this, you are requesting that I review your code.
    - under Assignees, assign 'matkatmusic'.  By doing this, you are assigning me the task of reviewing your code.

4) Click 'Create pull request'.  After the pull request is created, Do not click 'Merge pull request'.  
5) Wait for me to merge it, since you assigned it to me.

# Wait for me to merge the PR
1) Once I **merge** the **PR**, I will either 
    - clear out the instructions and replace them with new instructions on the `master` branch, or
    - Ask you to create a new project from this template, following the same steps as before.

2) if I replace the instructions, You will then make a new branch for these new instructions, and repeat the process.
3) if I ask you to create a new project, I also want you to share your completed task to the appropriate channel.  To do this: 
- a) visit your Repo on github
- b) click on `Commits`
- c) in the list of commits, look for the one I merged
- d) Look for the `[<>]` on the right.  If you hover over it with your cursor, it will say `Browse the repository at this point in the history`
- e) Click on it.  the url will change to something like `pfmcpp_project1/tree/654abd564d65b4c5645e654f654g`.  
- f) Share this URL in the channel for the task, as your completed task for other students to look at. 
- > "Here's my completed task: https://github.com/.../tree/123456789abcdef"
- g) Finally, **remove me as collaborator from the github repo and repl.it**
