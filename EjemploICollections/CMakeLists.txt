cmake_minimum_required(VERSION 3.30)
project(EjemploICollections)

set(CMAKE_CXX_STANDARD 20)

add_executable(EjemploICollections ejemplos/main.cpp
        collections/List.cpp
        collections/List.h
        collections/ListIterator.cpp
        collections/ListIterator.h
        collections/ListNode.cpp
        collections/ListNode.h
        collections/OrderedDictionary.cpp
        collections/OrderedDictionary.h
        collections/OrderedDictionaryEntry.cpp
        collections/OrderedDictionaryEntry.h
        interfaces/ICollectible.cpp
        interfaces/ICollection.cpp
        interfaces/ICollection.h
        interfaces/IDictionary.cpp
        interfaces/IIterator.cpp
        interfaces/IIterator.h
        interfaces/IKey.cpp
        interfaces/IKey.h
        interfaces/OrderedKey.cpp
        interfaces/OrderedKey.h
        Integer.cpp
        Integer.h
        String.cpp
        String.h
        ejemplos/Usuario.cpp
        ejemplos/Usuario.h)
