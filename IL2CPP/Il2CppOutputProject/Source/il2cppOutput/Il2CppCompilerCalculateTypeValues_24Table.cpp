﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t417719465;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1624492310;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2114160833;
// System.Net.Cache.RequestCache
struct RequestCache_t3669488992;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t587568667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2091847364;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t4224248211;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1318642398;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.StringComparer
struct StringComparer_t3301955079;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3075152201;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t2786897858;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t1151641153;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t687896682;
// System.Net.IWebProxy
struct IWebProxy_t688979836;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3590861854;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Void
struct Void_t1185182177;
// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



#ifndef U3CMODULEU3E_T692745527_H
#define U3CMODULEU3E_T692745527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745527 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745527_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LISTDICTIONARY_T1624492310_H
#define LISTDICTIONARY_T1624492310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1624492310  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t417719465 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___head_0)); }
	inline DictionaryNode_t417719465 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t417719465 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t417719465 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_t1624492310, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1624492310_H
#ifndef HYBRIDDICTIONARY_T4070033136_H
#define HYBRIDDICTIONARY_T4070033136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t4070033136  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1853889766 * ___hashtable_1;
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___hashtable_1)); }
	inline Hashtable_t1853889766 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1853889766 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1853889766 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_caseInsensitive_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t4070033136, ___caseInsensitive_2)); }
	inline bool get_caseInsensitive_2() const { return ___caseInsensitive_2; }
	inline bool* get_address_of_caseInsensitive_2() { return &___caseInsensitive_2; }
	inline void set_caseInsensitive_2(bool value)
	{
		___caseInsensitive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T4070033136_H
#ifndef REQUESTCACHEPROTOCOL_T3614465628_H
#define REQUESTCACHEPROTOCOL_T3614465628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t3614465628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T3614465628_H
#ifndef NODEKEYVALUEENUMERATOR_T642906510_H
#define NODEKEYVALUEENUMERATOR_T642906510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_t642906510  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t642906510, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUEENUMERATOR_T642906510_H
#ifndef DICTIONARYNODE_T417719465_H
#define DICTIONARYNODE_T417719465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t417719465  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t417719465 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t417719465, ___next_2)); }
	inline DictionaryNode_t417719465 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t417719465 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t417719465 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T417719465_H
#ifndef NODEENUMERATOR_T3248827953_H
#define NODEENUMERATOR_T3248827953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct  NodeEnumerator_t3248827953  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::current
	DictionaryNode_t417719465 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::start
	bool ___start_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___current_1)); }
	inline DictionaryNode_t417719465 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t417719465 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t417719465 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(NodeEnumerator_t3248827953, ___start_3)); }
	inline bool get_start_3() const { return ___start_3; }
	inline bool* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(bool value)
	{
		___start_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEENUMERATOR_T3248827953_H
#ifndef NODEKEYVALUECOLLECTION_T1279341543_H
#define NODEKEYVALUECOLLECTION_T1279341543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct  NodeKeyValueCollection_t1279341543  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_t1624492310 * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___list_0)); }
	inline ListDictionary_t1624492310 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t1624492310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t1624492310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t1279341543, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUECOLLECTION_T1279341543_H
#ifndef REQUESTCACHE_T3669488992_H
#define REQUESTCACHE_T3669488992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t3669488992  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t3669488992_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t3528271667* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t3669488992_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t3528271667* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t3528271667** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t3528271667* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T3669488992_H
#ifndef CONTENTINFO_T3218159896_H
#define CONTENTINFO_T3218159896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159896  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160833 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___content_1)); }
	inline ASN1_t2114160833 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160833 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160833 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3218159896_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef REQUESTCACHEVALIDATOR_T587568667_H
#define REQUESTCACHEVALIDATOR_T587568667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t587568667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T587568667_H
#ifndef BITCONVERTERLE_T2108532979_H
#define BITCONVERTERLE_T2108532979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2108532979_H
#ifndef PKCS7_T1860834339_H
#define PKCS7_T1860834339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1860834339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1860834339_H
#ifndef REQUESTCACHEBINDING_T2614858269_H
#define REQUESTCACHEBINDING_T2614858269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t2614858269  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t3669488992 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t587568667 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_RequestCache_0)); }
	inline RequestCache_t3669488992 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t3669488992 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t3669488992 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t2614858269, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t587568667 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t587568667 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t587568667 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T2614858269_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t1788601968  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifndef ATTRLISTIMPL_T3972417595_H
#define ATTRLISTIMPL_T3972417595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.MiniParser/AttrListImpl
struct  AttrListImpl_t3972417595  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Xml.MiniParser/AttrListImpl::names
	ArrayList_t2718874744 * ___names_0;
	// System.Collections.ArrayList Mono.Xml.MiniParser/AttrListImpl::values
	ArrayList_t2718874744 * ___values_1;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t3972417595, ___names_0)); }
	inline ArrayList_t2718874744 * get_names_0() const { return ___names_0; }
	inline ArrayList_t2718874744 ** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(ArrayList_t2718874744 * value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t3972417595, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRLISTIMPL_T3972417595_H
#ifndef HANDLERADAPTER_T2021361818_H
#define HANDLERADAPTER_T2021361818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.MiniParser/HandlerAdapter
struct  HandlerAdapter_t2021361818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLERADAPTER_T2021361818_H
#ifndef MINIPARSER_T1919256552_H
#define MINIPARSER_T1919256552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.MiniParser
struct  MiniParser_t1919256552  : public RuntimeObject
{
public:
	// System.Int32 Mono.Xml.MiniParser::line
	int32_t ___line_3;
	// System.Int32 Mono.Xml.MiniParser::col
	int32_t ___col_4;
	// System.Int32[] Mono.Xml.MiniParser::twoCharBuff
	Int32U5BU5D_t385246372* ___twoCharBuff_5;
	// System.Boolean Mono.Xml.MiniParser::splitCData
	bool ___splitCData_6;

public:
	inline static int32_t get_offset_of_line_3() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552, ___line_3)); }
	inline int32_t get_line_3() const { return ___line_3; }
	inline int32_t* get_address_of_line_3() { return &___line_3; }
	inline void set_line_3(int32_t value)
	{
		___line_3 = value;
	}

	inline static int32_t get_offset_of_col_4() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552, ___col_4)); }
	inline int32_t get_col_4() const { return ___col_4; }
	inline int32_t* get_address_of_col_4() { return &___col_4; }
	inline void set_col_4(int32_t value)
	{
		___col_4 = value;
	}

	inline static int32_t get_offset_of_twoCharBuff_5() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552, ___twoCharBuff_5)); }
	inline Int32U5BU5D_t385246372* get_twoCharBuff_5() const { return ___twoCharBuff_5; }
	inline Int32U5BU5D_t385246372** get_address_of_twoCharBuff_5() { return &___twoCharBuff_5; }
	inline void set_twoCharBuff_5(Int32U5BU5D_t385246372* value)
	{
		___twoCharBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___twoCharBuff_5), value);
	}

	inline static int32_t get_offset_of_splitCData_6() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552, ___splitCData_6)); }
	inline bool get_splitCData_6() const { return ___splitCData_6; }
	inline bool* get_address_of_splitCData_6() { return &___splitCData_6; }
	inline void set_splitCData_6(bool value)
	{
		___splitCData_6 = value;
	}
};

