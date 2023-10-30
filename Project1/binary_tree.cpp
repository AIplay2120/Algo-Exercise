/*��ʽ�洢�ṹ*/
#include<iostream>;
#include<vector>;
#include<queue>;
using namespace std;

/*�������ڵ�ṹ��*/
struct TreeNode {
	int val;
	TreeNode* lightnode;
	TreeNode* rightnode;
	TreeNode(int x):val(x),lightnode(nullptr),rightnode(nullptr){}
};

/*����ʵ�֣��������*/
vector<int> levelOrder(TreeNode*root) {
	//��ʼ������
	queue<TreeNode*> qtr;
	qtr.push(root);
	//��ʼ��һ���б�����������ֵ
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
/*ǰ�����*/


/*�������*/


/*�������*/

int main() {
	/*��ʼ��������*/
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	TreeNode* n6 = new TreeNode(6);
	TreeNode* n7 = new TreeNode(7);


	//��������ָ��
	n1->lightnode = n2;
	n1->rightnode = n3;
	n2->lightnode = n4;
	n2->rightnode = n5;
	n3->lightnode = n6;
	n3->rightnode = n7;


}