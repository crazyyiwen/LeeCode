using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearchTree
{
    public class BinTreeWithoutIteration<T>
    {
        public BTNode<T> root;
        public string output;
        // preOrder iteration
        public void preOrderWithoutIteration()
        {
            Console.Write("PreOrder interate binary tree: ");
            preOrderWithoutIteration(this.root);
            Console.WriteLine();
        }
        public void preOrderWithoutIteration(BTNode<T> BT)
        {
            BTNode<T> node = BT;
            Stack<BTNode<T>> S = new Stack<BTNode<T>>();

            while (node != null || !(S.Count() == 0))
            {
                while (node != null)
                {
                    VisitNode(node);

                    S.Push(node);
                    node = node.leftnode;
                }
                if (!(S.Count() == 0))
                {
                    node = S.Pop();
                    node = node.rightnode;
                }
            }

        }
        // inOrder iteration
        public void inOrderWithoutIteration()
        {
            Console.Write("inOrder interate binary tree: ");
            inOrderWithoutIteration(this.root);
            Console.WriteLine();
        }
        public void inOrderWithoutIteration(BTNode<T> BT)
        {
            BTNode<T> node = BT;
            Stack<BTNode<T>> S = new Stack<BTNode<T>>();

            while (node != null || !(S.Count() == 0))
            {
                while (node != null)
                {                   
                    S.Push(node);
                    node = node.leftnode;
                }
                if (!(S.Count() == 0))
                {
                    node = S.Pop();
                    VisitNode(node);
                    node = node.rightnode;
                }
            }

        }
        // postOrder iteration
        public void postOrderWithoutIteration()
        {
            Console.Write("postOrder interate binary tree: ");
            postOrderWithoutIteration(this.root);
            Console.WriteLine();
        }
        public void postOrderWithoutIteration(BTNode<T> BT)
        {
            BTNode<T> node = BT;
            Stack<BTNode<T>> S = new Stack<BTNode<T>>();
            Stack<BTNode<T>> OutStack = new Stack<BTNode<T>>();
            while (node != null || !(S.Count == 0))
            {
                while (node != null)
                {
                    S.Push(node);
                    OutStack.Push(node);
                    node = node.rightnode;
                }
                if (!(S.Count() == 0))
                {
                    node = S.Pop();
                    node = node.leftnode;
                }
            }
            while (OutStack.Count > 0)
            {
                BTNode<T> outNode = OutStack.Pop();
                VisitNode(outNode);
            }
        }
        // levelOrder iteration
        public void levelOrderWithoutIteration()
        {
            Console.Write("levelOrder interate binary tree: ");
            levelOrderWithoutIteration(this.root);
            Console.WriteLine();
        }
        public void levelOrderWithoutIteration(BTNode<T> BT)
        {
            if(BT == null)
            {
                return;
            }
            Queue<BTNode<T>> queue = new Queue<BTNode<T>>();
            int deepth = 0;
            int levelnodecount = 0;
            BTNode<T> outnode;
            queue.Enqueue(BT);
            while (!(queue.Count() == 0))
            {
                ++deepth;
                levelnodecount = queue.Count();
                for (int i = 0; i < levelnodecount; ++i)
                {
                    outnode = queue.Dequeue();
                    VisitNode(outnode);
                    if (outnode.leftnode != null) queue.Enqueue(outnode.leftnode);
                    if (outnode.rightnode != null) queue.Enqueue(outnode.rightnode);
                }
            }
        }
        public void VisitNode(BTNode<T> node)
        {
            output += node.data.ToString() + " ";
        }
        public void PrintTree()
        {
            Console.Write(output);
            output = "";
        }
    }
}
