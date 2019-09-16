#include <stdio.h>
#include <stdlib.h>

int op;
// Function Prototyping
void create();
void show();
void gitbasics();
void revert();
void branch();
void update();
void publish();
void commands();
void mergeconflicts();
void operation();
void compile();
// Main Program
int main()
{

    operation();

    return 0;
}
// Defining Functions
void compile(){
    printf("gcc program-source-code.c -o executable-file-name\n");
    printf("chmod +x yourScript\n");
    printf("cp yourScript /usr/bin/");
}
void create(){
    printf("Create from existing data\n");
    printf("_________________________________________________\n");
    printf("cd ~/projects/myproject\n");
    printf("git init\n");
    printf("git add .\n");
    printf("Create from existing reopsitory\n");
    printf("_________________________________________________\n");
    printf("git clone ~/existing/repo ~/new/repo\n");
    printf("git clone git://host.org/project.git\n");
    printf("git clone ssh://you@host.org/proj.git");
}
void show(){
    printf("Show files changed in working directory -- git status\n");
    printf("Show changes to traked files -- get diff\n");
    printf("Show what changed between commit id 1 and 2 -- git diff $id1 $id2\n");
    printf("Show history of changes -- git log\n");
    printf("Show history of changes for file with diffs -- git log -p $file $dir/ec/tory/\n");
    printf("Show who changed what and when in a file -- git blame $file\n");
    printf("Show a commit identified by $ID -- git show $ID\n");
    printf("Show a specific file from a specific $ID -- git show $id:$file\n");
    printf("Show all local branches -- git branch\n");
}

void gitbasics(){
    printf("master : default development branch\n");
    printf("origin : default upstream repository\n");
    printf("HEAD : current branch\n");
    printf("HEAD^ : parent of HEAD\n");
    printf("HEAD~4 : great-great grandparent of HEAD\n");
}

void revert(){
    printf("Revert the last commited state -- git reset --hard\n");
    printf("Revert the last commit -- git revert HEAD\n");
    printf("Revert specific commit -- git revert $id\n");
    printf("Fix the last commit -- git commit -a --amend\n");
    printf("Checkout the $id version of a file -- git checkout $id $file\n");
}

void branch(){
    printf("Switch to the $id branch -- git checkout $id\n");
    printf("Merge branch1 into branch2\n");
    printf("___________________________________\n");
    printf("git checkout $branch2\n");
    printf("git merge branch1\n");
    printf("Create branch named $branch based on the HEAD -- git branch $branch\n");
    printf("Creat branch $new_branch based on branch $other and switch to it -- git checkout -b $new_branch $other\n");
    printf("Delete branch $branch -- git branch -d $branch");
}

void update(){
    printf("Fetch latest changes from origin -- git fetch\n");
    printf("Pull latest changes from origin -- git pull\n");
    printf("Apply a patch that some(one) sent you -- git am -3 patch.mbox (in case of confict, resolve and use git am --resolved)");
}

void publish(){
    printf("Commit all your local changes -- git commit -a\n");
    printf("Prepare a patch for other developers -- git format-patch origin\n");
    printf("Push changes to origin -- git push\n");
    printf("Mark a version / milestone -- git tag v1.0");
}

void commands(){
    printf("Finding Regressions\n");
    printf("___________________\n");
    printf("git bisect start (to start)\n");
    printf("git bisect good $id ($id is the last working version)\n");
    printf("git bisect bad $id ($id is a broken version)\n");
    printf("git bisect bad/good (too mark it as bad or good)\n");
    printf("git bisect visualize (to launch gitk and mark it)\n");
    printf("git bisect reset (once you're done)\n");
    printf("Check for errors and clean up repository\n");
    printf("________________________________________\n");
    printf("git fsck\n");
    printf("git gc --prune\n");
    printf("Search working directory for foo()\n");
    printf("git grep foo()");
}

void mergeconflicts(){
    printf("To view the merge conflicts\n");
    printf("___________________________\n");
    printf("git diff (complete conflict diff)\n");
    printf("git diff --base $file (against base file)\n");
    printf("git diff --ours $file (againt your changes)\n");
    printf("git diff --theirs $file (against other changes)\n");
    printf("To discard conflicting patch\n");
    printf("____________________________\n");
    printf("git reset --hard\n");
    printf("git rebase --skip\n");
    printf("After resolving conflicts, merge with");
    printf("_____________________________________\n");
    printf("git add $conflicting_file (do for all reserved files)\n");
    printf("git rebase --continue");
}

void operation(){
    printf("Select Cheat:\n");
    printf("__________________________\n");
    printf("1: Create\n");
    printf("2: Show\n");
    printf("3: Git Basics\n");
    printf("4: Revert\n");
    printf("5: Branch\n");
    printf("6: Update\n");
    printf("7: Publish\n");
    printf("8: Commands\n");
    printf("9: Merge Conflicts\n");
    printf("10: Compiling Programs");
    scanf("%d", &op);


    switch(op)
    {
        case 1:
            create();
            break;
        case 2:
            show();
            break;
        case 3:
            gitbasics();
            break;
        case 4:
            revert();
            break;
        case 5:
            branch();
            break;
        case 6:
            update();
            break;
        case 7:
            publish();
            break;
        case 8:
            commands();
            break;
        case 9:
            mergeconflicts();
            break;
        case 10:
            compile();
            break;
        default:
            printf("Error");
    }
}
