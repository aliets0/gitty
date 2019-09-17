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
void back();
// Main Program
int main()
{

    operation();
    printf("\n");

    return 0;
}
// Defining Functions
void compile(){
    printf("gcc program-source-code.c -o executable-file-name\n\n");
    printf("chmod +x yourScript\n\n");
    printf("cp yourScript /usr/bin/\n\n");
    back();
}
void create(){
    printf("Create from existing data\n\n");
    printf("_________________________________________________\n\n");
    printf("cd ~/projects/myproject\n\n");
    printf("git init\n\n");
    printf("git add .\n\n");
    printf("Create from existing reopsitory\n\n");
    printf("_________________________________________________\n\n");
    printf("git clone ~/existing/repo ~/new/repo\n\n");
    printf("git clone git://host.org/project.git\n\n");
    printf("git clone ssh://you@host.org/proj.git\n\n");
    back();
}
void show(){
    printf("Show files changed in working directory -- git status\n\n");
    printf("Show changes to traked files -- get diff\n\n");
    printf("Show what changed between commit id 1 and 2 -- git diff $id1 $id2\n\n");
    printf("Show history of changes -- git log\n\n");
    printf("Show history of changes for file with diffs -- git log -p $file $dir/ec/tory/\n\n");
    printf("Show who changed what and when in a file -- git blame $file\n\n");
    printf("Show a commit identified by $ID -- git show $ID\n\n");
    printf("Show a specific file from a specific $ID -- git show $id:$file\n\n");
    printf("Show all local branches -- git branch\n\n");
    back();
}

void gitbasics(){
    printf("master : default development branch\n\n");
    printf("origin : default upstream repository\n\n");
    printf("HEAD : current branch\n\n");
    printf("HEAD^ : parent of HEAD\n\n");
    printf("HEAD~4 : great-great grandparent of HEAD\n\n");
    back();
}

void revert(){
    printf("Revert the last commited state -- git reset --hard\n\n");
    printf("Revert the last commit -- git revert HEAD\n\n");
    printf("Revert specific commit -- git revert $id\n\n");
    printf("Fix the last commit -- git commit -a --amend\n\n");
    printf("Checkout the $id version of a file -- git checkout $id $file\n\n");
    back();
}

void branch(){
    printf("Switch to the $id branch -- git checkout $id\n\n");
    printf("Merge branch1 into branch2\n\n");
    printf("___________________________________\n\n");
    printf("git checkout $branch2\n\n");
    printf("git merge branch1\n\n");
    printf("Create branch named $branch based on the HEAD -- git branch $branch\n\n");
    printf("Creat branch $new_branch based on branch $other and switch to it -- git checkout -b $new_branch $other\n\n");
    printf("Delete branch $branch -- git branch -d $branch\n\n");
    back();
}

void update(){
    printf("Fetch latest changes from origin -- git fetch\n\n");
    printf("Pull latest changes from origin -- git pull\n\n");
    printf("Apply a patch that some(one) sent you -- git am -3 patch.mbox (in case of confict, resolve and use git am --resolved)\n\n");
    back();
}

void publish(){
    printf("Commit all your local changes -- git commit -a\n\n");
    printf("Prepare a patch for other developers -- git format-patch origin\n\n");
    printf("Push changes to origin -- git push\n\n");
    printf("Mark a version / milestone -- git tag v1.0\n\n");
    back();
}

void commands(){
    printf("Finding Regressions\n\n");
    printf("___________________\n\n");
    printf("git bisect start (to start)\n\n");
    printf("git bisect good $id ($id is the last working version)\n\n");
    printf("git bisect bad $id ($id is a broken version)\n\n");
    printf("git bisect bad/good (too mark it as bad or good)\n\n");
    printf("git bisect visualize (to launch gitk and mark it)\n\n");
    printf("git bisect reset (once you're done)\n\n");
    printf("Check for errors and clean up repository\n\n");
    printf("________________________________________\n\n");
    printf("git fsck\n\n");
    printf("git gc --prune\n\n");
    printf("Search working directory for foo()\n\n");
    printf("git grep foo()\n\n");
    back();
}

void mergeconflicts(){
    printf("To view the merge conflicts\n\n");
    printf("___________________________\n\n");
    printf("git diff (complete conflict diff)\n\n");
    printf("git diff --base $file (against base file)\n\n");
    printf("git diff --ours $file (againt your changes)\n\n");
    printf("git diff --theirs $file (against other changes)\n\n");
    printf("To discard conflicting patch\n\n");
    printf("____________________________\n\n");
    printf("git reset --hard\n\n");
    printf("git rebase --skip\n\n");
    printf("After resolving conflicts, merge with");
    printf("_____________________________________\n\n");
    printf("git add $conflicting_file (do for all reserved files)\n\n");
    printf("git rebase --continue\n\n");
    back();
}

void operation(){
    printf("Select Cheat:\n\n");
    printf("__________________________\n\n");
    printf("1: Create\n\n");
    printf("2: Show\n\n");
    printf("3: Git Basics\n\n");
    printf("4: Revert\n\n");
    printf("5: Branch\n\n");
    printf("6: Update\n\n");
    printf("7: Publish\n\n");
    printf("8: Commands\n\n");
    printf("9: Merge Conflicts\n\n");
    printf("10: Compiling Programs\n\n");
    scanf("%d", &op);


    switch(op)
    {
        case 1:
            create();
            printf("\n");
            break;
        case 2:
            show();
            printf("\n");
            break;
        case 3:
            gitbasics();
            printf("\n");
            break;
        case 4:
            revert();
            printf("\n");
            break;
        case 5:
            branch();
            printf("\n");
            break;
        case 6:
            update();
            printf("\n");
            break;
        case 7:
            publish();
            printf("\n");
            break;
        case 8:
            commands();
            printf("\n");
            break;
        case 9:
            mergeconflicts();
            printf("\n");
            break;
        case 10:
            compile();
            printf("\n");
            break;
        default:
            printf("Error");
    }
}
void back(){
  printf("Where do you want to go next?(Enter 11 to exit): ");
  scanf("%d", &op);


    switch(op)
    {
        case 1:
            create();
            printf("\n");
            break;
        case 2:
            show();
            printf("\n");
            break;
        case 3:
            gitbasics();
            printf("\n");
            break;
        case 4:
            revert();
            printf("\n");
            break;
        case 5:
            branch();
            printf("\n");
            break;
        case 6:
            update();
            printf("\n");
            break;
        case 7:
            publish();
            printf("\n");
            break;
        case 8:
            commands();
            printf("\n");
            break;
        case 9:
            mergeconflicts();
            printf("\n");
            break;
        case 10:
            compile();
            printf("\n");
            break;
        case 11:
            EXIT_SUCCESS;
            printf("\n");
            break;
        default:
            printf("Error");
    }



}
