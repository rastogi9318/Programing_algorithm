int GetNth(struct node* head, int index){
  // Code here
  if(head==NULL)
  {
      return 0;
  }
  int count = 0;
  while(head!=NULL)
  {
      if(index-1 == count)
      {
          return head->data;
      }
      else
      {
          count++;
          head = head->next;
      }
  }
}
