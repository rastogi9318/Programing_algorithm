Node* solve(Node* list1, Node* list2)
    {
        if(list1->next==NULL)
        {
            list1->next=list2;
            return list1;
        }
        Node* curr1 = list1;
        Node* next1 = list1->next;
        Node* curr2 = list2;
        Node* next2 = curr2->next;
        while(next1!=NULL && curr2!=NULL)
        {
            if((curr2->data>=curr1->data) && (curr2->data<=next1->data))
            {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                curr1 = curr2;
                curr2 = next2;
            }
            else
            {
                curr1 = next1;
                next1=next1->next;
                if(next1==NULL)
                {
                    curr1->next=curr2;
                    return list1;
                }
            }
        }
        return list1;
    }
Node* sortedMerge(Node* list1, Node* list2)  
{  
    // code here
    if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        if(list1->data<=list2->data)
        {
            return solve(list1,list2);
        }
        else 
        {
            return solve(list2,list1);
        }
    }
 
