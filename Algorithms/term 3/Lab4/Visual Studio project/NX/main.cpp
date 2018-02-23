#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Node
{
int data_1;
int data_2;

Node *Last;
Node *left;
Node *center;
Node *right;
};

void add_new_node(int data, Node *&NowTr, Node *Last);
void write_node(Node *NowTr);



int main()
{
srand ( time(NULL) );
Node *head ;// = new Node;
head = NULL;


int dt[20];
int i;
for(i=1;i<=3;i++)
{
    dt[i] = rand()%100;
add_new_node(dt[i],head,NULL);
};
cout << "__________" << endl;
for(i=1;i<=3;i++)
cout << dt[i] << endl;
cout << "__________" << endl;

cout << "_____________"<< endl;
write_node(head);
        cout << "Hello world!" << endl;
    return 0;
};








	void add_new_node(int data, Node *&NowTr, Node *Last)
	{
		bool t = true;
		if (NowTr == NULL)
		{
			NowTr = new Node;
			NowTr->Last = Last;
			NowTr->data_1 = data;
			NowTr->data_2 = 0;
			NowTr->left = NULL;
			NowTr->center = NULL;
			NowTr->right = NULL;
			t = false;
		};


		if ((NowTr->data_2 == 0) && (t))
		{
			if (NowTr->data_1 <= data)
				NowTr->data_2 = data;
			else
			{
				NowTr->data_2 = NowTr->data_1;
				NowTr->data_1 = data;
			};
		}
		else
        if(t)
		{


			if (data<NowTr->data_1)
			{
				if (NowTr->left != NULL) add_new_node(data, NowTr->left, NowTr);
				else
				{
					NowTr->left = new Node;
					NowTr->left->Last = Last;
					NowTr->left->left = NowTr->left->right = NowTr->left->center = NULL;
					NowTr->left->data_2 = NowTr->left->data_1 = 0;
					if (NowTr->left->data_1 > data)
					{
						NowTr->left->data_2 = NowTr->left->data_1;
						NowTr->left->data_1 = data;
					}
					else
					{
						if (NowTr->left->data_1 == 0)
							NowTr->left->data_1 = data;
						else NowTr->left->data_2 = data;
					};

				};
			};

			if ((data >= NowTr->data_1) && (data <= NowTr->data_2))
			{
				if (NowTr->center != NULL) add_new_node(data, NowTr->center, NowTr);
				else
				{
					NowTr->center = new Node;
					NowTr->center->Last = Last;
					NowTr->center->left = NowTr->center->right = NowTr->center->center = NULL;
					NowTr->center->data_2 = NowTr->center->data_1 = 0;
					if (NowTr->center->data_1 > data)
					{
						NowTr->center->data_2 = NowTr->center->data_1;
						NowTr->center->data_1 = data;
					}
					else
					{
						if (NowTr->center->data_1 == 0)
							NowTr->center->data_1 = data;
						else NowTr->center->data_2 = data;
					};
				};
			};

			if (data > NowTr->data_2)
			{
				if (NowTr->right != NULL) add_new_node(data, NowTr->right, NowTr);
				else
				{
					NowTr->right = new Node;
					NowTr->right->Last = Last;
					NowTr->right->left = NowTr->right->right = NowTr->right->center = NULL;
					NowTr->right->data_2 = NowTr->right->data_1 = 0;
					if (NowTr->right->data_1 > data)
					{
						NowTr->right->data_2 = NowTr->right->data_1;
						NowTr->right->data_1 = data;
					}
					else
					{
						if (NowTr->right->data_1 == 0)
							NowTr->right->data_1 = data;
						else NowTr->right->data_2 = data;
					};
				};
			};
		};
	};


void write_node(Node *NowTr)
{
if(NowTr!= NULL)
    {
    cout << "|_";
    if(NowTr->data_1 != 0) cout << NowTr->data_1;
    cout << "_|_";
    if(NowTr->data_2 != 0) cout << NowTr->data_2;
    cout << "_|";
    cout << endl;
    cout << "Left      =  ";
    write_node(NowTr->left);
    cout << "Center    =  ";
    write_node(NowTr->center);
    cout << "Right     =  ";
    write_node(NowTr->right);
    cout << endl;
    };
};

