// Created by andri on 4/30/2025.
#ifndef ESWE_DATABASE_FUNCTIONS_H
#define ESWE_DATABASE_FUNCTIONS_H
#endif //ESWE_DATABASE_FUNCTIONS_H
#pragma once
#include <string>
#include <map>
#include <iostream>
#include <stdexcept>

using namespace std;

class InMemoryDB{
private:
    map<string, int> database;
    map<string, int> temp_database;
    bool transaction_progress = false;

public:
    optional<int> get(string key);
    void put(string key, int val);
    void begin_transaction();
    void commit();
    void rollback();

};

void InMemoryDB::put(string key, int val){
    if (!transaction_progress){     //if transaction not open
        throw std::runtime_error("Cannot start. No transaction in progress.");
    }
    temp_database[key] = val;
//    auto check = temp_database.find(key);
//    if (check != temp_database.end()){   //key found
//        temp_database[key] = val;    //this might create a new key-value anyways so check
//    }
//    else{
//        temp_database.insert({key, val});
//    }
}

optional<int> InMemoryDB::get(string key){
    auto check = database.find(key);
    if (check != database.end()){   //key found
        return check->second;
    }
    else{
        return std::nullopt;
    }
}

void InMemoryDB::begin_transaction(){
    if (transaction_progress){      //if transaction_progress is true
        throw std::runtime_error("Cannot start. Transaction in Progress");
    }
    else{
        temp_database = database;
        transaction_progress = true;
    }
}

void InMemoryDB::commit(){
    if (!transaction_progress){      //if transaction_progress is false
        throw std::runtime_error("No transaction in progress");
    }
    database = temp_database;
    transaction_progress = false;
}

void InMemoryDB::rollback(){
    if (!transaction_progress){      //if transaction_progress is false
        throw std::runtime_error("No transaction in progress to rollback.");
    }
    temp_database.clear();
    transaction_progress = false;
}