
# Welcome to PFM::C++ Language Fundamentals

# Read this ENTIRE document BEFORE you start executing any of the steps below

**IMPORTANT**

**Please set your Github username, your Slack Display Name, and your Replit username to the SAME name.**

It is imperative that your Github username and Slack Display Name match for the PFMCPP Helper App to function correctly.
#
# Course Setup Summary
Detailed instructions appear later.

1) **Fork** all 9 projects into your Github account
2) Install the `PFMCPP Helper app` into your Github account
3) Make 9 Replit's, one for each github repository
4) Send me a DM in Slack with your github links and Replit links
5) Get started on the project parts.

#
# Project Workflow Summary
- Open the appropriate `Replit` link for the project part you've been assigned
- make sure you're on the `master` or `main` branch and `pull` in the latest changes.  
    - There will be a button in Replit on the left that does this.  It is called the "Version Control Widget".  Hover your cursor over the buttons to see tooltips that display the button name.
    - If you're on Part 1 of a project, you won't need to `pull`.  The instructions are already there.

Here is a brief summary of the Project workflow:

1) Create a branch, do the work 
2) Commit the work
3) Make a pull request on GitHub, add me as a Reviewer.
4) Send me links, wait for me to review your work.
5) Share your merged work so other students can see it.
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

## 2) Install the PFMCPP Helper app to all of your PFMCPP repositories
- visit https://github.com/apps/pfmcpp-helper 
#

