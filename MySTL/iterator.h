#ifndef MYSTL_ITERATOR_H
#define MYSTL_ITERATOR_H

// ���ͷ�ļ����ڵ�������ƣ�������һЩģ��ṹ����ȫ�ֺ���

#include <cstddef>

#include "type_traits.h"

namespace mystl
{
	// ���ֵ���������
	struct input_iterator_tag {};
	struct output_iterator_tag {};
	struct forward_iterator_tag : public input_iterator_tag {};
	struct bidirectional_iterator_tag : public forward_iterator_tag {};
	struct random_access_iterator_tag : public bidirectional_iterator_tag {};

	// iterator ģ��
	template <class Category, class T, class Distance = ptrdiff_t,
		class Pointer = T*, class Reference = T&>
		struct iterator
	{
		typedef Category                             iterator_category;
		typedef T                                    value_type;
		typedef Pointer                              pointer;
		typedef Reference                            reference;
		typedef Distance                             difference_type;
	};

	// iterator traits

	template <class T>
	struct has_iterator_cat
	{
	private:
		struct two { char a; char b; };
		template <class U> static two test(...);
		template <class U> static char test(typename U::iterator_category* = 0);
	public:
		static const bool value = sizeof(test<T>(0)) == sizeof(char);
	};

}

#endif // !MYSTL_ITERATOR_H