struct MiniParser_t1919256552_StaticFields
{
public:
	// System.Int32 Mono.Xml.MiniParser::INPUT_RANGE
	int32_t ___INPUT_RANGE_0;
	// System.UInt16[] Mono.Xml.MiniParser::tbl
	UInt16U5BU5D_t3326319531* ___tbl_1;
	// System.String[] Mono.Xml.MiniParser::errors
	StringU5BU5D_t1281789340* ___errors_2;

public:
	inline static int32_t get_offset_of_INPUT_RANGE_0() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552_StaticFields, ___INPUT_RANGE_0)); }
	inline int32_t get_INPUT_RANGE_0() const { return ___INPUT_RANGE_0; }
	inline int32_t* get_address_of_INPUT_RANGE_0() { return &___INPUT_RANGE_0; }
	inline void set_INPUT_RANGE_0(int32_t value)
	{
		___INPUT_RANGE_0 = value;
	}

	inline static int32_t get_offset_of_tbl_1() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552_StaticFields, ___tbl_1)); }
	inline UInt16U5BU5D_t3326319531* get_tbl_1() const { return ___tbl_1; }
	inline UInt16U5BU5D_t3326319531** get_address_of_tbl_1() { return &___tbl_1; }
	inline void set_tbl_1(UInt16U5BU5D_t3326319531* value)
	{
		___tbl_1 = value;
		Il2CppCodeGenWriteBarrier((&___tbl_1), value);
	}

	inline static int32_t get_offset_of_errors_2() { return static_cast<int32_t>(offsetof(MiniParser_t1919256552_StaticFields, ___errors_2)); }
	inline StringU5BU5D_t1281789340* get_errors_2() const { return ___errors_2; }
	inline StringU5BU5D_t1281789340** get_address_of_errors_2() { return &___errors_2; }
	inline void set_errors_2(StringU5BU5D_t1281789340* value)
	{
		___errors_2 = value;
		Il2CppCodeGenWriteBarrier((&___errors_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINIPARSER_T1919256552_H
#ifndef LOCALE_T4128636108_H
#define LOCALE_T4128636108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636108  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636108_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#define ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t1215437281  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifndef NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#define NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct  NameObjectKeysEnumerator_t3824388371  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__coll_1() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____coll_1)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_1() const { return ____coll_1; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_1() { return &____coll_1; }
	inline void set__coll_1(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_1 = value;
		Il2CppCodeGenWriteBarrier((&____coll_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t3824388371, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTKEYSENUMERATOR_T3824388371_H
#ifndef ASN1CONVERT_T2839890153_H
#define ASN1CONVERT_T2839890153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2839890153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2839890153_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#define NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2091847364  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t2718874744 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t1853889766 * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t4224248211 * ____nullKeyEntry_4;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t1318642398 * ____keys_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t950877179 * ____serializationInfo_6;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_7;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_8;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesArray_1)); }
	inline ArrayList_t2718874744 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t2718874744 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t2718874744 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____entriesArray_1), value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyComparer_2), value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____entriesTable_3)); }
	inline Hashtable_t1853889766 * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t1853889766 ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t1853889766 * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____entriesTable_3), value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____nullKeyEntry_4)); }
	inline NameObjectEntry_t4224248211 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_t4224248211 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_t4224248211 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((&____nullKeyEntry_4), value);
	}

	inline static int32_t get_offset_of__keys_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____keys_5)); }
	inline KeysCollection_t1318642398 * get__keys_5() const { return ____keys_5; }
	inline KeysCollection_t1318642398 ** get_address_of__keys_5() { return &____keys_5; }
	inline void set__keys_5(KeysCollection_t1318642398 * value)
	{
		____keys_5 = value;
		Il2CppCodeGenWriteBarrier((&____keys_5), value);
	}

	inline static int32_t get_offset_of__serializationInfo_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____serializationInfo_6)); }
	inline SerializationInfo_t950877179 * get__serializationInfo_6() const { return ____serializationInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__serializationInfo_6() { return &____serializationInfo_6; }
	inline void set__serializationInfo_6(SerializationInfo_t950877179 * value)
	{
		____serializationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____serializationInfo_6), value);
	}

	inline static int32_t get_offset_of__version_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____version_7)); }
	inline int32_t get__version_7() const { return ____version_7; }
	inline int32_t* get_address_of__version_7() { return &____version_7; }
	inline void set__version_7(int32_t value)
	{
		____version_7 = value;
	}

	inline static int32_t get_offset_of__syncRoot_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364, ____syncRoot_8)); }
	inline RuntimeObject * get__syncRoot_8() const { return ____syncRoot_8; }
	inline RuntimeObject ** get_address_of__syncRoot_8() { return &____syncRoot_8; }
	inline void set__syncRoot_8(RuntimeObject * value)
	{
		____syncRoot_8 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_8), value);
	}
};

struct NameObjectCollectionBase_t2091847364_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t3301955079 * ___defaultComparer_9;

public:
	inline static int32_t get_offset_of_defaultComparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2091847364_StaticFields, ___defaultComparer_9)); }
	inline StringComparer_t3301955079 * get_defaultComparer_9() const { return ___defaultComparer_9; }
	inline StringComparer_t3301955079 ** get_address_of_defaultComparer_9() { return &___defaultComparer_9; }
	inline void set_defaultComparer_9(StringComparer_t3301955079 * value)
	{
		___defaultComparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2091847364_H
#ifndef KEYSCOLLECTION_T1318642398_H
#define KEYSCOLLECTION_T1318642398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t1318642398  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_t2091847364 * ____coll_0;

public:
	inline static int32_t get_offset_of__coll_0() { return static_cast<int32_t>(offsetof(KeysCollection_t1318642398, ____coll_0)); }
	inline NameObjectCollectionBase_t2091847364 * get__coll_0() const { return ____coll_0; }
	inline NameObjectCollectionBase_t2091847364 ** get_address_of__coll_0() { return &____coll_0; }
	inline void set__coll_0(NameObjectCollectionBase_t2091847364 * value)
	{
		____coll_0 = value;
		Il2CppCodeGenWriteBarrier((&____coll_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T1318642398_H
#ifndef ORDEREDDICTIONARY_T2617496293_H
#define ORDEREDDICTIONARY_T2617496293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t2617496293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t2718874744 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t1853889766 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t950877179 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsArray_0)); }
	inline ArrayList_t2718874744 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t2718874744 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t2718874744 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsTable_1)); }
	inline Hashtable_t1853889766 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t1853889766 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____siInfo_6)); }
	inline SerializationInfo_t950877179 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t950877179 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T2617496293_H
#ifndef ASN1_T2114160833_H
#define ASN1_T2114160833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160833  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160833_H
#ifndef COMPATIBLECOMPARER_T4154576053_H
#define COMPATIBLECOMPARER_T4154576053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CompatibleComparer
struct  CompatibleComparer_t4154576053  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_2() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053, ____hcp_2)); }
	inline RuntimeObject* get__hcp_2() const { return ____hcp_2; }
	inline RuntimeObject** get_address_of__hcp_2() { return &____hcp_2; }
	inline void set__hcp_2(RuntimeObject* value)
	{
		____hcp_2 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_2), value);
	}
};

struct CompatibleComparer_t4154576053_StaticFields
{
public:
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;

public:
	inline static int32_t get_offset_of_defaultComparer_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultComparer_1)); }
	inline RuntimeObject* get_defaultComparer_1() const { return ___defaultComparer_1; }
	inline RuntimeObject** get_address_of_defaultComparer_1() { return &___defaultComparer_1; }
	inline void set_defaultComparer_1(RuntimeObject* value)
	{
		___defaultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_1), value);
	}

	inline static int32_t get_offset_of_defaultHashProvider_3() { return static_cast<int32_t>(offsetof(CompatibleComparer_t4154576053_StaticFields, ___defaultHashProvider_3)); }
	inline RuntimeObject* get_defaultHashProvider_3() const { return ___defaultHashProvider_3; }
	inline RuntimeObject** get_address_of_defaultHashProvider_3() { return &___defaultHashProvider_3; }
	inline void set_defaultHashProvider_3(RuntimeObject* value)
	{
		___defaultHashProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHashProvider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T4154576053_H
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3075152201 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_7)); }
	inline Configuration_t2529364143 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2529364143 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2529364143 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_12)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___saveContext_14)); }
	inline SaveContext_t3075152201 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3075152201 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3075152201 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
#ifndef CONFIGURATIONSECTIONGROUP_T4179402520_H
#define CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t4179402520  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t2786897858 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t1151641153 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t2529364143 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t687896682 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___sections_0)); }
	inline ConfigurationSectionCollection_t2786897858 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t2786897858 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t2786897858 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t1151641153 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t1151641153 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t1151641153 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___config_2)); }
	inline Configuration_t2529364143 * get_config_2() const { return ___config_2; }
	inline Configuration_t2529364143 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t2529364143 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___group_3)); }
	inline SectionGroupInfo_t687896682 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t687896682 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t687896682 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t4179402520, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T4179402520_H
#ifndef CONNECTIONMANAGEMENTDATA_T2003128658_H
#define CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2003128658  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1853889766 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2003128658, ___data_0)); }
	inline Hashtable_t1853889766 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1853889766 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1853889766 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2003128658_H
#ifndef DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#define DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySectionInternal
struct  DefaultProxySectionInternal_t3889414525  : public RuntimeObject
{
public:
	// System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::webProxy
	RuntimeObject* ___webProxy_0;

public:
	inline static int32_t get_offset_of_webProxy_0() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525, ___webProxy_0)); }
	inline RuntimeObject* get_webProxy_0() const { return ___webProxy_0; }
	inline RuntimeObject** get_address_of_webProxy_0() { return &___webProxy_0; }
	inline void set_webProxy_0(RuntimeObject* value)
	{
		___webProxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___webProxy_0), value);
	}
};

