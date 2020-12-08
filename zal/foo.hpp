#pragma once

#include "Human.hpp"
#include<iostream>

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    for (auto i : people) {
        i.birthday();
    }
    std::vector<char> mons;
    for (auto it = people.rbegin(); it != people.rend(); it++) {
        // std::cout << *it.getAge() << std::endl;
        if(*it->isMonster())
            mons.push_back('n');
        else
            mons.push_back('y');
    }

    return mons;
}
