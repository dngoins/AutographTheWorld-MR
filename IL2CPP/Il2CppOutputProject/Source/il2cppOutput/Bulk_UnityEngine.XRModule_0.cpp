#include "il2cpp-config.h"

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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl
struct IXRSubsystemDescriptorImpl_t1324435575;
// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>
struct List_1_t2796510317;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.Experimental.XR.XRInstance
struct XRInstance_t2947669413;
// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>
struct List_1_t124776859;
// UnityEngine.Experimental.XR.XRPlane
struct XRPlane_t1025974819;
// UnityEngine.Experimental.XR.XRDepth
struct XRDepth_t2245415945;
// System.String
struct String_t;
// UnityEngine.Experimental.XR.XREnvironment
struct XREnvironment_t3020638101;
// System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs>
struct Action_1_t3609124943;
// UnityEngine.Experimental.XR.XRRaycast
struct XRRaycast_t1323410695;
// UnityEngine.Experimental.XR.XRReferencePoint
struct XRReferencePoint_t1456196979;
// UnityEngine.Experimental.XR.XRSession
struct XRSession_t1670964522;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t2722643320;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_t521953446;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t1739597377;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t2218980328;
// UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
struct XRSubsystemDescriptorBase_t683206301;
// UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl[]
struct IXRSubsystemDescriptorImplU5BU5D_t8014798;
// UnityEngine.Experimental.XR.XRInstance[]
struct XRInstanceU5BU5D_t1519191592;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Experimental.XR.IXRSubsystemDescriptor
struct IXRSubsystemDescriptor_t170382523;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t BoundedPlane_get_Normal_m1663591676_MetadataUsageId;
extern RuntimeClass* IXRSubsystemDescriptorImpl_t1324435575_il2cpp_TypeInfo_var;
extern RuntimeClass* Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m1639501545_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemDescriptors_Internal_InitializeManagedDescriptor_m3246767543_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1976384227_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1865349197_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2339331321_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2111194506_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2950022909_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemDescriptors_Internal_ClearManagedDescriptors_m2569941221_MetadataUsageId;
extern RuntimeClass* List_1_t2796510317_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1589863_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemDescriptors__cctor_m3472118126_MetadataUsageId;
extern RuntimeClass* Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Add_m1328180860_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemInstances_Internal_InitializeManagedInstance_m65822767_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3764194154_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1154966014_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1994215897_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3856281449_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3996747356_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemInstances_Internal_ClearManagedInstances_m2100663450_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m3568513911_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2584384972_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m941119945_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemInstances_Internal_RemoveInstanceByPtr_m1296743304_MetadataUsageId;
extern RuntimeClass* List_1_t124776859_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m4015583642_RuntimeMethod_var;
extern const uint32_t Internal_XRSubsystemInstances__cctor_m746450146_MetadataUsageId;
struct XRPlane_t1025974819_marshaled_pinvoke;
struct XRPlane_t1025974819;;
struct XRPlane_t1025974819_marshaled_pinvoke;;
struct XRPlane_t1025974819_marshaled_com;
struct XRPlane_t1025974819_marshaled_com;;
struct XRDepth_t2245415945_marshaled_pinvoke;
struct XRDepth_t2245415945;;
struct XRDepth_t2245415945_marshaled_pinvoke;;
struct XRDepth_t2245415945_marshaled_com;
struct XRDepth_t2245415945_marshaled_com;;
extern String_t* _stringLiteral4273954858;
extern String_t* _stringLiteral2268009268;
extern const uint32_t TrackableId_ToString_m2456781735_MetadataUsageId;
extern RuntimeClass* TrackableId_t1251031970_il2cpp_TypeInfo_var;
extern const uint32_t TrackableId_Equals_m1354170007_MetadataUsageId;
extern const uint32_t TrackableId__cctor_m2923896333_MetadataUsageId;
extern const uint32_t XRDepth_NotifyDepthDestruction_m3138342419_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3012248422_RuntimeMethod_var;
extern const uint32_t XRDepth_InvokePointCloudUpdatedEvent_m2142025041_MetadataUsageId;
extern RuntimeClass* XRDepth_t2245415945_il2cpp_TypeInfo_var;
extern RuntimeClass* XRPlane_t1025974819_il2cpp_TypeInfo_var;
extern RuntimeClass* XRRaycast_t1323410695_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePoint_t1456196979_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSession_t1670964522_il2cpp_TypeInfo_var;
extern const uint32_t XREnvironment_Initialize_m2669045601_MetadataUsageId;
extern const uint32_t XRPlane_NotifyPlanesDestruction_m954698239_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m3662407658_RuntimeMethod_var;
extern const uint32_t XRPlane_InvokePlaneAddedEvent_m557856504_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m4140516850_RuntimeMethod_var;
extern const uint32_t XRPlane_InvokePlaneUpdatedEvent_m3711511142_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m1403297223_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m316788244_RuntimeMethod_var;
extern const uint32_t XRPlane_InvokePlaneMergedEvent_m3343988844_MetadataUsageId;
extern const uint32_t XRPlane_InvokePlaneRemovedEvent_m3233809093_MetadataUsageId;
extern const uint32_t XRRaycast_NotifyRaycastDestruction_m760935411_MetadataUsageId;
extern const uint32_t XRReferencePoint_NotifyReferencePointsDestruction_m538704641_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m1143137826_RuntimeMethod_var;
extern const uint32_t XRReferencePoint_InvokeReferencePointUpdatedEvent_m700562555_MetadataUsageId;
extern const uint32_t XRSession_NotifySessionDestruction_m3354775809_MetadataUsageId;



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
#ifndef U3CMODULEU3E_T692745579_H
#define U3CMODULEU3E_T692745579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745579 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745579_H
#ifndef LIST_1_T2796510317_H
#define LIST_1_T2796510317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>
struct  List_1_t2796510317  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IXRSubsystemDescriptorImplU5BU5D_t8014798* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2796510317, ____items_1)); }
	inline IXRSubsystemDescriptorImplU5BU5D_t8014798* get__items_1() const { return ____items_1; }
	inline IXRSubsystemDescriptorImplU5BU5D_t8014798** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IXRSubsystemDescriptorImplU5BU5D_t8014798* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2796510317, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2796510317, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2796510317, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2796510317_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IXRSubsystemDescriptorImplU5BU5D_t8014798* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2796510317_StaticFields, ____emptyArray_5)); }
	inline IXRSubsystemDescriptorImplU5BU5D_t8014798* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IXRSubsystemDescriptorImplU5BU5D_t8014798** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IXRSubsystemDescriptorImplU5BU5D_t8014798* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2796510317_H
#ifndef INTERNAL_XRSUBSYSTEMDESCRIPTORS_T999582310_H
#define INTERNAL_XRSUBSYSTEMDESCRIPTORS_T999582310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Internal_XRSubsystemDescriptors
struct  Internal_XRSubsystemDescriptors_t999582310  : public RuntimeObject
{
public:

public:
};

struct Internal_XRSubsystemDescriptors_t999582310_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl> UnityEngine.Experimental.XR.Internal_XRSubsystemDescriptors::s_SubsystemDescriptors
	List_1_t2796510317 * ___s_SubsystemDescriptors_0;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_0() { return static_cast<int32_t>(offsetof(Internal_XRSubsystemDescriptors_t999582310_StaticFields, ___s_SubsystemDescriptors_0)); }
	inline List_1_t2796510317 * get_s_SubsystemDescriptors_0() const { return ___s_SubsystemDescriptors_0; }
	inline List_1_t2796510317 ** get_address_of_s_SubsystemDescriptors_0() { return &___s_SubsystemDescriptors_0; }
	inline void set_s_SubsystemDescriptors_0(List_1_t2796510317 * value)
	{
		___s_SubsystemDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemDescriptors_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_XRSUBSYSTEMDESCRIPTORS_T999582310_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T124776859_H
#define LIST_1_T124776859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>
struct  List_1_t124776859  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInstanceU5BU5D_t1519191592* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t124776859, ____items_1)); }
	inline XRInstanceU5BU5D_t1519191592* get__items_1() const { return ____items_1; }
	inline XRInstanceU5BU5D_t1519191592** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInstanceU5BU5D_t1519191592* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t124776859, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t124776859, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t124776859, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t124776859_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInstanceU5BU5D_t1519191592* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t124776859_StaticFields, ____emptyArray_5)); }
	inline XRInstanceU5BU5D_t1519191592* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInstanceU5BU5D_t1519191592** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInstanceU5BU5D_t1519191592* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T124776859_H
#ifndef INTERNAL_XRSUBSYSTEMINSTANCES_T919880308_H
#define INTERNAL_XRSUBSYSTEMINSTANCES_T919880308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Internal_XRSubsystemInstances
struct  Internal_XRSubsystemInstances_t919880308  : public RuntimeObject
{
public:

public:
};

struct Internal_XRSubsystemInstances_t919880308_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance> UnityEngine.Experimental.XR.Internal_XRSubsystemInstances::s_SubsystemInstances
	List_1_t124776859 * ___s_SubsystemInstances_0;

public:
	inline static int32_t get_offset_of_s_SubsystemInstances_0() { return static_cast<int32_t>(offsetof(Internal_XRSubsystemInstances_t919880308_StaticFields, ___s_SubsystemInstances_0)); }
	inline List_1_t124776859 * get_s_SubsystemInstances_0() const { return ___s_SubsystemInstances_0; }
	inline List_1_t124776859 ** get_address_of_s_SubsystemInstances_0() { return &___s_SubsystemInstances_0; }
	inline void set_s_SubsystemInstances_0(List_1_t124776859 * value)
	{
		___s_SubsystemInstances_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemInstances_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_XRSUBSYSTEMINSTANCES_T919880308_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
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
#ifndef TRACKABLEID_T1251031970_H
#define TRACKABLEID_T1251031970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_t1251031970 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t1251031970_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_t1251031970  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t1251031970  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t1251031970 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t1251031970  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_T1251031970_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2014020736_H
#define ENUMERATOR_T2014020736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.XRInstance>
struct  Enumerator_t2014020736 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t124776859 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRInstance_t2947669413 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2014020736, ___list_0)); }
	inline List_1_t124776859 * get_list_0() const { return ___list_0; }
	inline List_1_t124776859 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t124776859 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2014020736, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2014020736, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2014020736, ___current_3)); }
	inline XRInstance_t2947669413 * get_current_3() const { return ___current_3; }
	inline XRInstance_t2947669413 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRInstance_t2947669413 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2014020736_H
#ifndef POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#define POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct  PointCloudUpdatedEventArgs_t3436657348 
{
public:
	// UnityEngine.Experimental.XR.XRDepth UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs::m_Depth
	XRDepth_t2245415945 * ___m_Depth_0;

public:
	inline static int32_t get_offset_of_m_Depth_0() { return static_cast<int32_t>(offsetof(PointCloudUpdatedEventArgs_t3436657348, ___m_Depth_0)); }
	inline XRDepth_t2245415945 * get_m_Depth_0() const { return ___m_Depth_0; }
	inline XRDepth_t2245415945 ** get_address_of_m_Depth_0() { return &___m_Depth_0; }
	inline void set_m_Depth_0(XRDepth_t2245415945 * value)
	{
		___m_Depth_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Depth_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct PointCloudUpdatedEventArgs_t3436657348_marshaled_pinvoke
{
	XRDepth_t2245415945_marshaled_pinvoke* ___m_Depth_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct PointCloudUpdatedEventArgs_t3436657348_marshaled_com
{
	XRDepth_t2245415945_marshaled_com* ___m_Depth_0;
};
#endif // POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef ENUMERATOR_T390786898_H
#define ENUMERATOR_T390786898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>
struct  Enumerator_t390786898 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2796510317 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t390786898, ___list_0)); }
	inline List_1_t2796510317 * get_list_0() const { return ___list_0; }
	inline List_1_t2796510317 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2796510317 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t390786898, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t390786898, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t390786898, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T390786898_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef REFERENCEPOINT_T394942483_H