struct DefaultProxySectionInternal_t3889414525_StaticFields
{
public:
	// System.Object System.Net.Configuration.DefaultProxySectionInternal::classSyncObject
	RuntimeObject * ___classSyncObject_1;

public:
	inline static int32_t get_offset_of_classSyncObject_1() { return static_cast<int32_t>(offsetof(DefaultProxySectionInternal_t3889414525_StaticFields, ___classSyncObject_1)); }
	inline RuntimeObject * get_classSyncObject_1() const { return ___classSyncObject_1; }
	inline RuntimeObject ** get_address_of_classSyncObject_1() { return &___classSyncObject_1; }
	inline void set_classSyncObject_1(RuntimeObject * value)
	{
		___classSyncObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___classSyncObject_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTIONINTERNAL_T3889414525_H
#ifndef NAMEOBJECTENTRY_T4224248211_H
#define NAMEOBJECTENTRY_T4224248211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct  NameObjectEntry_t4224248211  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4224248211, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTENTRY_T4224248211_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885683 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885683__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885683_H
#ifndef SOCKADDR_DL_T1317779094_H
#define SOCKADDR_DL_T1317779094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t1317779094 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t4116647657* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_data_7)); }
	inline ByteU5BU5D_t4116647657* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t4116647657* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t* ___sdl_data_7;
};
#endif // SOCKADDR_DL_T1317779094_H
#ifndef XMLERROR_T2931210838_H
#define XMLERROR_T2931210838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.MiniParser/XMLError
struct  XMLError_t2931210838  : public Exception_t
{
public:
	// System.String Mono.Xml.MiniParser/XMLError::descr
	String_t* ___descr_17;
	// System.Int32 Mono.Xml.MiniParser/XMLError::line
	int32_t ___line_18;
	// System.Int32 Mono.Xml.MiniParser/XMLError::column
	int32_t ___column_19;

public:
	inline static int32_t get_offset_of_descr_17() { return static_cast<int32_t>(offsetof(XMLError_t2931210838, ___descr_17)); }
	inline String_t* get_descr_17() const { return ___descr_17; }
	inline String_t** get_address_of_descr_17() { return &___descr_17; }
	inline void set_descr_17(String_t* value)
	{
		___descr_17 = value;
		Il2CppCodeGenWriteBarrier((&___descr_17), value);
	}

	inline static int32_t get_offset_of_line_18() { return static_cast<int32_t>(offsetof(XMLError_t2931210838, ___line_18)); }
	inline int32_t get_line_18() const { return ___line_18; }
	inline int32_t* get_address_of_line_18() { return &___line_18; }
	inline void set_line_18(int32_t value)
	{
		___line_18 = value;
	}

	inline static int32_t get_offset_of_column_19() { return static_cast<int32_t>(offsetof(XMLError_t2931210838, ___column_19)); }
	inline int32_t get_column_19() const { return ___column_19; }
	inline int32_t* get_address_of_column_19() { return &___column_19; }
	inline void set_column_19(int32_t value)
	{
		___column_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLERROR_T2931210838_H
#ifndef AUTHENTICATIONMODULEELEMENT_T2289740666_H
#define AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2289740666  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct AuthenticationModuleElement_t2289740666_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2289740666_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T2289740666_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367633 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367633__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529102 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529102__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifndef SOCKADDR_IN_T1317910171_H
#define SOCKADDR_IN_T1317910171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t1317910171 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T1317910171_H
#ifndef WEBREQUESTMODULEELEMENT_T1406085120_H
#define WEBREQUESTMODULEELEMENT_T1406085120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t1406085120  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebRequestModuleElement_t1406085120_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t3590861854 * ___prefixProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_prefixProp_16() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___prefixProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_prefixProp_16() const { return ___prefixProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_prefixProp_16() { return &___prefixProp_16; }
	inline void set_prefixProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___prefixProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___prefixProp_16), value);
	}

	inline static int32_t get_offset_of_typeProp_17() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t1406085120_StaticFields, ___typeProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_17() const { return ___typeProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_17() { return &___typeProp_17; }
	inline void set_typeProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENT_T1406085120_H
#ifndef SOCKADDR_T371844119_H
#define SOCKADDR_T371844119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t371844119 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T371844119_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366764 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366764__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366764_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278899 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278899__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278899_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689075 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689075__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689075_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994318 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994318__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994318_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125390 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125390__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125390_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563372 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563372__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563372_H
#ifndef SECURITYPARSER_T4124480078_H
#define SECURITYPARSER_T4124480078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SecurityParser
struct  SecurityParser_t4124480078  : public MiniParser_t1919256552
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1046076091 * ___root_7;
	// System.String Mono.Xml.SecurityParser::xmldoc
	String_t* ___xmldoc_8;
	// System.Int32 Mono.Xml.SecurityParser::pos
	int32_t ___pos_9;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1046076091 * ___current_10;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2329662280 * ___stack_11;

public:
	inline static int32_t get_offset_of_root_7() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480078, ___root_7)); }
	inline SecurityElement_t1046076091 * get_root_7() const { return ___root_7; }
	inline SecurityElement_t1046076091 ** get_address_of_root_7() { return &___root_7; }
	inline void set_root_7(SecurityElement_t1046076091 * value)
	{
		___root_7 = value;
		Il2CppCodeGenWriteBarrier((&___root_7), value);
	}

	inline static int32_t get_offset_of_xmldoc_8() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480078, ___xmldoc_8)); }
	inline String_t* get_xmldoc_8() const { return ___xmldoc_8; }
	inline String_t** get_address_of_xmldoc_8() { return &___xmldoc_8; }
	inline void set_xmldoc_8(String_t* value)
	{
		___xmldoc_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmldoc_8), value);
	}

	inline static int32_t get_offset_of_pos_9() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480078, ___pos_9)); }
	inline int32_t get_pos_9() const { return ___pos_9; }
	inline int32_t* get_address_of_pos_9() { return &___pos_9; }
	inline void set_pos_9(int32_t value)
	{
		___pos_9 = value;
	}

	inline static int32_t get_offset_of_current_10() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480078, ___current_10)); }
	inline SecurityElement_t1046076091 * get_current_10() const { return ___current_10; }
	inline SecurityElement_t1046076091 ** get_address_of_current_10() { return &___current_10; }
	inline void set_current_10(SecurityElement_t1046076091 * value)
	{
		___current_10 = value;
		Il2CppCodeGenWriteBarrier((&___current_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(SecurityParser_t4124480078, ___stack_11)); }
	inline Stack_t2329662280 * get_stack_11() const { return ___stack_11; }
	inline Stack_t2329662280 ** get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(Stack_t2329662280 * value)
	{
		___stack_11 = value;
		Il2CppCodeGenWriteBarrier((&___stack_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPARSER_T4124480078_H
#ifndef PERFORMANCECOUNTERSELEMENT_T4093363992_H
#define PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t4093363992  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct PerformanceCountersElement_t4093363992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_enabledProp_15() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___enabledProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_15() const { return ___enabledProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_15() { return &___enabledProp_15; }
	inline void set_enabledProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t4093363992_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T4093363992_H
#ifndef PROXYELEMENT_T3214064751_H
#define PROXYELEMENT_T3214064751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t3214064751  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ProxyElement_t3214064751_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t3590861854 * ___autoDetectProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t3590861854 * ___bypassOnLocalProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t3590861854 * ___proxyAddressProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t3590861854 * ___scriptLocationProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t3590861854 * ___useSystemDefaultProp_20;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___autoDetectProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_autoDetectProp_16() const { return ___autoDetectProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_autoDetectProp_16() { return &___autoDetectProp_16; }
	inline void set_autoDetectProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___autoDetectProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_16), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___bypassOnLocalProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_bypassOnLocalProp_17() const { return ___bypassOnLocalProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassOnLocalProp_17() { return &___bypassOnLocalProp_17; }
	inline void set_bypassOnLocalProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___bypassOnLocalProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_17), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___proxyAddressProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_proxyAddressProp_18() const { return ___proxyAddressProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyAddressProp_18() { return &___proxyAddressProp_18; }
	inline void set_proxyAddressProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___proxyAddressProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_18), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_19() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___scriptLocationProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_scriptLocationProp_19() const { return ___scriptLocationProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_scriptLocationProp_19() { return &___scriptLocationProp_19; }
	inline void set_scriptLocationProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___scriptLocationProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_19), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_20() { return static_cast<int32_t>(offsetof(ProxyElement_t3214064751_StaticFields, ___useSystemDefaultProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_useSystemDefaultProp_20() const { return ___useSystemDefaultProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useSystemDefaultProp_20() { return &___useSystemDefaultProp_20; }
	inline void set_useSystemDefaultProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___useSystemDefaultProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T3214064751_H
#ifndef NETSECTIONGROUP_T3270122580_H
#define NETSECTIONGROUP_T3270122580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t3270122580  : public ConfigurationSectionGroup_t4179402520
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T3270122580_H
#ifndef CASESENSITIVESTRINGDICTIONARY_T553067329_H
#define CASESENSITIVESTRINGDICTIONARY_T553067329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CaseSensitiveStringDictionary
struct  CaseSensitiveStringDictionary_t553067329  : public StringDictionary_t120437468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASESENSITIVESTRINGDICTIONARY_T553067329_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef SOCKETELEMENT_T3329874080_H
#define SOCKETELEMENT_T3329874080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t3329874080  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct SocketElement_t3329874080_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForAcceptProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t3590861854 * ___alwaysUseCompletionPortsForConnectProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_16() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForAcceptProp_16() const { return ___alwaysUseCompletionPortsForAcceptProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_16() { return &___alwaysUseCompletionPortsForAcceptProp_16; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForAcceptProp_16), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_17() { return static_cast<int32_t>(offsetof(SocketElement_t3329874080_StaticFields, ___alwaysUseCompletionPortsForConnectProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_alwaysUseCompletionPortsForConnectProp_17() const { return ___alwaysUseCompletionPortsForConnectProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_alwaysUseCompletionPortsForConnectProp_17() { return &___alwaysUseCompletionPortsForConnectProp_17; }
	inline void set_alwaysUseCompletionPortsForConnectProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForConnectProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETELEMENT_T3329874080_H
#ifndef WEBPROXYSCRIPTELEMENT_T477406598_H
#define WEBPROXYSCRIPTELEMENT_T477406598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t477406598  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct WebProxyScriptElement_t477406598_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t3590861854 * ___downloadTimeoutProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_16;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_15() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___downloadTimeoutProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_downloadTimeoutProp_15() const { return ___downloadTimeoutProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_downloadTimeoutProp_15() { return &___downloadTimeoutProp_15; }
	inline void set_downloadTimeoutProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___downloadTimeoutProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___downloadTimeoutProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t477406598_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXYSCRIPTELEMENT_T477406598_H
#ifndef SERVICEPOINTMANAGERELEMENT_T2768640361_H
#define SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t2768640361  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ServicePointManagerElement_t2768640361_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t3590861854 * ___checkCertificateNameProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t3590861854 * ___checkCertificateRevocationListProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t3590861854 * ___dnsRefreshTimeoutProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t3590861854 * ___enableDnsRoundRobinProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t3590861854 * ___expect100ContinueProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t3590861854 * ___useNagleAlgorithmProp_21;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_checkCertificateNameProp_16() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateNameProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateNameProp_16() const { return ___checkCertificateNameProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateNameProp_16() { return &___checkCertificateNameProp_16; }
	inline void set_checkCertificateNameProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateNameProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateNameProp_16), value);
	}

	inline static int32_t get_offset_of_checkCertificateRevocationListProp_17() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___checkCertificateRevocationListProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_checkCertificateRevocationListProp_17() const { return ___checkCertificateRevocationListProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_checkCertificateRevocationListProp_17() { return &___checkCertificateRevocationListProp_17; }
	inline void set_checkCertificateRevocationListProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___checkCertificateRevocationListProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateRevocationListProp_17), value);
	}

	inline static int32_t get_offset_of_dnsRefreshTimeoutProp_18() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___dnsRefreshTimeoutProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_dnsRefreshTimeoutProp_18() const { return ___dnsRefreshTimeoutProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_dnsRefreshTimeoutProp_18() { return &___dnsRefreshTimeoutProp_18; }
	inline void set_dnsRefreshTimeoutProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___dnsRefreshTimeoutProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___dnsRefreshTimeoutProp_18), value);
	}

	inline static int32_t get_offset_of_enableDnsRoundRobinProp_19() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___enableDnsRoundRobinProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_enableDnsRoundRobinProp_19() const { return ___enableDnsRoundRobinProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enableDnsRoundRobinProp_19() { return &___enableDnsRoundRobinProp_19; }
	inline void set_enableDnsRoundRobinProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___enableDnsRoundRobinProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___enableDnsRoundRobinProp_19), value);
	}

	inline static int32_t get_offset_of_expect100ContinueProp_20() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___expect100ContinueProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_expect100ContinueProp_20() const { return ___expect100ContinueProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_expect100ContinueProp_20() { return &___expect100ContinueProp_20; }
	inline void set_expect100ContinueProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___expect100ContinueProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___expect100ContinueProp_20), value);
	}

	inline static int32_t get_offset_of_useNagleAlgorithmProp_21() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t2768640361_StaticFields, ___useNagleAlgorithmProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_useNagleAlgorithmProp_21() const { return ___useNagleAlgorithmProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useNagleAlgorithmProp_21() { return &___useNagleAlgorithmProp_21; }
	inline void set_useNagleAlgorithmProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___useNagleAlgorithmProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___useNagleAlgorithmProp_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGERELEMENT_T2768640361_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#define CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t3857438253  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ConnectionManagementElement_t3857438253_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3590861854 * ___maxConnectionProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t3857438253_StaticFields, ___maxConnectionProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maxConnectionProp_17() const { return ___maxConnectionProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maxConnectionProp_17() { return &___maxConnectionProp_17; }
	inline void set_maxConnectionProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maxConnectionProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T3857438253_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_15)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
