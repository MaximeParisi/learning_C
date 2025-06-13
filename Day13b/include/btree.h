typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;