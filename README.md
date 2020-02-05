# PFM::C++ For Musicians Repl.it project template
# DO NOT EDIT the .replit file or this README.md file.
# Welcome to PFM::C++ For Musicians

# IMPORTANT
**Please set your Github username, your Slack username, and your Repl.it username to the SAME name.**

This helps me keep track of which repo goes with which repl.it, and which repl.it goes with which slack user when you submit tasks.

Here is a brief summary of the project workflow:
1) Fork all 9 projects into your github account
2) Make 9 repl.it's, one for each github repository
3) Share the github links and repl.it links in our Slack DM thread
4) Wait for me to add the assignments to each project
5) Do the work on a branch, commit the work, make a pull request for the work
6) Ask me to review your work
7) Wait for me to request changes or merge your work.
8) Repeat steps 5 - 8 until the project is complete, sharing your work for each completed part.

# 1) FORK this project template to your Github account
Sign in to your Github account you created in the PFM Chapter 1 videos.

Github is where you will **STORE** the code for these projects.

You're going to **FORK all 9 project repositories** into your github account.

Click the **Fork** button on the top right for each repo.

1) Once the repository has been forked, you're going to add a Collaborator: `matkatmusic`  
2) Click **Settings** to access the repository settings.  Click on Collaborators.  Enter `matkatmusic`. 
3) Click on my name to add me as a collaborator. 

You can proceed to the next section without waiting for me to accept the invite.
# 2) Import all 9 projects into your `Repl.it` account.

Repl.it is where you will **EDIT** the code for these projects.

1) Visit [https://repl.it/login](https://repl.it/login)
2) Sign up and use **Github** as the means of signing in. 
    - It will be the middle button on that page, in between Google's `G` and Facebook's `f`.
    - Repl.it will default to using your Github username, but if you're offered the choice to pick a username instead, please pick the same name that you use in Github/Slack

3) Once you're logged in to **Repl.it**, click `Import Repo` on the upper right.  
   - If it prompts you to sign up for the Hacker plan, just click **Cancel** or click outside of the prompt.

4) **Repl.it** may ask you to grant it permission to access your Github account.  If so, grant it access.

5) You should see all 9 repositories you just cloned listed under **your repositories**. 
   - Clone each of your 9 repositories, one at a time.
   - Repl.it will clone your repo.  
   - You should see some text like this on the right-hand pane every time you clone:
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

7) invite `matkatmusic` as a *collaborator* via the `Search by username` field at the bottom of the popup.

# 3a) Share the Invite link to each repository in our Direct Message thread:
- Copy the Webpage URL of your repo and add `/invitations` at the end of the URL.
- it should look like this: `https://github.com/YourUserName/pfmcpp_project1/invitations`
- if your link has `.git` in it, **THAT IS THE WRONG LINK**.  I want the **WEBPAGE** link.
- Paste the invite link to all of your 9 projects in a single message
- Pin this message in our Direct Message thread. 

# 3b) Share the link to each Repl.it in our Direct Message thread::
- Copy the URL to each of your repl.it's.
- it should look like this: `https://repl.it/@YourUserName/pfmcpp_project1`
- Paste the repl.it link to all 9 repl.it's in a single message.
- Pin this message in our Direct Message thread.

# 4) I will accept your Github invitation and Repl.it collaboration request and add the assignments

1) Once I accept your invite to collaborate on **GitHub** and **Repl.it**, I will edit `main.cpp` and add the assignment.

2) Once I commit and push the assignment, I'll be waiting on you to do the work.

3) Refresh the **Repl.it** page, switch to the **version control** view on the left, and click "pull" when it prompts you to update.

# 5a) Make a branch in Repl.it

   - in `Repl.it`, you can make a branch `[+]` via the Source Control widget on the left.  
   - Make a branch named whatever the instructions say to name it
   - Set the repl.it indentation to `4` in the repl.it settings (the gear)  on the left.
   - complete the assignment instructions.  Do not delete the instructions.
   - This course loosely follows the JUCE Coding Standards: https://juce.com/discover/stories/coding-standards
   - The easiest way to show the course coding style is with a short snippet:
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


