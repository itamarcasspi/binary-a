#pragma once

#include <iostream>


namespace ariel
{

    template <typename T>
    class BinaryTree
    {
    
        struct Node
        {
            T data;
            Node *left_node, *right_node, *father_node;

            Node()
            {
                this->father_node = nullptr;
                this->left_node =nullptr;
                this->right_node = nullptr;
            }

            Node(T data)
            {
                this->data = data;
                this->left_node = nullptr;
                this->right_node = nullptr;
                this->father_node = nullptr;
            }

            ~Node()
            {
                if (this->left_node != nullptr)
                {
                    delete left_node;
                }
                if (this->right_node != nullptr)
                {
                    delete right_node;
                }
                if (this->father_node != nullptr)
                {
                    delete father_node;
                }
            }
        };

    public:
        Node root;

        BinaryTree &add_root(const T &node)
        {
            return *this;
        }

        BinaryTree &add_left(const T &father, const T &left_son)
        {
            return *this;
        }

        BinaryTree &add_right(const T &father, const T &right_son)
        {
            return *this;
        }

        T *operator->() const 
        {
            T value;
            return value;
        }

        friend std::ostream &operator<<(std::ostream &out, const BinaryTree<T> bst)
        {
            return out;
        }
        
        
        /////iterator classes
        class in_order_iterator
        {
            Node *runner;

        public:
            in_order_iterator(Node *pointer = nullptr) : runner(pointer) {}
            in_order_iterator &operator++() { return *this; } //postfix
            in_order_iterator operator++(int)                 //prefix
            {
                return *this;
            }
            bool operator==(const in_order_iterator &it) { return false; }
            bool operator!=(const in_order_iterator &it) { return false; }
            T &operator*() const
            {
            
                return runner->data;
            }
            T *operator->() const
            {
                 return runner->data;

            }
            int size()
            {
                return 0;
            }
        };

        class pre_order_iterator
        {
            Node* runner;

        public:
            pre_order_iterator(Node *pointer = nullptr) : runner(pointer) {}
            pre_order_iterator &operator++() { return *this; } //postfix
            pre_order_iterator operator++(int)                 //prefix
            {
                return *this;
            }
            bool operator==(const pre_order_iterator &it) { return false; }
            bool operator!=(const pre_order_iterator &it) { return false; }
            T operator*()
            {
                 return runner->data;
            }
            T *operator->() const
            {
                 return runner->data;
            }
            int size()
            {
                return 0;
            }
        };

        class post_order_iterator
        {
            Node *runner;

        public:
            post_order_iterator(Node *pointer = nullptr) : runner(pointer) {}
            post_order_iterator &operator++() { return *this; } //postfix
            post_order_iterator operator++(int)                 //prefix
            {
                return *this;
            }
            bool operator==(const post_order_iterator &it) { return false; }
            bool operator!=(const post_order_iterator &it) { return false; }
            T &operator*()
            {
                return runner->data;
            }
            T *operator->() const
            {
                return nullptr;
            }
            int size()
            {
                return 0;
            }
        };
        //////////////////////////
        in_order_iterator begin()
        {
            return in_order_iterator();

        }

        in_order_iterator end()
        {
            return in_order_iterator();
        }

        in_order_iterator begin_inorder()
        {
            return in_order_iterator();
        }

        in_order_iterator end_inorder()
        {
            return in_order_iterator();
        }

        pre_order_iterator begin_preorder()
        {
            return pre_order_iterator();
        }

        pre_order_iterator end_preorder()
        {
            return pre_order_iterator{};
        }

        post_order_iterator begin_postorder()
        {
            return post_order_iterator{};
        }

        post_order_iterator end_postorder()
        {
            return post_order_iterator{};
        }
    };

};