#ifndef BYPASSELEMENT_T2358616601_H
#define BYPASSELEMENT_T2358616601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t2358616601  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct BypassElement_t2358616601_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t3590861854 * ___addressProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(BypassElement_t2358616601_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T2358616601_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef NAMEVALUECOLLECTION_T407452768_H
#define NAMEVALUECOLLECTION_T407452768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t407452768  : public NameObjectCollectionBase_t2091847364
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t1281789340* ____all_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t1281789340* ____allKeys_11;

public:
	inline static int32_t get_offset_of__all_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____all_10)); }
	inline StringU5BU5D_t1281789340* get__all_10() const { return ____all_10; }
	inline StringU5BU5D_t1281789340** get_address_of__all_10() { return &____all_10; }
	inline void set__all_10(StringU5BU5D_t1281789340* value)
	{
		____all_10 = value;
		Il2CppCodeGenWriteBarrier((&____all_10), value);
	}

	inline static int32_t get_offset_of__allKeys_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t407452768, ____allKeys_11)); }
	inline StringU5BU5D_t1281789340* get__allKeys_11() const { return ____allKeys_11; }
	inline StringU5BU5D_t1281789340** get_address_of__allKeys_11() { return &____allKeys_11; }
	inline void set__allKeys_11(StringU5BU5D_t1281789340* value)
	{
		____allKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____allKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T407452768_H
#ifndef IPV6ELEMENT_T180053194_H
#define IPV6ELEMENT_T180053194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t180053194  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct Ipv6Element_t180053194_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_enabledProp_16() { return static_cast<int32_t>(offsetof(Ipv6Element_t180053194_StaticFields, ___enabledProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_16() const { return ___enabledProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_16() { return &___enabledProp_16; }
	inline void set_enabledProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T180053194_H
#ifndef HTTPWEBREQUESTELEMENT_T2801692355_H
#define HTTPWEBREQUESTELEMENT_T2801692355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2801692355  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct HttpWebRequestElement_t2801692355_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t3590861854 * ___maximumErrorResponseLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t3590861854 * ___maximumResponseHeadersLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t3590861854 * ___maximumUnauthorizedUploadLengthProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t3590861854 * ___useUnsafeHeaderParsingProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumErrorResponseLengthProp_15)); }
	inline ConfigurationProperty_t3590861854 * get_maximumErrorResponseLengthProp_15() const { return ___maximumErrorResponseLengthProp_15; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumErrorResponseLengthProp_15() { return &___maximumErrorResponseLengthProp_15; }
	inline void set_maximumErrorResponseLengthProp_15(ConfigurationProperty_t3590861854 * value)
	{
		___maximumErrorResponseLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_15), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumResponseHeadersLengthProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_maximumResponseHeadersLengthProp_16() const { return ___maximumResponseHeadersLengthProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumResponseHeadersLengthProp_16() { return &___maximumResponseHeadersLengthProp_16; }
	inline void set_maximumResponseHeadersLengthProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___maximumResponseHeadersLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_16), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___maximumUnauthorizedUploadLengthProp_17)); }
	inline ConfigurationProperty_t3590861854 * get_maximumUnauthorizedUploadLengthProp_17() const { return ___maximumUnauthorizedUploadLengthProp_17; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_maximumUnauthorizedUploadLengthProp_17() { return &___maximumUnauthorizedUploadLengthProp_17; }
	inline void set_maximumUnauthorizedUploadLengthProp_17(ConfigurationProperty_t3590861854 * value)
	{
		___maximumUnauthorizedUploadLengthProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_17), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___useUnsafeHeaderParsingProp_18)); }
	inline ConfigurationProperty_t3590861854 * get_useUnsafeHeaderParsingProp_18() const { return ___useUnsafeHeaderParsingProp_18; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useUnsafeHeaderParsingProp_18() { return &___useUnsafeHeaderParsingProp_18; }
	inline void set_useUnsafeHeaderParsingProp_18(ConfigurationProperty_t3590861854 * value)
	{
		___useUnsafeHeaderParsingProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_18), value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2801692355_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2801692355_H
#ifndef MODULEELEMENT_T3252950656_H
#define MODULEELEMENT_T3252950656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3252950656  : public ConfigurationElement_t3318566633
{
public:

public:
};

struct ModuleElement_t3252950656_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t3590861854 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ModuleElement_t3252950656_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t3590861854 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t3590861854 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3252950656_H
#ifndef CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#define CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t446763386  : public ConfigurationElement_t3318566633
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t2718874744 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t2718874744 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t2718874744 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___list_15)); }
	inline ArrayList_t2718874744 * get_list_15() const { return ___list_15; }
	inline ArrayList_t2718874744 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t2718874744 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removed_16)); }
	inline ArrayList_t2718874744 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t2718874744 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t2718874744 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inherited_17)); }
	inline ArrayList_t2718874744 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t2718874744 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t2718874744 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t446763386, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T446763386_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef DEFAULTPROXYSECTION_T4167594595_H
