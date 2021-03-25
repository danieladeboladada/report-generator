/*
Purpose: To declare a Property of NGS Records and the property's constituents
*/
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

#include "NGSRecord.h"

template <class T>
class Property
{
  public:

    Property(T);
    ~Property();
    //adds NGSRecord data to the property's collection
    Property<T>& operator+=(NGSRecord*);
    //gets an NGSRecord at an index in the property's collection provided by the parameter
    NGSRecord*& operator[](int);
    //gets the set element it holds data about
    T getSign();
    //gets the size of the property's collection of NGSRecords
    int getInfoSize();

  private:
    //element from partial collection
    T sign;
    //collection of NGSRecord data that correspond to the "sign" variable
    vector<NGSRecord*> info;

};

template <class T>
Property<T>::Property(T t)
{
  sign = t;
}

template <class T>
Property<T>::~Property()
{
  info.clear();
}

template <class T>
Property<T>& Property<T>::operator+=(NGSRecord* newElement){
  if(newElement == NULL){
    cerr << "Element to be added is NULL " << endl;
    exit(1);
  }
  info.push_back(newElement);
  return *this;
}

template <class T>
NGSRecord*& Property<T>::operator[](int index){

  if (index < 0 || index >= info.size() ) {
    cerr << "Index out of range! " << endl;
    exit(1);
  }

  return info[index];
}

template <class T>
T Property<T>::getSign(){ return sign; }

template <class T>
int Property<T>::getInfoSize(){ return info.size(); }
