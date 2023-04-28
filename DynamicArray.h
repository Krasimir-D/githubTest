#pragma once
using namespace std;

class DynamicArray {
public:
	/// G4 + constructor with parameter
	DynamicArray();
	DynamicArray(int cap);

	DynamicArray& operator=(const DynamicArray& other);
	int operator[](int pos);

	DynamicArray(const DynamicArray& other);
	~DynamicArray();

	/// help functions
private:
	void copyFrom(const DynamicArray&);
	void clean();
	void resize(int);

	/// interface
public:
	/// @brief adds new element at array's end
	/// @param el inserts the element in the array
	void pushBack(int el);

	/// @brief gets a value at wanted index
	/// @param idx
	/// @return the value at index
	int getAt(int idx) const;

	/// @brief sets a value at wanted index
	/// @param idx the position in the arr
	/// @param val the value to be set
	void setAt(int idx, int val);

	/// @brief removes the last element
	void popBack();

	/// @brief removes element on given index
	/// @param idx index
	/// @param keepOrder let the user to decide if should keep the ordering or
	/// just swap the idx and last element
	void removeAt(int idx, bool keepOrder = true);

	int getSize() const;
	int getCapacity() const;

	void printInfo() const;

private:
	int* pData;
	int size;      // how many actual values are stored
	int capacity;  // what is the maximum allocated memory in given moment
};
ostream& operator<<(ostream& out, const DynamicArray& da);
ostream& operator>>(ostream& in, DynamicArray& da);