# 5b) Commit your changes on your branch in Repl.it
   - Once you complete the instructions, commit your changes via repl.it's source control widget on the left.
   - if you get stuck, commit your changes and **send me a DM**.
   - if repl.it appears to not be committing the changes, **send me a DM**.  Most likely, `git` got stuck and the `index.lock` file needs manual removal.  This can be verified by trying to make a change to the repository (by committing or changing branches) via the Shell on the right side of the screen.  `git` will say what the problem is. 
   - If **Repl.it** prompts you that it is **Unable to connect to this GitHub repository**, click the 'Connect' button.  Make a small change (like adding a space somewhere) and try commiting again.  You can click on the commit message itself to be shown the commit in your Github repo.
   - If there is no commit URL in repl.it for your commit, most likely `git` got stuck.  **Send me a DM** 

# 5c) Create a Pull Request (PR)
1) Click on `Pull Requests` in your github repository.
2) Create a Pull request.
3) Github is going to show a page with several combo boxes.  
   - These combo boxes let you choose which repository branch you want to PULL FROM (yours) and which repository you want to PULL INTO
   - The combo box on the left shows the 'base' repo.  this is the repository to **PULL INTO**
   - the combo box on the right shows the 'head' repo.  This is the repository to **PULL FROM**
   - Since you **FORKED** my template repository, it's going to set the base repository to **MY** project template.
   - you need to change this 'base' combo box to be YOUR repo. 
   - you need to then change the 'head' combo box to be the branch you just finished working on. 
4) Once you set the combo boxes correctly (it should say "master" on the left and "Part X" on the right), you can create the pull request
    
    **If it says "MatkatMusic" at all in the page URL or in the combo boxes, you are trying to PULL INTO the project template!   DO NOT DO THIS!!** 
   - You need to CHANGE the base repository to YOUR repository.  
5) Add me as a reviewer and assign the PR to me. 
   - under Reviewers, request `matkatmusic`.  By doing this, you are requesting that I review your code.
   - under Assignees, assign `matkatmusic`.  By doing this, you are assigning me the task of reviewing your code.

6) Click 'Create pull request'.  After the pull request is created, Do not click 'Merge pull request'.  

# 6) Send me a Direct Message in Slack with your Pull Request link

1) I will review the assignment.
    - If it's completed to my satisfaction, I will merge it.
2) If it's not completed to my satisfaction I will either: 
   - add some `FIXME`'s to the code which will break compilation.  You'll need to read the error messages, fix the code, and commit your changes, which I will then review again.
   - request changes from github's commit editor directly, which will appear in the Pull Request as conversations needing to be resolved.
3) All of the commits for this branch will appear under the pull request, regardless of when the pull request is made. I can continue to add FIXMEs and you can make corrections, and the history of the branch development will all appear in the pull request.
4) If my review requests changes, you will need to re-request that I review your code, via the instructions in `Step 5c) pt. 5`

# 7) Wait for me to merge the PR
1) Once I **merge** the **PR**, I will either 
   - clear out the instructions and replace them with new instructions on the `master` branch, or 
   - Tell you that the project is complete and you can move on to the next project.

2) if I replace the instructions, I want you to share your completed work for the project to the appropriate channel. 
   - a) visit your Repo on github
   - b) click on `Commits`
   - c) in the list of commits, look for the one I merged
   - d) Look for the `[<>]` on the right.  If you hover over it with your cursor, it will say `Browse the repository at this point in the history`
   - e) Click on it.  the url will change to something like `pfmcpp_project1/tree/654abd564d65b4c5645e654f654g`.  
   - f) Share this URL in the channel for the task, as your completed task for other students to look at. 
   - > "Here's my completed task: https://github.com/.../tree/123456789abcdef"
   - You will then make a new branch for these new instructions, and repeat steps **5a-b-c thru 7**.
3) if I tell you that the project is complete **remove me as collaborator from the github repo and repl.it**
   - Remove the project from your Pinned Messages in our DM thread.

# 8) if you complete all 9 projects, you are ready to start Project 10!
   - Send me a DM!
