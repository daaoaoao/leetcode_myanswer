/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x):val(x),next(NULL){}
    };
    MyLinkedList() {
        //虚拟头结点
        _dummyHead=new ListNode(0);
        _size=0;
    }
    
    int get(int index) {
        if(index<0||index>=_size)
        {
            return -1;
        }
        ListNode* p=_dummyHead->next;
        while (index--)
        {
            p=p->next;
        }
        return p->val;
    }
    
    void addAtHead(int val) {
        ListNode* p=new ListNode(val);
        p->next=_dummyHead->next;
        _dummyHead->next=p;
        _size++;
    }
    
    void addAtTail(int val) {
        ListNode* p=new ListNode(val);
        ListNode* q=_dummyHead;
        while(q->next!=NULL&&q!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>_size)
        {
            return;
        }
        if(index<0)
            addAtHead(val);
        ListNode* p=new ListNode(val);
        ListNode* q=_dummyHead;
        for(int i=0;i<index;i++)
        {
            q=q->next;
        }
        p->next=q->next;
        q->next=p;
        _size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>=_size)
        {
            return;
        }
        ListNode* p=_dummyHead;
        for(int i=0;i<index;i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        _size--;
    }
    private:
    int _size;
    ListNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

