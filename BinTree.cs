using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearchTree
{
    public class BinTree<T>
    {
        public BTNode<T> root;
        // preorder iteration binary tree
        public void preOrder()
        {
            Console.Write("PreOrder interate binary tree: ");
            preOrder(this.root);
            Console.WriteLine();
        }
        public void preOrder(BTNode<T> p)
        {
            if(p != null)
            {
                Console.Write(p.data);
                preOrder(p.leftnode);
                preOrder(p.rightnode);
            }
        }
        // inOrder iteration binary tree
        public void inOrder()
        {
            Console.Write("inOrder interate binary tree: ");
            inOrder(this.root);
            Console.WriteLine();
        }
        public void inOrder(BTNode<T> p)
        {
            if (p != null)
            {                
                inOrder(p.leftnode);
                Console.Write(p.data);
                inOrder(p.rightnode);
            }
        }
        // postOrder iteration binary tree
        public void postOrder()
        {
            Console.Write("postOrder interate binary tree: ");
            postOrder(this.root);
            Console.WriteLine();
        }
        public void postOrder(BTNode<T> p)
        {
            if (p != null)
            {
                postOrder(p.leftnode);                
                postOrder(p.rightnode);
                Console.Write(p.data);
            }
        }
    }
}
