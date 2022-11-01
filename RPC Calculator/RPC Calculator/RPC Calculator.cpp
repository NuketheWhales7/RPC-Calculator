// RPC Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Christopher Miller
//CIS2542 - Advanced C++ Programming - Homework 13

#include "Operands.h"
#include <iostream>
#include <queue>
#include <stack>

double Calculate(std::queue<Operand*> q)
{
    std::stack<double> s;
    while (q.empty() == false) //loop until theres no numbers from the queue
    {
        Operand* o = q.front();
        q.pop();
        Number* n = dynamic_cast<Number*>(o); //Checks to see if value is a number
        if (n != nullptr)
        {
            s.push(n->value);
        }
        else if (dynamic_cast<Add*>(o) != nullptr) //Caclulates addition math for top two numbers in Stack s.
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.push(a + b);

        }
        else if (dynamic_cast<Subtract*>(o) != nullptr) //Caclulates subtraction math for top two numbers in Stack s.
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.push(a - b);

        }
        else if (dynamic_cast<Multiply*>(o) != nullptr) //Caclulates Multiplcation math for top two numbers in Stack s.
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.push(a * b);

        }
        else if (dynamic_cast<Divide*>(o) != nullptr) //Caclulates Division math for top two numbers in Stack s.
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.push(a / b);

        }
        else if (dynamic_cast<Square*>(o) != nullptr) //Caclulates Square math for top number in Stack s.
        {
            double a = s.top();
            s.pop();
            s.push(a * a);

        }
    }

    if (s.size() != 1) //Checks to see if there is one value left otherwise alerts you to problem.
        throw std::exception("Stack contains wrong number of elements");


    return s.top();
}

int main() 
{
    std::cout << "Hello World! This is my RPN caculator!\n"; //Hello World calculator to know program is running :)

    std::queue<Operand*> a;
    a.push(new Number(11)); //Place Second Value here.
    a.push(new Number(9)); //Place first Value here.
    a.push(new Multiply()); // What math function is being used from Add, Subtract, Multiply, Divide, Square.
    a.push(new Square());  // Extra calculation to make sure the queue size is working.
    std::cout << Calculate(a) << "\n"; //Prints the value calculated from function Calculate. 

    system("pause"); //System clean up pauses before closing.
    return 0;
}