#define REFERENCEPOINT_T394942483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.ReferencePoint
struct  ReferencePoint_t394942483 
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.ReferencePoint::<Id>k__BackingField
	TrackableId_t1251031970  ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.XR.ReferencePoint::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion UnityEngine.Experimental.XR.ReferencePoint::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CIdU3Ek__BackingField_0)); }
	inline TrackableId_t1251031970  get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline TrackableId_t1251031970 * get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(TrackableId_t1251031970  value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CRotationU3Ek__BackingField_2)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_2() const { return ___U3CRotationU3Ek__BackingField_2; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_2() { return &___U3CRotationU3Ek__BackingField_2; }
	inline void set_U3CRotationU3Ek__BackingField_2(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEPOINT_T394942483_H
#ifndef XRRAYCAST_T1323410695_H
#define XRRAYCAST_T1323410695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRRaycast
struct  XRRaycast_t1323410695  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRRaycast::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.XREnvironment UnityEngine.Experimental.XR.XRRaycast::m_Environment
	XREnvironment_t3020638101 * ___m_Environment_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRRaycast_t1323410695, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Environment_1() { return static_cast<int32_t>(offsetof(XRRaycast_t1323410695, ___m_Environment_1)); }
	inline XREnvironment_t3020638101 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline XREnvironment_t3020638101 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(XREnvironment_t3020638101 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Environment_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRRaycast
struct XRRaycast_t1323410695_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRRaycast
struct XRRaycast_t1323410695_marshaled_com
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
};
#endif // XRRAYCAST_T1323410695_H
#ifndef XRSUBSYSTEMDESCRIPTORBASE_T683206301_H
#define XRSUBSYSTEMDESCRIPTORBASE_T683206301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
struct  XRSubsystemDescriptorBase_t683206301  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRSubsystemDescriptorBase::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRSubsystemDescriptorBase_t683206301, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
struct XRSubsystemDescriptorBase_t683206301_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
struct XRSubsystemDescriptorBase_t683206301_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // XRSUBSYSTEMDESCRIPTORBASE_T683206301_H
#ifndef XRSESSION_T1670964522_H
#define XRSESSION_T1670964522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSession
struct  XRSession_t1670964522  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRSession::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.XREnvironment UnityEngine.Experimental.XR.XRSession::m_Environment
	XREnvironment_t3020638101 * ___m_Environment_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRSession_t1670964522, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Environment_1() { return static_cast<int32_t>(offsetof(XRSession_t1670964522, ___m_Environment_1)); }
	inline XREnvironment_t3020638101 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline XREnvironment_t3020638101 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(XREnvironment_t3020638101 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Environment_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRSession
struct XRSession_t1670964522_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRSession
struct XRSession_t1670964522_marshaled_com
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
};
#endif // XRSESSION_T1670964522_H
#ifndef XRREFERENCEPOINT_T1456196979_H
#define XRREFERENCEPOINT_T1456196979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePoint
struct  XRReferencePoint_t1456196979  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRReferencePoint::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.XREnvironment UnityEngine.Experimental.XR.XRReferencePoint::m_Environment
	XREnvironment_t3020638101 * ___m_Environment_1;
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePoint::ReferencePointUpdated
	Action_1_t2218980328 * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_t1456196979, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Environment_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_t1456196979, ___m_Environment_1)); }
	inline XREnvironment_t3020638101 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline XREnvironment_t3020638101 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(XREnvironment_t3020638101 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Environment_1), value);
	}

	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_t1456196979, ___ReferencePointUpdated_2)); }
	inline Action_1_t2218980328 * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t2218980328 ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t2218980328 * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferencePointUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRReferencePoint
struct XRReferencePoint_t1456196979_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___ReferencePointUpdated_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRReferencePoint
struct XRReferencePoint_t1456196979_marshaled_com
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___ReferencePointUpdated_2;
};
#endif // XRREFERENCEPOINT_T1456196979_H
#ifndef XRDEPTH_T2245415945_H
#define XRDEPTH_T2245415945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRDepth
struct  XRDepth_t2245415945  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRDepth::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.XREnvironment UnityEngine.Experimental.XR.XRDepth::m_Environment
	XREnvironment_t3020638101 * ___m_Environment_1;
	// System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs> UnityEngine.Experimental.XR.XRDepth::PointCloudUpdated
	Action_1_t3609124943 * ___PointCloudUpdated_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRDepth_t2245415945, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Environment_1() { return static_cast<int32_t>(offsetof(XRDepth_t2245415945, ___m_Environment_1)); }
	inline XREnvironment_t3020638101 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline XREnvironment_t3020638101 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(XREnvironment_t3020638101 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Environment_1), value);
	}

	inline static int32_t get_offset_of_PointCloudUpdated_2() { return static_cast<int32_t>(offsetof(XRDepth_t2245415945, ___PointCloudUpdated_2)); }
	inline Action_1_t3609124943 * get_PointCloudUpdated_2() const { return ___PointCloudUpdated_2; }
	inline Action_1_t3609124943 ** get_address_of_PointCloudUpdated_2() { return &___PointCloudUpdated_2; }
	inline void set_PointCloudUpdated_2(Action_1_t3609124943 * value)
	{
		___PointCloudUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRDepth
struct XRDepth_t2245415945_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___PointCloudUpdated_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRDepth
struct XRDepth_t2245415945_marshaled_com
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___PointCloudUpdated_2;
};
#endif // XRDEPTH_T2245415945_H
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
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef XRPLANE_T1025974819_H
#define XRPLANE_T1025974819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlane
struct  XRPlane_t1025974819  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRPlane::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.XREnvironment UnityEngine.Experimental.XR.XRPlane::m_Environment
	XREnvironment_t3020638101 * ___m_Environment_1;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlane::PlaneAdded
	Action_1_t2722643320 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlane::PlaneUpdated
	Action_1_t521953446 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlane::PlaneRemoved
	Action_1_t1739597377 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRPlane_t1025974819, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Environment_1() { return static_cast<int32_t>(offsetof(XRPlane_t1025974819, ___m_Environment_1)); }
	inline XREnvironment_t3020638101 * get_m_Environment_1() const { return ___m_Environment_1; }
	inline XREnvironment_t3020638101 ** get_address_of_m_Environment_1() { return &___m_Environment_1; }
	inline void set_m_Environment_1(XREnvironment_t3020638101 * value)
	{
		___m_Environment_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Environment_1), value);
	}

	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlane_t1025974819, ___PlaneAdded_2)); }
	inline Action_1_t2722643320 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t2722643320 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t2722643320 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneAdded_2), value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlane_t1025974819, ___PlaneUpdated_3)); }
	inline Action_1_t521953446 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_t521953446 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_t521953446 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneUpdated_3), value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlane_t1025974819, ___PlaneRemoved_4)); }
	inline Action_1_t1739597377 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t1739597377 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t1739597377 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneRemoved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRPlane
struct XRPlane_t1025974819_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___PlaneAdded_2;
	Il2CppMethodPointer ___PlaneUpdated_3;
	Il2CppMethodPointer ___PlaneRemoved_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRPlane
