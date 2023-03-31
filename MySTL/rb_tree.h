#ifndef MYSTL_RB_TREE_H
#define MYSTL_RB_TREE_H

// ���ͷ�ļ�����һ��ģ���� rb_tree
// rb_tree : �����

#include <initializer_list>

#include <cassert>

#include "functional.h"
#include "iterator.h"
#include "memory.h"
#include "type_traits.h"
#include "exceptdef.h"

namespace mystl
{
	// rb tree �ڵ���ɫ������

	typedef bool rb_tree_color_type;

	static constexpr rb_tree_color_type rb_tree_red = false;
	static constexpr rb_tree_color_type rb_tree_black = true;

	// forward declaration

	template <class T> struct rb_tree_node_base;
	template <class T> struct rb_tree_node_iterator;
}
#endif // !MYSTL_RB_TREE_H