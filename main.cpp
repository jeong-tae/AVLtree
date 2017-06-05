
#include "LinkedBinaryTree.h"
#include "SearchTree.h" 
#include "AVLTree.h"

#include <iostream>
 
using namespace std;

int main()
{
	typedef Entry<int, float> EntryType;

	LinkedBinaryTree<EntryType> t;
	
	std::cout << "Size : " << t.size() << std::endl;
	
	t.addRoot();
	
	std::cout << "Size : " << t.size() << std::endl;
	
	
	//
	// Binary Search Tree test
	//
	SearchTree<EntryType>	st;
	
	std::cout << "Size : " << st.size() << std::endl;
	st.insert(1, 2.5);
	st.insert(3, 4.5);
	st.insert(7, 5.5);
	st.insert(2, 1.5);
	st.insert(3, 8.5);
	std::cout << "Size : " << st.size() << std::endl;

	for(SearchTree<EntryType>::Iterator it = st.begin(); it != st.end(); ++it)
	{
			std::cout << (*it).key() << " , " << (*it).value() << std::endl;
	}
		
	st.erase(3);
	std::cout << "Size : " << st.size() << std::endl;
	for(SearchTree<EntryType>::Iterator it = st.begin(); it != st.end(); ++it)
	{
			std::cout << (*it).key() << " , " << (*it).value() << std::endl;
	}	
	
	
	
	//
	// AVL Tree test
	//
	AVLTree<EntryType>	avl;
	
	std::cout << "Size : " << avl.size() << std::endl;
	avl.insert(1, 2.5);
	//avl.insert(3, 4.5);
	//avl.insert(7, 5.5);
	//avl.insert(2, 1.5);
	//avl.insert(3, 8.5);
	std::cout << "Size : " << avl.size() << std::endl;

	for(AVLTree<EntryType>::Iterator it = avl.begin(); it != avl.end(); ++it)
	{
			std::cout << (*it).key() << " , " << (*it).value() << std::endl;
	}
		
	avl.erase(3);
	std::cout << "Size : " << avl.size() << std::endl;
	for(AVLTree<EntryType>::Iterator it = avl.begin(); it != avl.end(); ++it)
	{
			std::cout << (*it).key() << " , " << (*it).value() << std::endl;
	}	

	return 0;
}