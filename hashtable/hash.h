#ifndef HASH_H
#define HASH_H
#include <stdbool.h>

#define TABLE_SIZE 100

typedef struct {
    char *key;
    int value;
} Entry;

typedef struct {
    Entry *entries[TABLE_SIZE];
} HashTable;

unsigned int hash(const char *key);

HashTable *createHashTable();

void insert(HashTable *hashTable, const char *key, int value);

void destroyHashTable(HashTable *hashTable);

int get(HashTable *hashTable, const char *key);

bool modify(HashTable *hashTable, const char *key,int newValue);

#endif