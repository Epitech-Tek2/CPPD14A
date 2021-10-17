/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14A-clement.muth
** File description:
** SimplePtr
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr) :
    _rawPtr{rawPtr} {}

SimplePtr::~SimplePtr() {
    delete _rawPtr;
}

BaseComponent *SimplePtr::get() const
{
    return (_rawPtr);
}

SimplePtr& SimplePtr::operator=(SimplePtr const& simplePtr)
{
    return (*this);
}