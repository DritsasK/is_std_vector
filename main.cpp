/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kostas
 *
 * Created on February 23, 2016, 6:45 PM
 */

#include <cstdlib>
#include <vector>
#include <type_traits>
#include <iostream>

namespace my_stuff {  // φτιάχνω ένα δικό μου namespace για να μη "μολύνω" το global
    template <typename T> struct is_std_vector : public std::false_type { };
    template <typename T> struct is_std_vector<std::vector<T>> : public std::true_type { };
}

int main(int argc, char** argv) {
    
    std::cout<<my_stuff::is_std_vector<int>::value;  // αυτό είναι false
    
    std::cout<<my_stuff::is_std_vector<std::vector<int>>::value;  //  αυτό είναι true

    return 0;
}
