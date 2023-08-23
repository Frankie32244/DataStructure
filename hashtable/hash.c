#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "hash.h"


unsigned int hash(const char key[]) {

    unsigned int hash = 0;

    while (*key) {
        hash = (hash << 5) + *key++;
    }

    return hash % TABLE_SIZE;
}

HashTable *createHashTable() {
    HashTable *hashTable = (HashTable *)malloc(sizeof(HashTable));
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable->entries[i] = NULL;
    }
    return hashTable;
}

void insert(HashTable *hashTable, const char *key, int value) {

    unsigned int index = hash(key);

    Entry *newEntry = (Entry *)malloc(sizeof(Entry));
    newEntry->key = strdup(key);
    newEntry->value = value;

    hashTable->entries[index] = newEntry;
}

int get(HashTable *hashTable, const char *key) {
    unsigned int index = hash(key);
    
    Entry *entry = hashTable->entries[index];
    if (entry && strcmp(entry->key, key) == 0) {
        return entry->value;
    } else {
        return -1;  // Key not found
    }
}

bool modify(HashTable *hashTable, const char *key,int newValue){
    unsigned int index = hash(key);

    Entry *entry = hashTable->entries[index];
    if (entry && strcmp(entry->key, key) == 0) {
        entry->value =newValue;
        return true;
    }
    else{
        return false;
    }
}

void destroyHashTable(HashTable *hashTable) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Entry *entry = hashTable->entries[i];
        if (entry) {
            free(entry->key);
            free(entry);
        }
    }
    free(hashTable);
}
