/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        auto dp=new ListNode(0);
        dp->next=head;
        ListNode* p=dp;
        while(p->next!=NULL&&p->next->next!=NULL)
        {
            auto t1=p->next;
            auto t2=p->next->next;
            p->next=t2;
            t1->next=t2->next;
            t2->next=t1;
            p=p->next->next;

        }
        return dp->next;
    }
};
// @lc code=end

