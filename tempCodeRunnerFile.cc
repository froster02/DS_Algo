//node* merge(node *A, node *B){
//     //base case
//     if(A == NULL)
//         return B;
//     if(B == NULL)
//         return A;
    
//     //take a head pointer
//     node *C;

//     if((A->data) < (B->data)) {
//         C = A;
//         C->next = merge(A->next, B);
//     } else {
//         C = B;
//         C->next = merge(A, B->next);
//     }
//     return C;
// }

// node* mergesort(node *head) {
//     //base case
//     if(head == NULL || head->next == NULL)
//         return head;
    
//     //rec case
//     //1. Break
//     node *mid = middleElement(head);
//     node *a = head;
//     node *b = mid->next;

//     mid->next = NULL;

//     //2. Rec sort the two part
//     a = mergesort(a);
//     b = mergesort(b);

//     //3. Merge 
//     node *c = merge(a, b);
//     return c;
// }
