using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearchTree
{
    class Program
    {
        static void make(ref BinTree<char> bTree)
        {
            BTNode<char> d_node = new BTNode<char>('D', null, new BTNode<char>('G'));
            BTNode<char> b_node = new BTNode<char>('B', d_node, null);
            BTNode<char> f_node = new BTNode<char>('F', new BTNode<char>('H'), null);
            BTNode<char> c_node = new BTNode<char>('C', new BTNode<char>('E'), f_node);
            BTNode<char> a_node = new BTNode<char>('A', b_node, c_node);
            bTree.root = a_node;
        }
        static void make_2(ref BinTreeWithoutIteration<int> bTree)
        {
            BTNode<int> d_node = new BTNode<int>(4, null, new BTNode<int>(7));
            BTNode<int> b_node = new BTNode<int>(2, d_node, null);
            BTNode<int> f_node = new BTNode<int>(6, new BTNode<int>(8), null);
            BTNode<int> c_node = new BTNode<int>(3, new BTNode<int>(5), f_node);
            BTNode<int> a_node = new BTNode<int>(1, b_node, c_node);
            bTree.root = a_node;
        }
        static void Main(string[] args)
        {
            BinTree<char> tree = new BinTree<char>();
            BinTreeWithoutIteration<int> tree2 = new BinTreeWithoutIteration<int>();
            Program.make_2(ref tree2);
            Program.make(ref tree);
            tree.preOrder();
            tree.inOrder();
            tree.postOrder();
            Console.WriteLine("--------------------------------");
            tree2.preOrderWithoutIteration();
            tree2.PrintTree();
            Console.WriteLine("--------------------------------");
            tree2.inOrderWithoutIteration();
            tree2.PrintTree();
            Console.WriteLine("--------------------------------");
            tree2.postOrderWithoutIteration();
            tree2.PrintTree();
            Console.WriteLine("--------------------------------");
            tree2.levelOrderWithoutIteration();
            tree2.PrintTree();
            Console.ReadKey();

        }
    }
}
