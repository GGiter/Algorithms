#pragma once

template <typename T>
struct Node
{
	T value;
	Node* next;
};

template <typename T>
class LinkedList
{
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}

	~LinkedList()
	{
		Node<T>* next;
		while (head != nullptr)
		{
			next = head->next;
			delete head;
			head = next;
		}
	}

	void add_node(const T& value)
	{
		Node<T>* node = new Node;
		node->value = value;
		node->next = nullptr;

		if (head == nullptr)
		{
			head = node;
			tail = node;
		}
		else
		{
			tail->next = node;
			tail = tail->next;
		}
	}

	void remove_node(const T& value)
	{
		Node<T>* node = head;
		while (node != nullptr)
		{
			if (node->value == value)
			{
				head = node->next;
				delete node;
			}

			node = node->next;
		}
	}

	constexpr size_t size()
	{
		size_t count = 0;
		Node<T>* node = head;
		while (node != nullptr)
		{
			node = node->next;
			count++;
		}
		return count;
	}

	

private:
	Node* head;
	Node* tail;
};