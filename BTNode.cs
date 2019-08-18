using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearchTree
{
    public class BTNode<T>
    {
        internal T data;
        internal BTNode<T> leftnode;
        internal BTNode<T> rightnode;

        public T Data
        {
            get
            {
                return data;
            }
            set
            {
                data = value;
            }
        }
        public BTNode<T> LeftNode
        {
            get
            {
                return leftnode;
            }
            set
            {
                leftnode = value;
            }
        }
        public BTNode<T> RightNode
        {
            get
            {
                return leftnode;
            }
            set
            {
                rightnode = value;
            }
        }
        public BTNode(T _data, BTNode<T> _left=null, BTNode<T> _right=null)
        {
            this.data = _data;
            this.leftnode = _left;
            this.rightnode = _right;
        }
        public BTNode(T _data): this(_data, null, null)
        {
            
        }
        public void SetLRChild(BTNode<T> _left, BTNode<T> _right)
        {
            this.leftnode = _left;
            this.rightnode = _right;
        }
        public void SetLChild(BTNode<T> _left)
        {
            this.leftnode = _left;
        }
        public void SetRChild(BTNode<T> _right)
        {
            this.rightnode = _right;
        }
    }
}
