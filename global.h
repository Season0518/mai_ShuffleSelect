//
// Created by 13423 on 2022/8/14.
//
#pragma once


#ifndef UNTITLED_GLOBAL_H
#define UNTITLED_GLOBAL_H

#include <iostream>
#include <string>
#include <vector>
#include <queue>

#endif //UNTITLED_GLOBAL_H

struct songData{
    int id;
    std::string songName,songDiff;

    bool operator< (const songData &b) const {return this->id<b.id;}
    bool operator> (const songData &b) const {return this->id>b.id;}
};

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::queue;