#define DEFAULTPROXYSECTION_T4167594595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t4167594595  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct DefaultProxySection_t4167594595_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t3590861854 * ___bypassListProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t3590861854 * ___enabledProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t3590861854 * ___moduleProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t3590861854 * ___proxyProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t3590861854 * ___useDefaultCredentialsProp_24;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_bypassListProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___bypassListProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_bypassListProp_20() const { return ___bypassListProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_bypassListProp_20() { return &___bypassListProp_20; }
	inline void set_bypassListProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___bypassListProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_20), value);
	}

	inline static int32_t get_offset_of_enabledProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___enabledProp_21)); }
	inline ConfigurationProperty_t3590861854 * get_enabledProp_21() const { return ___enabledProp_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_enabledProp_21() { return &___enabledProp_21; }
	inline void set_enabledProp_21(ConfigurationProperty_t3590861854 * value)
	{
		___enabledProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_21), value);
	}

	inline static int32_t get_offset_of_moduleProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___moduleProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_moduleProp_22() const { return ___moduleProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_moduleProp_22() { return &___moduleProp_22; }
	inline void set_moduleProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___moduleProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_22), value);
	}

	inline static int32_t get_offset_of_proxyProp_23() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___proxyProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_proxyProp_23() const { return ___proxyProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_proxyProp_23() { return &___proxyProp_23; }
	inline void set_proxyProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___proxyProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_23), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_24() { return static_cast<int32_t>(offsetof(DefaultProxySection_t4167594595_StaticFields, ___useDefaultCredentialsProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_useDefaultCredentialsProp_24() const { return ___useDefaultCredentialsProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_useDefaultCredentialsProp_24() { return &___useDefaultCredentialsProp_24; }
	inline void set_useDefaultCredentialsProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___useDefaultCredentialsProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T4167594595_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1603642748_H
#define CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1603642748  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct ConnectionManagementSection_t1603642748_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t3590861854 * ___connectionManagementProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_20;

public:
	inline static int32_t get_offset_of_connectionManagementProp_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___connectionManagementProp_19)); }
	inline ConfigurationProperty_t3590861854 * get_connectionManagementProp_19() const { return ___connectionManagementProp_19; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_connectionManagementProp_19() { return &___connectionManagementProp_19; }
	inline void set_connectionManagementProp_19(ConfigurationProperty_t3590861854 * value)
	{
		___connectionManagementProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_19), value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1603642748_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier((&___properties_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1603642748_H
#ifndef BYPASSONLOCALVALUES_T945670496_H
#define BYPASSONLOCALVALUES_T945670496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t945670496 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t945670496, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSONLOCALVALUES_T945670496_H
#ifndef AUTODETECTVALUES_T1649618618_H
#define AUTODETECTVALUES_T1649618618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t1649618618 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t1649618618, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTODETECTVALUES_T1649618618_H
#ifndef USESYSTEMDEFAULTVALUES_T2711047072_H
#define USESYSTEMDEFAULTVALUES_T2711047072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t2711047072 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t2711047072, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USESYSTEMDEFAULTVALUES_T2711047072_H
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1161221431  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1161221431_H
#ifndef IN6_ADDR_T1417766092_H
#define IN6_ADDR_T1417766092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t1417766092 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t1417766092, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T1417766092_H
#ifndef AUTHENTICATIONMODULESSECTION_T1083221556_H
#define AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1083221556  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct AuthenticationModulesSection_t1083221556_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3590861854 * ___authenticationModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_20() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1083221556_StaticFields, ___authenticationModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_authenticationModulesProp_20() const { return ___authenticationModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_authenticationModulesProp_20() { return &___authenticationModulesProp_20; }
	inline void set_authenticationModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___authenticationModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1083221556_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3860227195  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3860227195_H
#ifndef BYPASSELEMENTCOLLECTION_T47326401_H
#define BYPASSELEMENTCOLLECTION_T47326401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t47326401  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T47326401_H
#ifndef IFADDRS_T2169824096_H
#define IFADDRS_T2169824096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t2169824096 
{
public:
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	intptr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_dstaddr_5() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_dstaddr_5)); }
	inline intptr_t get_ifa_dstaddr_5() const { return ___ifa_dstaddr_5; }
	inline intptr_t* get_address_of_ifa_dstaddr_5() { return &___ifa_dstaddr_5; }
	inline void set_ifa_dstaddr_5(intptr_t value)
	{
		___ifa_dstaddr_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T2169824096_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t1056453382 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t1056453382, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255362  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::0283A6AF88802AB45989B29549915BEA0F6CD515
	__StaticArrayInitTypeSizeU3D14_t3517563372  ___0283A6AF88802AB45989B29549915BEA0F6CD515_0;
	// System.Int64 <PrivateImplementationDetails>::03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	int64_t ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::1A39764B112685485A5BA7B2880D878B858C1A7A
	__StaticArrayInitTypeSizeU3D9_t3218278899  ___1A39764B112685485A5BA7B2880D878B858C1A7A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885683  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t2711125390  ___59F5BD34B6C013DEACC784F69C67E95150033A84_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C
	__StaticArrayInitTypeSizeU3D6_t3217689075  ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278899  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E
	__StaticArrayInitTypeSizeU3D128_t531529102  ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3
	__StaticArrayInitTypeSizeU3D44_t3517366764  ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9;
	// System.Int64 <PrivateImplementationDetails>::98A44A6F8606AE6F23FE230286C1D6FBCC407226
	int64_t ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADDB8526F472C1C6D36DBD5A6E509D973CC34C92
	__StaticArrayInitTypeSizeU3D12_t2710994318  ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t2711125390  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t531529102  ___CCEEADA43268372341F81AE0C9208C6856441C04_13;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC5842B3154E1AF94500B57220EB9F684BCCC42A
	__StaticArrayInitTypeSizeU3D32_t2711125390  ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EEAFE8C6E1AB017237567305EE925C976CDB6458
	__StaticArrayInitTypeSizeU3D256_t1757367633  ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16;

public:
	inline static int32_t get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___0283A6AF88802AB45989B29549915BEA0F6CD515_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563372  get_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() const { return ___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563372 * get_address_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return &___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline void set_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(__StaticArrayInitTypeSizeU3D14_t3517563372  value)
	{
		___0283A6AF88802AB45989B29549915BEA0F6CD515_0 = value;
	}

	inline static int32_t get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1)); }
	inline int64_t get_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() const { return ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline int64_t* get_address_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return &___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline void set_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(int64_t value)
	{
		___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1 = value;
	}

	inline static int32_t get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___1A39764B112685485A5BA7B2880D878B858C1A7A_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899  get_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() const { return ___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899 * get_address_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return &___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline void set_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(__StaticArrayInitTypeSizeU3D9_t3218278899  value)
	{
		___1A39764B112685485A5BA7B2880D878B858C1A7A_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885683  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885683 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t3217885683  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() const { return ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return &___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline void set_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4 = value;
	}

	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_5)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(__StaticArrayInitTypeSizeU3D32_t2711125390  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_5 = value;
	}

	inline static int32_t get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689075  get_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() const { return ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689075 * get_address_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return &___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline void set_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(__StaticArrayInitTypeSizeU3D6_t3217689075  value)
	{
		___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278899 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(__StaticArrayInitTypeSizeU3D9_t3218278899  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7 = value;
	}

	inline static int32_t get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() const { return ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return &___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline void set_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8 = value;
	}

	inline static int32_t get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366764  get_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() const { return ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366764 * get_address_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return &___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline void set_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(__StaticArrayInitTypeSizeU3D44_t3517366764  value)
	{
		___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9 = value;
	}

	inline static int32_t get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10)); }
	inline int64_t get_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() const { return ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline int64_t* get_address_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return &___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline void set_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(int64_t value)
	{
		___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10 = value;
	}

	inline static int32_t get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318  get_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() const { return ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994318 * get_address_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return &___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline void set_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(__StaticArrayInitTypeSizeU3D12_t2710994318  value)
	{
		___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390 * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(__StaticArrayInitTypeSizeU3D32_t2711125390  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_13)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_CCEEADA43268372341F81AE0C9208C6856441C04_13() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_13(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_13 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14 = value;
	}

	inline static int32_t get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390  get_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() const { return ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125390 * get_address_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return &___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline void set_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(__StaticArrayInitTypeSizeU3D32_t2711125390  value)
	{
		___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15 = value;
	}

	inline static int32_t get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633  get_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() const { return ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633 * get_address_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return &___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline void set_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(__StaticArrayInitTypeSizeU3D256_t1757367633  value)
	{
		___EEAFE8C6E1AB017237567305EE925C976CDB6458_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#ifndef REQUESTCACHELEVEL_T1509648360_H
#define REQUESTCACHELEVEL_T1509648360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t1509648360 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t1509648360, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHELEVEL_T1509648360_H
#ifndef WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#define WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElementCollection
struct  WebRequestModuleElementCollection_t925190782  : public ConfigurationElementCollection_t446763386
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENTCOLLECTION_T925190782_H
#ifndef WEBREQUESTMODULESSECTION_T4132732301_H
#define WEBREQUESTMODULESSECTION_T4132732301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t4132732301  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct WebRequestModulesSection_t4132732301_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t3590861854 * ___webRequestModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_20() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t4132732301_StaticFields, ___webRequestModulesProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_webRequestModulesProp_20() const { return ___webRequestModulesProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webRequestModulesProp_20() { return &___webRequestModulesProp_20; }
	inline void set_webRequestModulesProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___webRequestModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T4132732301_H
#ifndef SETTINGSSECTION_T1259474535_H
#define SETTINGSSECTION_T1259474535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t1259474535  : public ConfigurationSection_t3156163955
{
public:

public:
};

struct SettingsSection_t1259474535_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t2852175726 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3590861854 * ___httpWebRequestProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3590861854 * ___ipv6Prop_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3590861854 * ___performanceCountersProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3590861854 * ___servicePointManagerProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3590861854 * ___webProxyScriptProp_24;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3590861854 * ___socketProp_25;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_20() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___httpWebRequestProp_20)); }
	inline ConfigurationProperty_t3590861854 * get_httpWebRequestProp_20() const { return ___httpWebRequestProp_20; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_httpWebRequestProp_20() { return &___httpWebRequestProp_20; }
	inline void set_httpWebRequestProp_20(ConfigurationProperty_t3590861854 * value)
	{
		___httpWebRequestProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___httpWebRequestProp_20), value);
	}

	inline static int32_t get_offset_of_ipv6Prop_21() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___ipv6Prop_21)); }
	inline ConfigurationProperty_t3590861854 * get_ipv6Prop_21() const { return ___ipv6Prop_21; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_ipv6Prop_21() { return &___ipv6Prop_21; }
	inline void set_ipv6Prop_21(ConfigurationProperty_t3590861854 * value)
	{
		___ipv6Prop_21 = value;
		Il2CppCodeGenWriteBarrier((&___ipv6Prop_21), value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___performanceCountersProp_22)); }
	inline ConfigurationProperty_t3590861854 * get_performanceCountersProp_22() const { return ___performanceCountersProp_22; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_performanceCountersProp_22() { return &___performanceCountersProp_22; }
	inline void set_performanceCountersProp_22(ConfigurationProperty_t3590861854 * value)
	{
		___performanceCountersProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___performanceCountersProp_22), value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___servicePointManagerProp_23)); }
	inline ConfigurationProperty_t3590861854 * get_servicePointManagerProp_23() const { return ___servicePointManagerProp_23; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_servicePointManagerProp_23() { return &___servicePointManagerProp_23; }
	inline void set_servicePointManagerProp_23(ConfigurationProperty_t3590861854 * value)
	{
		___servicePointManagerProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___servicePointManagerProp_23), value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_24() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___webProxyScriptProp_24)); }
	inline ConfigurationProperty_t3590861854 * get_webProxyScriptProp_24() const { return ___webProxyScriptProp_24; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_webProxyScriptProp_24() { return &___webProxyScriptProp_24; }
	inline void set_webProxyScriptProp_24(ConfigurationProperty_t3590861854 * value)
	{
		___webProxyScriptProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___webProxyScriptProp_24), value);
	}

	inline static int32_t get_offset_of_socketProp_25() { return static_cast<int32_t>(offsetof(SettingsSection_t1259474535_StaticFields, ___socketProp_25)); }
	inline ConfigurationProperty_t3590861854 * get_socketProp_25() const { return ___socketProp_25; }
	inline ConfigurationProperty_t3590861854 ** get_address_of_socketProp_25() { return &___socketProp_25; }
	inline void set_socketProp_25(ConfigurationProperty_t3590861854 * value)
	{
		___socketProp_25 = value;
		Il2CppCodeGenWriteBarrier((&___socketProp_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTION_T1259474535_H
#ifndef SETTINGSSECTIONINTERNAL_T781171337_H
#define SETTINGSSECTIONINTERNAL_T781171337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSectionInternal
struct  SettingsSectionInternal_t781171337  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Configuration.SettingsSectionInternal::HttpListenerUnescapeRequestUrl
	bool ___HttpListenerUnescapeRequestUrl_1;
	// System.Net.Sockets.IPProtectionLevel System.Net.Configuration.SettingsSectionInternal::IPProtectionLevel
	int32_t ___IPProtectionLevel_2;

public:
	inline static int32_t get_offset_of_HttpListenerUnescapeRequestUrl_1() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___HttpListenerUnescapeRequestUrl_1)); }
	inline bool get_HttpListenerUnescapeRequestUrl_1() const { return ___HttpListenerUnescapeRequestUrl_1; }
	inline bool* get_address_of_HttpListenerUnescapeRequestUrl_1() { return &___HttpListenerUnescapeRequestUrl_1; }
	inline void set_HttpListenerUnescapeRequestUrl_1(bool value)
	{
		___HttpListenerUnescapeRequestUrl_1 = value;
	}

	inline static int32_t get_offset_of_IPProtectionLevel_2() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337, ___IPProtectionLevel_2)); }
	inline int32_t get_IPProtectionLevel_2() const { return ___IPProtectionLevel_2; }
	inline int32_t* get_address_of_IPProtectionLevel_2() { return &___IPProtectionLevel_2; }
	inline void set_IPProtectionLevel_2(int32_t value)
	{
		___IPProtectionLevel_2 = value;
	}
};

