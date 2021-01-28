
# PFM::C++ For Musicians Repl.it project template
# DO NOT EDIT this README.md file.
# Welcome to PFM::C++ For Musicians
**IMPORTANT**

**Please set your Github username, your Slack username, and your Repl.it username to the SAME name.**

This helps me keep track of which repo goes with which repl.it, and which repl.it goes with which slack user when you submit tasks.
#
# Course Setup Summary
Here is a brief summary of how to get set up for the course.
Detailed instructions for each step will be given further down.

1) Fork all 9 projects into your Github account
2) Make 9 repl.it's, one for each github repository
3) Send me a DM in Slack with your github links and repl.it links
4) **Wait for me to add the assignments** to each project

Once I add the assignments you can start working through them at your own pace.
#
# Course Workflow Summary
- Open the appropriate `repl.it` link for the project part you've been assigned
- make sure you're on the `master` or `main` branch and `pull` in the latest changes.  
    - There will be a button in Repl.it that does this in the Version Control widget.

Here is a brief summary of the Course workflow:

1) Create a branch, do the work 
2) commit the work, 
3) make a pull request on GitHub, add me as a Reviewer.
4) Wait for me to review your work.
5) share your merged work so other students can see it.
6) Repeat steps 1 - 5 until the project is complete
---
# Detailed Course Setup Instructions
## 1) **FORK** this project template to your Github account
`GitHub` is where you will **STORE** the code for these projects.
- Sign in to your `GitHub` account you created in the `PFM Chapter 1` videos.
- You're going to **FORK** all 9 project repositories into your github account.
- Click the **FORK** button on the top right for each repo.
- Add me as a Collaborator to your repository:
    - Click **Settings** to access the repository settings.  
    - Click on `Manage Access` 
    - Click `Invite a collaborator`
    - Enter `matkatmusic` in the popup window. 
    - Click on my name to add me as a collaborator. 

Do this for all 9 repositories.

