/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=head;
        while (head!=NULL&&head->val==val)
        {
            head=head->next;
        }
        while(p!=NULL&&p->next!=NULL)
        {
            if(p->next->val==val)
            {
                ListNode* t=p->next;
                p->next=t->next;
                delete t;
            }
            else
            {
                p=p->next;
            }
        }
        return head;
    }
};
// @lc code=end