## 3) Import all 9 projects into your `Replit` account.
`Replit` is where you will **EDIT** the code for these projects.
- Visit [https://replit.com/login](https://replit.com/login)
- Click the `sign up` link
- choose `Github` as the means of signing in. 
    - It will be the middle button on that page, in between Google's `G` and Facebook's `f`.
    - Replit will default to using your Github username, but if you're offered the choice to pick a username instead, please pick the same name that you use in Github & Slack
- Once you're logged in to `Replit`, click `Import Repo` on the upper right.  
    - If it prompts you to sign up for the Hacker plan, just click `Cancel` or click outside of the prompt.
- `Replit` may ask you to grant it permission to access your Github account.       
    - If so, grant it access.
- You should see all 9 repositories you just forked listed under `your repositories`. 
    - Click on one of your repositories.
    - `Replit` will clone your repo into a Replit project
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
- Once `Replit` finishes cloning your repo, click the `Invite` button.
    - invite `matkatmusic` as a *collaborator* via the `Search by username` field at the bottom of the popup.

Repeat this process of importing a repository for all 9 repositories that you forked on `GitHub`

Once you have finished adding me to **ALL NINE `replit` projects**, proceed to the next step below
#
## 4a) Invite me to your GitHub repositories via a Slack DM:
- Copy the Webpage URL of your GitHub repo and add `/invitations` at the end of the URL.
- it should look like this: 
    - `https://github.com/YourUserName/pfmcpp_project1/invitations`
- if your link has `.git` in it, **THAT IS THE WRONG LINK**.  I want the **WEBPAGE** link.
- Send me a **single DM** with all 9 Invitation links.
- Pin this message in our Direct Message thread. 
## 4b) Share all 9 Replit project links with me via a Slack DM
- put `#main.cpp` at the end of your project URLs
- the Replit project links look like this:
   - `https://replit.com/@YourUserName/pfmcpp_project1#main.cpp`
- Send me a **single DM** with all 9 `replit` links
- Pin this message in our Direct Message thread.
#
## 5) Get started on the Project parts

- All of the projects that you cloned already include the instructions for Part 1 of that particular project.
- I am now waiting for you to submit your first pull request for your currently assigned project part, which is most likely Project 1 Part 1.
- Follow the **Detailed Course Workflow Instructions** written below.

#
# Detailed Project Workflow Instructions
## 1) Make a branch in Replit and start editing
- The **expected branch name** is written at the top of main.cpp
- Navigate to the Version Control view on the left
- Click the `[+]` button to create the branch
- Enter the **expected name** to create the branch

Before you start editing, configure Replit's indentation settings:
- click the `gear` icon on the left hand edge of the page.
- Set the `Indent Size` to `4`
- Set the `Indent type` to `spaces`

Review the course Coding Standard before starting to code.

- This course **loosely** follows the JUCE Coding Standards: [https://juce.com/discover/stories/coding-standards](https://juce.com/discover/stories/coding-standards)

General guidelines:
- Type names begin with a Capital Letter.
- all other names begin with a lowercase letter.
- camelCase is used when naming things that require 2 or more words
- Name things what they are or what they do.
- no spaces around '(' and ')' when used with function calls, declarations, and definitions
- spaces around `=`
- spaces after `,`
- curly `{ }` braces go on their own line with no other code.

The easiest way to show the course coding style is with a short snippet:
```
bool rentACar(int rentalDuration, int carType = 0)  //spaces after ',' and around '='  
{       									//curly brace on its own line                                                  
    ignoreUnused(rentalDuration, carType);  //indentation is 4 SPACES.
    return true;                            //booleans are always expressed with true/false and never with integers
}
				    //a blank line between functions or types.
struct RelatedType  //Type Names begin with a Capital Letter and use CamelCase
{
    double val, optimalVal;  //member names use camelCase, and begin with a lowercase letter.
                            //a blank line between member variables and member functions
    void setTypeToRelateTo(const OtherType& typeToRelateTo);  //member functions use camelCase, and begin with a lowercase letter.
};
				    //a blank line between functions or types.
void RelatedType::setTypeToRelateTo(const OtherType& typeToRelateTo) //a class member function defined outside of the class definition
{
    val = (std::is_same<OtherType, double>::value ? 3 : 4);  //spaces around '='. Also demonstrating a ternary expression, which is wrapped in '()'
    optimalVal = typeToRelateTo.currentVal * 2.5;
}
```
Now you are ready to start working on the code.

Do not delete the project instructions.

#
## 2) Commit your changes on your branch in Replit
- `commit` your changes via `Replit's` Version Control widget on the left side of the page.
- it's perfectly fine to make several commits on your branch before the project part is completed. 
- if you get stuck, `commit` your changes and **send me a DM** explaining the issue.
- if `Replit` won't commit the changes, **send me a DM**.  
    - Most likely, `git` got stuck and the `index.lock` file needs to be manually removed.
    - This can be verified by using the `Console` on the right to try to make a change to the repository.  Google how to **make** and **push** a commit via Terminal and give it a try.
    - `git` will say what the problem is via the `Console` output
- If **Replit** prompts you that it is **Unable to connect to this GitHub repository**:
    - click the 'Connect' button.  
    - Make a small change (like adding a space or blank line somewhere) and try commiting again.  
    - You can click on the commit message itself to be shown the commit in your Github repo.
- If there is no commit URL in Replit for your commit, most likely `git` got stuck.  **Send me a DM** and I will fix it.
    - Worst case scenario: you'll have to delete the replit project, and re-import your repository into replit.  
        - Copy your work into a text file first
        - paste it back in after you finish re-importing.  
        - Don't forget to invite me to the Replit.
#
## 3) Create a Pull Request (PR)
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

All of the commits for this branch will appear under the pull request, regardless of when the pull request is made. 

#
## 4) Wait for me to review your work.
- Send me a Direct Message in Slack with your Pull Request link and Replit project link
- Pin this message in our DM thread.
- Every time you make revisions, send me the PR and Replit links again, so your latest work is easy to get to.

While you're waiting, view the Pull Request Files tab.
This will show you all of the changes in your pull request.  
You'll see exactly what I see, and you might even spot some things that you missed when looking at your project source files, like formatting issues.
Once I receive the PR link: I will review the assignment.
- If it's completed to my satisfaction, **I will merge it**.
- If it's not completed to my satisfaction I will either: 
   - `Request Changes` via the Pull Request Review directly
   - add some `FIXME`s to the code directy which will appear as compiler errors.  
- If I `Request Changes` via the Pull Request Review, you need to:
    - Make the necessary changes to your code and commit them.  
	    - Be sure to compile and run your code to make sure you haven't added more errors or mistakes. 
    - Mark the checkboxes in the Pull Request review as complete ☑︎
    - Click `Resolve Conversation`
    - `Re-request` that I review your code, as explained at the end of Section 3)
    - **Do Not** create a new branch for these requested changes.
    - Send me a message in Slack that you updated the code and include the PR link and your Replit link.
- If I add `FIXME`s to the code in Replit:
    - Read the error messages, fix the code, and commit your changes, which I will then review again.
    - Send me a message in Slack that you updated the code and include the PR link and your Replit link.

**DO NOT create a new branch whenever changes are requested.**

This cycle of requesting changes, making changes, and reviewing changes will continue until the code is ready to be merged.

## **ONE BRANCH - ONE PULL REQUEST**

Pull Request Reviews enable me to make sure you aren't developing bad coding habits, as well as ensure you're learning the concepts taught in each assignment.

#
## 5) Wait for me to merge the Pull Request
Once **I merge** the **PR**, I will do one of 2 things: 
   - Replace the old instructions with new instructions on the `master` branch

   - Mark the project as complete and tell you what the next assignment is.
        - if I tell you that the project is complete, follow the instructions in message that will appear in Slack

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
   - Go to `Replit`, pull in the new instructions, make a new branch for these new instructions, and get to work as explained in steps **5a thru 7**.

#
## If you complete all 9 projects..
Congratulations!  You have completed **PFM::C++ Language Fundamentals**!
   - Send me a DM if you signed up for one of my other mentored courses so you can get started.
#
That just about covers everything there is to know about setting up the course projects and how to work through them.

I know that was a lot of stuff to get through.

Once you get the workflow down, it's really quite simple:
- pull changes from `Github` on the `master` branch into `Replit`
- Make a branch in `Replit`
- Do the work on that branch
- Commit the work on that branch.
- Create a pull request for the work you did on that branch
- Ask me to review it.

These steps will become second nature after you do it 2 or 3 times.  By the time you complete Project 3 Part 1, you shouldn't have to consciously think about this workflow.

# Once again, Welcome to PFM::C++ Language Fundamentals

Good luck with learning this skillset and programming language.

I look forward to seeing you crush these projects and learn this skillset!