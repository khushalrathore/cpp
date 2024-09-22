#include <iostream>

class Node
{
public:
    int data{};
    Node *next;

    Node(int value) : data(value), next(nullptr) {};
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printList(Node *&head)
{
    Node *temp = head;
    std::cout << "\n";
    while (temp->next != nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << temp->data;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

size_t lengthOfList(Node *head)
{
    size_t length{};
    while (head != nullptr)
    {
        length++;
        head = head->next;
    }
    return length;
}

void insertAtPosition(Node *&head, int position, int data, Node *&tail)
{
    if (position > 0 && position <= lengthOfList(head))
    {
        if (position <= 1)
        {
            insertAtHead(head, data);
        }

        else
        {
            Node *temp = head;
            if (temp->next != nullptr)
            {
                int count = 1;
                while (count < position - 1)
                {
                    temp = temp->next;
                    count++;
                }
                Node *dataNode = new Node(data);
                dataNode->next = temp->next;
                temp->next = dataNode;
            }

            else
            {
                insertAtTail(tail, data);
            }
        }
    }
    else
    {
        std::cout << "\n\nCan't insert at position < 1 or > size";
        return;
    }
}

void printListInfo(Node *head, Node *tail)
{
    std::cout << "\n{ size : " + std::to_string(lengthOfList(head))
              << ", head : " + std::to_string(head->data)
              << ", tail : " + std::to_string(tail->data)
              << " }\n\n";
}

void solve()
{
    Node *node1 = new Node(2);
    Node *head = node1;
    Node *tail = node1;

    printList(head);
    printListInfo(head, tail);

    // insert at head
    insertAtHead(head, 64);
    printList(head);
    printListInfo(head, tail);

    // insert at tail
    insertAtTail(tail, 20);
    printList(head);
    printListInfo(head, tail);

    // insert at position i
    insertAtPosition(head, 0, 32, tail);
    printList(head);
    printListInfo(head, tail);

    delete head;
    delete tail;
}

int main()
{
    solve();
    return 0;
}