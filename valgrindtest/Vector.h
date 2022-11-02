#ifndef VECTOR_H_
#define VECTOR_H_

#include<algorithm>
#include<iostream>

namespace myStd
{

using namespace std;
template <class T>
class vector
{
private:
	int size_v; //size of vector
	T *elem;	//pointer to array of element
	int space;	//size + free_space
public:
	vector();
	//Default constructor for class
	//Postcondition: instantiate a default vector

	explicit vector(int s);
	//Alternative constructor
	//Precondition: an int co hold the size of the vector
	//Postcondition: properly instantiate a vector with size s

	vector(const vector &);
	//Copy constructor for class

	vector(vector &&);
	//Move assignment for vector

	~vector();
	//Destructor for vector
	
	vector &operator=(const vector &);
	//Copy assignment for class
	
	vector &operator=(vector &&);
	//Move assignment for vector

	T &operator[](int n);
	//Overlading operator[]

	const T &operator[](int n) const;
	//Overloading operator[] for const ref

	int size() const;
	//Function to return the current size of the vector

	int capacity() const;
	//Function to return the total size of the vector (current size+free space)

	void resize(int newsize);
	//Function to resize a vector to size newsize & initialize the rest of the vector (from size_v to newsize) to 0

	void push_back(T val);
	//Function to add a value into the vector

	void reserve(int newalloc);
	//Function to reserve space for the vector

	T* begin();
	//Function to return the location of the first element of the vector

	const T* begin() const;
	//Function to return the location of the first element of the vector

	T* end();
	//Function to return the location after the last element of the vector

	const T* end() const;
	//Function to return the location after the last element of the vector

	T* insert(T* p, const T &v);
	//Function to insert a value v before location p in the vector

	T* erase(T* p);
	//Function to delete the element at location p

    void print()const;
    void printShapes()const;
	
	using iterator = T *;
	using const_iterator = const T *;
};

template<class T>
vector<T>::vector()
		  :size_v{0},elem{nullptr},space{0}
{}

template<class T>
vector<T>::vector(int s)
		  :size_v{0}, elem{new T[s]}, space{s}
{
	for (int i = 0; i < space; i++)
		elem[i] = T();
}

template<class T>
vector<T>::vector(const vector&source)
		  :size_v{source.size_v}, elem{new T[source.space]}, space{source.space}
{
	copy(source.elem, source.elem + size_v, elem);
}

template<class T>
vector<T>::vector(vector&& source)
		  :size_v{source.size_v}, elem{source.elem}, space{source.space}
{
	source.elem = nullptr;
	source.size_v = 0;
	source.space = 0;
}

template<class T>
vector<T>::~vector()
{
	delete[] elem;
}
	
template<class T>
vector<T>& vector<T>::operator=(const vector&source)
{
	size_v = source.size_v;
	space = source.space;
	T* p = new T[space];
	copy(source.elem, source.elem + size_v, p);
	delete[] elem;
	elem = p;
	return *this;
}
	
template<class T>
vector<T>& vector<T>::operator=(vector&& source)
{
	delete[] elem;
	size_v = source.size_v;
	space = source.space;
	elem = source.elem;
	source.elem = nullptr;
	source.size_v = 0;
	source.space = 0;
	return *this;
}

template<class T>
T& vector<T>::operator[](int location)
{
		return elem[location];
}

template<class T>
const T& vector<T>::operator[](int location)const
{
    if (location < size_v)
        return elem[location];
    else
        return nullptr;
}

template<class T>
int vector<T>::size()const
{
	return size_v;
}

template<class T>
int vector<T>::capacity()const
{
	return space;
}

template<class T>
void vector<T>::resize(int newsize)
{
	if (newsize > space)
	{
		reserve(newsize);
		for (int i = size_v; i < space; i++)
			elem[i] = 0;
		size_v = space;
	}
	return;

}

template<class T>
void vector<T>::push_back(T val)
{
	if (space == 0)	// if there is no space in the vector -> reserve 10 spaces
		reserve(10);
	else if(size_v == space)	// if the vector is full -> double its capacity
		reserve(2*space);
	
	elem[size_v] = val;
	size_v++;
	
}

template<class T>
void vector<T>::reserve(int newalloc)
{
	if (newalloc <= space)
		return;
	T* newElem = new T[newalloc];
	for (int i = 0; i < size_v; i++)
		newElem[i] = elem[i];
	delete[] elem;
	elem = newElem;
	newElem = nullptr;
	space = newalloc;
}	

template<class T>
T* vector<T>::begin()
{
	return &elem[0];
}

template<class T>
const T* vector<T>::begin()const
{
	return &elem[0];
}

template<class T>
T* vector<T>::end()
{
	if (size_v == 0)
		return nullptr;
	
	return &elem[size_v];
}

template<class T>
const T* vector<T>::end()const
{
	if (size_v == 0)
		return nullptr;
	
	return &elem[size_v];
}

template<class T>
T* vector<T>::insert(T* p, const T& value)
{
	if ((p < end()) && (p >= begin()))	// case p is in the array
	{	
		if (size_v < space)	// if there is still space
		{
			size_v++;
			for (T* i = end() -1; i != p; i--)
				*(i) = *(i - 1);
			*p = value;
			return p;	
		}
		else if(size_v == space)	// if the array is full
		{	//reallocate p location in the new array location
			int location = p - begin();
			this->reserve(2*space);
			p = begin() + location;
			size_v++;
			for (T* i = end()-1; i != p; i--)
				*(i) = *(i - 1);
			*p = value;
			return p;
		}
	}
	// case if fails
	return p;
}

template<class T>
T* vector<T>::erase(T* p)
{
	if (p >= end() || p < begin())
	{	
		return p;
	}
	for (T* i = (p + 1); i != end(); i++)
		*(i-1) = *i;
	
	size_v--;
	return p;
}

template<class T>
void vector<T>::print()const
{
    for (int i = 0; i < size_v; i++)
        cout << elem[i] << " ";
}

template<class T>
void vector<T>::printShapes()const{
    for (int i = 0; i < size_v; i++)
        cout << elem[i]->print();
}
}

#endif
