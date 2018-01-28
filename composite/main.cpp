#include "composite.h"
#include <iostream>
using namespace std;

void showTree(IFile *root, int level)
{
	int i = 0;
	if (root == NULL)
		return;
	
	for (i = 0; i < level; i++)
		printf("\t");
	root->display();
	
	list<IFile *> *childList = root->getChild();
	if (childList != NULL) {
		for (list<IFile *>::iterator it = childList->begin(); it != childList->end(); it++) {
			if ((*it)->getChild() == NULL) {
				for (i = 0; i <= level; i++)
					printf("\t");
				(*it)->display();
			} else
				showTree(*it, level + 1);
		}
	}
}

int main()
{
	Dir *root = new Dir("c");
	Dir *dir1 = new Dir("111dir");
	File *file1 = new File("aaafile");
	root->add(dir1);
	root->add(file1);
	
/*
	list<IFile *> *childList = root->getChild();
	for(list<IFile *>::iterator it = childList->begin(); it != childList->end(); it++)
		(*it)->display();
*/
	
	Dir *dir2 = new Dir("222dir");
	File *file2 = new File("bbbfile");
	dir1->add(dir2);
	dir1->add(file2);
	
	showTree(root, 0);
	return 0;
}