Once you have finished adding me as a collaborator to all 9 repositories, proceed to the next step below
#
## 2) Import all 9 projects into your `Repl.it` account.
`Repl.it` is where you will **EDIT** the code for these projects.
- Visit [https://repl.it/login](https://repl.it/login)
- Click the `sign up` link
- choose `Github` as the means of signing in. 
    - It will be the middle button on that page, in between Google's `G` and Facebook's `f`.
    - Repl.it will default to using your Github username, but if you're offered the choice to pick a username instead, please pick the same name that you use in Github & Slack
- Once you're logged in to `Repl.it`, click `Import Repo` on the upper right.  
    - If it prompts you to sign up for the Hacker plan, just click `Cancel` or click outside of the prompt.
- `Repl.it` may ask you to grant it permission to access your Github account.       
    - If so, grant it access.
- You should see all 9 repositories you just forked listed under `your repositories`. 
    - Click on one of your repositories.
    - `Repl.it` will clone your repo into a repl.it project
    - You should see some text like this on the right-hand pane when you clone:
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
- Once `Repl.it` finishes cloning your repo, click the `Invite` button.
    - invite `matkatmusic` as a *collaborator* via the `Search by username` field at the bottom of the popup.

Repeat this process of importing a repository for all 9 repositories that you forked on `GitHub`

Once you have finished adding me to all 9 `repl.it` projects, proceed to the next step below
#
## 3a) Invite me to your GitHub repositories via a Slack DM:
- Copy the Webpage URL of your GitHub repo and add `/invitations` at the end of the URL.
- it should look like this: 
    - `https://github.com/YourUserName/pfmcpp_project1/invitations`
- if your link has `.git` in it, **THAT IS THE WRONG LINK**.  I want the **WEBPAGE** link.
- Send me a **single DM** with all 9 Invitation links.
- Pin this message in our Direct Message thread. 
## 3b) Share all 9 Repl.it project links with me via a Slack DM
- the Repl.it project links look like this:
   - `https://repl.it/@YourUserName/pfmcpp_project1`
- Send me a **single DM** with all 9 `repl.it` links
- Pin this message in our Direct Message thread.
#
## 4) Wait for me to accept your invites and add the assignments

- Once I accept your invite to collaborate on **GitHub** and **Repl.it**, I will edit `main.cpp` on the `master` or `main` branch and add the assignment.
- I will notify you when I have added the assignments.
- Once all of the assignments have been added to your repositories:
    - Refresh the **Repl.it** page 
    - switch to the **Version control** view on the left-hand edge of the page
    - switch to the `master` or `main` branch if another branch is displayed
    - click the `pull` button to update the repl.it copy of your repository so it matches what is on GitHub.
    - if you can't see the `pull` button: 
        - you can expand the column showing the version control widget horizontally if it is too narrow.
        - you might have already pulled in the latest changes.
#
# Detailed Course Workflow Instructions
## 1) Make a branch in Repl.it and start editing
- The **expected branch name** is written at the top of main.cpp
- Navigate to the Version Control view
- Click the `[+]` button to create the branch
- Enter the **expected name** to create the branch

Before you start editing, configure Repl.it's indentation settings:
- click the `gear` icon on the left hand edge of the page.
- Set the `Indent Size` to `4`
- Set the `Indent type` to `spaces`

Now you are ready to start working on the code.

Complete the assignment and follow the Coding Standard for the course.  

Do not delete the instructions.
- This course **loosely** follows the JUCE Coding Standards: [https://juce.com/discover/stories/coding-standards](https://juce.com/discover/stories/coding-standards)
- The easiest way to show the course coding style is with a short snippet:
```
/*
- no spaces around '(' and ')'
- spaces around '='
- camelCase is used when naming things
- all names are relevant to their purpose
- curly braces { } go on their own line.
*/
bool rentACar(int rentalDuration, int carType = 0)    
{       									//curly brace on its own line                                                  
    ignoreUnused(rentalDuration, carType);  //indentation is 4 SPACES.
    return true;
}
				    //a blank line between functions or types.
struct RelatedType  //Type Names begin with a Capital Letter and use CamelCase
{
   double val, optimalVal;  //member names use camelCase, and begin with a lowercase letter.
                            //a blank line between member variables and member functions
   void setTypeToRelateTo(const OtherType& typeToRelateTo);  //member functions use camelCase, and begin with a lowercase letter.
};
```

#
## 2) Commit your changes on your branch in Repl.it
- `commit` your changes via `repl.it's` Version Control widget on the left side of the page.
- it's perfectly fine to make several commits on your branch before the project part is completed. 
- if you get stuck, `commit` your changes and **send me a DM**.
- if `repl.it` won't commit the changes, **send me a DM**.  
    - Most likely, `git` got stuck and the `index.lock` file needs to be manually removed.
    - This can be verified by using the `Console` on the right to try to make a change to the repository.
    - `git` will say what the problem is via the `Console` output
- If **Repl.it** prompts you that it is **Unable to connect to this GitHub repository**:
    - click the 'Connect' button.  
    - Make a small change (like adding a space or blank line somewhere) and try commiting again.  
    - You can click on the commit message itself to be shown the commit in your Github repo.
- If there is no commit URL in repl.it for your commit, most likely `git` got stuck.  **Send me a DM** and I will fix it.
#
## 3) Create a Pull Request (PR)
All of the commits for this branch will appear under the pull request, regardless of when the pull request is made. 
- Navigate to your Github repository for the project part you're working on
- Click on `Pull Requests`
- Click on `New pull request`
- Github is going to show a `Comparing Changes` page with several combo boxes.  
- These combo boxes let you choose which repository branch you want to **PULL FROM** (yours) and which repository you want to **MERGE INTO** (also yours)
    - Because you **FORKED** my template repository, it's going to set the `base repository` combo box to **MY** project template.
    - Change this `base repository` combo box to show **YOUR** repo. 
        - This is the repository to **MERGE INTO**
    - Change the `base` combo box to show `master` or `main`.
        - This is the branch you want to **merge into**.
    - Change the `head repository` combo box to show **YOUR** repo. 
        - This is the repository to **PULL FROM**.
    - Change the right-side `compare` combo box to show the branch you just completed working on.
        - This is the branch you want to **merge changes from**.

**If you see "MatkatMusic" at all in the page URL or in the combo boxes, you have chosen the WRONG BASE REPOSITORY and you are trying to MERGE INTO the project template repository!   DO NOT DO THIS!!** You need to **CHANGE** the base repository to **YOUR** repository.
- Once you set the combo boxes correctly, click `Create pull request`
- Add me as a reviewer and assign the PR to me. 
   - under Reviewers, request `matkatmusic`.  By doing this, you are requesting that I review your code.

- **DO NOT click 'Merge pull request'**.  
#
## 4) Wait for me to review your work.
Send me a Direct Message in Slack with your Pull Request link
Once I receive the PR link: I will review the assignment.
- If it's completed to my satisfaction, **I will merge it**.
- If it's not completed to my satisfaction I will either: 
   - `Request Changes` via the Pull Request Review directly
   - add some `FIXME`s to the code directy which will appear as compiler errors.  
- If I request changes via the Pull Request Review, you need to:
    - Make the necessary changes to your code.  
	    - Be sure to compile and run your code to make sure you haven't added more errors or mistakes. 
    - Mark the checkboxes in the Pull Request review as complete 
    - Click `Resolve Conversation`
    - Re-request that I review your code, as explained at the end of Section 3)
    - **Do Not** create a new branch for these requested changes.
- If I add `FIXME`s to the code in Repl.it:
    - Read the error messages, fix the code, and commit your changes, which I will then review again.

**DO NOT create a new branch whenever changes are requested.**

This cycle of requesting changes, making changes, and reviewing changes will continue until the code is ready to be merged.

Pull Request Reviews enable me to make sure you aren't developing bad coding habits, as well as ensure you're learning the concepts taught in each assignment.

#
## 5) Wait for me to merge the Pull Request
- Once **I merge** the **PR**, I will do one of 2 things: 
   - Replace the old instructions with new instructions on the `master` branch
   - Mark the project as complete and tell you what the next assignment is.
- if I tell you that the project is complete **remove me as collaborator from the github repo and repl.it**
   - Remove the project links from your Pinned Messages in our DM thread.
#
## 6) Share your merged work with the Slack Workspace
- if I replace the instructions, please share your completed work for the project to the appropriate channel. 
   - visit your Repo on github
   - click on `Commits`
   - in the list of commits, look for the **merge commit** for the branch you just finished working on.
   - Look for the `[<>]` on the right.  If you hover over it with your cursor, it will say `Browse the repository at this point in the history`
   - Click on it.  The url will change to something like `pfmcpp_project1/tree/654abd564d65b4c5645e654f654`.  
   - Share this URL in the channel for the task, as your completed task for other students to look at. 
   - > "Here's my completed task: https://github.com/.../tree/123456789abcdef"
   - Go to `repl.it`, pull in the new instructions, make a new branch for these new instructions, and get to work as explained in steps **5a thru 7**.

#
## If you complete all 9 projects..
you are ready to start **Project 10**!
   - Send me a DM!
#
That just about covers everything there is to know about setting up the course projects and how to work through them.

I know that was a lot of stuff to get through.

Once you get the workflow down, it's really quite simple:
- pull changes from `Github` on the `master` branch into `Repl.it`
- Make a branch in `Repl.it`
- Do the work on that branch
- Commit the work on that branch.
- Create a pull request for the work you did on that branch
- Ask me to review it.

These steps will become second nature after you do it 2 or 3 times.

# Once again, Welcome to PFM::C++ For Musicians!

Good luck with learning this skillset and programming language.

I look forward to seeing you crush these projects and learn this skillset!