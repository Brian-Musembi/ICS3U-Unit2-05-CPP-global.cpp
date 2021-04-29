// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 28 April 2021
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 24;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 29;
    int variableY = 37;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
              << variableX << "+" << variableY << "="
              << variableZ << std::endl;}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 53;
    int variableZ = variableX + variableY;
    std::cout << "Global variableX, variableY, variableZ: "
              << variableX << "+" << variableY << "="
              << variableZ << std::endl;}

int main() {
    // this function calls local and global

    localVariable();
    globalVariable();}
