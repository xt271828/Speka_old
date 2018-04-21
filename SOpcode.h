#pragma once

enum class SOpcode
{
	none,
	add,
	sub,
	div,
	mul,
	eq,
	lt,
	le,
	ge,
	gt,
	bz,
	jmp,
	ne,
	not,
	and,
	or ,
	load_class,
	set_class,
	load_attr,
	set_attr,
	load_local,
	set_local,
	call,
	call_native,
	deep_copy,
	load_function,
	new_table,
	load_const_i,
	load_const_f,
	load_const_str,
	load_idx,
	set_idx,
	ret,
	pop_top,
	push,
	push_this,
	load_this,
	dup,
	jmp_to_entry,
	inc_bp,
	neg,
	new_object
};