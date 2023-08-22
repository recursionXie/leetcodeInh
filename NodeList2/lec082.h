#pragma once
#include<iostream>
#include<Vector>
#include<stdlib.h>
#include <unordered_set>
#include <algorithm>
#include "../NodeList/MyList.h"
using namespace std;

class Solution082 {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr)
		{
			return head;
		}
		if (head->next == nullptr)
		{
			return head;
		}
		ListNode* head0 = new ListNode(-101);
		head0->next = head;
		ListNode* pre = head0;
		
		while (head && head->next)
		{
			if (head->val != head->next->val)
			{
				pre = head;
				head = head->next;
			}
			else
			{
				while (head&&head->next&&head->val == head->next->val)
				{
					head = head->next;
				}
				pre->next = head->next;
				head = head->next;
			}
		}

		return head0->next;
	}
	//	输入函数
	void ShuRu()
	{
		cout << "please putin num list" << endl;
		Node1 = CreateList();
		cin.clear();
		cin.ignore();
	}
	// 输出函数
	void CalcResult()
	{
		cout << "the result is: " << endl;
		ListNode* res = deleteDuplicates(Node1);
		while (res)
		{
			cout << res->val << " ";
			res = res->next;
		}

		cout << endl;
	}

public:
	int m_N = 0;
	int m_K = 0;
	vector<int> m_List;
	ListNode * Node1;
	ListNode * Node2;

};