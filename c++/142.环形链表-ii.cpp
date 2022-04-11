/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto f=head,s=head;
        while(f&&f->next)
        {
            f=f->next->next;
            s=s->next;
            if(f==s)
            {
                auto t1=f;
                auto t2=head;
                while(!(t1==t2)){
                    t1=t1->next;
                    t2=t2->next;
                }
                return t1;
            }
        }
        return NULL;
    }
    
};
// @lc code=end