struct XRPlane_t1025974819_marshaled_com
{
	intptr_t ___m_Ptr_0;
	XREnvironment_t3020638101 * ___m_Environment_1;
	Il2CppMethodPointer ___PlaneAdded_2;
	Il2CppMethodPointer ___PlaneUpdated_3;
	Il2CppMethodPointer ___PlaneRemoved_4;
};
#endif // XRPLANE_T1025974819_H
#ifndef XRINSTANCE_T2947669413_H
#define XRINSTANCE_T2947669413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRInstance
struct  XRInstance_t2947669413  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.XR.XRInstance::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.XR.IXRSubsystemDescriptor UnityEngine.Experimental.XR.XRInstance::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(XRInstance_t2947669413, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(XRInstance_t2947669413, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.XRInstance
struct XRInstance_t2947669413_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.XRInstance
struct XRInstance_t2947669413_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // XRINSTANCE_T2947669413_H
#ifndef PLANEALIGNMENT_T1259054711_H
#define PLANEALIGNMENT_T1259054711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneAlignment
struct  PlaneAlignment_t1259054711 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1259054711, ___value___2)); }
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
#endif // PLANEALIGNMENT_T1259054711_H
#ifndef XRSUBSYSTEMDESCRIPTOR_1_T2061875956_H
#define XRSUBSYSTEMDESCRIPTOR_1_T2061875956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSubsystemDescriptor`1<UnityEngine.Experimental.XR.XREnvironment>
struct  XRSubsystemDescriptor_1_t2061875956  : public XRSubsystemDescriptorBase_t683206301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSUBSYSTEMDESCRIPTOR_1_T2061875956_H
#ifndef BOUNDEDPLANE_T1317492334_H
#define BOUNDEDPLANE_T1317492334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.BoundedPlane
struct  BoundedPlane_t1317492334 
{
public:
	// System.UInt32 UnityEngine.Experimental.XR.BoundedPlane::m_InstanceId
	uint32_t ___m_InstanceId_0;
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.BoundedPlane::<Id>k__BackingField
	TrackableId_t1251031970  ___U3CIdU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::<Center>k__BackingField
	Vector3_t3722313464  ___U3CCenterU3Ek__BackingField_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.XR.BoundedPlane::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_4;
	// UnityEngine.Vector2 UnityEngine.Experimental.XR.BoundedPlane::<Size>k__BackingField
	Vector2_t2156229523  ___U3CSizeU3Ek__BackingField_5;
	// UnityEngine.Experimental.XR.PlaneAlignment UnityEngine.Experimental.XR.BoundedPlane::<Alignment>k__BackingField
	int32_t ___U3CAlignmentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_InstanceId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___m_InstanceId_0)); }
	inline uint32_t get_m_InstanceId_0() const { return ___m_InstanceId_0; }
	inline uint32_t* get_address_of_m_InstanceId_0() { return &___m_InstanceId_0; }
	inline void set_m_InstanceId_0(uint32_t value)
	{
		___m_InstanceId_0 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CIdU3Ek__BackingField_1)); }
	inline TrackableId_t1251031970  get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline TrackableId_t1251031970 * get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(TrackableId_t1251031970  value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CPositionU3Ek__BackingField_2)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_2() const { return ___U3CPositionU3Ek__BackingField_2; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_2() { return &___U3CPositionU3Ek__BackingField_2; }
	inline void set_U3CPositionU3Ek__BackingField_2(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector3_t3722313464  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector3_t3722313464 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector3_t3722313464  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CRotationU3Ek__BackingField_4)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CSizeU3Ek__BackingField_5)); }
	inline Vector2_t2156229523  get_U3CSizeU3Ek__BackingField_5() const { return ___U3CSizeU3Ek__BackingField_5; }
	inline Vector2_t2156229523 * get_address_of_U3CSizeU3Ek__BackingField_5() { return &___U3CSizeU3Ek__BackingField_5; }
	inline void set_U3CSizeU3Ek__BackingField_5(Vector2_t2156229523  value)
	{
		___U3CSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAlignmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CAlignmentU3Ek__BackingField_6)); }
	inline int32_t get_U3CAlignmentU3Ek__BackingField_6() const { return ___U3CAlignmentU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAlignmentU3Ek__BackingField_6() { return &___U3CAlignmentU3Ek__BackingField_6; }
	inline void set_U3CAlignmentU3Ek__BackingField_6(int32_t value)
	{
		___U3CAlignmentU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDEDPLANE_T1317492334_H
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
#ifndef XRINSTANCE_1_T2305227310_H
#define XRINSTANCE_1_T2305227310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRInstance`1<UnityEngine.Experimental.XR.XREnvironmentSubsystemDescriptor>
struct  XRInstance_1_t2305227310  : public XRInstance_t2947669413
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRINSTANCE_1_T2305227310_H
#ifndef REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#define REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs
struct  ReferencePointUpdatedEventArgs_t2046512733 
{
public:
	// UnityEngine.Experimental.XR.ReferencePoint UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::<UpdatedReferencePoint>k__BackingField
	ReferencePoint_t394942483  ___U3CUpdatedReferencePointU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CUpdatedReferencePointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReferencePointUpdatedEventArgs_t2046512733, ___U3CUpdatedReferencePointU3Ek__BackingField_0)); }
	inline ReferencePoint_t394942483  get_U3CUpdatedReferencePointU3Ek__BackingField_0() const { return ___U3CUpdatedReferencePointU3Ek__BackingField_0; }
	inline ReferencePoint_t394942483 * get_address_of_U3CUpdatedReferencePointU3Ek__BackingField_0() { return &___U3CUpdatedReferencePointU3Ek__BackingField_0; }
	inline void set_U3CUpdatedReferencePointU3Ek__BackingField_0(ReferencePoint_t394942483  value)
	{
		___U3CUpdatedReferencePointU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#ifndef XRENVIRONMENT_T3020638101_H
#define XRENVIRONMENT_T3020638101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XREnvironment
struct  XREnvironment_t3020638101  : public XRInstance_1_t2305227310
{
public:
	// UnityEngine.Experimental.XR.XRDepth UnityEngine.Experimental.XR.XREnvironment::m_DepthInterface
	XRDepth_t2245415945 * ___m_DepthInterface_2;
	// UnityEngine.Experimental.XR.XRPlane UnityEngine.Experimental.XR.XREnvironment::m_PlanesInterface
	XRPlane_t1025974819 * ___m_PlanesInterface_3;
	// UnityEngine.Experimental.XR.XRRaycast UnityEngine.Experimental.XR.XREnvironment::m_RaycastInterface
	XRRaycast_t1323410695 * ___m_RaycastInterface_4;
	// UnityEngine.Experimental.XR.XRReferencePoint UnityEngine.Experimental.XR.XREnvironment::m_ReferencePointsInterface
	XRReferencePoint_t1456196979 * ___m_ReferencePointsInterface_5;
	// UnityEngine.Experimental.XR.XRSession UnityEngine.Experimental.XR.XREnvironment::m_SessionInterface
	XRSession_t1670964522 * ___m_SessionInterface_6;

public:
	inline static int32_t get_offset_of_m_DepthInterface_2() { return static_cast<int32_t>(offsetof(XREnvironment_t3020638101, ___m_DepthInterface_2)); }
	inline XRDepth_t2245415945 * get_m_DepthInterface_2() const { return ___m_DepthInterface_2; }
	inline XRDepth_t2245415945 ** get_address_of_m_DepthInterface_2() { return &___m_DepthInterface_2; }
	inline void set_m_DepthInterface_2(XRDepth_t2245415945 * value)
	{
		___m_DepthInterface_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DepthInterface_2), value);
	}

	inline static int32_t get_offset_of_m_PlanesInterface_3() { return static_cast<int32_t>(offsetof(XREnvironment_t3020638101, ___m_PlanesInterface_3)); }
	inline XRPlane_t1025974819 * get_m_PlanesInterface_3() const { return ___m_PlanesInterface_3; }
	inline XRPlane_t1025974819 ** get_address_of_m_PlanesInterface_3() { return &___m_PlanesInterface_3; }
	inline void set_m_PlanesInterface_3(XRPlane_t1025974819 * value)
	{
		___m_PlanesInterface_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlanesInterface_3), value);
	}

	inline static int32_t get_offset_of_m_RaycastInterface_4() { return static_cast<int32_t>(offsetof(XREnvironment_t3020638101, ___m_RaycastInterface_4)); }
	inline XRRaycast_t1323410695 * get_m_RaycastInterface_4() const { return ___m_RaycastInterface_4; }
	inline XRRaycast_t1323410695 ** get_address_of_m_RaycastInterface_4() { return &___m_RaycastInterface_4; }
	inline void set_m_RaycastInterface_4(XRRaycast_t1323410695 * value)
	{
		___m_RaycastInterface_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastInterface_4), value);
	}

	inline static int32_t get_offset_of_m_ReferencePointsInterface_5() { return static_cast<int32_t>(offsetof(XREnvironment_t3020638101, ___m_ReferencePointsInterface_5)); }
	inline XRReferencePoint_t1456196979 * get_m_ReferencePointsInterface_5() const { return ___m_ReferencePointsInterface_5; }
	inline XRReferencePoint_t1456196979 ** get_address_of_m_ReferencePointsInterface_5() { return &___m_ReferencePointsInterface_5; }
	inline void set_m_ReferencePointsInterface_5(XRReferencePoint_t1456196979 * value)
	{
		___m_ReferencePointsInterface_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReferencePointsInterface_5), value);
	}

	inline static int32_t get_offset_of_m_SessionInterface_6() { return static_cast<int32_t>(offsetof(XREnvironment_t3020638101, ___m_SessionInterface_6)); }
	inline XRSession_t1670964522 * get_m_SessionInterface_6() const { return ___m_SessionInterface_6; }
	inline XRSession_t1670964522 ** get_address_of_m_SessionInterface_6() { return &___m_SessionInterface_6; }
	inline void set_m_SessionInterface_6(XRSession_t1670964522 * value)
	{
		___m_SessionInterface_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SessionInterface_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRENVIRONMENT_T3020638101_H
#ifndef NULLABLE_1_T3040054416_H
#define NULLABLE_1_T3040054416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane>
struct  Nullable_1_t3040054416 
{
public:
	// T System.Nullable`1::value
	BoundedPlane_t1317492334  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3040054416, ___value_0)); }
	inline BoundedPlane_t1317492334  get_value_0() const { return ___value_0; }
	inline BoundedPlane_t1317492334 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(BoundedPlane_t1317492334  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3040054416, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3040054416_H
#ifndef PLANEUPDATEDEVENTARGS_T349485851_H
#define PLANEUPDATEDEVENTARGS_T349485851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct  PlaneUpdatedEventArgs_t349485851 
{
public:
	// UnityEngine.Experimental.XR.XRPlane UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::m_Planes
	XRPlane_t1025974819 * ___m_Planes_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::<UpdatedPlane>k__BackingField
	BoundedPlane_t1317492334  ___U3CUpdatedPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Planes_0() { return static_cast<int32_t>(offsetof(PlaneUpdatedEventArgs_t349485851, ___m_Planes_0)); }
	inline XRPlane_t1025974819 * get_m_Planes_0() const { return ___m_Planes_0; }
	inline XRPlane_t1025974819 ** get_address_of_m_Planes_0() { return &___m_Planes_0; }
	inline void set_m_Planes_0(XRPlane_t1025974819 * value)
	{
		___m_Planes_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Planes_0), value);
	}

	inline static int32_t get_offset_of_U3CUpdatedPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneUpdatedEventArgs_t349485851, ___U3CUpdatedPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CUpdatedPlaneU3Ek__BackingField_1() const { return ___U3CUpdatedPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CUpdatedPlaneU3Ek__BackingField_1() { return &___U3CUpdatedPlaneU3Ek__BackingField_1; }
	inline void set_U3CUpdatedPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CUpdatedPlaneU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct PlaneUpdatedEventArgs_t349485851_marshaled_pinvoke
{
	XRPlane_t1025974819_marshaled_pinvoke* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CUpdatedPlaneU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct PlaneUpdatedEventArgs_t349485851_marshaled_com
{
	XRPlane_t1025974819_marshaled_com* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CUpdatedPlaneU3Ek__BackingField_1;
};
#endif // PLANEUPDATEDEVENTARGS_T349485851_H
#ifndef ACTION_1_T2218980328_H
#define ACTION_1_T2218980328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct  Action_1_t2218980328  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2218980328_H
#ifndef XRENVIRONMENTSUBSYSTEMDESCRIPTOR_T940664606_H
#define XRENVIRONMENTSUBSYSTEMDESCRIPTOR_T940664606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XREnvironmentSubsystemDescriptor
struct  XREnvironmentSubsystemDescriptor_t940664606  : public XRSubsystemDescriptor_1_t2061875956
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRENVIRONMENTSUBSYSTEMDESCRIPTOR_T940664606_H
#ifndef PLANEADDEDEVENTARGS_T2550175725_H
#define PLANEADDEDEVENTARGS_T2550175725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct  PlaneAddedEventArgs_t2550175725 
{
public:
	// UnityEngine.Experimental.XR.XRPlane UnityEngine.Experimental.XR.PlaneAddedEventArgs::m_Planes
	XRPlane_t1025974819 * ___m_Planes_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneAddedEventArgs::<AddedPlane>k__BackingField
	BoundedPlane_t1317492334  ___U3CAddedPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Planes_0() { return static_cast<int32_t>(offsetof(PlaneAddedEventArgs_t2550175725, ___m_Planes_0)); }
	inline XRPlane_t1025974819 * get_m_Planes_0() const { return ___m_Planes_0; }
	inline XRPlane_t1025974819 ** get_address_of_m_Planes_0() { return &___m_Planes_0; }
	inline void set_m_Planes_0(XRPlane_t1025974819 * value)
	{
		___m_Planes_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Planes_0), value);
	}

	inline static int32_t get_offset_of_U3CAddedPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneAddedEventArgs_t2550175725, ___U3CAddedPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CAddedPlaneU3Ek__BackingField_1() const { return ___U3CAddedPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CAddedPlaneU3Ek__BackingField_1() { return &___U3CAddedPlaneU3Ek__BackingField_1; }
	inline void set_U3CAddedPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CAddedPlaneU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct PlaneAddedEventArgs_t2550175725_marshaled_pinvoke
{
	XRPlane_t1025974819_marshaled_pinvoke* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CAddedPlaneU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct PlaneAddedEventArgs_t2550175725_marshaled_com
{
	XRPlane_t1025974819_marshaled_com* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CAddedPlaneU3Ek__BackingField_1;
};
#endif // PLANEADDEDEVENTARGS_T2550175725_H
#ifndef ACTION_1_T3609124943_H
#define ACTION_1_T3609124943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs>
struct  Action_1_t3609124943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3609124943_H
#ifndef PLANEREMOVEDEVENTARGS_T1567129782_H
#define PLANEREMOVEDEVENTARGS_T1567129782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct  PlaneRemovedEventArgs_t1567129782 
{
public:
	// UnityEngine.Experimental.XR.XRPlane UnityEngine.Experimental.XR.PlaneRemovedEventArgs::m_Planes
	XRPlane_t1025974819 * ___m_Planes_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneRemovedEventArgs::<RemovedPlane>k__BackingField
	BoundedPlane_t1317492334  ___U3CRemovedPlaneU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane> UnityEngine.Experimental.XR.PlaneRemovedEventArgs::<SubsumedByPlane>k__BackingField
	Nullable_1_t3040054416  ___U3CSubsumedByPlaneU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Planes_0() { return static_cast<int32_t>(offsetof(PlaneRemovedEventArgs_t1567129782, ___m_Planes_0)); }
	inline XRPlane_t1025974819 * get_m_Planes_0() const { return ___m_Planes_0; }
	inline XRPlane_t1025974819 ** get_address_of_m_Planes_0() { return &___m_Planes_0; }
	inline void set_m_Planes_0(XRPlane_t1025974819 * value)
	{
		___m_Planes_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Planes_0), value);
	}

	inline static int32_t get_offset_of_U3CRemovedPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneRemovedEventArgs_t1567129782, ___U3CRemovedPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CRemovedPlaneU3Ek__BackingField_1() const { return ___U3CRemovedPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CRemovedPlaneU3Ek__BackingField_1() { return &___U3CRemovedPlaneU3Ek__BackingField_1; }
	inline void set_U3CRemovedPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CRemovedPlaneU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSubsumedByPlaneU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlaneRemovedEventArgs_t1567129782, ___U3CSubsumedByPlaneU3Ek__BackingField_2)); }
	inline Nullable_1_t3040054416  get_U3CSubsumedByPlaneU3Ek__BackingField_2() const { return ___U3CSubsumedByPlaneU3Ek__BackingField_2; }
	inline Nullable_1_t3040054416 * get_address_of_U3CSubsumedByPlaneU3Ek__BackingField_2() { return &___U3CSubsumedByPlaneU3Ek__BackingField_2; }
	inline void set_U3CSubsumedByPlaneU3Ek__BackingField_2(Nullable_1_t3040054416  value)
	{
		___U3CSubsumedByPlaneU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct PlaneRemovedEventArgs_t1567129782_marshaled_pinvoke
{
	XRPlane_t1025974819_marshaled_pinvoke* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CRemovedPlaneU3Ek__BackingField_1;
	Nullable_1_t3040054416  ___U3CSubsumedByPlaneU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct PlaneRemovedEventArgs_t1567129782_marshaled_com
{
	XRPlane_t1025974819_marshaled_com* ___m_Planes_0;
	BoundedPlane_t1317492334  ___U3CRemovedPlaneU3Ek__BackingField_1;
	Nullable_1_t3040054416  ___U3CSubsumedByPlaneU3Ek__BackingField_2;
};
#endif // PLANEREMOVEDEVENTARGS_T1567129782_H
#ifndef ACTION_1_T2722643320_H
#define ACTION_1_T2722643320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct  Action_1_t2722643320  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2722643320_H
#ifndef ACTION_1_T521953446_H
#define ACTION_1_T521953446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct  Action_1_t521953446  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T521953446_H
#ifndef ACTION_1_T1739597377_H
#define ACTION_1_T1739597377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct  Action_1_t1739597377  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1739597377_H

extern "C" void XRPlane_t1025974819_marshal_pinvoke(const XRPlane_t1025974819& unmarshaled, XRPlane_t1025974819_marshaled_pinvoke& marshaled);
extern "C" void XRPlane_t1025974819_marshal_pinvoke_back(const XRPlane_t1025974819_marshaled_pinvoke& marshaled, XRPlane_t1025974819& unmarshaled);
extern "C" void XRPlane_t1025974819_marshal_pinvoke_cleanup(XRPlane_t1025974819_marshaled_pinvoke& marshaled);
extern "C" void XRPlane_t1025974819_marshal_com(const XRPlane_t1025974819& unmarshaled, XRPlane_t1025974819_marshaled_com& marshaled);
extern "C" void XRPlane_t1025974819_marshal_com_back(const XRPlane_t1025974819_marshaled_com& marshaled, XRPlane_t1025974819& unmarshaled);
extern "C" void XRPlane_t1025974819_marshal_com_cleanup(XRPlane_t1025974819_marshaled_com& marshaled);
extern "C" void XRDepth_t2245415945_marshal_pinvoke(const XRDepth_t2245415945& unmarshaled, XRDepth_t2245415945_marshaled_pinvoke& marshaled);
extern "C" void XRDepth_t2245415945_marshal_pinvoke_back(const XRDepth_t2245415945_marshaled_pinvoke& marshaled, XRDepth_t2245415945& unmarshaled);
extern "C" void XRDepth_t2245415945_marshal_pinvoke_cleanup(XRDepth_t2245415945_marshaled_pinvoke& marshaled);
extern "C" void XRDepth_t2245415945_marshal_com(const XRDepth_t2245415945& unmarshaled, XRDepth_t2245415945_marshaled_com& marshaled);
extern "C" void XRDepth_t2245415945_marshal_com_back(const XRDepth_t2245415945_marshaled_com& marshaled, XRDepth_t2245415945& unmarshaled);
extern "C" void XRDepth_t2245415945_marshal_com_cleanup(XRDepth_t2245415945_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs>::Invoke(!0)
extern "C"  void Action_1_Invoke_m3012248422_gshared (Action_1_t3609124943 * __this, PointCloudUpdatedEventArgs_t3436657348  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>::Invoke(!0)
extern "C"  void Action_1_Invoke_m3662407658_gshared (Action_1_t2722643320 * __this, PlaneAddedEventArgs_t2550175725  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>::Invoke(!0)
extern "C"  void Action_1_Invoke_m4140516850_gshared (Action_1_t521953446 * __this, PlaneUpdatedEventArgs_t349485851  p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m1403297223_gshared (Nullable_1_t3040054416 * __this, BoundedPlane_t1317492334  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>::Invoke(!0)
extern "C"  void Action_1_Invoke_m316788244_gshared (Action_1_t1739597377 * __this, PlaneRemovedEventArgs_t1567129782  p0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1143137826_gshared (Action_1_t2218980328 * __this, ReferencePointUpdatedEventArgs_t2046512733  p0, const RuntimeMethod* method);

// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.BoundedPlane::get_Id()
extern "C"  TrackableId_t1251031970  BoundedPlane_get_Id_m4119012809 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Position()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Position_m1749003781 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Center()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Center_m3129244743 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Experimental.XR.BoundedPlane::get_Rotation()
extern "C"  Quaternion_t2301928331  BoundedPlane_get_Rotation_m3724065873 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Experimental.XR.BoundedPlane::get_Size()
extern "C"  Vector2_t2156229523  BoundedPlane_get_Size_m444011650 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.XR.PlaneAlignment UnityEngine.Experimental.XR.BoundedPlane::get_Alignment()
extern "C"  int32_t BoundedPlane_get_Alignment_m500801059 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.XR.BoundedPlane::get_Width()
extern "C"  float BoundedPlane_get_Width_m1128558320 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.XR.BoundedPlane::get_Height()
extern "C"  float BoundedPlane_get_Height_m2217563168 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Normal()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Normal_m1663591676 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m2890438515 (Plane_t1000493321 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane UnityEngine.Experimental.XR.BoundedPlane::get_Plane()
extern "C"  Plane_t1000493321  BoundedPlane_get_Plane_m1309236541 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::Add(!0)
#define List_1_Add_m1639501545(__this, p0, method) ((  void (*) (List_1_t2796510317 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::GetEnumerator()
#define List_1_GetEnumerator_m1976384227(__this, method) ((  Enumerator_t390786898  (*) (List_1_t2796510317 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::get_Current()
#define Enumerator_get_Current_m1865349197(__this, method) ((  RuntimeObject* (*) (Enumerator_t390786898 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::MoveNext()
#define Enumerator_MoveNext_m2339331321(__this, method) ((  bool (*) (Enumerator_t390786898 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::Dispose()
#define Enumerator_Dispose_m2111194506(__this, method) ((  void (*) (Enumerator_t390786898 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::Clear()
#define List_1_Clear_m2950022909(__this, method) ((  void (*) (List_1_t2796510317 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl>::.ctor()
#define List_1__ctor_m1589863(__this, method) ((  void (*) (List_1_t2796510317 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Experimental.XR.XRInstance::SetHandle(UnityEngine.Experimental.XR.XRInstance)
extern "C"  void XRInstance_SetHandle_m4231205486 (XRInstance_t2947669413 * __this, XRInstance_t2947669413 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::Add(!0)
#define List_1_Add_m1328180860(__this, p0, method) ((  void (*) (List_1_t124776859 *, XRInstance_t2947669413 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::GetEnumerator()
#define List_1_GetEnumerator_m3764194154(__this, method) ((  Enumerator_t2014020736  (*) (List_1_t124776859 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.XRInstance>::get_Current()
#define Enumerator_get_Current_m1154966014(__this, method) ((  XRInstance_t2947669413 * (*) (Enumerator_t2014020736 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.XRInstance>::MoveNext()
#define Enumerator_MoveNext_m1994215897(__this, method) ((  bool (*) (Enumerator_t2014020736 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.XR.XRInstance>::Dispose()
#define Enumerator_Dispose_m3856281449(__this, method) ((  void (*) (Enumerator_t2014020736 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::Clear()
#define List_1_Clear_m3996747356(__this, method) ((  void (*) (List_1_t124776859 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::get_Count()
#define List_1_get_Count_m3568513911(__this, method) ((  int32_t (*) (List_1_t124776859 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::get_Item(System.Int32)
#define List_1_get_Item_m2584384972(__this, p0, method) ((  XRInstance_t2947669413 * (*) (List_1_t124776859 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method)
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m941119945(__this, p0, method) ((  void (*) (List_1_t124776859 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Experimental.XR.XRInstance>::.ctor()
#define List_1__ctor_m4015583642(__this, method) ((  void (*) (List_1_t124776859 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Experimental.XR.PlaneAddedEventArgs::set_AddedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneAddedEventArgs_set_AddedPlane_m715350915 (PlaneAddedEventArgs_t2550175725 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.PlaneRemovedEventArgs::set_RemovedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneRemovedEventArgs_set_RemovedPlane_m2177346889 (PlaneRemovedEventArgs_t1567129782 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.PlaneRemovedEventArgs::set_SubsumedByPlane(System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane>)
extern "C"  void PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655 (PlaneRemovedEventArgs_t1567129782 * __this, Nullable_1_t3040054416  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::set_UpdatedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneUpdatedEventArgs_set_UpdatedPlane_m4129842743 (PlaneUpdatedEventArgs_t349485851 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::set_UpdatedReferencePoint(UnityEngine.Experimental.XR.ReferencePoint)
extern "C"  void ReferencePointUpdatedEventArgs_set_UpdatedReferencePoint_m1776125678 (ReferencePointUpdatedEventArgs_t2046512733 * __this, ReferencePoint_t394942483  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
extern "C"  String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Experimental.XR.TrackableId::ToString()
extern "C"  String_t* TrackableId_ToString_m2456781735 (TrackableId_t1251031970 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.XR.TrackableId::GetHashCode()
extern "C"  int32_t TrackableId_GetHashCode_m3350007337 (TrackableId_t1251031970 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.XR.TrackableId::Equals(System.Object)
extern "C"  bool TrackableId_Equals_m1354170007 (TrackableId_t1251031970 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Experimental.XR.XRDepth::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRDepth_Internal_Create_m205296279 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRDepth::SetHandle(UnityEngine.Experimental.XR.XRDepth)
extern "C"  void XRDepth_SetHandle_m3654136311 (XRDepth_t2245415945 * __this, XRDepth_t2245415945 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs>::Invoke(!0)
#define Action_1_Invoke_m3012248422(__this, p0, method) ((  void (*) (Action_1_t3609124943 *, PointCloudUpdatedEventArgs_t3436657348 , const RuntimeMethod*))Action_1_Invoke_m3012248422_gshared)(__this, p0, method)
// System.Void UnityEngine.Experimental.XR.XRDepth::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRDepth__ctor_m3303756437 (XRDepth_t2245415945 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRPlane::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRPlane__ctor_m683966945 (XRPlane_t1025974819 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRRaycast::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRRaycast__ctor_m451496337 (XRRaycast_t1323410695 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRReferencePoint__ctor_m3526435100 (XRReferencePoint_t1456196979 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRSession::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRSession__ctor_m4290195746 (XRSession_t1670964522 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Experimental.XR.XRPlane::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRPlane_Internal_Create_m2251646397 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRPlane::SetHandle(UnityEngine.Experimental.XR.XRPlane)
extern "C"  void XRPlane_SetHandle_m4233044839 (XRPlane_t1025974819 * __this, XRPlane_t1025974819 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>::Invoke(!0)
#define Action_1_Invoke_m3662407658(__this, p0, method) ((  void (*) (Action_1_t2722643320 *, PlaneAddedEventArgs_t2550175725 , const RuntimeMethod*))Action_1_Invoke_m3662407658_gshared)(__this, p0, method)
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>::Invoke(!0)
#define Action_1_Invoke_m4140516850(__this, p0, method) ((  void (*) (Action_1_t521953446 *, PlaneUpdatedEventArgs_t349485851 , const RuntimeMethod*))Action_1_Invoke_m4140516850_gshared)(__this, p0, method)
// System.Void System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane>::.ctor(!0)
#define Nullable_1__ctor_m1403297223(__this, p0, method) ((  void (*) (Nullable_1_t3040054416 *, BoundedPlane_t1317492334 , const RuntimeMethod*))Nullable_1__ctor_m1403297223_gshared)(__this, p0, method)
// System.Void System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>::Invoke(!0)
#define Action_1_Invoke_m316788244(__this, p0, method) ((  void (*) (Action_1_t1739597377 *, PlaneRemovedEventArgs_t1567129782 , const RuntimeMethod*))Action_1_Invoke_m316788244_gshared)(__this, p0, method)
// System.IntPtr UnityEngine.Experimental.XR.XRRaycast::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRRaycast_Internal_Create_m2359328718 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRRaycast::SetHandle(UnityEngine.Experimental.XR.XRRaycast)
extern "C"  void XRRaycast_SetHandle_m3238199581 (XRRaycast_t1323410695 * __this, XRRaycast_t1323410695 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Experimental.XR.XRReferencePoint::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRReferencePoint_Internal_Create_m489040944 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::SetHandle(UnityEngine.Experimental.XR.XRReferencePoint)
extern "C"  void XRReferencePoint_SetHandle_m2788657328 (XRReferencePoint_t1456196979 * __this, XRReferencePoint_t1456196979 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>::Invoke(!0)
#define Action_1_Invoke_m1143137826(__this, p0, method) ((  void (*) (Action_1_t2218980328 *, ReferencePointUpdatedEventArgs_t2046512733 , const RuntimeMethod*))Action_1_Invoke_m1143137826_gshared)(__this, p0, method)
// System.IntPtr UnityEngine.Experimental.XR.XRSession::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRSession_Internal_Create_m2980565374 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.XR.XRSession::SetHandle(UnityEngine.Experimental.XR.XRSession)
extern "C"  void XRSession_SetHandle_m374505589 (XRSession_t1670964522 * __this, XRSession_t1670964522 * ___inst0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.BoundedPlane::get_Id()
extern "C"  TrackableId_t1251031970  BoundedPlane_get_Id_m4119012809 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	TrackableId_t1251031970  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TrackableId_t1251031970  L_0 = __this->get_U3CIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		TrackableId_t1251031970  L_1 = V_0;
		return L_1;
	}
}
extern "C"  TrackableId_t1251031970  BoundedPlane_get_Id_m4119012809_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Id_m4119012809(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Position()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Position_m1749003781 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_U3CPositionU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  BoundedPlane_get_Position_m1749003781_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Position_m1749003781(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Center()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Center_m3129244743 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_U3CCenterU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  BoundedPlane_get_Center_m3129244743_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Center_m3129244743(_thisAdjusted, method);
}
// UnityEngine.Quaternion UnityEngine.Experimental.XR.BoundedPlane::get_Rotation()
extern "C"  Quaternion_t2301928331  BoundedPlane_get_Rotation_m3724065873 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t2301928331  L_0 = __this->get_U3CRotationU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t2301928331  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Quaternion_t2301928331  BoundedPlane_get_Rotation_m3724065873_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Rotation_m3724065873(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Experimental.XR.BoundedPlane::get_Size()
extern "C"  Vector2_t2156229523  BoundedPlane_get_Size_m444011650 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = __this->get_U3CSizeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t2156229523  BoundedPlane_get_Size_m444011650_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Size_m444011650(_thisAdjusted, method);
}
// UnityEngine.Experimental.XR.PlaneAlignment UnityEngine.Experimental.XR.BoundedPlane::get_Alignment()
extern "C"  int32_t BoundedPlane_get_Alignment_m500801059 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CAlignmentU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t BoundedPlane_get_Alignment_m500801059_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Alignment_m500801059(_thisAdjusted, method);
}
// System.Single UnityEngine.Experimental.XR.BoundedPlane::get_Width()
extern "C"  float BoundedPlane_get_Width_m1128558320 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Vector2_t2156229523  L_0 = BoundedPlane_get_Size_m444011650((BoundedPlane_t1317492334 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_x_0();
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		float L_2 = V_1;
		return L_2;
	}
}
extern "C"  float BoundedPlane_get_Width_m1128558320_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Width_m1128558320(_thisAdjusted, method);
}
// System.Single UnityEngine.Experimental.XR.BoundedPlane::get_Height()
extern "C"  float BoundedPlane_get_Height_m2217563168 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Vector2_t2156229523  L_0 = BoundedPlane_get_Size_m444011650((BoundedPlane_t1317492334 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (&V_0)->get_y_1();
		V_1 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		float L_2 = V_1;
		return L_2;
	}
}
extern "C"  float BoundedPlane_get_Height_m2217563168_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Height_m2217563168(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::get_Normal()
extern "C"  Vector3_t3722313464  BoundedPlane_get_Normal_m1663591676 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundedPlane_get_Normal_m1663591676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t2301928331  L_0 = BoundedPlane_get_Rotation_m3724065873((BoundedPlane_t1317492334 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
extern "C"  Vector3_t3722313464  BoundedPlane_get_Normal_m1663591676_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Normal_m1663591676(_thisAdjusted, method);
}
// UnityEngine.Plane UnityEngine.Experimental.XR.BoundedPlane::get_Plane()
extern "C"  Plane_t1000493321  BoundedPlane_get_Plane_m1309236541 (BoundedPlane_t1317492334 * __this, const RuntimeMethod* method)
{
	Plane_t1000493321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = BoundedPlane_get_Normal_m1663591676((BoundedPlane_t1317492334 *)__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = BoundedPlane_get_Center_m3129244743((BoundedPlane_t1317492334 *)__this, /*hidden argument*/NULL);
		Plane_t1000493321  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Plane__ctor_m2890438515((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		Plane_t1000493321  L_3 = V_0;
		return L_3;
	}
}
extern "C"  Plane_t1000493321  BoundedPlane_get_Plane_m1309236541_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	BoundedPlane_t1317492334 * _thisAdjusted = reinterpret_cast<BoundedPlane_t1317492334 *>(__this + 1);
	return BoundedPlane_get_Plane_m1309236541(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemDescriptors::Internal_InitializeManagedDescriptor(System.IntPtr,UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl)
extern "C"  void Internal_XRSubsystemDescriptors_Internal_InitializeManagedDescriptor_m3246767543 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, RuntimeObject* ___desc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemDescriptors_Internal_InitializeManagedDescriptor_m3246767543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___desc1;
		intptr_t L_1 = ___ptr0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(0 /* System.Void UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl::set_ptr(System.IntPtr) */, IXRSubsystemDescriptorImpl_t1324435575_il2cpp_TypeInfo_var, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var);
		List_1_t2796510317 * L_2 = ((Internal_XRSubsystemDescriptors_t999582310_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var))->get_s_SubsystemDescriptors_0();
		RuntimeObject* L_3 = ___desc1;
		NullCheck(L_2);
		List_1_Add_m1639501545(L_2, L_3, /*hidden argument*/List_1_Add_m1639501545_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemDescriptors::Internal_ClearManagedDescriptors()
extern "C"  void Internal_XRSubsystemDescriptors_Internal_ClearManagedDescriptors_m2569941221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemDescriptors_Internal_ClearManagedDescriptors_m2569941221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Enumerator_t390786898  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var);
		List_1_t2796510317 * L_0 = ((Internal_XRSubsystemDescriptors_t999582310_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var))->get_s_SubsystemDescriptors_0();
		NullCheck(L_0);
		Enumerator_t390786898  L_1 = List_1_GetEnumerator_m1976384227(L_0, /*hidden argument*/List_1_GetEnumerator_m1976384227_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0012:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m1865349197((Enumerator_t390786898 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1865349197_RuntimeMethod_var);
			V_0 = L_2;
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			InterfaceActionInvoker1< intptr_t >::Invoke(0 /* System.Void UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl::set_ptr(System.IntPtr) */, IXRSubsystemDescriptorImpl_t1324435575_il2cpp_TypeInfo_var, L_3, (intptr_t)(0));
		}

IL_0027:
		{
			bool L_4 = Enumerator_MoveNext_m2339331321((Enumerator_t390786898 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2339331321_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0012;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2111194506((Enumerator_t390786898 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2111194506_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var);
		List_1_t2796510317 * L_5 = ((Internal_XRSubsystemDescriptors_t999582310_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var))->get_s_SubsystemDescriptors_0();
		NullCheck(L_5);
		List_1_Clear_m2950022909(L_5, /*hidden argument*/List_1_Clear_m2950022909_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemDescriptors::.cctor()
extern "C"  void Internal_XRSubsystemDescriptors__cctor_m3472118126 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemDescriptors__cctor_m3472118126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2796510317 * L_0 = (List_1_t2796510317 *)il2cpp_codegen_object_new(List_1_t2796510317_il2cpp_TypeInfo_var);
		List_1__ctor_m1589863(L_0, /*hidden argument*/List_1__ctor_m1589863_RuntimeMethod_var);
		((Internal_XRSubsystemDescriptors_t999582310_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemDescriptors_t999582310_il2cpp_TypeInfo_var))->set_s_SubsystemDescriptors_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemInstances::Internal_InitializeManagedInstance(System.IntPtr,UnityEngine.Experimental.XR.XRInstance)
extern "C"  void Internal_XRSubsystemInstances_Internal_InitializeManagedInstance_m65822767 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, XRInstance_t2947669413 * ___inst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemInstances_Internal_InitializeManagedInstance_m65822767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRInstance_t2947669413 * L_0 = ___inst1;
		intptr_t L_1 = ___ptr0;
		NullCheck(L_0);
		L_0->set_m_Ptr_0(L_1);
		XRInstance_t2947669413 * L_2 = ___inst1;
		XRInstance_t2947669413 * L_3 = ___inst1;
		NullCheck(L_2);
		XRInstance_SetHandle_m4231205486(L_2, L_3, /*hidden argument*/NULL);
		XRInstance_t2947669413 * L_4 = ___inst1;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.Experimental.XR.XRInstance::Initialize() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_5 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		XRInstance_t2947669413 * L_6 = ___inst1;
		NullCheck(L_5);
		List_1_Add_m1328180860(L_5, L_6, /*hidden argument*/List_1_Add_m1328180860_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemInstances::Internal_ClearManagedInstances()
extern "C"  void Internal_XRSubsystemInstances_Internal_ClearManagedInstances_m2100663450 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemInstances_Internal_ClearManagedInstances_m2100663450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRInstance_t2947669413 * V_0 = NULL;
	Enumerator_t2014020736  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_0 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		NullCheck(L_0);
		Enumerator_t2014020736  L_1 = List_1_GetEnumerator_m3764194154(L_0, /*hidden argument*/List_1_GetEnumerator_m3764194154_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0012:
		{
			XRInstance_t2947669413 * L_2 = Enumerator_get_Current_m1154966014((Enumerator_t2014020736 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1154966014_RuntimeMethod_var);
			V_0 = L_2;
			XRInstance_t2947669413 * L_3 = V_0;
			NullCheck(L_3);
			L_3->set_m_Ptr_0((intptr_t)(0));
		}

IL_0027:
		{
			bool L_4 = Enumerator_MoveNext_m1994215897((Enumerator_t2014020736 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1994215897_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0012;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3856281449((Enumerator_t2014020736 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3856281449_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_5 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		NullCheck(L_5);
		List_1_Clear_m3996747356(L_5, /*hidden argument*/List_1_Clear_m3996747356_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemInstances::Internal_RemoveInstanceByPtr(System.IntPtr)
extern "C"  void Internal_XRSubsystemInstances_Internal_RemoveInstanceByPtr_m1296743304 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemInstances_Internal_RemoveInstanceByPtr_m1296743304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_0 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3568513911(L_0, /*hidden argument*/List_1_get_Count_m3568513911_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0056;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_2 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		XRInstance_t2947669413 * L_4 = List_1_get_Item_m2584384972(L_2, L_3, /*hidden argument*/List_1_get_Item_m2584384972_RuntimeMethod_var);
		NullCheck(L_4);
		intptr_t L_5 = L_4->get_m_Ptr_0();
		intptr_t L_6 = ___ptr0;
		bool L_7 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var);
		List_1_t124776859 * L_8 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		XRInstance_t2947669413 * L_10 = List_1_get_Item_m2584384972(L_8, L_9, /*hidden argument*/List_1_get_Item_m2584384972_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->set_m_Ptr_0((intptr_t)(0));
		List_1_t124776859 * L_11 = ((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->get_s_SubsystemInstances_0();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		List_1_RemoveAt_m941119945(L_11, L_12, /*hidden argument*/List_1_RemoveAt_m941119945_RuntimeMethod_var);
	}

IL_0051:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_0056:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.Internal_XRSubsystemInstances::.cctor()
extern "C"  void Internal_XRSubsystemInstances__cctor_m746450146 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Internal_XRSubsystemInstances__cctor_m746450146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t124776859 * L_0 = (List_1_t124776859 *)il2cpp_codegen_object_new(List_1_t124776859_il2cpp_TypeInfo_var);
		List_1__ctor_m4015583642(L_0, /*hidden argument*/List_1__ctor_m4015583642_RuntimeMethod_var);
		((Internal_XRSubsystemInstances_t919880308_StaticFields*)il2cpp_codegen_static_fields_for(Internal_XRSubsystemInstances_t919880308_il2cpp_TypeInfo_var))->set_s_SubsystemInstances_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneAddedEventArgs
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_pinvoke(const PlaneAddedEventArgs_t2550175725& unmarshaled, PlaneAddedEventArgs_t2550175725_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneAddedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_pinvoke_back(const PlaneAddedEventArgs_t2550175725_marshaled_pinvoke& marshaled, PlaneAddedEventArgs_t2550175725& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneAddedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneAddedEventArgs
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_pinvoke_cleanup(PlaneAddedEventArgs_t2550175725_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneAddedEventArgs
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_com(const PlaneAddedEventArgs_t2550175725& unmarshaled, PlaneAddedEventArgs_t2550175725_marshaled_com& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneAddedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_com_back(const PlaneAddedEventArgs_t2550175725_marshaled_com& marshaled, PlaneAddedEventArgs_t2550175725& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneAddedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneAddedEventArgs
extern "C" void PlaneAddedEventArgs_t2550175725_marshal_com_cleanup(PlaneAddedEventArgs_t2550175725_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.PlaneAddedEventArgs::set_AddedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneAddedEventArgs_set_AddedPlane_m715350915 (PlaneAddedEventArgs_t2550175725 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t1317492334  L_0 = ___value0;
		__this->set_U3CAddedPlaneU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void PlaneAddedEventArgs_set_AddedPlane_m715350915_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	PlaneAddedEventArgs_t2550175725 * _thisAdjusted = reinterpret_cast<PlaneAddedEventArgs_t2550175725 *>(__this + 1);
	PlaneAddedEventArgs_set_AddedPlane_m715350915(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneRemovedEventArgs
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_pinvoke(const PlaneRemovedEventArgs_t1567129782& unmarshaled, PlaneRemovedEventArgs_t1567129782_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneRemovedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_pinvoke_back(const PlaneRemovedEventArgs_t1567129782_marshaled_pinvoke& marshaled, PlaneRemovedEventArgs_t1567129782& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneRemovedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneRemovedEventArgs
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_pinvoke_cleanup(PlaneRemovedEventArgs_t1567129782_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneRemovedEventArgs
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_com(const PlaneRemovedEventArgs_t1567129782& unmarshaled, PlaneRemovedEventArgs_t1567129782_marshaled_com& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneRemovedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_com_back(const PlaneRemovedEventArgs_t1567129782_marshaled_com& marshaled, PlaneRemovedEventArgs_t1567129782& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneRemovedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneRemovedEventArgs
extern "C" void PlaneRemovedEventArgs_t1567129782_marshal_com_cleanup(PlaneRemovedEventArgs_t1567129782_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.PlaneRemovedEventArgs::set_RemovedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneRemovedEventArgs_set_RemovedPlane_m2177346889 (PlaneRemovedEventArgs_t1567129782 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t1317492334  L_0 = ___value0;
		__this->set_U3CRemovedPlaneU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void PlaneRemovedEventArgs_set_RemovedPlane_m2177346889_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	PlaneRemovedEventArgs_t1567129782 * _thisAdjusted = reinterpret_cast<PlaneRemovedEventArgs_t1567129782 *>(__this + 1);
	PlaneRemovedEventArgs_set_RemovedPlane_m2177346889(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Experimental.XR.PlaneRemovedEventArgs::set_SubsumedByPlane(System.Nullable`1<UnityEngine.Experimental.XR.BoundedPlane>)
extern "C"  void PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655 (PlaneRemovedEventArgs_t1567129782 * __this, Nullable_1_t3040054416  ___value0, const RuntimeMethod* method)
{
	{
		Nullable_1_t3040054416  L_0 = ___value0;
		__this->set_U3CSubsumedByPlaneU3Ek__BackingField_2(L_0);
		return;
	}
}
extern "C"  void PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655_AdjustorThunk (RuntimeObject * __this, Nullable_1_t3040054416  ___value0, const RuntimeMethod* method)
{
	PlaneRemovedEventArgs_t1567129782 * _thisAdjusted = reinterpret_cast<PlaneRemovedEventArgs_t1567129782 *>(__this + 1);
	PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_pinvoke(const PlaneUpdatedEventArgs_t349485851& unmarshaled, PlaneUpdatedEventArgs_t349485851_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_pinvoke_back(const PlaneUpdatedEventArgs_t349485851_marshaled_pinvoke& marshaled, PlaneUpdatedEventArgs_t349485851& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_pinvoke_cleanup(PlaneUpdatedEventArgs_t349485851_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_com(const PlaneUpdatedEventArgs_t349485851& unmarshaled, PlaneUpdatedEventArgs_t349485851_marshaled_com& marshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_com_back(const PlaneUpdatedEventArgs_t349485851_marshaled_com& marshaled, PlaneUpdatedEventArgs_t349485851& unmarshaled)
{
	Exception_t* ___m_Planes_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Planes' of type 'PlaneUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Planes_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
extern "C" void PlaneUpdatedEventArgs_t349485851_marshal_com_cleanup(PlaneUpdatedEventArgs_t349485851_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::set_UpdatedPlane(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void PlaneUpdatedEventArgs_set_UpdatedPlane_m4129842743 (PlaneUpdatedEventArgs_t349485851 * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t1317492334  L_0 = ___value0;
		__this->set_U3CUpdatedPlaneU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void PlaneUpdatedEventArgs_set_UpdatedPlane_m4129842743_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t1317492334  ___value0, const RuntimeMethod* method)
{
	PlaneUpdatedEventArgs_t349485851 * _thisAdjusted = reinterpret_cast<PlaneUpdatedEventArgs_t349485851 *>(__this + 1);
	PlaneUpdatedEventArgs_set_UpdatedPlane_m4129842743(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_pinvoke(const PointCloudUpdatedEventArgs_t3436657348& unmarshaled, PointCloudUpdatedEventArgs_t3436657348_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Depth_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Depth' of type 'PointCloudUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Depth_0Exception, NULL, NULL);
}
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_pinvoke_back(const PointCloudUpdatedEventArgs_t3436657348_marshaled_pinvoke& marshaled, PointCloudUpdatedEventArgs_t3436657348& unmarshaled)
{
	Exception_t* ___m_Depth_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Depth' of type 'PointCloudUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Depth_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_pinvoke_cleanup(PointCloudUpdatedEventArgs_t3436657348_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_com(const PointCloudUpdatedEventArgs_t3436657348& unmarshaled, PointCloudUpdatedEventArgs_t3436657348_marshaled_com& marshaled)
{
	Exception_t* ___m_Depth_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Depth' of type 'PointCloudUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Depth_0Exception, NULL, NULL);
}
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_com_back(const PointCloudUpdatedEventArgs_t3436657348_marshaled_com& marshaled, PointCloudUpdatedEventArgs_t3436657348& unmarshaled)
{
	Exception_t* ___m_Depth_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Depth' of type 'PointCloudUpdatedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Depth_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
extern "C" void PointCloudUpdatedEventArgs_t3436657348_marshal_com_cleanup(PointCloudUpdatedEventArgs_t3436657348_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::set_UpdatedReferencePoint(UnityEngine.Experimental.XR.ReferencePoint)
extern "C"  void ReferencePointUpdatedEventArgs_set_UpdatedReferencePoint_m1776125678 (ReferencePointUpdatedEventArgs_t2046512733 * __this, ReferencePoint_t394942483  ___value0, const RuntimeMethod* method)
{
	{
		ReferencePoint_t394942483  L_0 = ___value0;
		__this->set_U3CUpdatedReferencePointU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void ReferencePointUpdatedEventArgs_set_UpdatedReferencePoint_m1776125678_AdjustorThunk (RuntimeObject * __this, ReferencePoint_t394942483  ___value0, const RuntimeMethod* method)
{
	ReferencePointUpdatedEventArgs_t2046512733 * _thisAdjusted = reinterpret_cast<ReferencePointUpdatedEventArgs_t2046512733 *>(__this + 1);
	ReferencePointUpdatedEventArgs_set_UpdatedReferencePoint_m1776125678(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Experimental.XR.TrackableId::ToString()
extern "C"  String_t* TrackableId_ToString_m2456781735 (TrackableId_t1251031970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_ToString_m2456781735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		String_t* L_1 = UInt64_ToString_m2177233542((uint64_t*)L_0, _stringLiteral2268009268, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		String_t* L_3 = UInt64_ToString_m2177233542((uint64_t*)L_2, _stringLiteral2268009268, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4273954858, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
extern "C"  String_t* TrackableId_ToString_m2456781735_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableId_t1251031970 * _thisAdjusted = reinterpret_cast<TrackableId_t1251031970 *>(__this + 1);
	return TrackableId_ToString_m2456781735(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Experimental.XR.TrackableId::GetHashCode()
extern "C"  int32_t TrackableId_GetHashCode_m3350007337 (TrackableId_t1251031970 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		int32_t L_1 = UInt64_GetHashCode_m4209760355((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		int32_t L_3 = UInt64_GetHashCode_m4209760355((uint64_t*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t TrackableId_GetHashCode_m3350007337_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TrackableId_t1251031970 * _thisAdjusted = reinterpret_cast<TrackableId_t1251031970 *>(__this + 1);
	return TrackableId_GetHashCode_m3350007337(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.XR.TrackableId::Equals(System.Object)
extern "C"  bool TrackableId_Equals_m1354170007 (TrackableId_t1251031970 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId_Equals_m1354170007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableId_t1251031970  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TrackableId_t1251031970_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(TrackableId_t1251031970 *)((TrackableId_t1251031970 *)UnBox(L_1, TrackableId_t1251031970_il2cpp_TypeInfo_var))));
		uint64_t L_2 = __this->get_m_SubId1_1();
		uint64_t L_3 = (&V_0)->get_m_SubId1_1();
		if ((!(((uint64_t)L_2) == ((uint64_t)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		uint64_t L_4 = __this->get_m_SubId2_2();
		uint64_t L_5 = (&V_0)->get_m_SubId2_2();
		G_B4_0 = ((((int64_t)L_4) == ((int64_t)L_5))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B4_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0045;
	}

IL_003e:
	{
		V_1 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
extern "C"  bool TrackableId_Equals_m1354170007_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TrackableId_t1251031970 * _thisAdjusted = reinterpret_cast<TrackableId_t1251031970 *>(__this + 1);
	return TrackableId_Equals_m1354170007(_thisAdjusted, ___obj0, method);
}
// System.Void UnityEngine.Experimental.XR.TrackableId::.cctor()
extern "C"  void TrackableId__cctor_m2923896333 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableId__cctor_m2923896333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableId_t1251031970  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableId_t1251031970 ));
		TrackableId_t1251031970  L_0 = V_0;
		((TrackableId_t1251031970_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t1251031970_il2cpp_TypeInfo_var))->set_s_InvalidId_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRDepth
extern "C" void XRDepth_t2245415945_marshal_pinvoke(const XRDepth_t2245415945& unmarshaled, XRDepth_t2245415945_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRDepth': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRDepth_t2245415945_marshal_pinvoke_back(const XRDepth_t2245415945_marshaled_pinvoke& marshaled, XRDepth_t2245415945& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRDepth': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRDepth
extern "C" void XRDepth_t2245415945_marshal_pinvoke_cleanup(XRDepth_t2245415945_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRDepth
extern "C" void XRDepth_t2245415945_marshal_com(const XRDepth_t2245415945& unmarshaled, XRDepth_t2245415945_marshaled_com& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRDepth': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRDepth_t2245415945_marshal_com_back(const XRDepth_t2245415945_marshaled_com& marshaled, XRDepth_t2245415945& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRDepth': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRDepth
extern "C" void XRDepth_t2245415945_marshal_com_cleanup(XRDepth_t2245415945_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRDepth::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRDepth__ctor_m3303756437 (XRDepth_t2245415945 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeEnvironment0;
		intptr_t L_1 = XRDepth_Internal_Create_m205296279(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		XREnvironment_t3020638101 * L_2 = ___managedEnvironment1;
		__this->set_m_Environment_1(L_2);
		XRDepth_SetHandle_m3654136311(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRDepth::NotifyDepthDestruction()
extern "C"  void XRDepth_NotifyDepthDestruction_m3138342419 (XRDepth_t2245415945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDepth_NotifyDepthDestruction_m3138342419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Ptr_0((intptr_t)(0));
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRDepth::InvokePointCloudUpdatedEvent()
extern "C"  void XRDepth_InvokePointCloudUpdatedEvent_m2142025041 (XRDepth_t2245415945 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDepth_InvokePointCloudUpdatedEvent_m2142025041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PointCloudUpdatedEventArgs_t3436657348  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Action_1_t3609124943 * L_0 = __this->get_PointCloudUpdated_2();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Action_1_t3609124943 * L_1 = __this->get_PointCloudUpdated_2();
		il2cpp_codegen_initobj((&V_0), sizeof(PointCloudUpdatedEventArgs_t3436657348 ));
		(&V_0)->set_m_Depth_0(__this);
		PointCloudUpdatedEventArgs_t3436657348  L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m3012248422(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3012248422_RuntimeMethod_var);
	}

IL_002a:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Experimental.XR.XRDepth::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRDepth_Internal_Create_m205296279 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method)
{
	typedef intptr_t (*XRDepth_Internal_Create_m205296279_ftn) (intptr_t);
	static XRDepth_Internal_Create_m205296279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDepth_Internal_Create_m205296279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRDepth::Internal_Create(System.IntPtr)");
	intptr_t retVal = _il2cpp_icall_func(___xrEnvironment0);
	return retVal;
}
// System.Void UnityEngine.Experimental.XR.XRDepth::SetHandle(UnityEngine.Experimental.XR.XRDepth)
extern "C"  void XRDepth_SetHandle_m3654136311 (XRDepth_t2245415945 * __this, XRDepth_t2245415945 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRDepth_SetHandle_m3654136311_ftn) (XRDepth_t2245415945 *, XRDepth_t2245415945 *);
	static XRDepth_SetHandle_m3654136311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDepth_SetHandle_m3654136311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRDepth::SetHandle(UnityEngine.Experimental.XR.XRDepth)");
	_il2cpp_icall_func(__this, ___inst0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.XR.XREnvironment::Initialize()
extern "C"  void XREnvironment_Initialize_m2669045601 (XREnvironment_t3020638101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XREnvironment_Initialize_m2669045601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((XRInstance_t2947669413 *)__this)->get_m_Ptr_0();
		XRDepth_t2245415945 * L_1 = (XRDepth_t2245415945 *)il2cpp_codegen_object_new(XRDepth_t2245415945_il2cpp_TypeInfo_var);
		XRDepth__ctor_m3303756437(L_1, L_0, __this, /*hidden argument*/NULL);
		__this->set_m_DepthInterface_2(L_1);
		intptr_t L_2 = ((XRInstance_t2947669413 *)__this)->get_m_Ptr_0();
		XRPlane_t1025974819 * L_3 = (XRPlane_t1025974819 *)il2cpp_codegen_object_new(XRPlane_t1025974819_il2cpp_TypeInfo_var);
		XRPlane__ctor_m683966945(L_3, L_2, __this, /*hidden argument*/NULL);
		__this->set_m_PlanesInterface_3(L_3);
		intptr_t L_4 = ((XRInstance_t2947669413 *)__this)->get_m_Ptr_0();
		XRRaycast_t1323410695 * L_5 = (XRRaycast_t1323410695 *)il2cpp_codegen_object_new(XRRaycast_t1323410695_il2cpp_TypeInfo_var);
		XRRaycast__ctor_m451496337(L_5, L_4, __this, /*hidden argument*/NULL);
		__this->set_m_RaycastInterface_4(L_5);
		intptr_t L_6 = ((XRInstance_t2947669413 *)__this)->get_m_Ptr_0();
		XRReferencePoint_t1456196979 * L_7 = (XRReferencePoint_t1456196979 *)il2cpp_codegen_object_new(XRReferencePoint_t1456196979_il2cpp_TypeInfo_var);
		XRReferencePoint__ctor_m3526435100(L_7, L_6, __this, /*hidden argument*/NULL);
		__this->set_m_ReferencePointsInterface_5(L_7);
		intptr_t L_8 = ((XRInstance_t2947669413 *)__this)->get_m_Ptr_0();
		XRSession_t1670964522 * L_9 = (XRSession_t1670964522 *)il2cpp_codegen_object_new(XRSession_t1670964522_il2cpp_TypeInfo_var);
		XRSession__ctor_m4290195746(L_9, L_8, __this, /*hidden argument*/NULL);
		__this->set_m_SessionInterface_6(L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRInstance
extern "C" void XRInstance_t2947669413_marshal_pinvoke(const XRInstance_t2947669413& unmarshaled, XRInstance_t2947669413_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'XRInstance': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL, NULL);
}
extern "C" void XRInstance_t2947669413_marshal_pinvoke_back(const XRInstance_t2947669413_marshaled_pinvoke& marshaled, XRInstance_t2947669413& unmarshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'XRInstance': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRInstance
extern "C" void XRInstance_t2947669413_marshal_pinvoke_cleanup(XRInstance_t2947669413_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRInstance
extern "C" void XRInstance_t2947669413_marshal_com(const XRInstance_t2947669413& unmarshaled, XRInstance_t2947669413_marshaled_com& marshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'XRInstance': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL, NULL);
}
extern "C" void XRInstance_t2947669413_marshal_com_back(const XRInstance_t2947669413_marshaled_com& marshaled, XRInstance_t2947669413& unmarshaled)
{
	Exception_t* ___m_subsystemDescriptor_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_subsystemDescriptor' of type 'XRInstance': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_subsystemDescriptor_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRInstance
extern "C" void XRInstance_t2947669413_marshal_com_cleanup(XRInstance_t2947669413_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRInstance::SetHandle(UnityEngine.Experimental.XR.XRInstance)
extern "C"  void XRInstance_SetHandle_m4231205486 (XRInstance_t2947669413 * __this, XRInstance_t2947669413 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRInstance_SetHandle_m4231205486_ftn) (XRInstance_t2947669413 *, XRInstance_t2947669413 *);
	static XRInstance_SetHandle_m4231205486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInstance_SetHandle_m4231205486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRInstance::SetHandle(UnityEngine.Experimental.XR.XRInstance)");
	_il2cpp_icall_func(__this, ___inst0);
}
// System.Void UnityEngine.Experimental.XR.XRInstance::Initialize()
extern "C"  void XRInstance_Initialize_m1318221037 (XRInstance_t2947669413 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRPlane
extern "C" void XRPlane_t1025974819_marshal_pinvoke(const XRPlane_t1025974819& unmarshaled, XRPlane_t1025974819_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRPlane': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRPlane_t1025974819_marshal_pinvoke_back(const XRPlane_t1025974819_marshaled_pinvoke& marshaled, XRPlane_t1025974819& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRPlane': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRPlane
extern "C" void XRPlane_t1025974819_marshal_pinvoke_cleanup(XRPlane_t1025974819_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRPlane
extern "C" void XRPlane_t1025974819_marshal_com(const XRPlane_t1025974819& unmarshaled, XRPlane_t1025974819_marshaled_com& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRPlane': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRPlane_t1025974819_marshal_com_back(const XRPlane_t1025974819_marshaled_com& marshaled, XRPlane_t1025974819& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRPlane': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRPlane
extern "C" void XRPlane_t1025974819_marshal_com_cleanup(XRPlane_t1025974819_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRPlane::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRPlane__ctor_m683966945 (XRPlane_t1025974819 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeEnvironment0;
		intptr_t L_1 = XRPlane_Internal_Create_m2251646397(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		XREnvironment_t3020638101 * L_2 = ___managedEnvironment1;
		__this->set_m_Environment_1(L_2);
		XRPlane_SetHandle_m4233044839(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRPlane::NotifyPlanesDestruction()
extern "C"  void XRPlane_NotifyPlanesDestruction_m954698239 (XRPlane_t1025974819 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlane_NotifyPlanesDestruction_m954698239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Ptr_0((intptr_t)(0));
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRPlane::InvokePlaneAddedEvent(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void XRPlane_InvokePlaneAddedEvent_m557856504 (XRPlane_t1025974819 * __this, BoundedPlane_t1317492334  ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlane_InvokePlaneAddedEvent_m557856504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlaneAddedEventArgs_t2550175725  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Action_1_t2722643320 * L_0 = __this->get_PlaneAdded_2();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		Action_1_t2722643320 * L_1 = __this->get_PlaneAdded_2();
		il2cpp_codegen_initobj((&V_0), sizeof(PlaneAddedEventArgs_t2550175725 ));
		(&V_0)->set_m_Planes_0(__this);
		BoundedPlane_t1317492334  L_2 = ___plane0;
		PlaneAddedEventArgs_set_AddedPlane_m715350915((PlaneAddedEventArgs_t2550175725 *)(&V_0), L_2, /*hidden argument*/NULL);
		PlaneAddedEventArgs_t2550175725  L_3 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m3662407658(L_1, L_3, /*hidden argument*/Action_1_Invoke_m3662407658_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRPlane::InvokePlaneUpdatedEvent(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void XRPlane_InvokePlaneUpdatedEvent_m3711511142 (XRPlane_t1025974819 * __this, BoundedPlane_t1317492334  ___plane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlane_InvokePlaneUpdatedEvent_m3711511142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlaneUpdatedEventArgs_t349485851  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Action_1_t521953446 * L_0 = __this->get_PlaneUpdated_3();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		Action_1_t521953446 * L_1 = __this->get_PlaneUpdated_3();
		il2cpp_codegen_initobj((&V_0), sizeof(PlaneUpdatedEventArgs_t349485851 ));
		(&V_0)->set_m_Planes_0(__this);
		BoundedPlane_t1317492334  L_2 = ___plane0;
		PlaneUpdatedEventArgs_set_UpdatedPlane_m4129842743((PlaneUpdatedEventArgs_t349485851 *)(&V_0), L_2, /*hidden argument*/NULL);
		PlaneUpdatedEventArgs_t349485851  L_3 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m4140516850(L_1, L_3, /*hidden argument*/Action_1_Invoke_m4140516850_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRPlane::InvokePlaneMergedEvent(UnityEngine.Experimental.XR.BoundedPlane,UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void XRPlane_InvokePlaneMergedEvent_m3343988844 (XRPlane_t1025974819 * __this, BoundedPlane_t1317492334  ___removedPlane0, BoundedPlane_t1317492334  ___subsumedByPlane1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlane_InvokePlaneMergedEvent_m3343988844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlaneRemovedEventArgs_t1567129782  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Action_1_t1739597377 * L_0 = __this->get_PlaneRemoved_4();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Action_1_t1739597377 * L_1 = __this->get_PlaneRemoved_4();
		il2cpp_codegen_initobj((&V_0), sizeof(PlaneRemovedEventArgs_t1567129782 ));
		(&V_0)->set_m_Planes_0(__this);
		BoundedPlane_t1317492334  L_2 = ___removedPlane0;
		PlaneRemovedEventArgs_set_RemovedPlane_m2177346889((PlaneRemovedEventArgs_t1567129782 *)(&V_0), L_2, /*hidden argument*/NULL);
		BoundedPlane_t1317492334  L_3 = ___subsumedByPlane1;
		Nullable_1_t3040054416  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m1403297223((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m1403297223_RuntimeMethod_var);
		PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655((PlaneRemovedEventArgs_t1567129782 *)(&V_0), L_4, /*hidden argument*/NULL);
		PlaneRemovedEventArgs_t1567129782  L_5 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m316788244(L_1, L_5, /*hidden argument*/Action_1_Invoke_m316788244_RuntimeMethod_var);
	}

IL_003f:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRPlane::InvokePlaneRemovedEvent(UnityEngine.Experimental.XR.BoundedPlane)
extern "C"  void XRPlane_InvokePlaneRemovedEvent_m3233809093 (XRPlane_t1025974819 * __this, BoundedPlane_t1317492334  ___removedPlane0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlane_InvokePlaneRemovedEvent_m3233809093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlaneRemovedEventArgs_t1567129782  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t3040054416  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Action_1_t1739597377 * L_0 = __this->get_PlaneRemoved_4();
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		Action_1_t1739597377 * L_1 = __this->get_PlaneRemoved_4();
		il2cpp_codegen_initobj((&V_0), sizeof(PlaneRemovedEventArgs_t1567129782 ));
		(&V_0)->set_m_Planes_0(__this);
		BoundedPlane_t1317492334  L_2 = ___removedPlane0;
		PlaneRemovedEventArgs_set_RemovedPlane_m2177346889((PlaneRemovedEventArgs_t1567129782 *)(&V_0), L_2, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3040054416 ));
		Nullable_1_t3040054416  L_3 = V_1;
		PlaneRemovedEventArgs_set_SubsumedByPlane_m973663655((PlaneRemovedEventArgs_t1567129782 *)(&V_0), L_3, /*hidden argument*/NULL);
		PlaneRemovedEventArgs_t1567129782  L_4 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m316788244(L_1, L_4, /*hidden argument*/Action_1_Invoke_m316788244_RuntimeMethod_var);
	}

IL_0042:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Experimental.XR.XRPlane::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRPlane_Internal_Create_m2251646397 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method)
{
	typedef intptr_t (*XRPlane_Internal_Create_m2251646397_ftn) (intptr_t);
	static XRPlane_Internal_Create_m2251646397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRPlane_Internal_Create_m2251646397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRPlane::Internal_Create(System.IntPtr)");
	intptr_t retVal = _il2cpp_icall_func(___xrEnvironment0);
	return retVal;
}
// System.Void UnityEngine.Experimental.XR.XRPlane::SetHandle(UnityEngine.Experimental.XR.XRPlane)
extern "C"  void XRPlane_SetHandle_m4233044839 (XRPlane_t1025974819 * __this, XRPlane_t1025974819 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRPlane_SetHandle_m4233044839_ftn) (XRPlane_t1025974819 *, XRPlane_t1025974819 *);
	static XRPlane_SetHandle_m4233044839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRPlane_SetHandle_m4233044839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRPlane::SetHandle(UnityEngine.Experimental.XR.XRPlane)");
	_il2cpp_icall_func(__this, ___inst0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRRaycast
extern "C" void XRRaycast_t1323410695_marshal_pinvoke(const XRRaycast_t1323410695& unmarshaled, XRRaycast_t1323410695_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRRaycast': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRRaycast_t1323410695_marshal_pinvoke_back(const XRRaycast_t1323410695_marshaled_pinvoke& marshaled, XRRaycast_t1323410695& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRRaycast': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRRaycast
extern "C" void XRRaycast_t1323410695_marshal_pinvoke_cleanup(XRRaycast_t1323410695_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRRaycast
extern "C" void XRRaycast_t1323410695_marshal_com(const XRRaycast_t1323410695& unmarshaled, XRRaycast_t1323410695_marshaled_com& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRRaycast': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRRaycast_t1323410695_marshal_com_back(const XRRaycast_t1323410695_marshaled_com& marshaled, XRRaycast_t1323410695& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRRaycast': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRRaycast
extern "C" void XRRaycast_t1323410695_marshal_com_cleanup(XRRaycast_t1323410695_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRRaycast::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRRaycast__ctor_m451496337 (XRRaycast_t1323410695 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeEnvironment0;
		intptr_t L_1 = XRRaycast_Internal_Create_m2359328718(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		XREnvironment_t3020638101 * L_2 = ___managedEnvironment1;
		__this->set_m_Environment_1(L_2);
		XRRaycast_SetHandle_m3238199581(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRRaycast::NotifyRaycastDestruction()
extern "C"  void XRRaycast_NotifyRaycastDestruction_m760935411 (XRRaycast_t1323410695 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRRaycast_NotifyRaycastDestruction_m760935411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Ptr_0((intptr_t)(0));
		return;
	}
}
// System.IntPtr UnityEngine.Experimental.XR.XRRaycast::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRRaycast_Internal_Create_m2359328718 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method)
{
	typedef intptr_t (*XRRaycast_Internal_Create_m2359328718_ftn) (intptr_t);
	static XRRaycast_Internal_Create_m2359328718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRRaycast_Internal_Create_m2359328718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRRaycast::Internal_Create(System.IntPtr)");
	intptr_t retVal = _il2cpp_icall_func(___xrEnvironment0);
	return retVal;
}
// System.Void UnityEngine.Experimental.XR.XRRaycast::SetHandle(UnityEngine.Experimental.XR.XRRaycast)
extern "C"  void XRRaycast_SetHandle_m3238199581 (XRRaycast_t1323410695 * __this, XRRaycast_t1323410695 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRRaycast_SetHandle_m3238199581_ftn) (XRRaycast_t1323410695 *, XRRaycast_t1323410695 *);
	static XRRaycast_SetHandle_m3238199581_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRRaycast_SetHandle_m3238199581_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRRaycast::SetHandle(UnityEngine.Experimental.XR.XRRaycast)");
	_il2cpp_icall_func(__this, ___inst0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRReferencePoint
extern "C" void XRReferencePoint_t1456196979_marshal_pinvoke(const XRReferencePoint_t1456196979& unmarshaled, XRReferencePoint_t1456196979_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRReferencePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRReferencePoint_t1456196979_marshal_pinvoke_back(const XRReferencePoint_t1456196979_marshaled_pinvoke& marshaled, XRReferencePoint_t1456196979& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRReferencePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRReferencePoint
extern "C" void XRReferencePoint_t1456196979_marshal_pinvoke_cleanup(XRReferencePoint_t1456196979_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRReferencePoint
extern "C" void XRReferencePoint_t1456196979_marshal_com(const XRReferencePoint_t1456196979& unmarshaled, XRReferencePoint_t1456196979_marshaled_com& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRReferencePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRReferencePoint_t1456196979_marshal_com_back(const XRReferencePoint_t1456196979_marshaled_com& marshaled, XRReferencePoint_t1456196979& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRReferencePoint': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRReferencePoint
extern "C" void XRReferencePoint_t1456196979_marshal_com_cleanup(XRReferencePoint_t1456196979_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRReferencePoint__ctor_m3526435100 (XRReferencePoint_t1456196979 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeEnvironment0;
		intptr_t L_1 = XRReferencePoint_Internal_Create_m489040944(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		XREnvironment_t3020638101 * L_2 = ___managedEnvironment1;
		__this->set_m_Environment_1(L_2);
		XRReferencePoint_SetHandle_m2788657328(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::NotifyReferencePointsDestruction()
extern "C"  void XRReferencePoint_NotifyReferencePointsDestruction_m538704641 (XRReferencePoint_t1456196979 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_NotifyReferencePointsDestruction_m538704641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Ptr_0((intptr_t)(0));
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::InvokeReferencePointUpdatedEvent(UnityEngine.Experimental.XR.ReferencePoint)
extern "C"  void XRReferencePoint_InvokeReferencePointUpdatedEvent_m700562555 (XRReferencePoint_t1456196979 * __this, ReferencePoint_t394942483  ___updatedReferencePoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_InvokeReferencePointUpdatedEvent_m700562555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReferencePointUpdatedEventArgs_t2046512733  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Action_1_t2218980328 * L_0 = __this->get_ReferencePointUpdated_2();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t2218980328 * L_1 = __this->get_ReferencePointUpdated_2();
		il2cpp_codegen_initobj((&V_0), sizeof(ReferencePointUpdatedEventArgs_t2046512733 ));
		ReferencePoint_t394942483  L_2 = ___updatedReferencePoint0;
		ReferencePointUpdatedEventArgs_set_UpdatedReferencePoint_m1776125678((ReferencePointUpdatedEventArgs_t2046512733 *)(&V_0), L_2, /*hidden argument*/NULL);
		ReferencePointUpdatedEventArgs_t2046512733  L_3 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m1143137826(L_1, L_3, /*hidden argument*/Action_1_Invoke_m1143137826_RuntimeMethod_var);
	}

IL_0028:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Experimental.XR.XRReferencePoint::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRReferencePoint_Internal_Create_m489040944 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method)
{
	typedef intptr_t (*XRReferencePoint_Internal_Create_m489040944_ftn) (intptr_t);
	static XRReferencePoint_Internal_Create_m489040944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRReferencePoint_Internal_Create_m489040944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRReferencePoint::Internal_Create(System.IntPtr)");
	intptr_t retVal = _il2cpp_icall_func(___xrEnvironment0);
	return retVal;
}
// System.Void UnityEngine.Experimental.XR.XRReferencePoint::SetHandle(UnityEngine.Experimental.XR.XRReferencePoint)
extern "C"  void XRReferencePoint_SetHandle_m2788657328 (XRReferencePoint_t1456196979 * __this, XRReferencePoint_t1456196979 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRReferencePoint_SetHandle_m2788657328_ftn) (XRReferencePoint_t1456196979 *, XRReferencePoint_t1456196979 *);
	static XRReferencePoint_SetHandle_m2788657328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRReferencePoint_SetHandle_m2788657328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRReferencePoint::SetHandle(UnityEngine.Experimental.XR.XRReferencePoint)");
	_il2cpp_icall_func(__this, ___inst0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRSession
extern "C" void XRSession_t1670964522_marshal_pinvoke(const XRSession_t1670964522& unmarshaled, XRSession_t1670964522_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRSession': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRSession_t1670964522_marshal_pinvoke_back(const XRSession_t1670964522_marshaled_pinvoke& marshaled, XRSession_t1670964522& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRSession': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRSession
extern "C" void XRSession_t1670964522_marshal_pinvoke_cleanup(XRSession_t1670964522_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRSession
extern "C" void XRSession_t1670964522_marshal_com(const XRSession_t1670964522& unmarshaled, XRSession_t1670964522_marshaled_com& marshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRSession': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
extern "C" void XRSession_t1670964522_marshal_com_back(const XRSession_t1670964522_marshaled_com& marshaled, XRSession_t1670964522& unmarshaled)
{
	Exception_t* ___m_Environment_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Environment' of type 'XRSession': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Environment_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRSession
extern "C" void XRSession_t1670964522_marshal_com_cleanup(XRSession_t1670964522_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRSession::.ctor(System.IntPtr,UnityEngine.Experimental.XR.XREnvironment)
extern "C"  void XRSession__ctor_m4290195746 (XRSession_t1670964522 * __this, intptr_t ___nativeEnvironment0, XREnvironment_t3020638101 * ___managedEnvironment1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeEnvironment0;
		intptr_t L_1 = XRSession_Internal_Create_m2980565374(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0(L_1);
		XREnvironment_t3020638101 * L_2 = ___managedEnvironment1;
		__this->set_m_Environment_1(L_2);
		XRSession_SetHandle_m374505589(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.XR.XRSession::NotifySessionDestruction()
extern "C"  void XRSession_NotifySessionDestruction_m3354775809 (XRSession_t1670964522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSession_NotifySessionDestruction_m3354775809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Ptr_0((intptr_t)(0));
		return;
	}
}
// System.IntPtr UnityEngine.Experimental.XR.XRSession::Internal_Create(System.IntPtr)
extern "C"  intptr_t XRSession_Internal_Create_m2980565374 (RuntimeObject * __this /* static, unused */, intptr_t ___xrEnvironment0, const RuntimeMethod* method)
{
	typedef intptr_t (*XRSession_Internal_Create_m2980565374_ftn) (intptr_t);
	static XRSession_Internal_Create_m2980565374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSession_Internal_Create_m2980565374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRSession::Internal_Create(System.IntPtr)");
	intptr_t retVal = _il2cpp_icall_func(___xrEnvironment0);
	return retVal;
}
// System.Void UnityEngine.Experimental.XR.XRSession::SetHandle(UnityEngine.Experimental.XR.XRSession)
extern "C"  void XRSession_SetHandle_m374505589 (XRSession_t1670964522 * __this, XRSession_t1670964522 * ___inst0, const RuntimeMethod* method)
{
	typedef void (*XRSession_SetHandle_m374505589_ftn) (XRSession_t1670964522 *, XRSession_t1670964522 *);
	static XRSession_SetHandle_m374505589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSession_SetHandle_m374505589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.XRSession::SetHandle(UnityEngine.Experimental.XR.XRSession)");
	_il2cpp_icall_func(__this, ___inst0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_pinvoke(const XRSubsystemDescriptorBase_t683206301& unmarshaled, XRSubsystemDescriptorBase_t683206301_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_pinvoke_back(const XRSubsystemDescriptorBase_t683206301_marshaled_pinvoke& marshaled, XRSubsystemDescriptorBase_t683206301& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_pinvoke_cleanup(XRSubsystemDescriptorBase_t683206301_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_com(const XRSubsystemDescriptorBase_t683206301& unmarshaled, XRSubsystemDescriptorBase_t683206301_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_com_back(const XRSubsystemDescriptorBase_t683206301_marshaled_com& marshaled, XRSubsystemDescriptorBase_t683206301& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Experimental.XR.XRSubsystemDescriptorBase
extern "C" void XRSubsystemDescriptorBase_t683206301_marshal_com_cleanup(XRSubsystemDescriptorBase_t683206301_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Experimental.XR.XRSubsystemDescriptorBase::UnityEngine.Experimental.XR.IXRSubsystemDescriptorImpl.set_ptr(System.IntPtr)
extern "C"  void XRSubsystemDescriptorBase_UnityEngine_Experimental_XR_IXRSubsystemDescriptorImpl_set_ptr_m173419895 (XRSubsystemDescriptorBase_t683206301 * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___value0;
		__this->set_m_Ptr_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
