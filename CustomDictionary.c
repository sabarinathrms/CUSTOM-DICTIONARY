#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the node structure
typedef struct Node {
    char word[50];
    char meaning[255];
    struct Node* next;
} Node;

Node* head = NULL;

// Function to create a new node
Node* createNode(char* word, char* meaning) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->word, word);
    strcpy(newNode->meaning, meaning);
    newNode->next = NULL;
    return newNode;
}

// Function to insert a word and its meaning into the dictionary
void insert(char* word, char* meaning) {
    Node* newNode = createNode(word, meaning);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Word '%s' inserted successfully.\n", word);
}

// Function to search for the meaning of a word
void search(char* word) {
    Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->word, word) == 0) {
            printf("Meaning of '%s': %s\n", word, temp->meaning);
            return;
        }
        temp = temp->next;
    }
    printf("Word '%s' not found in the dictionary.\n", word);
}

// Function to delete a word from the dictionary
void deleteWord(char* word) {
    Node* temp = head;
    Node* prev = NULL;

    // If the word to be deleted is the head node
    if (temp != NULL && strcmp(temp->word, word) == 0) {
        head = temp->next;
        free(temp);
        printf("Word '%s' deleted successfully.\n", word);
        return;
    }

    // Search for the word to be deleted
    while (temp != NULL && strcmp(temp->word, word) != 0) {
        prev = temp;
        temp = temp->next;
    }

    // If the word was not present in the dictionary
    if (temp == NULL) {
        printf("Word '%s' not found in the dictionary.\n", word);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);
    printf("Word '%s' deleted successfully.\n", word);
}

// Function to display all words and their meanings in the dictionary
void display() {
    Node* temp = head;
    if (temp == NULL) {
        printf("The dictionary is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("Word: %s, Meaning: %s\n", temp->word, temp->meaning);
        temp = temp->next;
    }
}

// Main function to provide a menu-driven interface
int main() {
    int choice;
    char word[50], meaning[255];

    while (1) {
        printf("\nDictionary Menu:\n");
        printf("1. Insert a word\n");
        printf("2. Search for a word\n");
        printf("3. Delete a word\n");
        printf("4. Display all words\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter word: ");
                scanf("%s", word);
                printf("Enter meaning: ");
                scanf(" %[^\n]%*c", meaning); // To read a line with spaces
                insert(word, meaning);
                break;
            case 2:
                printf("Enter word to search: ");
                scanf("%s", word);
                search(word);
                break;
            case 3:
                printf("Enter word to delete: ");
                scanf("%s", word);
                deleteWord(word);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
