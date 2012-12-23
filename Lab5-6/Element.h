#pragma once
#include <iostream>
#include "Visitor.h"



template<class T>
class Element
{
public:
	///Empty constructor
	Element();
	///Constructor with a content element
	Element(T object);
	///Method to define content after creating an object
	void setObject(T object);
	///Returns the content
	T getObject();
	///Adds a left child element
	void addLeft(Element<T>* l);
	///Adds a right child element
	void addRight(Element<T>* r);
	///Depth-first search
	void dfs(Visitor &v);
	///Breadth-first search
	void bfs();
	///Returns left child element
	Element<T>* getLeft();
	///Returns right cjild element
	Element<T>* getRight();
	///Destructor
	~Element();
private:
	void print();
	void start_dfs(Element<T>* start, Visitor &v);
	Element<T> *left;
	Element<T> *right;
	T content;
};

template<class T>
Element<T>::Element()
{
	left = NULL;
	right = NULL;
}

template<class T>
Element<T>::Element(T object)
{
	content = object;
	left = NULL;
	right = NULL;
}

template<class T>
void Element<T>::setObject(T object)
{
	content = object;
}

template<class T>
T Element<T>::getObject()
{
	return content;
}

template<class T>
Element<T>* Element<T>::getLeft()
{
	return left;
}

template<class T>
Element<T>* Element<T>::getRight()
{
	return right;
}

template<class T>
void Element<T>::print()
{
	std::cout<<content<<'\n';
}

template<class T>
void Element<T>::bfs()
{
}

template<class T>
void Element<T>::dfs(Visitor &v)
{
	start_dfs(this, v);
}

template<class T>
void Element<T>::start_dfs(Element<T>* start, Visitor &v)
{
	
	//start->print();
	start->content.accept(v);
	if(start->getLeft()!=NULL)
	{
		start_dfs(start->getLeft(), v);
	}
	if(start->getRight()!=NULL)
	{
		start_dfs(start->getRight(), v);
	}
	return;
}

template<class T>
void Element<T>::addLeft(Element<T>* l)
{
	left = l;
}

template<class T>
void Element<T>::addRight(Element<T>* r)
{
	right = r;
}

template<class T>
Element<T>::~Element()
{
}
