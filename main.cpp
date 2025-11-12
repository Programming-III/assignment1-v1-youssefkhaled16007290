#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#ifndef Animal_h
#define Animal_h
#ifndef Mammal_h
#define Mammal_h
#ifndef Bird_h
#define Bird_h
#ifndef Reptile_h
#define Reptile_h
#ifndef Enclosure_h
#define Enclosure_h
public :
Animal_h::Animal(string n,int a,bool h){
   name=n;
   age=a;
   isHungry=h;
}
 void Animal::display(){
     cout<<name<<age<<isHungry<<endl;
 }
 void Animal::feed(){
     if(isHungry==false){
         cout<<"the animal is not hungry"<<endl;
     }
     else 
     cout<<"the animal is hungry"<<endl;
 }
 Mammal::Mammal(string fc){
     furColor=fc;
 }
 Bird::Bird(float ws){
     wingSpan=ws;
 }
 Reptile::Reptile(bool v){
     isVenomous=v;
 }
 Enclosure::Enclosure(int c,int cc){
     capacity=c;
     currentCount=cc;
 }
void Enclosure::addAnimal(Animal* a){
    if(capacity<currentCount)
    animal[currentcount++]=(a);
    currentCount++;
    else 
    cout<<"there is no space for another animal"<<endl;
}
void Enclosure::displayAnimals(){
    for(int i=0;i<x.length();i++){
        cout<<x[i]<<endl;
    }
}
 Visitor_h::Visitor(string vn,int t) {
     Visitorname=vn;
     ticketsBought=t;
 } 
 void Visitor::displayinfo(){
     cout<<Visitorname<<ticketsBought<<endl;
 }
int main()
{
    Animal a=Animal("Lion",5,true);
    Animal p=Animal("Parrot",2,false);
    Animal S=Animal("Snake",3,true);
    Animal A*[]={a,p,S};
   Enclosure E=Enclosure(5,3,A);
   E.addAnimal("Elephant");
   E.addAnimal("Eagle");
   E.addAnimal("Crocodile");
   Visitor v=Visitor("Sara Ali",3);
   v.displayinfo();
   E.displayAnimals();
   
     
}

// ============== MAIN FUNCTION ==============
