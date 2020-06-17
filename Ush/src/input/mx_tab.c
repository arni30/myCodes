#include "ush.h"

t_trie_node *getNode(void)
{
    t_trie_node *pNode = malloc(sizeof(t_trie_node));
    pNode->isWordEnd = false;

    for (int i = 0; i < MX_ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
}

void insert(t_trie_node *root, char *key) {
    int len = mx_strlen(key);
    t_trie_node *temp = root;
    int index = '\0';

    for (int level = 0; level < len; level++) {
        index = MX_CHAR_TO_INDEX(key[level]);
        if (!temp->children[index])
            temp->children[index] = getNode();
        temp = temp->children[index];
    }
    temp->isWordEnd = true;
}

//bool search(t_trie_node *root, char *key)
//{
//    int length = mx_strlen(key);
//    t_trie_node *temp = root;
//    for (int level = 0; level < length; level++)
//    {
//        int index = MX_CHAR_TO_INDEX(key[level]);
//
//        if (!temp->children[index])
//            return false;
//
//        temp = temp->children[index];
//    }
//    return (temp != NULL && temp->isWordEnd);
//}

bool isLastNode(t_trie_node *root)
{
    for (int i = 0; i < MX_ALPHABET_SIZE; i++) {
        if (root->children[i])
            return 0;
    }
    return 1;
}

void suggestionsRec(t_trie_node *root, char *currPrefix, t_input *input)
{
    int len = mx_strlen(currPrefix);
    // found a string in Trie with the given prefix
    if (root->isWordEnd) {
        if (input->tab_list->data == NULL) {
            input->tab_list->data = mx_strdup(currPrefix);
            input->tab_list->next = malloc(sizeof(t_tab));
            input->tab_list->next->data = NULL;
            input->tab_list->next->first = input->tab_list->first;
            input->tab_list = input->tab_list->next;
        }
    }
    // All children struct node pointers are NULL
    if (isLastNode(root))
        return;
    for (int i = 0; i < MX_ALPHABET_SIZE; i++)
    {
        if (root->children[i])
        {
            // append current character to currPrefix string
            currPrefix = mx_realloc(currPrefix, sizeof (char) * len + 2);
            currPrefix[len] = 97 + i;
            currPrefix[len + 1] = '\0';
            // recur over the rest
            suggestionsRec(root->children[i], currPrefix, input);
            // remove last character
            currPrefix[len] = '\0';
        }
    }
}

// print suggestions for given query prefix.
int printAutoSuggestions(t_trie_node *root, char *query, t_input *input)
{
    t_trie_node *temp = root;

    // Check if prefix is present and find the
    // the node (of last level) with last character
    // of given string.
    int n = mx_strlen(query);
    for (int level = 0; level < n; level++)
    {
        int index = MX_CHAR_TO_INDEX(query[level]);

        // no string in the Trie has this prefix
        if (!temp->children[index])
            return 0;
        temp = temp->children[index];
    }

    // If prefix is present as a word.
    bool isWord = (temp->isWordEnd == true);

    // If prefix is last node of tree (has no
    // children)
    bool isLast = isLastNode(temp);

    // If prefix is present as a word, but
    // there is no subtree below the last
    // matching node.
    if (isWord && isLast)
    {
        //mx_printstr(query);
        return -1;
    }

    // If there are are nodes below last
    // matching character.
    if (!isLast)
    {
        char *prefix = mx_strdup(query);
        suggestionsRec(temp, prefix, input);
        mx_strdel(&prefix);
        return 1;
    }
    return 2;
}


void delete(t_trie_node *root) {
    t_trie_node *temp = root;

    for (int i = 0; i < MX_ALPHABET_SIZE; i++) {
        if (temp->children[i]) {
            if (temp->children[i]->isWordEnd == false) {
                delete(temp->children[i]);
                temp->isWordEnd = true;
            }
            else {
                free(temp->children[i]);
                temp->children[i] = NULL;
            }
        }
    }
    free(root);
    root = NULL;
}



//void delete(t_trie_node *root, char *key) {
//    t_trie_node *temp = root;
//    int index = 0;
//    for (int level = mx_strlen(key); level >= 0; level--) {
//        index = MX_CHAR_TO_INDEX(key[level]);
//        if (temp->children[index]->isWordEnd) {
//            temp->children[index]->isWordEnd = FA
//        }
//            temp->children[index] = getNode();
//        temp = temp->children[index];
//    }
//
//}

//void del_out (t_trie_node *root, char *key) {
//        int len = mx_strlen(key);
//        t_trie_node *temp = root;
//        int index = '\0';
//
//        for (int level = 0; level < len; level++) {
//            index = MX_CHAR_TO_INDEX(key[level]);
//            if (temp->children[index]) {
//                if (temp->children[index]->isWordEnd == false) {
//                    del_out(temp->children[index], key);
//                }
//                else
//                    free(temp->children[index]);
//            }
//        }
//}
void mx_tab(t_input *input, t_ush *ush) {
//    int i = 0;
    //mx_strlen(input->command);
    t_trie_node *root = getNode();
//    mx_printint(sizeof(t_trie_node*));
//    t_trie_node *temp = root;
    insert(root, "hello");
//    insert(root, "dog");
    insert(root, "hell");
//    insert(root, "cat");
//    insert(root, "a");
//    insert(root, "hel");
//    insert(root, "help");
//    insert(root, "helps");
//    insert(root, "helpingggg");
    if (mx_strcmp(input->tab_list->data, input->command) != 0) {
        int comp = printAutoSuggestions(root, input->command, input);
        if (comp == -1)
            return;
        else if (comp == 0)
            return;
        mx_strdel(&input->command);
        input->tab_list = input->tab_list->first;
        input->command = mx_strdup(input->tab_list->data);
    }
    else {
        if (input->tab_list->next->data != NULL) {
            input->tab_list = input->tab_list->next;
        }
        else {
            input->tab_list = input->tab_list->first;
        }
        mx_strdel(&input->command);
        input->command = mx_strdup(input->tab_list->data);
    }

//    input->tab_list = input->tab_list->first;
//    while (input->tab_list->next != NULL) {
//        mx_printstr(input->tab_list->data);
//        mx_printstr("\n");
//        input->tab_list = input->tab_list->next;
//    }
    mx_clear_str();
    mx_print_prompt(0, ush);
    mx_printstr(input->command);
    input->len = mx_strlen(input->command);
    input->coursor_position = mx_strlen(input->command);

    input->flag_tab = 1;
    //del_out(root, "dog");
    delete(root);

//    del_out(root, "cat");
    //del_out(root, "a");
//    del_out(root, "hel");
//    del_out(root, "help");
//    del_out(root, "helps");
//    del_out(root, "helpingggg");
    //free(root);

}
