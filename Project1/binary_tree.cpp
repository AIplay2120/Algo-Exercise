/*链式存储结构*/
#include<iostream>;
#include<vector>;
#include<queue>;
using namespace std;

/*二叉树节点结构体*/
struct TreeNode {
	int val;
	TreeNode* lightnode;
	TreeNode* rightnode;
	TreeNode(int x):val(x),lightnode(nullptr),rightnode(nullptr){}
};

/*队列实现，层序遍历*/
vector<int> levelOrder(TreeNode*root) {
	//初始化队列
	queue<TreeNode*> qtr;
	qtr.push(root);
	//初始化一个列表，保存遍历后的值
	vector<int> vale;
	while (!qtr.empty()) {
		TreeNode* node = qtr.front();
		qtr.pop();
		vale.push_back(node->val);
		if(node->lightnode!=nullptr){
			qtr.push(node->lightnode);
		}
		if (node->rightnode != nullptr) {
			qtr.push(node->rightnode);
		}
		
	}
	return vale;

}
/*前序遍历*/


/*中序遍历*/


/*后序遍历*/

int main() {
	/*初始化二叉树*/
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	TreeNode* n6 = new TreeNode(6);
	TreeNode* n7 = new TreeNode(7);


	//构建引用指向
	n1->lightnode = n2;
	n1->rightnode = n3;
	n2->lightnode = n4;
	n2->rightnode = n5;
	n3->lightnode = n6;
	n3->rightnode = n7;


}