struct SettingsSectionInternal_t781171337_StaticFields
{
public:
	// System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::instance
	SettingsSectionInternal_t781171337 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(SettingsSectionInternal_t781171337_StaticFields, ___instance_0)); }
	inline SettingsSectionInternal_t781171337 * get_instance_0() const { return ___instance_0; }
	inline SettingsSectionInternal_t781171337 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(SettingsSectionInternal_t781171337 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTIONINTERNAL_T781171337_H
#ifndef SOCKADDR_IN6_T2080844659_H
#define SOCKADDR_IN6_T2080844659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t2080844659 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t1417766092  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_addr_4)); }
	inline in6_addr_t1417766092  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t1417766092 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t1417766092  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T2080844659_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t9239872  : public EventArgs_t3591816995
{
public:
	// System.Collections.Specialized.NotifyCollectionChangedAction System.Collections.Specialized.NotifyCollectionChangedEventArgs::_action
	int32_t ____action_1;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newItems
	RuntimeObject* ____newItems_2;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldItems
	RuntimeObject* ____oldItems_3;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newStartingIndex
	int32_t ____newStartingIndex_4;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldStartingIndex
	int32_t ____oldStartingIndex_5;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____action_1)); }
	inline int32_t get__action_1() const { return ____action_1; }
	inline int32_t* get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(int32_t value)
	{
		____action_1 = value;
	}

	inline static int32_t get_offset_of__newItems_2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newItems_2)); }
	inline RuntimeObject* get__newItems_2() const { return ____newItems_2; }
	inline RuntimeObject** get_address_of__newItems_2() { return &____newItems_2; }
	inline void set__newItems_2(RuntimeObject* value)
	{
		____newItems_2 = value;
		Il2CppCodeGenWriteBarrier((&____newItems_2), value);
	}

	inline static int32_t get_offset_of__oldItems_3() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldItems_3)); }
	inline RuntimeObject* get__oldItems_3() const { return ____oldItems_3; }
	inline RuntimeObject** get_address_of__oldItems_3() { return &____oldItems_3; }
	inline void set__oldItems_3(RuntimeObject* value)
	{
		____oldItems_3 = value;
		Il2CppCodeGenWriteBarrier((&____oldItems_3), value);
	}

	inline static int32_t get_offset_of__newStartingIndex_4() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newStartingIndex_4)); }
	inline int32_t get__newStartingIndex_4() const { return ____newStartingIndex_4; }
	inline int32_t* get_address_of__newStartingIndex_4() { return &____newStartingIndex_4; }
	inline void set__newStartingIndex_4(int32_t value)
	{
		____newStartingIndex_4 = value;
	}

	inline static int32_t get_offset_of__oldStartingIndex_5() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldStartingIndex_5)); }
	inline int32_t get__oldStartingIndex_5() const { return ____oldStartingIndex_5; }
	inline int32_t* get_address_of__oldStartingIndex_5() { return &____oldStartingIndex_5; }
	inline void set__oldStartingIndex_5(int32_t value)
	{
		____oldStartingIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#ifndef REQUESTCACHEPOLICY_T2923596909_H
#define REQUESTCACHEPOLICY_T2923596909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2923596909  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2923596909, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2923596909_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t2749712960  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (ifaddrs_t2169824096)+ sizeof (RuntimeObject), sizeof(ifaddrs_t2169824096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2400[7] = 
{
	ifaddrs_t2169824096::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (sockaddr_t371844119)+ sizeof (RuntimeObject), sizeof(sockaddr_t371844119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2401[2] = 
{
	sockaddr_t371844119::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t371844119::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (sockaddr_in_t1317910171)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t1317910171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2402[4] = 
{
	sockaddr_in_t1317910171::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (in6_addr_t1417766092)+ sizeof (RuntimeObject), sizeof(in6_addr_t1417766092_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2403[1] = 
{
	in6_addr_t1417766092::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (sockaddr_in6_t2080844659)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2080844659_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2404[6] = 
{
	sockaddr_in6_t2080844659::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (sockaddr_dl_t1317779094)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t1317779094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2405[8] = 
{
	sockaddr_dl_t1317779094::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (DefaultProxySectionInternal_t3889414525), -1, sizeof(DefaultProxySectionInternal_t3889414525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2406[2] = 
{
	DefaultProxySectionInternal_t3889414525::get_offset_of_webProxy_0(),
	DefaultProxySectionInternal_t3889414525_StaticFields::get_offset_of_classSyncObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (SettingsSectionInternal_t781171337), -1, sizeof(SettingsSectionInternal_t781171337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2407[3] = 
{
	SettingsSectionInternal_t781171337_StaticFields::get_offset_of_instance_0(),
	SettingsSectionInternal_t781171337::get_offset_of_HttpListenerUnescapeRequestUrl_1(),
	SettingsSectionInternal_t781171337::get_offset_of_IPProtectionLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (AuthenticationModuleElement_t2289740666), -1, sizeof(AuthenticationModuleElement_t2289740666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2408[2] = 
{
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_properties_15(),
	AuthenticationModuleElement_t2289740666_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (AuthenticationModuleElementCollection_t1161221431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (AuthenticationModulesSection_t1083221556), -1, sizeof(AuthenticationModulesSection_t1083221556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2410[2] = 
{
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_properties_19(),
	AuthenticationModulesSection_t1083221556_StaticFields::get_offset_of_authenticationModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { sizeof (BypassElement_t2358616601), -1, sizeof(BypassElement_t2358616601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2411[2] = 
{
	BypassElement_t2358616601_StaticFields::get_offset_of_properties_15(),
	BypassElement_t2358616601_StaticFields::get_offset_of_addressProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { sizeof (BypassElementCollection_t47326401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { sizeof (ConnectionManagementElement_t3857438253), -1, sizeof(ConnectionManagementElement_t3857438253_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2413[3] = 
{
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_properties_15(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_addressProp_16(),
	ConnectionManagementElement_t3857438253_StaticFields::get_offset_of_maxConnectionProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2414 = { sizeof (ConnectionManagementElementCollection_t3860227195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2415 = { sizeof (ConnectionManagementData_t2003128658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2415[1] = 
{
	ConnectionManagementData_t2003128658::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2416 = { sizeof (ConnectionManagementSection_t1603642748), -1, sizeof(ConnectionManagementSection_t1603642748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2416[2] = 
{
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_connectionManagementProp_19(),
	ConnectionManagementSection_t1603642748_StaticFields::get_offset_of_properties_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2417 = { sizeof (DefaultProxySection_t4167594595), -1, sizeof(DefaultProxySection_t4167594595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2417[6] = 
{
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_properties_19(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_bypassListProp_20(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_enabledProp_21(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_moduleProp_22(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_proxyProp_23(),
	DefaultProxySection_t4167594595_StaticFields::get_offset_of_useDefaultCredentialsProp_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2418 = { sizeof (HttpWebRequestElement_t2801692355), -1, sizeof(HttpWebRequestElement_t2801692355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2418[5] = 
{
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumErrorResponseLengthProp_15(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_16(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_17(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_18(),
	HttpWebRequestElement_t2801692355_StaticFields::get_offset_of_properties_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2419 = { sizeof (Ipv6Element_t180053194), -1, sizeof(Ipv6Element_t180053194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2419[2] = 
{
	Ipv6Element_t180053194_StaticFields::get_offset_of_properties_15(),
	Ipv6Element_t180053194_StaticFields::get_offset_of_enabledProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2420 = { sizeof (ModuleElement_t3252950656), -1, sizeof(ModuleElement_t3252950656_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2420[2] = 
{
	ModuleElement_t3252950656_StaticFields::get_offset_of_properties_15(),
	ModuleElement_t3252950656_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2421 = { sizeof (NetSectionGroup_t3270122580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2422 = { sizeof (PerformanceCountersElement_t4093363992), -1, sizeof(PerformanceCountersElement_t4093363992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2422[2] = 
{
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_enabledProp_15(),
	PerformanceCountersElement_t4093363992_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2423 = { sizeof (ProxyElement_t3214064751), -1, sizeof(ProxyElement_t3214064751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2423[6] = 
{
	ProxyElement_t3214064751_StaticFields::get_offset_of_properties_15(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_autoDetectProp_16(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_bypassOnLocalProp_17(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_proxyAddressProp_18(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_scriptLocationProp_19(),
	ProxyElement_t3214064751_StaticFields::get_offset_of_useSystemDefaultProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2424 = { sizeof (BypassOnLocalValues_t945670496)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2424[4] = 
{
	BypassOnLocalValues_t945670496::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2425 = { sizeof (UseSystemDefaultValues_t2711047072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2425[4] = 
{
	UseSystemDefaultValues_t2711047072::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2426 = { sizeof (AutoDetectValues_t1649618618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2426[4] = 
{
	AutoDetectValues_t1649618618::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2427 = { sizeof (ServicePointManagerElement_t2768640361), -1, sizeof(ServicePointManagerElement_t2768640361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2427[7] = 
{
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_properties_15(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateNameProp_16(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_checkCertificateRevocationListProp_17(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_dnsRefreshTimeoutProp_18(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_enableDnsRoundRobinProp_19(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_expect100ContinueProp_20(),
	ServicePointManagerElement_t2768640361_StaticFields::get_offset_of_useNagleAlgorithmProp_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2428 = { sizeof (SettingsSection_t1259474535), -1, sizeof(SettingsSection_t1259474535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2428[7] = 
{
	SettingsSection_t1259474535_StaticFields::get_offset_of_properties_19(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_httpWebRequestProp_20(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_ipv6Prop_21(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_performanceCountersProp_22(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_servicePointManagerProp_23(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_webProxyScriptProp_24(),
	SettingsSection_t1259474535_StaticFields::get_offset_of_socketProp_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2429 = { sizeof (SocketElement_t3329874080), -1, sizeof(SocketElement_t3329874080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2429[3] = 
{
	SocketElement_t3329874080_StaticFields::get_offset_of_properties_15(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForAcceptProp_16(),
	SocketElement_t3329874080_StaticFields::get_offset_of_alwaysUseCompletionPortsForConnectProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2430 = { sizeof (WebProxyScriptElement_t477406598), -1, sizeof(WebProxyScriptElement_t477406598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2430[2] = 
{
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_downloadTimeoutProp_15(),
	WebProxyScriptElement_t477406598_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2431 = { sizeof (WebRequestModuleElement_t1406085120), -1, sizeof(WebRequestModuleElement_t1406085120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2431[3] = 
{
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_properties_15(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_prefixProp_16(),
	WebRequestModuleElement_t1406085120_StaticFields::get_offset_of_typeProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2432 = { sizeof (WebRequestModuleElementCollection_t925190782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2433 = { sizeof (WebRequestModulesSection_t4132732301), -1, sizeof(WebRequestModulesSection_t4132732301_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2433[2] = 
{
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_properties_19(),
	WebRequestModulesSection_t4132732301_StaticFields::get_offset_of_webRequestModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2434 = { sizeof (RequestCache_t3669488992), -1, sizeof(RequestCache_t3669488992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2434[1] = 
{
	RequestCache_t3669488992_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2435 = { sizeof (RequestCacheValidator_t587568667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2436 = { sizeof (RequestCacheBinding_t2614858269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2436[2] = 
{
	RequestCacheBinding_t2614858269::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t2614858269::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2437 = { sizeof (RequestCacheLevel_t1509648360)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2437[8] = 
{
	RequestCacheLevel_t1509648360::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2438 = { sizeof (RequestCachePolicy_t2923596909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2438[1] = 
{
	RequestCachePolicy_t2923596909::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2439 = { sizeof (RequestCacheProtocol_t3614465628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2440 = { sizeof (CaseSensitiveStringDictionary_t553067329), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2441 = { sizeof (HybridDictionary_t4070033136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2441[3] = 
{
	HybridDictionary_t4070033136::get_offset_of_list_0(),
	HybridDictionary_t4070033136::get_offset_of_hashtable_1(),
	HybridDictionary_t4070033136::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2442 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2443 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2444 = { sizeof (ListDictionary_t1624492310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2444[5] = 
{
	ListDictionary_t1624492310::get_offset_of_head_0(),
	ListDictionary_t1624492310::get_offset_of_version_1(),
	ListDictionary_t1624492310::get_offset_of_count_2(),
	ListDictionary_t1624492310::get_offset_of_comparer_3(),
	ListDictionary_t1624492310::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2445 = { sizeof (NodeEnumerator_t3248827953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2445[4] = 
{
	NodeEnumerator_t3248827953::get_offset_of_list_0(),
	NodeEnumerator_t3248827953::get_offset_of_current_1(),
	NodeEnumerator_t3248827953::get_offset_of_version_2(),
	NodeEnumerator_t3248827953::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2446 = { sizeof (NodeKeyValueCollection_t1279341543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2446[2] = 
{
	NodeKeyValueCollection_t1279341543::get_offset_of_list_0(),
	NodeKeyValueCollection_t1279341543::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2447 = { sizeof (NodeKeyValueEnumerator_t642906510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2447[5] = 
{
	NodeKeyValueEnumerator_t642906510::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t642906510::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2448 = { sizeof (DictionaryNode_t417719465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2448[3] = 
{
	DictionaryNode_t417719465::get_offset_of_key_0(),
	DictionaryNode_t417719465::get_offset_of_value_1(),
	DictionaryNode_t417719465::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2449 = { sizeof (NameObjectCollectionBase_t2091847364), -1, sizeof(NameObjectCollectionBase_t2091847364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2449[10] = 
{
	NameObjectCollectionBase_t2091847364::get_offset_of__readOnly_0(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesArray_1(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keyComparer_2(),
	NameObjectCollectionBase_t2091847364::get_offset_of__entriesTable_3(),
	NameObjectCollectionBase_t2091847364::get_offset_of__nullKeyEntry_4(),
	NameObjectCollectionBase_t2091847364::get_offset_of__keys_5(),
	NameObjectCollectionBase_t2091847364::get_offset_of__serializationInfo_6(),
	NameObjectCollectionBase_t2091847364::get_offset_of__version_7(),
	NameObjectCollectionBase_t2091847364::get_offset_of__syncRoot_8(),
	NameObjectCollectionBase_t2091847364_StaticFields::get_offset_of_defaultComparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2450 = { sizeof (NameObjectEntry_t4224248211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2450[2] = 
{
	NameObjectEntry_t4224248211::get_offset_of_Key_0(),
	NameObjectEntry_t4224248211::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2451 = { sizeof (NameObjectKeysEnumerator_t3824388371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2451[3] = 
{
	NameObjectKeysEnumerator_t3824388371::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t3824388371::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2452 = { sizeof (KeysCollection_t1318642398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2452[1] = 
{
	KeysCollection_t1318642398::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2453 = { sizeof (CompatibleComparer_t4154576053), -1, sizeof(CompatibleComparer_t4154576053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2453[4] = 
{
	CompatibleComparer_t4154576053::get_offset_of__comparer_0(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t4154576053::get_offset_of__hcp_2(),
	CompatibleComparer_t4154576053_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2454 = { sizeof (NameValueCollection_t407452768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2454[2] = 
{
	NameValueCollection_t407452768::get_offset_of__all_10(),
	NameValueCollection_t407452768::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2455 = { sizeof (NotifyCollectionChangedAction_t1056453382)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2455[6] = 
{
	NotifyCollectionChangedAction_t1056453382::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2456 = { sizeof (NotifyCollectionChangedEventArgs_t9239872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2456[5] = 
{
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__action_1(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__newItems_2(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__oldItems_3(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__newStartingIndex_4(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__oldStartingIndex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2457 = { sizeof (NotifyCollectionChangedEventHandler_t2749712960), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2458 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2458[7] = 
{
	OrderedDictionary_t2617496293::get_offset_of__objectsArray_0(),
	OrderedDictionary_t2617496293::get_offset_of__objectsTable_1(),
	OrderedDictionary_t2617496293::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t2617496293::get_offset_of__comparer_3(),
	OrderedDictionary_t2617496293::get_offset_of__readOnly_4(),
	OrderedDictionary_t2617496293::get_offset_of__syncRoot_5(),
	OrderedDictionary_t2617496293::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2459 = { sizeof (OrderedDictionaryEnumerator_t1215437281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2459[2] = 
{
	OrderedDictionaryEnumerator_t1215437281::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t1215437281::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2460 = { sizeof (OrderedDictionaryKeyValueCollection_t1788601968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2460[2] = 
{
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2461 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2461[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2462 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2462[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2463 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2464 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2464[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2465 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2465[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2466 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2466[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2467 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2467[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2468 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2468[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2469 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2470 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2470[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2471 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2471[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2472 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2473 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2474 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255362), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2474[17] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(),
	U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields::get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2475 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885683)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885683 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2476 = { sizeof (__StaticArrayInitTypeSizeU3D6_t3217689075)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t3217689075 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2477 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278899)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278899 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2478 = { sizeof (__StaticArrayInitTypeSizeU3D12_t2710994318)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t2710994318 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2479 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563372)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563372 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2480 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125390)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125390 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2481 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366764)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366764 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2482 = { sizeof (__StaticArrayInitTypeSizeU3D128_t531529102)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t531529102 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2483 = { sizeof (__StaticArrayInitTypeSizeU3D256_t1757367633)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t1757367633 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2484 = { sizeof (U3CModuleU3E_t692745527), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2485 = { sizeof (Locale_t4128636108), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2486 = { sizeof (MiniParser_t1919256552), -1, sizeof(MiniParser_t1919256552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2486[7] = 
{
	MiniParser_t1919256552_StaticFields::get_offset_of_INPUT_RANGE_0(),
	MiniParser_t1919256552_StaticFields::get_offset_of_tbl_1(),
	MiniParser_t1919256552_StaticFields::get_offset_of_errors_2(),
	MiniParser_t1919256552::get_offset_of_line_3(),
	MiniParser_t1919256552::get_offset_of_col_4(),
	MiniParser_t1919256552::get_offset_of_twoCharBuff_5(),
	MiniParser_t1919256552::get_offset_of_splitCData_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2491 = { sizeof (HandlerAdapter_t2021361818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2492 = { sizeof (AttrListImpl_t3972417595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2492[2] = 
{
	AttrListImpl_t3972417595::get_offset_of_names_0(),
	AttrListImpl_t3972417595::get_offset_of_values_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2493 = { sizeof (XMLError_t2931210838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2493[3] = 
{
	XMLError_t2931210838::get_offset_of_descr_17(),
	XMLError_t2931210838::get_offset_of_line_18(),
	XMLError_t2931210838::get_offset_of_column_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2494 = { sizeof (SecurityParser_t4124480078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2494[5] = 
{
	SecurityParser_t4124480078::get_offset_of_root_7(),
	SecurityParser_t4124480078::get_offset_of_xmldoc_8(),
	SecurityParser_t4124480078::get_offset_of_pos_9(),
	SecurityParser_t4124480078::get_offset_of_current_10(),
	SecurityParser_t4124480078::get_offset_of_stack_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2495 = { sizeof (ASN1_t2114160833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2495[3] = 
{
	ASN1_t2114160833::get_offset_of_m_nTag_0(),
	ASN1_t2114160833::get_offset_of_m_aValue_1(),
	ASN1_t2114160833::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2496 = { sizeof (ASN1Convert_t2839890153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2497 = { sizeof (BitConverterLE_t2108532979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2498 = { sizeof (PKCS7_t1860834339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2499 = { sizeof (ContentInfo_t3218159896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2499[2] = 
{
	ContentInfo_t3218159896::get_offset_of_contentType_0(),
	ContentInfo_t3218159896::get_offset_of_content_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
