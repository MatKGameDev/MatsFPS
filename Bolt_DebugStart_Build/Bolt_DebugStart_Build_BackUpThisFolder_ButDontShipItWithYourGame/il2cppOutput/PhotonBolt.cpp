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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Bolt.BoltDynamicData/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98;
// Bolt.IProtocolToken
struct IProtocolToken_t44A2F1B824B23A2FEF0566AE9E728D9F2E33B7AD;
// BoltConfig
struct BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507;
// BoltDebugStart
struct BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86;
// BoltDebugStart/<DelayClientConnect>d__7
struct U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1;
// BoltDebugStartSettings
struct BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621;
// BoltDebugStartSettings/EnumWindowsProc
struct EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98;
// BoltDoubleList`1<BoltInternal.GlobalEventListenerBase>
struct BoltDoubleList_1_tC2F4AE89C042B4AB98059B541B53E763FAF4A43B;
// BoltExecutionOrderAttribute
struct BoltExecutionOrderAttribute_t91302E2A0AF576CF7E04B5E2760DF4C241F2942C;
// BoltGlobalBehaviourAttribute
struct BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2;
// BoltInternal.GlobalEventListenerBase
struct GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7;
// BoltInternal.IDebugDrawer
struct IDebugDrawer_tFDBF47A9F3E9D8D5B4303AFB3216D15DF0FC8012;
// BoltInternal.IDebugDrawerObjectArray
struct IDebugDrawerObjectArray_t496591E2D3F9A7E5051EFD7A94057533452D1A19;
// BoltInternal.UnityDebugDrawer
struct UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB;
// BoltRuntimeSettings
struct BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7;
// STuple`2<BoltGlobalBehaviourAttribute,System.Type>[]
struct STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_tB8810CAC403B495501CB1EFFE19817AB440D0CF2;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_tE14471B9BA58E22CC2B0F85AA521BEBB7F04E004;
// System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>
struct List_1_t2E76EC245B477489975A4862D811451939F719B7;
// System.Collections.Generic.List`1<STuple`2<System.Object,System.Object>>
struct List_1_tF863EDCEBF51DC4EC0D81AC99DF181BFA5BEAED3;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4;
// System.ComponentModel.ISite
struct ISite_t6804B48BC23ABB5F4141903F878589BCEF6097A2;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t7A89CE9A5D792F694D7A5C33B2716937C39E783A;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484;
// System.Diagnostics.Process
struct Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1;
// System.Diagnostics.ProcessModule
struct ProcessModule_tCEE97E83E9A7F3843A9C794A0488BFC12029A5C8;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.TraceSwitch
struct TraceSwitch_t32D210D5C9B05D9E555925260EEC3767BA895EC8;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Exception
struct Exception_t;
// System.Func`1<System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>>
struct Func_1_tFD74922F0A8F24956FD949F251D28928107B559C;
// System.Func`1<System.Int32>
struct Func_1_t30631A63BE46FE93700939B764202D360449FE30;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<System.Int32,System.Object>
struct Func_2_tECD2DCDCBCA3C03DCE9526E91198A3C8DF37C42D;
// System.Func`2<System.Int32,System.String>
struct Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752;
// System.Func`2<System.String,System.Int32>
struct Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.IO.StreamWriter
struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.OperatingSystem
struct OperatingSystem_tBB05846D5AA6960FFEB42C59E5FE359255C2BE83;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltAssemblies_t3DB972C69056DC2A31108BE9F583B42639EDFBFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugInfo_tE71B45CBA7D39CC93E515B60EBA7164DEE2CC5D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t30631A63BE46FE93700939B764202D360449FE30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tFD74922F0A8F24956FD949F251D28928107B559C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE14471B9BA58E22CC2B0F85AA521BEBB7F04E004_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2E76EC245B477489975A4862D811451939F719B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral175411E5A870BDA4F6ADFACA3432815B4ED61B40;
IL2CPP_EXTERN_C String_t* _stringLiteral6AEC7D48396DF76A6BEE097C349EC003D51DD278;
IL2CPP_EXTERN_C String_t* _stringLiteralCE15B2A647D87453EEFC7F19E066C5EBD868DFEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD47350E27C49BCD741BC1ACA53A250D6617EB4CF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF26B41B7A524E1531D2318A5DEE3EA4FB8821639;
IL2CPP_EXTERN_C String_t* _stringLiteralF2E03DB23FD012A29DD9BA97CFF8DBE4C2742D9C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D9BAD6F8FA2F824A43F185425EBA084798B535;
IL2CPP_EXTERN_C String_t* _stringLiteralFA41624E8C8EB030FD37E9169C13B41571F27866;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDebugStartSettings_Window_m193C42363E93D4B8DAE917E5B0DC3C44BC9E15A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetActiveSceneIndex_m9C2DD63447144F6D668A261422D9697AE5D66C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetGlobalBehaviourTypes_mF403E3AEDCC58626D2AC45A20D0FF22B84C9408B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetSceneIndex_mBD9DE6A8C216E2AEC9605C11E79566B976DF2216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltDynamicData_GetSceneName_m99FF282E0C2CD190D741F987DC0AD76988F2295B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltNetworkInternal_User_EnvironmentReset_m39C273C8638323D4EF247067CFBAC1A4A166EE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoltNetworkInternal_User_EnvironmentSetup_m48A93821744981757F25BC124AF073F0D52D5613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisAssembly_t_mFB3B75A18D6C8C2DDAB33F0FEC047064A1F9CCE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m53BBB5F869D8537BB157FD7F6ACFBE78A9461111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m985D8216A1066DFBE8A01BDEBEFAC7B5D16AE79A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9C788DB2885FE34292855EDB77760B59D76F60E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mAFAFC6E3347557F467438BF7CFF053A652BDF792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3528534C44759010D7CF0BEBD2051F90A48F2036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m03E8DB2774470793D846651808B4586257BD752F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* STuple_2__ctor_m1CFCE7768051A55AD11289ECA7E43FDC49CCBC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_Reset_mD6167118E5EB8D1BAE8BB44CF2CA36FA1ACE6B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CGetAssemblyByNameU3Eb__0_m4B4D2CBDEA7A653D0AB43AFDF4EBB4529D30ED87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings_PositionWindow_mE437C8A9646874A5441A032EF0A41669C67E1623_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings_Window_m193C42363E93D4B8DAE917E5B0DC3C44BC9E15A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings__cctor_m277ACD89A578956EB06A4945D751278C208A45D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStartSettings_get_WindowIndex_m4CF2B150AC861F2CAB2517A32812306BD44EB7CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_Awake_m7034F9FA974D7F249065FD648E77B4DBDF185458_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_BoltStartDone_m4540AF71568F2D900D2DA93BBA9911C6DA12C518_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_BoltStartFailed_mEBED49DADF900DB044E69233D890810F5BD3CA78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_DelayClientConnect_m13A92E86679762C8A39FC5F47025FE8539B1470B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_SceneLoadLocalDone_mDDB05AEC8D93F0E482EC49A3BA74D93420C31C6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart_Start_m6730F24EBCB064C4C429DDE81D14FABEEA11AFEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDebugStart__ctor_mCD30D3FB386812EA6C25229A7A16936F6322823F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDynamicData_GetAssemblyByName_mDDC6A055D9F4C538D6C76BA251172AE0A467A75A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDynamicData_GetGlobalBehaviourTypes_mF403E3AEDCC58626D2AC45A20D0FF22B84C9408B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDynamicData_GetSceneIndex_mBD9DE6A8C216E2AEC9605C11E79566B976DF2216_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDynamicData_GetSceneName_m99FF282E0C2CD190D741F987DC0AD76988F2295B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltDynamicData_Setup_m696CBBFA0B8039E1B9266A9876C301E9DE9E9560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoltNetworkUtils_Combine_m8D4D50757BE439233662A491D9EBE22E0E6BBAAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConsoleWriter_Close_m0137AB650266EC7FACF47FA0876C64FF962B4A58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ConsoleWriter_Open_m2DC92A05EE3839724BB14D1BA3162225261002EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFPhotonBolt_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnumWindowsProc_BeginInvoke_m0F95A292255DDF97904F0FF6B639BD24EF36D32B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HWND__cctor_m4A8336A7FC0D07DC4BE2A7A4CB46F13F29968EE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWP__cctor_m611B63CCE813B520412DE8A85357F0201351A5D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayClientConnectU3Ed__7_MoveNext_m430F54F6F406A8DAC9A7C5C86BA7DF62AE64377C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_Reset_mD6167118E5EB8D1BAE8BB44CF2CA36FA1ACE6B29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelBold_m6AD969503E4D1B6520DFBE7477EFF44EF70C9D38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelField_mF5B13E5BEBCB75ECE2184A0373C4B7E1ED820449_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityDebugDrawer_BoltInternal_IDebugDrawer_Label_mBF915CAFBA68B7EE676A028AF4069687F8039BEE_MetadataUsageId;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t04939A349A0220265BEAF92F52E7DBEB97A2FCEE 
{
public:

public:
};


// System.Object


// Bolt.BoltDynamicData
struct  BoltDynamicData_t43536E5B02DDACBAC0C96B12191E2372EA19C63C  : public RuntimeObject
{
public:

public:
};


// Bolt.BoltDynamicData_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98  : public RuntimeObject
{
public:
	// System.String Bolt.BoltDynamicData_<>c__DisplayClass5_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Bolt.ConsoleWriter
struct  ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14  : public RuntimeObject
{
public:

public:
};

struct ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields
{
public:
	// System.IO.TextWriter Bolt.ConsoleWriter::realOut
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___realOut_0;

public:
	inline static int32_t get_offset_of_realOut_0() { return static_cast<int32_t>(offsetof(ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields, ___realOut_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_realOut_0() const { return ___realOut_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_realOut_0() { return &___realOut_0; }
	inline void set_realOut_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___realOut_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___realOut_0), (void*)value);
	}
};


// Bolt.ConsoleWriter_PInvoke
struct  PInvoke_t2EC7E5B9FB47FDFE93952360F4ADE37319AF9FCE  : public RuntimeObject
{
public:

public:
};


// BoltDebugStart_<DelayClientConnect>d__7
struct  U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1  : public RuntimeObject
{
public:
	// System.Int32 BoltDebugStart_<DelayClientConnect>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BoltDebugStart_<DelayClientConnect>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BoltDebugStart BoltDebugStart_<DelayClientConnect>d__7::<>4__this
	BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1, ___U3CU3E4__this_2)); }
	inline BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BoltDebugStartSettings_SWP
struct  SWP_t2A8D5A51603901292F610F9A807747B95A783E7F  : public RuntimeObject
{
public:

public:
};

struct SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields
{
public:
	// System.Int32 BoltDebugStartSettings_SWP::NOSIZE
	int32_t ___NOSIZE_0;
	// System.Int32 BoltDebugStartSettings_SWP::NOMOVE
	int32_t ___NOMOVE_1;
	// System.Int32 BoltDebugStartSettings_SWP::NOZORDER
	int32_t ___NOZORDER_2;
	// System.Int32 BoltDebugStartSettings_SWP::NOREDRAW
	int32_t ___NOREDRAW_3;
	// System.Int32 BoltDebugStartSettings_SWP::NOACTIVATE
	int32_t ___NOACTIVATE_4;
	// System.Int32 BoltDebugStartSettings_SWP::DRAWFRAME
	int32_t ___DRAWFRAME_5;
	// System.Int32 BoltDebugStartSettings_SWP::FRAMECHANGED
	int32_t ___FRAMECHANGED_6;
	// System.Int32 BoltDebugStartSettings_SWP::SHOWWINDOW
	int32_t ___SHOWWINDOW_7;
	// System.Int32 BoltDebugStartSettings_SWP::HIDEWINDOW
	int32_t ___HIDEWINDOW_8;
	// System.Int32 BoltDebugStartSettings_SWP::NOCOPYBITS
	int32_t ___NOCOPYBITS_9;
	// System.Int32 BoltDebugStartSettings_SWP::NOOWNERZORDER
	int32_t ___NOOWNERZORDER_10;
	// System.Int32 BoltDebugStartSettings_SWP::NOREPOSITION
	int32_t ___NOREPOSITION_11;
	// System.Int32 BoltDebugStartSettings_SWP::NOSENDCHANGING
	int32_t ___NOSENDCHANGING_12;
	// System.Int32 BoltDebugStartSettings_SWP::DEFERERASE
	int32_t ___DEFERERASE_13;
	// System.Int32 BoltDebugStartSettings_SWP::ASYNCWINDOWPOS
	int32_t ___ASYNCWINDOWPOS_14;

public:
	inline static int32_t get_offset_of_NOSIZE_0() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOSIZE_0)); }
	inline int32_t get_NOSIZE_0() const { return ___NOSIZE_0; }
	inline int32_t* get_address_of_NOSIZE_0() { return &___NOSIZE_0; }
	inline void set_NOSIZE_0(int32_t value)
	{
		___NOSIZE_0 = value;
	}

	inline static int32_t get_offset_of_NOMOVE_1() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOMOVE_1)); }
	inline int32_t get_NOMOVE_1() const { return ___NOMOVE_1; }
	inline int32_t* get_address_of_NOMOVE_1() { return &___NOMOVE_1; }
	inline void set_NOMOVE_1(int32_t value)
	{
		___NOMOVE_1 = value;
	}

	inline static int32_t get_offset_of_NOZORDER_2() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOZORDER_2)); }
	inline int32_t get_NOZORDER_2() const { return ___NOZORDER_2; }
	inline int32_t* get_address_of_NOZORDER_2() { return &___NOZORDER_2; }
	inline void set_NOZORDER_2(int32_t value)
	{
		___NOZORDER_2 = value;
	}

	inline static int32_t get_offset_of_NOREDRAW_3() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOREDRAW_3)); }
	inline int32_t get_NOREDRAW_3() const { return ___NOREDRAW_3; }
	inline int32_t* get_address_of_NOREDRAW_3() { return &___NOREDRAW_3; }
	inline void set_NOREDRAW_3(int32_t value)
	{
		___NOREDRAW_3 = value;
	}

	inline static int32_t get_offset_of_NOACTIVATE_4() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOACTIVATE_4)); }
	inline int32_t get_NOACTIVATE_4() const { return ___NOACTIVATE_4; }
	inline int32_t* get_address_of_NOACTIVATE_4() { return &___NOACTIVATE_4; }
	inline void set_NOACTIVATE_4(int32_t value)
	{
		___NOACTIVATE_4 = value;
	}

	inline static int32_t get_offset_of_DRAWFRAME_5() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___DRAWFRAME_5)); }
	inline int32_t get_DRAWFRAME_5() const { return ___DRAWFRAME_5; }
	inline int32_t* get_address_of_DRAWFRAME_5() { return &___DRAWFRAME_5; }
	inline void set_DRAWFRAME_5(int32_t value)
	{
		___DRAWFRAME_5 = value;
	}

	inline static int32_t get_offset_of_FRAMECHANGED_6() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___FRAMECHANGED_6)); }
	inline int32_t get_FRAMECHANGED_6() const { return ___FRAMECHANGED_6; }
	inline int32_t* get_address_of_FRAMECHANGED_6() { return &___FRAMECHANGED_6; }
	inline void set_FRAMECHANGED_6(int32_t value)
	{
		___FRAMECHANGED_6 = value;
	}

	inline static int32_t get_offset_of_SHOWWINDOW_7() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___SHOWWINDOW_7)); }
	inline int32_t get_SHOWWINDOW_7() const { return ___SHOWWINDOW_7; }
	inline int32_t* get_address_of_SHOWWINDOW_7() { return &___SHOWWINDOW_7; }
	inline void set_SHOWWINDOW_7(int32_t value)
	{
		___SHOWWINDOW_7 = value;
	}

	inline static int32_t get_offset_of_HIDEWINDOW_8() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___HIDEWINDOW_8)); }
	inline int32_t get_HIDEWINDOW_8() const { return ___HIDEWINDOW_8; }
	inline int32_t* get_address_of_HIDEWINDOW_8() { return &___HIDEWINDOW_8; }
	inline void set_HIDEWINDOW_8(int32_t value)
	{
		___HIDEWINDOW_8 = value;
	}

	inline static int32_t get_offset_of_NOCOPYBITS_9() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOCOPYBITS_9)); }
	inline int32_t get_NOCOPYBITS_9() const { return ___NOCOPYBITS_9; }
	inline int32_t* get_address_of_NOCOPYBITS_9() { return &___NOCOPYBITS_9; }
	inline void set_NOCOPYBITS_9(int32_t value)
	{
		___NOCOPYBITS_9 = value;
	}

	inline static int32_t get_offset_of_NOOWNERZORDER_10() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOOWNERZORDER_10)); }
	inline int32_t get_NOOWNERZORDER_10() const { return ___NOOWNERZORDER_10; }
	inline int32_t* get_address_of_NOOWNERZORDER_10() { return &___NOOWNERZORDER_10; }
	inline void set_NOOWNERZORDER_10(int32_t value)
	{
		___NOOWNERZORDER_10 = value;
	}

	inline static int32_t get_offset_of_NOREPOSITION_11() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOREPOSITION_11)); }
	inline int32_t get_NOREPOSITION_11() const { return ___NOREPOSITION_11; }
	inline int32_t* get_address_of_NOREPOSITION_11() { return &___NOREPOSITION_11; }
	inline void set_NOREPOSITION_11(int32_t value)
	{
		___NOREPOSITION_11 = value;
	}

	inline static int32_t get_offset_of_NOSENDCHANGING_12() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___NOSENDCHANGING_12)); }
	inline int32_t get_NOSENDCHANGING_12() const { return ___NOSENDCHANGING_12; }
	inline int32_t* get_address_of_NOSENDCHANGING_12() { return &___NOSENDCHANGING_12; }
	inline void set_NOSENDCHANGING_12(int32_t value)
	{
		___NOSENDCHANGING_12 = value;
	}

	inline static int32_t get_offset_of_DEFERERASE_13() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___DEFERERASE_13)); }
	inline int32_t get_DEFERERASE_13() const { return ___DEFERERASE_13; }
	inline int32_t* get_address_of_DEFERERASE_13() { return &___DEFERERASE_13; }
	inline void set_DEFERERASE_13(int32_t value)
	{
		___DEFERERASE_13 = value;
	}

	inline static int32_t get_offset_of_ASYNCWINDOWPOS_14() { return static_cast<int32_t>(offsetof(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields, ___ASYNCWINDOWPOS_14)); }
	inline int32_t get_ASYNCWINDOWPOS_14() const { return ___ASYNCWINDOWPOS_14; }
	inline int32_t* get_address_of_ASYNCWINDOWPOS_14() { return &___ASYNCWINDOWPOS_14; }
	inline void set_ASYNCWINDOWPOS_14(int32_t value)
	{
		___ASYNCWINDOWPOS_14 = value;
	}
};


// BoltInternal.BoltNetworkInternal
struct  BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626  : public RuntimeObject
{
public:

public:
};

struct BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields
{
public:
	// System.Boolean BoltInternal.BoltNetworkInternal::UsingUnityPro
	bool ___UsingUnityPro_0;
	// System.Action BoltInternal.BoltNetworkInternal::EnvironmentSetup
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnvironmentSetup_1;
	// System.Action BoltInternal.BoltNetworkInternal::EnvironmentReset
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___EnvironmentReset_2;
	// BoltInternal.IDebugDrawer BoltInternal.BoltNetworkInternal::DebugDrawer
	RuntimeObject* ___DebugDrawer_3;
	// System.Func`2<System.Int32,System.String> BoltInternal.BoltNetworkInternal::GetSceneName
	Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 * ___GetSceneName_4;
	// System.Func`2<System.String,System.Int32> BoltInternal.BoltNetworkInternal::GetSceneIndex
	Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 * ___GetSceneIndex_5;
	// System.Func`1<System.Int32> BoltInternal.BoltNetworkInternal::GetActiveSceneIndex
	Func_1_t30631A63BE46FE93700939B764202D360449FE30 * ___GetActiveSceneIndex_6;
	// System.Func`1<System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>> BoltInternal.BoltNetworkInternal::GetGlobalBehaviourTypes
	Func_1_tFD74922F0A8F24956FD949F251D28928107B559C * ___GetGlobalBehaviourTypes_7;

public:
	inline static int32_t get_offset_of_UsingUnityPro_0() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___UsingUnityPro_0)); }
	inline bool get_UsingUnityPro_0() const { return ___UsingUnityPro_0; }
	inline bool* get_address_of_UsingUnityPro_0() { return &___UsingUnityPro_0; }
	inline void set_UsingUnityPro_0(bool value)
	{
		___UsingUnityPro_0 = value;
	}

	inline static int32_t get_offset_of_EnvironmentSetup_1() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___EnvironmentSetup_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnvironmentSetup_1() const { return ___EnvironmentSetup_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnvironmentSetup_1() { return &___EnvironmentSetup_1; }
	inline void set_EnvironmentSetup_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnvironmentSetup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnvironmentSetup_1), (void*)value);
	}

	inline static int32_t get_offset_of_EnvironmentReset_2() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___EnvironmentReset_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_EnvironmentReset_2() const { return ___EnvironmentReset_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_EnvironmentReset_2() { return &___EnvironmentReset_2; }
	inline void set_EnvironmentReset_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___EnvironmentReset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnvironmentReset_2), (void*)value);
	}

	inline static int32_t get_offset_of_DebugDrawer_3() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___DebugDrawer_3)); }
	inline RuntimeObject* get_DebugDrawer_3() const { return ___DebugDrawer_3; }
	inline RuntimeObject** get_address_of_DebugDrawer_3() { return &___DebugDrawer_3; }
	inline void set_DebugDrawer_3(RuntimeObject* value)
	{
		___DebugDrawer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugDrawer_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetSceneName_4() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___GetSceneName_4)); }
	inline Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 * get_GetSceneName_4() const { return ___GetSceneName_4; }
	inline Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 ** get_address_of_GetSceneName_4() { return &___GetSceneName_4; }
	inline void set_GetSceneName_4(Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 * value)
	{
		___GetSceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetSceneName_4), (void*)value);
	}

	inline static int32_t get_offset_of_GetSceneIndex_5() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___GetSceneIndex_5)); }
	inline Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 * get_GetSceneIndex_5() const { return ___GetSceneIndex_5; }
	inline Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 ** get_address_of_GetSceneIndex_5() { return &___GetSceneIndex_5; }
	inline void set_GetSceneIndex_5(Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 * value)
	{
		___GetSceneIndex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetSceneIndex_5), (void*)value);
	}

	inline static int32_t get_offset_of_GetActiveSceneIndex_6() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___GetActiveSceneIndex_6)); }
	inline Func_1_t30631A63BE46FE93700939B764202D360449FE30 * get_GetActiveSceneIndex_6() const { return ___GetActiveSceneIndex_6; }
	inline Func_1_t30631A63BE46FE93700939B764202D360449FE30 ** get_address_of_GetActiveSceneIndex_6() { return &___GetActiveSceneIndex_6; }
	inline void set_GetActiveSceneIndex_6(Func_1_t30631A63BE46FE93700939B764202D360449FE30 * value)
	{
		___GetActiveSceneIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetActiveSceneIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_GetGlobalBehaviourTypes_7() { return static_cast<int32_t>(offsetof(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields, ___GetGlobalBehaviourTypes_7)); }
	inline Func_1_tFD74922F0A8F24956FD949F251D28928107B559C * get_GetGlobalBehaviourTypes_7() const { return ___GetGlobalBehaviourTypes_7; }
	inline Func_1_tFD74922F0A8F24956FD949F251D28928107B559C ** get_address_of_GetGlobalBehaviourTypes_7() { return &___GetGlobalBehaviourTypes_7; }
	inline void set_GetGlobalBehaviourTypes_7(Func_1_tFD74922F0A8F24956FD949F251D28928107B559C * value)
	{
		___GetGlobalBehaviourTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetGlobalBehaviourTypes_7), (void*)value);
	}
};


// BoltInternal.BoltNetworkInternal_User
struct  BoltNetworkInternal_User_t142FAA45CEEFC0FB2D8687B4FE827E38CE410D0B  : public RuntimeObject
{
public:

public:
};


// BoltInternal.UnityDebugDrawer
struct  UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB  : public RuntimeObject
{
public:
	// System.Boolean BoltInternal.UnityDebugDrawer::isEditor
	bool ___isEditor_0;

public:
	inline static int32_t get_offset_of_isEditor_0() { return static_cast<int32_t>(offsetof(UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB, ___isEditor_0)); }
	inline bool get_isEditor_0() const { return ___isEditor_0; }
	inline bool* get_address_of_isEditor_0() { return &___isEditor_0; }
	inline void set_isEditor_0(bool value)
	{
		___isEditor_0 = value;
	}
};


// BoltNetworkUtils
struct  BoltNetworkUtils_t9BF12DB6C77507A8BD27BDF66B514DF4CF4912DC  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>
struct  List_1_t2E76EC245B477489975A4862D811451939F719B7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E76EC245B477489975A4862D811451939F719B7, ____items_1)); }
	inline STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* get__items_1() const { return ____items_1; }
	inline STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E76EC245B477489975A4862D811451939F719B7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E76EC245B477489975A4862D811451939F719B7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E76EC245B477489975A4862D811451939F719B7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E76EC245B477489975A4862D811451939F719B7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E76EC245B477489975A4862D811451939F719B7_StaticFields, ____emptyArray_5)); }
	inline STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(STuple_2U5BU5D_tBF4A68EA99222D4299E6B108DA020D3B117F1F28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Console
struct  Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D  : public RuntimeObject
{
public:

public:
};

struct Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * ___cancel_event_5;
	// System.Console_InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdout_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stderr_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdin_2)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// BoltExecutionOrderAttribute
struct  BoltExecutionOrderAttribute_t91302E2A0AF576CF7E04B5E2760DF4C241F2942C  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Int32 BoltExecutionOrderAttribute::_executionOrder
	int32_t ____executionOrder_0;

public:
	inline static int32_t get_offset_of__executionOrder_0() { return static_cast<int32_t>(offsetof(BoltExecutionOrderAttribute_t91302E2A0AF576CF7E04B5E2760DF4C241F2942C, ____executionOrder_0)); }
	inline int32_t get__executionOrder_0() const { return ____executionOrder_0; }
	inline int32_t* get_address_of__executionOrder_0() { return &____executionOrder_0; }
	inline void set__executionOrder_0(int32_t value)
	{
		____executionOrder_0 = value;
	}
};


// STuple`2<BoltGlobalBehaviourAttribute,System.Type>
struct  STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF 
{
public:
	// T0 STuple`2::item0
	BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * ___item0_0;
	// T1 STuple`2::item1
	Type_t * ___item1_1;

public:
	inline static int32_t get_offset_of_item0_0() { return static_cast<int32_t>(offsetof(STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF, ___item0_0)); }
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * get_item0_0() const { return ___item0_0; }
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 ** get_address_of_item0_0() { return &___item0_0; }
	inline void set_item0_0(BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * value)
	{
		___item0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item0_0), (void*)value);
	}

	inline static int32_t get_offset_of_item1_1() { return static_cast<int32_t>(offsetof(STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF, ___item1_1)); }
	inline Type_t * get_item1_1() const { return ___item1_1; }
	inline Type_t ** get_address_of_item1_1() { return &___item1_1; }
	inline void set_item1_1(Type_t * value)
	{
		___item1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item1_1), (void*)value);
	}
};


// STuple`2<System.Object,System.Object>
struct  STuple_2_t2FDC1B8684104767786766593BB887A7BC68A6A9 
{
public:
	// T0 STuple`2::item0
	RuntimeObject * ___item0_0;
	// T1 STuple`2::item1
	RuntimeObject * ___item1_1;

public:
	inline static int32_t get_offset_of_item0_0() { return static_cast<int32_t>(offsetof(STuple_2_t2FDC1B8684104767786766593BB887A7BC68A6A9, ___item0_0)); }
	inline RuntimeObject * get_item0_0() const { return ___item0_0; }
	inline RuntimeObject ** get_address_of_item0_0() { return &___item0_0; }
	inline void set_item0_0(RuntimeObject * value)
	{
		___item0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item0_0), (void*)value);
	}

	inline static int32_t get_offset_of_item1_1() { return static_cast<int32_t>(offsetof(STuple_2_t2FDC1B8684104767786766593BB887A7BC68A6A9, ___item1_1)); }
	inline RuntimeObject * get_item1_1() const { return ___item1_1; }
	inline RuntimeObject ** get_address_of_item1_1() { return &___item1_1; }
	inline void set_item1_1(RuntimeObject * value)
	{
		___item1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item1_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.ComponentModel.Component
struct  Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___events_3)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UdpKit.UdpIPv4Address
struct  UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UdpKit.UdpIPv4Address::Packed
			uint32_t ___Packed_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___Packed_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv4Address::Byte0
			uint8_t ___Byte0_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv4Address::Byte1
			uint8_t ___Byte1_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv4Address::Byte2
			uint8_t ___Byte2_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv4Address::Byte3
			uint8_t ___Byte3_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Packed_3() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714, ___Packed_3)); }
	inline uint32_t get_Packed_3() const { return ___Packed_3; }
	inline uint32_t* get_address_of_Packed_3() { return &___Packed_3; }
	inline void set_Packed_3(uint32_t value)
	{
		___Packed_3 = value;
	}

	inline static int32_t get_offset_of_Byte0_4() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714, ___Byte0_4)); }
	inline uint8_t get_Byte0_4() const { return ___Byte0_4; }
	inline uint8_t* get_address_of_Byte0_4() { return &___Byte0_4; }
	inline void set_Byte0_4(uint8_t value)
	{
		___Byte0_4 = value;
	}

	inline static int32_t get_offset_of_Byte1_5() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714, ___Byte1_5)); }
	inline uint8_t get_Byte1_5() const { return ___Byte1_5; }
	inline uint8_t* get_address_of_Byte1_5() { return &___Byte1_5; }
	inline void set_Byte1_5(uint8_t value)
	{
		___Byte1_5 = value;
	}

	inline static int32_t get_offset_of_Byte2_6() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714, ___Byte2_6)); }
	inline uint8_t get_Byte2_6() const { return ___Byte2_6; }
	inline uint8_t* get_address_of_Byte2_6() { return &___Byte2_6; }
	inline void set_Byte2_6(uint8_t value)
	{
		___Byte2_6 = value;
	}

	inline static int32_t get_offset_of_Byte3_7() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714, ___Byte3_7)); }
	inline uint8_t get_Byte3_7() const { return ___Byte3_7; }
	inline uint8_t* get_address_of_Byte3_7() { return &___Byte3_7; }
	inline void set_Byte3_7(uint8_t value)
	{
		___Byte3_7 = value;
	}
};

struct UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields
{
public:
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Any
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Any_0;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Localhost
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Localhost_1;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Broadcast
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Broadcast_2;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields, ___Any_0)); }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  get_Any_0() const { return ___Any_0; }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_Localhost_1() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields, ___Localhost_1)); }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  get_Localhost_1() const { return ___Localhost_1; }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * get_address_of_Localhost_1() { return &___Localhost_1; }
	inline void set_Localhost_1(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		___Localhost_1 = value;
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields, ___Broadcast_2)); }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  get_Broadcast_2() const { return ___Broadcast_2; }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		___Broadcast_2 = value;
	}
};


// UdpKit.UdpIPv6Address
struct  UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv6Address::Byte0
			uint8_t ___Byte0_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv6Address::Byte1
			uint8_t ___Byte1_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv6Address::Byte2
			uint8_t ___Byte2_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv6Address::Byte3
			uint8_t ___Byte3_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding[4];
			// System.Byte UdpKit.UdpIPv6Address::Byte4
			uint8_t ___Byte4_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding[5];
			// System.Byte UdpKit.UdpIPv6Address::Byte5
			uint8_t ___Byte5_8;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_8_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding[6];
			// System.Byte UdpKit.UdpIPv6Address::Byte6
			uint8_t ___Byte6_9;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_9_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding[7];
			// System.Byte UdpKit.UdpIPv6Address::Byte7
			uint8_t ___Byte7_10;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_10_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding[8];
			// System.Byte UdpKit.UdpIPv6Address::Byte8
			uint8_t ___Byte8_11;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_11_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding[9];
			// System.Byte UdpKit.UdpIPv6Address::Byte9
			uint8_t ___Byte9_12;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_12_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding[10];
			// System.Byte UdpKit.UdpIPv6Address::Byte10
			uint8_t ___Byte10_13;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_13_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding[11];
			// System.Byte UdpKit.UdpIPv6Address::Byte11
			uint8_t ___Byte11_14;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_14_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding[12];
			// System.Byte UdpKit.UdpIPv6Address::Byte12
			uint8_t ___Byte12_15;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_15_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding[13];
			// System.Byte UdpKit.UdpIPv6Address::Byte13
			uint8_t ___Byte13_16;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_16_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding[14];
			// System.Byte UdpKit.UdpIPv6Address::Byte14
			uint8_t ___Byte14_17;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_17_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding[15];
			// System.Byte UdpKit.UdpIPv6Address::Byte15
			uint8_t ___Byte15_18;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_18_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UdpKit.UdpIPv6Address::Packed0
			uint64_t ___Packed0_19;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Packed0_19_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding[8];
			// System.UInt64 UdpKit.UdpIPv6Address::Packed1
			uint64_t ___Packed1_20;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_20_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Byte0_3() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte0_3)); }
	inline uint8_t get_Byte0_3() const { return ___Byte0_3; }
	inline uint8_t* get_address_of_Byte0_3() { return &___Byte0_3; }
	inline void set_Byte0_3(uint8_t value)
	{
		___Byte0_3 = value;
	}

	inline static int32_t get_offset_of_Byte1_4() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte1_4)); }
	inline uint8_t get_Byte1_4() const { return ___Byte1_4; }
	inline uint8_t* get_address_of_Byte1_4() { return &___Byte1_4; }
	inline void set_Byte1_4(uint8_t value)
	{
		___Byte1_4 = value;
	}

	inline static int32_t get_offset_of_Byte2_5() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte2_5)); }
	inline uint8_t get_Byte2_5() const { return ___Byte2_5; }
	inline uint8_t* get_address_of_Byte2_5() { return &___Byte2_5; }
	inline void set_Byte2_5(uint8_t value)
	{
		___Byte2_5 = value;
	}

	inline static int32_t get_offset_of_Byte3_6() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte3_6)); }
	inline uint8_t get_Byte3_6() const { return ___Byte3_6; }
	inline uint8_t* get_address_of_Byte3_6() { return &___Byte3_6; }
	inline void set_Byte3_6(uint8_t value)
	{
		___Byte3_6 = value;
	}

	inline static int32_t get_offset_of_Byte4_7() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte4_7)); }
	inline uint8_t get_Byte4_7() const { return ___Byte4_7; }
	inline uint8_t* get_address_of_Byte4_7() { return &___Byte4_7; }
	inline void set_Byte4_7(uint8_t value)
	{
		___Byte4_7 = value;
	}

	inline static int32_t get_offset_of_Byte5_8() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte5_8)); }
	inline uint8_t get_Byte5_8() const { return ___Byte5_8; }
	inline uint8_t* get_address_of_Byte5_8() { return &___Byte5_8; }
	inline void set_Byte5_8(uint8_t value)
	{
		___Byte5_8 = value;
	}

	inline static int32_t get_offset_of_Byte6_9() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte6_9)); }
	inline uint8_t get_Byte6_9() const { return ___Byte6_9; }
	inline uint8_t* get_address_of_Byte6_9() { return &___Byte6_9; }
	inline void set_Byte6_9(uint8_t value)
	{
		___Byte6_9 = value;
	}

	inline static int32_t get_offset_of_Byte7_10() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte7_10)); }
	inline uint8_t get_Byte7_10() const { return ___Byte7_10; }
	inline uint8_t* get_address_of_Byte7_10() { return &___Byte7_10; }
	inline void set_Byte7_10(uint8_t value)
	{
		___Byte7_10 = value;
	}

	inline static int32_t get_offset_of_Byte8_11() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte8_11)); }
	inline uint8_t get_Byte8_11() const { return ___Byte8_11; }
	inline uint8_t* get_address_of_Byte8_11() { return &___Byte8_11; }
	inline void set_Byte8_11(uint8_t value)
	{
		___Byte8_11 = value;
	}

	inline static int32_t get_offset_of_Byte9_12() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte9_12)); }
	inline uint8_t get_Byte9_12() const { return ___Byte9_12; }
	inline uint8_t* get_address_of_Byte9_12() { return &___Byte9_12; }
	inline void set_Byte9_12(uint8_t value)
	{
		___Byte9_12 = value;
	}

	inline static int32_t get_offset_of_Byte10_13() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte10_13)); }
	inline uint8_t get_Byte10_13() const { return ___Byte10_13; }
	inline uint8_t* get_address_of_Byte10_13() { return &___Byte10_13; }
	inline void set_Byte10_13(uint8_t value)
	{
		___Byte10_13 = value;
	}

	inline static int32_t get_offset_of_Byte11_14() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte11_14)); }
	inline uint8_t get_Byte11_14() const { return ___Byte11_14; }
	inline uint8_t* get_address_of_Byte11_14() { return &___Byte11_14; }
	inline void set_Byte11_14(uint8_t value)
	{
		___Byte11_14 = value;
	}

	inline static int32_t get_offset_of_Byte12_15() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte12_15)); }
	inline uint8_t get_Byte12_15() const { return ___Byte12_15; }
	inline uint8_t* get_address_of_Byte12_15() { return &___Byte12_15; }
	inline void set_Byte12_15(uint8_t value)
	{
		___Byte12_15 = value;
	}

	inline static int32_t get_offset_of_Byte13_16() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte13_16)); }
	inline uint8_t get_Byte13_16() const { return ___Byte13_16; }
	inline uint8_t* get_address_of_Byte13_16() { return &___Byte13_16; }
	inline void set_Byte13_16(uint8_t value)
	{
		___Byte13_16 = value;
	}

	inline static int32_t get_offset_of_Byte14_17() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte14_17)); }
	inline uint8_t get_Byte14_17() const { return ___Byte14_17; }
	inline uint8_t* get_address_of_Byte14_17() { return &___Byte14_17; }
	inline void set_Byte14_17(uint8_t value)
	{
		___Byte14_17 = value;
	}

	inline static int32_t get_offset_of_Byte15_18() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Byte15_18)); }
	inline uint8_t get_Byte15_18() const { return ___Byte15_18; }
	inline uint8_t* get_address_of_Byte15_18() { return &___Byte15_18; }
	inline void set_Byte15_18(uint8_t value)
	{
		___Byte15_18 = value;
	}

	inline static int32_t get_offset_of_Packed0_19() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Packed0_19)); }
	inline uint64_t get_Packed0_19() const { return ___Packed0_19; }
	inline uint64_t* get_address_of_Packed0_19() { return &___Packed0_19; }
	inline void set_Packed0_19(uint64_t value)
	{
		___Packed0_19 = value;
	}

	inline static int32_t get_offset_of_Packed1_20() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE, ___Packed1_20)); }
	inline uint64_t get_Packed1_20() const { return ___Packed1_20; }
	inline uint64_t* get_address_of_Packed1_20() { return &___Packed1_20; }
	inline void set_Packed1_20(uint64_t value)
	{
		___Packed1_20 = value;
	}
};

struct UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_StaticFields
{
public:
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Any
	UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___Any_0;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Mask
	UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___Mask_1;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Localhost
	UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___Localhost_2;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_StaticFields, ___Any_0)); }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  get_Any_0() const { return ___Any_0; }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_Mask_1() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_StaticFields, ___Mask_1)); }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  get_Mask_1() const { return ___Mask_1; }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * get_address_of_Mask_1() { return &___Mask_1; }
	inline void set_Mask_1(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  value)
	{
		___Mask_1 = value;
	}

	inline static int32_t get_offset_of_Localhost_2() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_StaticFields, ___Localhost_2)); }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  get_Localhost_2() const { return ___Localhost_2; }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * get_address_of_Localhost_2() { return &___Localhost_2; }
	inline void set_Localhost_2(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  value)
	{
		___Localhost_2 = value;
	}
};


// UdpKit.UdpSteamID
struct  UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE 
{
public:
	// System.UInt64 UdpKit.UdpSteamID::Id
	uint64_t ___Id_0;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE, ___Id_0)); }
	inline uint64_t get_Id_0() const { return ___Id_0; }
	inline uint64_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint64_t value)
	{
		___Id_0 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// Bolt.QueryComponentOptionsGlobal
struct  QueryComponentOptionsGlobal_tE5A353B41DF87B4EF39227688417595044406089 
{
public:
	// System.Int32 Bolt.QueryComponentOptionsGlobal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryComponentOptionsGlobal_tE5A353B41DF87B4EF39227688417595044406089, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.ScopeMode
struct  ScopeMode_tC9FF3A529134A4B0C52553F8848CAE19CC8B24A8 
{
public:
	// System.Int32 Bolt.ScopeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScopeMode_tC9FF3A529134A4B0C52553F8848CAE19CC8B24A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.UnitySettings_DotNetVersion
struct  DotNetVersion_t0CA7AA45ED1CA93237F7C95E8D9675F0341E9E43 
{
public:
	// System.Int32 Bolt.UnitySettings_DotNetVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DotNetVersion_t0CA7AA45ED1CA93237F7C95E8D9675F0341E9E43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltConfigLogTargets
struct  BoltConfigLogTargets_t6585A4245A76C8D8C3F946A1970DE9DFD65A3F8B 
{
public:
	// System.Int32 BoltConfigLogTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltConfigLogTargets_t6585A4245A76C8D8C3F946A1970DE9DFD65A3F8B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltConnectionAcceptMode
struct  BoltConnectionAcceptMode_t2639B81CB5CABE2360FA35EB9124229BCFD0DBC1 
{
public:
	// System.Int32 BoltConnectionAcceptMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltConnectionAcceptMode_t2639B81CB5CABE2360FA35EB9124229BCFD0DBC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltDebugStartSettings_HWND
struct  HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00  : public RuntimeObject
{
public:

public:
};

struct HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields
{
public:
	// System.IntPtr BoltDebugStartSettings_HWND::NoTopMost
	intptr_t ___NoTopMost_0;
	// System.IntPtr BoltDebugStartSettings_HWND::TopMost
	intptr_t ___TopMost_1;
	// System.IntPtr BoltDebugStartSettings_HWND::Top
	intptr_t ___Top_2;
	// System.IntPtr BoltDebugStartSettings_HWND::Bottom
	intptr_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_NoTopMost_0() { return static_cast<int32_t>(offsetof(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields, ___NoTopMost_0)); }
	inline intptr_t get_NoTopMost_0() const { return ___NoTopMost_0; }
	inline intptr_t* get_address_of_NoTopMost_0() { return &___NoTopMost_0; }
	inline void set_NoTopMost_0(intptr_t value)
	{
		___NoTopMost_0 = value;
	}

	inline static int32_t get_offset_of_TopMost_1() { return static_cast<int32_t>(offsetof(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields, ___TopMost_1)); }
	inline intptr_t get_TopMost_1() const { return ___TopMost_1; }
	inline intptr_t* get_address_of_TopMost_1() { return &___TopMost_1; }
	inline void set_TopMost_1(intptr_t value)
	{
		___TopMost_1 = value;
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields, ___Top_2)); }
	inline intptr_t get_Top_2() const { return ___Top_2; }
	inline intptr_t* get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(intptr_t value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields, ___Bottom_3)); }
	inline intptr_t get_Bottom_3() const { return ___Bottom_3; }
	inline intptr_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(intptr_t value)
	{
		___Bottom_3 = value;
	}
};


// BoltEditorStartMode
struct  BoltEditorStartMode_t54CDD1AEEB57FB389595A9585FD9B0649F455ED1 
{
public:
	// System.Int32 BoltEditorStartMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltEditorStartMode_t54CDD1AEEB57FB389595A9585FD9B0649F455ED1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltNetworkModes
struct  BoltNetworkModes_tE858A25B43A7507EFD36242C9E072A22515B1C34 
{
public:
	// System.Int32 BoltNetworkModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltNetworkModes_tE858A25B43A7507EFD36242C9E072A22515B1C34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltPrefabInstantiateMode
struct  BoltPrefabInstantiateMode_t44209722804DD9CF1D459272DE292AB3FE32756F 
{
public:
	// System.Int32 BoltPrefabInstantiateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltPrefabInstantiateMode_t44209722804DD9CF1D459272DE292AB3FE32756F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltRandomFunction
struct  BoltRandomFunction_t4660A3DFCA2F97F3496F8DA955D6E6807679D003 
{
public:
	// System.Int32 BoltRandomFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoltRandomFunction_t4660A3DFCA2F97F3496F8DA955D6E6807679D003, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AppDomain
struct  AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Diagnostics.Process_StreamReadMode
struct  StreamReadMode_t36A3F7301F96A513D4D1C0BFC8A814952F52C3CA 
{
public:
	// System.Int32 System.Diagnostics.Process_StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t36A3F7301F96A513D4D1C0BFC8A814952F52C3CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.ProcessPriorityClass
struct  ProcessPriorityClass_t700C771015B86039F6985CB25ED7DC56DED7865A 
{
public:
	// System.Int32 System.Diagnostics.ProcessPriorityClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessPriorityClass_t700C771015B86039F6985CB25ED7DC56DED7865A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct  StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___stream_12)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_12() const { return ___stream_12; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoding_13)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoder_14)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___byteBuffer_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charBuffer_16)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ____asyncWriteTask_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ___Null_11)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UdpKit.UdpConnectionDisconnectReason
struct  UdpConnectionDisconnectReason_t531927B8896001D87446E8540ADC14EFB29172F3 
{
public:
	// System.Int32 UdpKit.UdpConnectionDisconnectReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UdpConnectionDisconnectReason_t531927B8896001D87446E8540ADC14EFB29172F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UdpKit.UdpEndPoint
struct  UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UdpKit.UdpEndPoint::Port
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// UdpKit.UdpSteamID UdpKit.UdpEndPoint::SteamId
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			// System.Boolean UdpKit.UdpEndPoint::IPv6
			bool ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			bool ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			// UdpKit.UdpIPv4Address UdpKit.UdpEndPoint::Address
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			// UdpKit.UdpIPv6Address UdpKit.UdpEndPoint::AddressIPv6
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27, ___Port_2)); }
	inline uint16_t get_Port_2() const { return ___Port_2; }
	inline uint16_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(uint16_t value)
	{
		___Port_2 = value;
	}

	inline static int32_t get_offset_of_SteamId_3() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27, ___SteamId_3)); }
	inline UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  get_SteamId_3() const { return ___SteamId_3; }
	inline UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE * get_address_of_SteamId_3() { return &___SteamId_3; }
	inline void set_SteamId_3(UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  value)
	{
		___SteamId_3 = value;
	}

	inline static int32_t get_offset_of_IPv6_4() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27, ___IPv6_4)); }
	inline bool get_IPv6_4() const { return ___IPv6_4; }
	inline bool* get_address_of_IPv6_4() { return &___IPv6_4; }
	inline void set_IPv6_4(bool value)
	{
		___IPv6_4 = value;
	}

	inline static int32_t get_offset_of_Address_5() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27, ___Address_5)); }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  get_Address_5() const { return ___Address_5; }
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * get_address_of_Address_5() { return &___Address_5; }
	inline void set_Address_5(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		___Address_5 = value;
	}

	inline static int32_t get_offset_of_AddressIPv6_6() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27, ___AddressIPv6_6)); }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  get_AddressIPv6_6() const { return ___AddressIPv6_6; }
	inline UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * get_address_of_AddressIPv6_6() { return &___AddressIPv6_6; }
	inline void set_AddressIPv6_6(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  value)
	{
		___AddressIPv6_6 = value;
	}
};

struct UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27_StaticFields
{
public:
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Any
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___Any_0;
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::AnyIPv6
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___AnyIPv6_1;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27_StaticFields, ___Any_0)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get_Any_0() const { return ___Any_0; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_AnyIPv6_1() { return static_cast<int32_t>(offsetof(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27_StaticFields, ___AnyIPv6_1)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get_AnyIPv6_1() const { return ___AnyIPv6_1; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of_AnyIPv6_1() { return &___AnyIPv6_1; }
	inline void set_AnyIPv6_1(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		___AnyIPv6_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};
// Native definition for COM marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t704BD0EF51047974C63F2F2D55F51D48E56067FE  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.UnitySettings
struct  UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653  : public RuntimeObject
{
public:

public:
};

struct UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields
{
public:
	// System.Boolean Bolt.UnitySettings::IsBuildMono
	bool ___IsBuildMono_0;
	// System.Boolean Bolt.UnitySettings::IsBuildDotNet
	bool ___IsBuildDotNet_1;
	// System.Boolean Bolt.UnitySettings::IsBuildIL2CPP
	bool ___IsBuildIL2CPP_2;
	// Bolt.UnitySettings_DotNetVersion Bolt.UnitySettings::CurrentDotNetVersion
	int32_t ___CurrentDotNetVersion_3;
	// UnityEngine.RuntimePlatform Bolt.UnitySettings::CurrentPlatform
	int32_t ___CurrentPlatform_4;

public:
	inline static int32_t get_offset_of_IsBuildMono_0() { return static_cast<int32_t>(offsetof(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields, ___IsBuildMono_0)); }
	inline bool get_IsBuildMono_0() const { return ___IsBuildMono_0; }
	inline bool* get_address_of_IsBuildMono_0() { return &___IsBuildMono_0; }
	inline void set_IsBuildMono_0(bool value)
	{
		___IsBuildMono_0 = value;
	}

	inline static int32_t get_offset_of_IsBuildDotNet_1() { return static_cast<int32_t>(offsetof(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields, ___IsBuildDotNet_1)); }
	inline bool get_IsBuildDotNet_1() const { return ___IsBuildDotNet_1; }
	inline bool* get_address_of_IsBuildDotNet_1() { return &___IsBuildDotNet_1; }
	inline void set_IsBuildDotNet_1(bool value)
	{
		___IsBuildDotNet_1 = value;
	}

	inline static int32_t get_offset_of_IsBuildIL2CPP_2() { return static_cast<int32_t>(offsetof(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields, ___IsBuildIL2CPP_2)); }
	inline bool get_IsBuildIL2CPP_2() const { return ___IsBuildIL2CPP_2; }
	inline bool* get_address_of_IsBuildIL2CPP_2() { return &___IsBuildIL2CPP_2; }
	inline void set_IsBuildIL2CPP_2(bool value)
	{
		___IsBuildIL2CPP_2 = value;
	}

	inline static int32_t get_offset_of_CurrentDotNetVersion_3() { return static_cast<int32_t>(offsetof(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields, ___CurrentDotNetVersion_3)); }
	inline int32_t get_CurrentDotNetVersion_3() const { return ___CurrentDotNetVersion_3; }
	inline int32_t* get_address_of_CurrentDotNetVersion_3() { return &___CurrentDotNetVersion_3; }
	inline void set_CurrentDotNetVersion_3(int32_t value)
	{
		___CurrentDotNetVersion_3 = value;
	}

	inline static int32_t get_offset_of_CurrentPlatform_4() { return static_cast<int32_t>(offsetof(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields, ___CurrentPlatform_4)); }
	inline int32_t get_CurrentPlatform_4() const { return ___CurrentPlatform_4; }
	inline int32_t* get_address_of_CurrentPlatform_4() { return &___CurrentPlatform_4; }
	inline void set_CurrentPlatform_4(int32_t value)
	{
		___CurrentPlatform_4 = value;
	}
};


// BoltConfig
struct  BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507  : public RuntimeObject
{
public:
	// System.Int32 BoltConfig::framesPerSecond
	int32_t ___framesPerSecond_0;
	// System.Int32 BoltConfig::packetSize
	int32_t ___packetSize_1;
	// System.Int32 BoltConfig::packetMaxEventSize
	int32_t ___packetMaxEventSize_2;
	// System.Int32 BoltConfig::maxEntityPriority
	int32_t ___maxEntityPriority_3;
	// System.Int32 BoltConfig::maxPropertyPriority
	int32_t ___maxPropertyPriority_4;
	// Bolt.ScopeMode BoltConfig::scopeMode
	int32_t ___scopeMode_5;
	// BoltConfigLogTargets BoltConfig::logTargets
	int32_t ___logTargets_6;
	// System.Boolean BoltConfig::disableDejitterBuffer
	bool ___disableDejitterBuffer_7;
	// System.Int32 BoltConfig::clientSendRate
	int32_t ___clientSendRate_8;
	// System.Int32 BoltConfig::clientDejitterDelay
	int32_t ___clientDejitterDelay_9;
	// System.Int32 BoltConfig::clientDejitterDelayMin
	int32_t ___clientDejitterDelayMin_10;
	// System.Int32 BoltConfig::clientDejitterDelayMax
	int32_t ___clientDejitterDelayMax_11;
	// System.Int32 BoltConfig::serverSendRate
	int32_t ___serverSendRate_12;
	// System.Int32 BoltConfig::serverDejitterDelay
	int32_t ___serverDejitterDelay_13;
	// System.Int32 BoltConfig::serverDejitterDelayMin
	int32_t ___serverDejitterDelayMin_14;
	// System.Int32 BoltConfig::serverDejitterDelayMax
	int32_t ___serverDejitterDelayMax_15;
	// System.Int32 BoltConfig::serverConnectionLimit
	int32_t ___serverConnectionLimit_16;
	// BoltConnectionAcceptMode BoltConfig::serverConnectionAcceptMode
	int32_t ___serverConnectionAcceptMode_17;
	// System.Int32 BoltConfig::<commandDejitterDelay>k__BackingField
	int32_t ___U3CcommandDejitterDelayU3Ek__BackingField_18;
	// System.Int32 BoltConfig::commandQueueSize
	int32_t ___commandQueueSize_19;
	// System.Int32 BoltConfig::commandRedundancy
	int32_t ___commandRedundancy_20;
	// System.Single BoltConfig::commandPingMultiplier
	float ___commandPingMultiplier_21;
	// System.Boolean BoltConfig::useNetworkSimulation
	bool ___useNetworkSimulation_22;
	// System.Single BoltConfig::simulatedLoss
	float ___simulatedLoss_23;
	// System.Int32 BoltConfig::simulatedPingMean
	int32_t ___simulatedPingMean_24;
	// System.Int32 BoltConfig::simulatedPingJitter
	int32_t ___simulatedPingJitter_25;
	// BoltRandomFunction BoltConfig::simulatedRandomFunction
	int32_t ___simulatedRandomFunction_26;
	// System.Int32 BoltConfig::connectionTimeout
	int32_t ___connectionTimeout_27;
	// System.Int32 BoltConfig::connectionRequestTimeout
	int32_t ___connectionRequestTimeout_28;
	// System.Int32 BoltConfig::connectionRequestAttempts
	int32_t ___connectionRequestAttempts_29;
	// System.Boolean BoltConfig::disableAutoSceneLoading
	bool ___disableAutoSceneLoading_30;
	// System.Boolean BoltConfig::EnableIPv6
	bool ___EnableIPv6_31;

public:
	inline static int32_t get_offset_of_framesPerSecond_0() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___framesPerSecond_0)); }
	inline int32_t get_framesPerSecond_0() const { return ___framesPerSecond_0; }
	inline int32_t* get_address_of_framesPerSecond_0() { return &___framesPerSecond_0; }
	inline void set_framesPerSecond_0(int32_t value)
	{
		___framesPerSecond_0 = value;
	}

	inline static int32_t get_offset_of_packetSize_1() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___packetSize_1)); }
	inline int32_t get_packetSize_1() const { return ___packetSize_1; }
	inline int32_t* get_address_of_packetSize_1() { return &___packetSize_1; }
	inline void set_packetSize_1(int32_t value)
	{
		___packetSize_1 = value;
	}

	inline static int32_t get_offset_of_packetMaxEventSize_2() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___packetMaxEventSize_2)); }
	inline int32_t get_packetMaxEventSize_2() const { return ___packetMaxEventSize_2; }
	inline int32_t* get_address_of_packetMaxEventSize_2() { return &___packetMaxEventSize_2; }
	inline void set_packetMaxEventSize_2(int32_t value)
	{
		___packetMaxEventSize_2 = value;
	}

	inline static int32_t get_offset_of_maxEntityPriority_3() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___maxEntityPriority_3)); }
	inline int32_t get_maxEntityPriority_3() const { return ___maxEntityPriority_3; }
	inline int32_t* get_address_of_maxEntityPriority_3() { return &___maxEntityPriority_3; }
	inline void set_maxEntityPriority_3(int32_t value)
	{
		___maxEntityPriority_3 = value;
	}

	inline static int32_t get_offset_of_maxPropertyPriority_4() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___maxPropertyPriority_4)); }
	inline int32_t get_maxPropertyPriority_4() const { return ___maxPropertyPriority_4; }
	inline int32_t* get_address_of_maxPropertyPriority_4() { return &___maxPropertyPriority_4; }
	inline void set_maxPropertyPriority_4(int32_t value)
	{
		___maxPropertyPriority_4 = value;
	}

	inline static int32_t get_offset_of_scopeMode_5() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___scopeMode_5)); }
	inline int32_t get_scopeMode_5() const { return ___scopeMode_5; }
	inline int32_t* get_address_of_scopeMode_5() { return &___scopeMode_5; }
	inline void set_scopeMode_5(int32_t value)
	{
		___scopeMode_5 = value;
	}

	inline static int32_t get_offset_of_logTargets_6() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___logTargets_6)); }
	inline int32_t get_logTargets_6() const { return ___logTargets_6; }
	inline int32_t* get_address_of_logTargets_6() { return &___logTargets_6; }
	inline void set_logTargets_6(int32_t value)
	{
		___logTargets_6 = value;
	}

	inline static int32_t get_offset_of_disableDejitterBuffer_7() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___disableDejitterBuffer_7)); }
	inline bool get_disableDejitterBuffer_7() const { return ___disableDejitterBuffer_7; }
	inline bool* get_address_of_disableDejitterBuffer_7() { return &___disableDejitterBuffer_7; }
	inline void set_disableDejitterBuffer_7(bool value)
	{
		___disableDejitterBuffer_7 = value;
	}

	inline static int32_t get_offset_of_clientSendRate_8() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___clientSendRate_8)); }
	inline int32_t get_clientSendRate_8() const { return ___clientSendRate_8; }
	inline int32_t* get_address_of_clientSendRate_8() { return &___clientSendRate_8; }
	inline void set_clientSendRate_8(int32_t value)
	{
		___clientSendRate_8 = value;
	}

	inline static int32_t get_offset_of_clientDejitterDelay_9() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___clientDejitterDelay_9)); }
	inline int32_t get_clientDejitterDelay_9() const { return ___clientDejitterDelay_9; }
	inline int32_t* get_address_of_clientDejitterDelay_9() { return &___clientDejitterDelay_9; }
	inline void set_clientDejitterDelay_9(int32_t value)
	{
		___clientDejitterDelay_9 = value;
	}

	inline static int32_t get_offset_of_clientDejitterDelayMin_10() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___clientDejitterDelayMin_10)); }
	inline int32_t get_clientDejitterDelayMin_10() const { return ___clientDejitterDelayMin_10; }
	inline int32_t* get_address_of_clientDejitterDelayMin_10() { return &___clientDejitterDelayMin_10; }
	inline void set_clientDejitterDelayMin_10(int32_t value)
	{
		___clientDejitterDelayMin_10 = value;
	}

	inline static int32_t get_offset_of_clientDejitterDelayMax_11() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___clientDejitterDelayMax_11)); }
	inline int32_t get_clientDejitterDelayMax_11() const { return ___clientDejitterDelayMax_11; }
	inline int32_t* get_address_of_clientDejitterDelayMax_11() { return &___clientDejitterDelayMax_11; }
	inline void set_clientDejitterDelayMax_11(int32_t value)
	{
		___clientDejitterDelayMax_11 = value;
	}

	inline static int32_t get_offset_of_serverSendRate_12() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverSendRate_12)); }
	inline int32_t get_serverSendRate_12() const { return ___serverSendRate_12; }
	inline int32_t* get_address_of_serverSendRate_12() { return &___serverSendRate_12; }
	inline void set_serverSendRate_12(int32_t value)
	{
		___serverSendRate_12 = value;
	}

	inline static int32_t get_offset_of_serverDejitterDelay_13() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverDejitterDelay_13)); }
	inline int32_t get_serverDejitterDelay_13() const { return ___serverDejitterDelay_13; }
	inline int32_t* get_address_of_serverDejitterDelay_13() { return &___serverDejitterDelay_13; }
	inline void set_serverDejitterDelay_13(int32_t value)
	{
		___serverDejitterDelay_13 = value;
	}

	inline static int32_t get_offset_of_serverDejitterDelayMin_14() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverDejitterDelayMin_14)); }
	inline int32_t get_serverDejitterDelayMin_14() const { return ___serverDejitterDelayMin_14; }
	inline int32_t* get_address_of_serverDejitterDelayMin_14() { return &___serverDejitterDelayMin_14; }
	inline void set_serverDejitterDelayMin_14(int32_t value)
	{
		___serverDejitterDelayMin_14 = value;
	}

	inline static int32_t get_offset_of_serverDejitterDelayMax_15() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverDejitterDelayMax_15)); }
	inline int32_t get_serverDejitterDelayMax_15() const { return ___serverDejitterDelayMax_15; }
	inline int32_t* get_address_of_serverDejitterDelayMax_15() { return &___serverDejitterDelayMax_15; }
	inline void set_serverDejitterDelayMax_15(int32_t value)
	{
		___serverDejitterDelayMax_15 = value;
	}

	inline static int32_t get_offset_of_serverConnectionLimit_16() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverConnectionLimit_16)); }
	inline int32_t get_serverConnectionLimit_16() const { return ___serverConnectionLimit_16; }
	inline int32_t* get_address_of_serverConnectionLimit_16() { return &___serverConnectionLimit_16; }
	inline void set_serverConnectionLimit_16(int32_t value)
	{
		___serverConnectionLimit_16 = value;
	}

	inline static int32_t get_offset_of_serverConnectionAcceptMode_17() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___serverConnectionAcceptMode_17)); }
	inline int32_t get_serverConnectionAcceptMode_17() const { return ___serverConnectionAcceptMode_17; }
	inline int32_t* get_address_of_serverConnectionAcceptMode_17() { return &___serverConnectionAcceptMode_17; }
	inline void set_serverConnectionAcceptMode_17(int32_t value)
	{
		___serverConnectionAcceptMode_17 = value;
	}

	inline static int32_t get_offset_of_U3CcommandDejitterDelayU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___U3CcommandDejitterDelayU3Ek__BackingField_18)); }
	inline int32_t get_U3CcommandDejitterDelayU3Ek__BackingField_18() const { return ___U3CcommandDejitterDelayU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CcommandDejitterDelayU3Ek__BackingField_18() { return &___U3CcommandDejitterDelayU3Ek__BackingField_18; }
	inline void set_U3CcommandDejitterDelayU3Ek__BackingField_18(int32_t value)
	{
		___U3CcommandDejitterDelayU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_commandQueueSize_19() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___commandQueueSize_19)); }
	inline int32_t get_commandQueueSize_19() const { return ___commandQueueSize_19; }
	inline int32_t* get_address_of_commandQueueSize_19() { return &___commandQueueSize_19; }
	inline void set_commandQueueSize_19(int32_t value)
	{
		___commandQueueSize_19 = value;
	}

	inline static int32_t get_offset_of_commandRedundancy_20() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___commandRedundancy_20)); }
	inline int32_t get_commandRedundancy_20() const { return ___commandRedundancy_20; }
	inline int32_t* get_address_of_commandRedundancy_20() { return &___commandRedundancy_20; }
	inline void set_commandRedundancy_20(int32_t value)
	{
		___commandRedundancy_20 = value;
	}

	inline static int32_t get_offset_of_commandPingMultiplier_21() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___commandPingMultiplier_21)); }
	inline float get_commandPingMultiplier_21() const { return ___commandPingMultiplier_21; }
	inline float* get_address_of_commandPingMultiplier_21() { return &___commandPingMultiplier_21; }
	inline void set_commandPingMultiplier_21(float value)
	{
		___commandPingMultiplier_21 = value;
	}

	inline static int32_t get_offset_of_useNetworkSimulation_22() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___useNetworkSimulation_22)); }
	inline bool get_useNetworkSimulation_22() const { return ___useNetworkSimulation_22; }
	inline bool* get_address_of_useNetworkSimulation_22() { return &___useNetworkSimulation_22; }
	inline void set_useNetworkSimulation_22(bool value)
	{
		___useNetworkSimulation_22 = value;
	}

	inline static int32_t get_offset_of_simulatedLoss_23() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___simulatedLoss_23)); }
	inline float get_simulatedLoss_23() const { return ___simulatedLoss_23; }
	inline float* get_address_of_simulatedLoss_23() { return &___simulatedLoss_23; }
	inline void set_simulatedLoss_23(float value)
	{
		___simulatedLoss_23 = value;
	}

	inline static int32_t get_offset_of_simulatedPingMean_24() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___simulatedPingMean_24)); }
	inline int32_t get_simulatedPingMean_24() const { return ___simulatedPingMean_24; }
	inline int32_t* get_address_of_simulatedPingMean_24() { return &___simulatedPingMean_24; }
	inline void set_simulatedPingMean_24(int32_t value)
	{
		___simulatedPingMean_24 = value;
	}

	inline static int32_t get_offset_of_simulatedPingJitter_25() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___simulatedPingJitter_25)); }
	inline int32_t get_simulatedPingJitter_25() const { return ___simulatedPingJitter_25; }
	inline int32_t* get_address_of_simulatedPingJitter_25() { return &___simulatedPingJitter_25; }
	inline void set_simulatedPingJitter_25(int32_t value)
	{
		___simulatedPingJitter_25 = value;
	}

	inline static int32_t get_offset_of_simulatedRandomFunction_26() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___simulatedRandomFunction_26)); }
	inline int32_t get_simulatedRandomFunction_26() const { return ___simulatedRandomFunction_26; }
	inline int32_t* get_address_of_simulatedRandomFunction_26() { return &___simulatedRandomFunction_26; }
	inline void set_simulatedRandomFunction_26(int32_t value)
	{
		___simulatedRandomFunction_26 = value;
	}

	inline static int32_t get_offset_of_connectionTimeout_27() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___connectionTimeout_27)); }
	inline int32_t get_connectionTimeout_27() const { return ___connectionTimeout_27; }
	inline int32_t* get_address_of_connectionTimeout_27() { return &___connectionTimeout_27; }
	inline void set_connectionTimeout_27(int32_t value)
	{
		___connectionTimeout_27 = value;
	}

	inline static int32_t get_offset_of_connectionRequestTimeout_28() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___connectionRequestTimeout_28)); }
	inline int32_t get_connectionRequestTimeout_28() const { return ___connectionRequestTimeout_28; }
	inline int32_t* get_address_of_connectionRequestTimeout_28() { return &___connectionRequestTimeout_28; }
	inline void set_connectionRequestTimeout_28(int32_t value)
	{
		___connectionRequestTimeout_28 = value;
	}

	inline static int32_t get_offset_of_connectionRequestAttempts_29() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___connectionRequestAttempts_29)); }
	inline int32_t get_connectionRequestAttempts_29() const { return ___connectionRequestAttempts_29; }
	inline int32_t* get_address_of_connectionRequestAttempts_29() { return &___connectionRequestAttempts_29; }
	inline void set_connectionRequestAttempts_29(int32_t value)
	{
		___connectionRequestAttempts_29 = value;
	}

	inline static int32_t get_offset_of_disableAutoSceneLoading_30() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___disableAutoSceneLoading_30)); }
	inline bool get_disableAutoSceneLoading_30() const { return ___disableAutoSceneLoading_30; }
	inline bool* get_address_of_disableAutoSceneLoading_30() { return &___disableAutoSceneLoading_30; }
	inline void set_disableAutoSceneLoading_30(bool value)
	{
		___disableAutoSceneLoading_30 = value;
	}

	inline static int32_t get_offset_of_EnableIPv6_31() { return static_cast<int32_t>(offsetof(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507, ___EnableIPv6_31)); }
	inline bool get_EnableIPv6_31() const { return ___EnableIPv6_31; }
	inline bool* get_address_of_EnableIPv6_31() { return &___EnableIPv6_31; }
	inline void set_EnableIPv6_31(bool value)
	{
		___EnableIPv6_31 = value;
	}
};


// BoltDebugStartSettings
struct  BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621  : public RuntimeObject
{
public:

public:
};

struct BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields
{
public:
	// System.Object BoltDebugStartSettings::handle
	RuntimeObject * ___handle_0;
	// System.Runtime.InteropServices.HandleRef BoltDebugStartSettings::unityHandle
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___unityHandle_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields, ___handle_0)); }
	inline RuntimeObject * get_handle_0() const { return ___handle_0; }
	inline RuntimeObject ** get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(RuntimeObject * value)
	{
		___handle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityHandle_1() { return static_cast<int32_t>(offsetof(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields, ___unityHandle_1)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_unityHandle_1() const { return ___unityHandle_1; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_unityHandle_1() { return &___unityHandle_1; }
	inline void set_unityHandle_1(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___unityHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___unityHandle_1))->___m_wrapper_0), (void*)NULL);
	}
};


// BoltGlobalBehaviourAttribute
struct  BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// BoltNetworkModes BoltGlobalBehaviourAttribute::<Mode>k__BackingField
	int32_t ___U3CModeU3Ek__BackingField_0;
	// System.String[] BoltGlobalBehaviourAttribute::<Scenes>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3CScenesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2, ___U3CModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CModeU3Ek__BackingField_0() const { return ___U3CModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CModeU3Ek__BackingField_0() { return &___U3CModeU3Ek__BackingField_0; }
	inline void set_U3CModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CModeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CScenesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2, ___U3CScenesU3Ek__BackingField_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3CScenesU3Ek__BackingField_1() const { return ___U3CScenesU3Ek__BackingField_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3CScenesU3Ek__BackingField_1() { return &___U3CScenesU3Ek__BackingField_1; }
	inline void set_U3CScenesU3Ek__BackingField_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3CScenesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CScenesU3Ek__BackingField_1), (void*)value);
	}
};


// System.Diagnostics.Process
struct  Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.IntPtr System.Diagnostics.Process::minWorkingSet
	intptr_t ___minWorkingSet_14;
	// System.IntPtr System.Diagnostics.Process::maxWorkingSet
	intptr_t ___maxWorkingSet_15;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_16;
	// System.Diagnostics.ProcessPriorityClass System.Diagnostics.Process::priorityClass
	int32_t ___priorityClass_17;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * ___startInfo_18;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_19;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_20;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___onExited_21;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_22;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_23;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_24;
	// System.DateTime System.Diagnostics.Process::exitTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___exitTime_25;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_26;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_27;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * ___registeredWaitHandle_28;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * ___waitHandle_29;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_30;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___standardOutput_31;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___standardInput_32;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___standardError_33;
	// System.OperatingSystem System.Diagnostics.Process::operatingSystem
	OperatingSystem_tBB05846D5AA6960FFEB42C59E5FE359255C2BE83 * ___operatingSystem_34;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_35;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_36;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_37;
	// System.Diagnostics.Process_StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_38;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::OutputDataReceived
	DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * ___OutputDataReceived_39;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::ErrorDataReceived
	DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * ___ErrorDataReceived_40;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * ___output_41;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * ___error_42;
	// System.Boolean System.Diagnostics.Process::pendingOutputRead
	bool ___pendingOutputRead_43;
	// System.Boolean System.Diagnostics.Process::pendingErrorRead
	bool ___pendingErrorRead_44;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_46;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___m_processHandle_7)); }
	inline SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_tEF75BF77F5F4E121334E2A97EE8E1F6685F38CF7 * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___threads_11)); }
	inline ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t6D1D2E676ED1F65087080729F91410724CA74DA7 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___modules_12)); }
	inline ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t93E76B9948E84325744E8C57A525FD465D78DB3F * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_minWorkingSet_14() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___minWorkingSet_14)); }
	inline intptr_t get_minWorkingSet_14() const { return ___minWorkingSet_14; }
	inline intptr_t* get_address_of_minWorkingSet_14() { return &___minWorkingSet_14; }
	inline void set_minWorkingSet_14(intptr_t value)
	{
		___minWorkingSet_14 = value;
	}

	inline static int32_t get_offset_of_maxWorkingSet_15() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___maxWorkingSet_15)); }
	inline intptr_t get_maxWorkingSet_15() const { return ___maxWorkingSet_15; }
	inline intptr_t* get_address_of_maxWorkingSet_15() { return &___maxWorkingSet_15; }
	inline void set_maxWorkingSet_15(intptr_t value)
	{
		___maxWorkingSet_15 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_16() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___havePriorityClass_16)); }
	inline bool get_havePriorityClass_16() const { return ___havePriorityClass_16; }
	inline bool* get_address_of_havePriorityClass_16() { return &___havePriorityClass_16; }
	inline void set_havePriorityClass_16(bool value)
	{
		___havePriorityClass_16 = value;
	}

	inline static int32_t get_offset_of_priorityClass_17() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___priorityClass_17)); }
	inline int32_t get_priorityClass_17() const { return ___priorityClass_17; }
	inline int32_t* get_address_of_priorityClass_17() { return &___priorityClass_17; }
	inline void set_priorityClass_17(int32_t value)
	{
		___priorityClass_17 = value;
	}

	inline static int32_t get_offset_of_startInfo_18() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___startInfo_18)); }
	inline ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * get_startInfo_18() const { return ___startInfo_18; }
	inline ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 ** get_address_of_startInfo_18() { return &___startInfo_18; }
	inline void set_startInfo_18(ProcessStartInfo_t5130526E78224EE02475E7A0FBF5BCE821977706 * value)
	{
		___startInfo_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startInfo_18), (void*)value);
	}

	inline static int32_t get_offset_of_watchForExit_19() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___watchForExit_19)); }
	inline bool get_watchForExit_19() const { return ___watchForExit_19; }
	inline bool* get_address_of_watchForExit_19() { return &___watchForExit_19; }
	inline void set_watchForExit_19(bool value)
	{
		___watchForExit_19 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_20() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___watchingForExit_20)); }
	inline bool get_watchingForExit_20() const { return ___watchingForExit_20; }
	inline bool* get_address_of_watchingForExit_20() { return &___watchingForExit_20; }
	inline void set_watchingForExit_20(bool value)
	{
		___watchingForExit_20 = value;
	}

	inline static int32_t get_offset_of_onExited_21() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___onExited_21)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_onExited_21() const { return ___onExited_21; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_onExited_21() { return &___onExited_21; }
	inline void set_onExited_21(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___onExited_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_21), (void*)value);
	}

	inline static int32_t get_offset_of_exited_22() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___exited_22)); }
	inline bool get_exited_22() const { return ___exited_22; }
	inline bool* get_address_of_exited_22() { return &___exited_22; }
	inline void set_exited_22(bool value)
	{
		___exited_22 = value;
	}

	inline static int32_t get_offset_of_exitCode_23() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___exitCode_23)); }
	inline int32_t get_exitCode_23() const { return ___exitCode_23; }
	inline int32_t* get_address_of_exitCode_23() { return &___exitCode_23; }
	inline void set_exitCode_23(int32_t value)
	{
		___exitCode_23 = value;
	}

	inline static int32_t get_offset_of_signaled_24() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___signaled_24)); }
	inline bool get_signaled_24() const { return ___signaled_24; }
	inline bool* get_address_of_signaled_24() { return &___signaled_24; }
	inline void set_signaled_24(bool value)
	{
		___signaled_24 = value;
	}

	inline static int32_t get_offset_of_exitTime_25() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___exitTime_25)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_exitTime_25() const { return ___exitTime_25; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_exitTime_25() { return &___exitTime_25; }
	inline void set_exitTime_25(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___exitTime_25 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_26() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___haveExitTime_26)); }
	inline bool get_haveExitTime_26() const { return ___haveExitTime_26; }
	inline bool* get_address_of_haveExitTime_26() { return &___haveExitTime_26; }
	inline void set_haveExitTime_26(bool value)
	{
		___haveExitTime_26 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_27() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___raisedOnExited_27)); }
	inline bool get_raisedOnExited_27() const { return ___raisedOnExited_27; }
	inline bool* get_address_of_raisedOnExited_27() { return &___raisedOnExited_27; }
	inline void set_raisedOnExited_27(bool value)
	{
		___raisedOnExited_27 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_28() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___registeredWaitHandle_28)); }
	inline RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * get_registeredWaitHandle_28() const { return ___registeredWaitHandle_28; }
	inline RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 ** get_address_of_registeredWaitHandle_28() { return &___registeredWaitHandle_28; }
	inline void set_registeredWaitHandle_28(RegisteredWaitHandle_t25AAC0B53C62CFA0B3F9BFFA87DDA3638F4308C0 * value)
	{
		___registeredWaitHandle_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_28), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_29() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___waitHandle_29)); }
	inline WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * get_waitHandle_29() const { return ___waitHandle_29; }
	inline WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 ** get_address_of_waitHandle_29() { return &___waitHandle_29; }
	inline void set_waitHandle_29(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * value)
	{
		___waitHandle_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_29), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_30() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___synchronizingObject_30)); }
	inline RuntimeObject* get_synchronizingObject_30() const { return ___synchronizingObject_30; }
	inline RuntimeObject** get_address_of_synchronizingObject_30() { return &___synchronizingObject_30; }
	inline void set_synchronizingObject_30(RuntimeObject* value)
	{
		___synchronizingObject_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_30), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_31() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardOutput_31)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_standardOutput_31() const { return ___standardOutput_31; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_standardOutput_31() { return &___standardOutput_31; }
	inline void set_standardOutput_31(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___standardOutput_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_31), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_32() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardInput_32)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_standardInput_32() const { return ___standardInput_32; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_standardInput_32() { return &___standardInput_32; }
	inline void set_standardInput_32(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___standardInput_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_32), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_33() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___standardError_33)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_standardError_33() const { return ___standardError_33; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_standardError_33() { return &___standardError_33; }
	inline void set_standardError_33(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___standardError_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_33), (void*)value);
	}

	inline static int32_t get_offset_of_operatingSystem_34() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___operatingSystem_34)); }
	inline OperatingSystem_tBB05846D5AA6960FFEB42C59E5FE359255C2BE83 * get_operatingSystem_34() const { return ___operatingSystem_34; }
	inline OperatingSystem_tBB05846D5AA6960FFEB42C59E5FE359255C2BE83 ** get_address_of_operatingSystem_34() { return &___operatingSystem_34; }
	inline void set_operatingSystem_34(OperatingSystem_tBB05846D5AA6960FFEB42C59E5FE359255C2BE83 * value)
	{
		___operatingSystem_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___operatingSystem_34), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_35() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___disposed_35)); }
	inline bool get_disposed_35() const { return ___disposed_35; }
	inline bool* get_address_of_disposed_35() { return &___disposed_35; }
	inline void set_disposed_35(bool value)
	{
		___disposed_35 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_36() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___outputStreamReadMode_36)); }
	inline int32_t get_outputStreamReadMode_36() const { return ___outputStreamReadMode_36; }
	inline int32_t* get_address_of_outputStreamReadMode_36() { return &___outputStreamReadMode_36; }
	inline void set_outputStreamReadMode_36(int32_t value)
	{
		___outputStreamReadMode_36 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_37() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___errorStreamReadMode_37)); }
	inline int32_t get_errorStreamReadMode_37() const { return ___errorStreamReadMode_37; }
	inline int32_t* get_address_of_errorStreamReadMode_37() { return &___errorStreamReadMode_37; }
	inline void set_errorStreamReadMode_37(int32_t value)
	{
		___errorStreamReadMode_37 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_38() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___inputStreamReadMode_38)); }
	inline int32_t get_inputStreamReadMode_38() const { return ___inputStreamReadMode_38; }
	inline int32_t* get_address_of_inputStreamReadMode_38() { return &___inputStreamReadMode_38; }
	inline void set_inputStreamReadMode_38(int32_t value)
	{
		___inputStreamReadMode_38 = value;
	}

	inline static int32_t get_offset_of_OutputDataReceived_39() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___OutputDataReceived_39)); }
	inline DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * get_OutputDataReceived_39() const { return ___OutputDataReceived_39; }
	inline DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 ** get_address_of_OutputDataReceived_39() { return &___OutputDataReceived_39; }
	inline void set_OutputDataReceived_39(DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * value)
	{
		___OutputDataReceived_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputDataReceived_39), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorDataReceived_40() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___ErrorDataReceived_40)); }
	inline DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * get_ErrorDataReceived_40() const { return ___ErrorDataReceived_40; }
	inline DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 ** get_address_of_ErrorDataReceived_40() { return &___ErrorDataReceived_40; }
	inline void set_ErrorDataReceived_40(DataReceivedEventHandler_tC9627F78C58D22C1F4B5D29FB00598098A128484 * value)
	{
		___ErrorDataReceived_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorDataReceived_40), (void*)value);
	}

	inline static int32_t get_offset_of_output_41() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___output_41)); }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * get_output_41() const { return ___output_41; }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 ** get_address_of_output_41() { return &___output_41; }
	inline void set_output_41(AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * value)
	{
		___output_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_41), (void*)value);
	}

	inline static int32_t get_offset_of_error_42() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___error_42)); }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * get_error_42() const { return ___error_42; }
	inline AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 ** get_address_of_error_42() { return &___error_42; }
	inline void set_error_42(AsyncStreamReader_t2C28E845971B756383AF73AEF2A86C7545E5C485 * value)
	{
		___error_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_42), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOutputRead_43() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___pendingOutputRead_43)); }
	inline bool get_pendingOutputRead_43() const { return ___pendingOutputRead_43; }
	inline bool* get_address_of_pendingOutputRead_43() { return &___pendingOutputRead_43; }
	inline void set_pendingOutputRead_43(bool value)
	{
		___pendingOutputRead_43 = value;
	}

	inline static int32_t get_offset_of_pendingErrorRead_44() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___pendingErrorRead_44)); }
	inline bool get_pendingErrorRead_44() const { return ___pendingErrorRead_44; }
	inline bool* get_address_of_pendingErrorRead_44() { return &___pendingErrorRead_44; }
	inline void set_pendingErrorRead_44(bool value)
	{
		___pendingErrorRead_44 = value;
	}

	inline static int32_t get_offset_of_process_name_46() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1, ___process_name_46)); }
	inline String_t* get_process_name_46() const { return ___process_name_46; }
	inline String_t** get_address_of_process_name_46() { return &___process_name_46; }
	inline void set_process_name_46(String_t* value)
	{
		___process_name_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_46), (void*)value);
	}
};

struct Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1_StaticFields
{
public:
	// System.Diagnostics.TraceSwitch System.Diagnostics.Process::processTracing
	TraceSwitch_t32D210D5C9B05D9E555925260EEC3767BA895EC8 * ___processTracing_45;
	// System.Diagnostics.ProcessModule System.Diagnostics.Process::current_main_module
	ProcessModule_tCEE97E83E9A7F3843A9C794A0488BFC12029A5C8 * ___current_main_module_47;

public:
	inline static int32_t get_offset_of_processTracing_45() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1_StaticFields, ___processTracing_45)); }
	inline TraceSwitch_t32D210D5C9B05D9E555925260EEC3767BA895EC8 * get_processTracing_45() const { return ___processTracing_45; }
	inline TraceSwitch_t32D210D5C9B05D9E555925260EEC3767BA895EC8 ** get_address_of_processTracing_45() { return &___processTracing_45; }
	inline void set_processTracing_45(TraceSwitch_t32D210D5C9B05D9E555925260EEC3767BA895EC8 * value)
	{
		___processTracing_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processTracing_45), (void*)value);
	}

	inline static int32_t get_offset_of_current_main_module_47() { return static_cast<int32_t>(offsetof(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1_StaticFields, ___current_main_module_47)); }
	inline ProcessModule_tCEE97E83E9A7F3843A9C794A0488BFC12029A5C8 * get_current_main_module_47() const { return ___current_main_module_47; }
	inline ProcessModule_tCEE97E83E9A7F3843A9C794A0488BFC12029A5C8 ** get_address_of_current_main_module_47() { return &___current_main_module_47; }
	inline void set_current_main_module_47(ProcessModule_tCEE97E83E9A7F3843A9C794A0488BFC12029A5C8 * value)
	{
		___current_main_module_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_main_module_47), (void*)value);
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.AssemblyName
struct  AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codebase_1), (void*)value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___cultureinfo_6)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureinfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keypair_9)); }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keypair_9), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___publicKey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keyToken_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToken_11), (void*)value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___version_13)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_13() const { return ___version_13; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// BoltDebugStartSettings_EnumWindowsProc
struct  EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98  : public MulticastDelegate_t
{
public:

public:
};


// BoltRuntimeSettings
struct  BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// BoltConfig BoltRuntimeSettings::_config
	BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * ____config_5;
	// System.Int32 BoltRuntimeSettings::debugClientCount
	int32_t ___debugClientCount_6;
	// System.Int32 BoltRuntimeSettings::debugStartPort
	int32_t ___debugStartPort_7;
	// System.Int32 BoltRuntimeSettings::debugBuildMode
	int32_t ___debugBuildMode_8;
	// System.String BoltRuntimeSettings::debugStartMapName
	String_t* ___debugStartMapName_9;
	// System.Boolean BoltRuntimeSettings::debugPlayAsServer
	bool ___debugPlayAsServer_10;
	// System.Boolean BoltRuntimeSettings::showDebugInfo
	bool ___showDebugInfo_11;
	// System.Boolean BoltRuntimeSettings::overrideTimeScale
	bool ___overrideTimeScale_12;
	// BoltEditorStartMode BoltRuntimeSettings::debugEditorMode
	int32_t ___debugEditorMode_13;
	// UnityEngine.KeyCode BoltRuntimeSettings::consoleToggleKey
	int32_t ___consoleToggleKey_14;
	// System.Boolean BoltRuntimeSettings::consoleVisibleByDefault
	bool ___consoleVisibleByDefault_15;
	// System.Int32 BoltRuntimeSettings::compilationWarnLevel
	int32_t ___compilationWarnLevel_16;
	// System.Int32 BoltRuntimeSettings::editorSkin
	int32_t ___editorSkin_17;
	// System.Boolean BoltRuntimeSettings::scopeModeHideWarningInGui
	bool ___scopeModeHideWarningInGui_18;
	// System.String BoltRuntimeSettings::masterServerGameId
	String_t* ___masterServerGameId_19;
	// System.Boolean BoltRuntimeSettings::showBoltEntityHints
	bool ___showBoltEntityHints_20;
	// System.Boolean BoltRuntimeSettings::serializeProjectAsText
	bool ___serializeProjectAsText_21;
	// System.String BoltRuntimeSettings::photonAppId
	String_t* ___photonAppId_22;
	// System.Boolean BoltRuntimeSettings::photonUsePunch
	bool ___photonUsePunch_23;
	// System.Int32 BoltRuntimeSettings::photonCloudRegionIndex
	int32_t ___photonCloudRegionIndex_24;
	// BoltPrefabInstantiateMode BoltRuntimeSettings::instantiateMode
	int32_t ___instantiateMode_25;
	// Bolt.QueryComponentOptionsGlobal BoltRuntimeSettings::globalEntityBehaviourQueryOption
	int32_t ___globalEntityBehaviourQueryOption_26;
	// Bolt.QueryComponentOptionsGlobal BoltRuntimeSettings::globalEntityPriorityCalculatorQueryOption
	int32_t ___globalEntityPriorityCalculatorQueryOption_27;
	// Bolt.QueryComponentOptionsGlobal BoltRuntimeSettings::globalEntityReplicationFilterQueryOption
	int32_t ___globalEntityReplicationFilterQueryOption_28;
	// System.Int32 BoltRuntimeSettings::a2sServerPort
	int32_t ___a2sServerPort_29;
	// System.Boolean BoltRuntimeSettings::enableA2sServer
	bool ___enableA2sServer_30;
	// System.Single BoltRuntimeSettings::RoomCreateTimeout
	float ___RoomCreateTimeout_31;
	// System.Single BoltRuntimeSettings::RoomJoinTimeout
	float ___RoomJoinTimeout_32;
	// System.Boolean BoltRuntimeSettings::enableClientMetrics
	bool ___enableClientMetrics_33;
	// System.Boolean BoltRuntimeSettings::enableSourceProvider
	bool ___enableSourceProvider_34;

public:
	inline static int32_t get_offset_of__config_5() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ____config_5)); }
	inline BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * get__config_5() const { return ____config_5; }
	inline BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 ** get_address_of__config_5() { return &____config_5; }
	inline void set__config_5(BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * value)
	{
		____config_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_5), (void*)value);
	}

	inline static int32_t get_offset_of_debugClientCount_6() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugClientCount_6)); }
	inline int32_t get_debugClientCount_6() const { return ___debugClientCount_6; }
	inline int32_t* get_address_of_debugClientCount_6() { return &___debugClientCount_6; }
	inline void set_debugClientCount_6(int32_t value)
	{
		___debugClientCount_6 = value;
	}

	inline static int32_t get_offset_of_debugStartPort_7() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugStartPort_7)); }
	inline int32_t get_debugStartPort_7() const { return ___debugStartPort_7; }
	inline int32_t* get_address_of_debugStartPort_7() { return &___debugStartPort_7; }
	inline void set_debugStartPort_7(int32_t value)
	{
		___debugStartPort_7 = value;
	}

	inline static int32_t get_offset_of_debugBuildMode_8() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugBuildMode_8)); }
	inline int32_t get_debugBuildMode_8() const { return ___debugBuildMode_8; }
	inline int32_t* get_address_of_debugBuildMode_8() { return &___debugBuildMode_8; }
	inline void set_debugBuildMode_8(int32_t value)
	{
		___debugBuildMode_8 = value;
	}

	inline static int32_t get_offset_of_debugStartMapName_9() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugStartMapName_9)); }
	inline String_t* get_debugStartMapName_9() const { return ___debugStartMapName_9; }
	inline String_t** get_address_of_debugStartMapName_9() { return &___debugStartMapName_9; }
	inline void set_debugStartMapName_9(String_t* value)
	{
		___debugStartMapName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugStartMapName_9), (void*)value);
	}

	inline static int32_t get_offset_of_debugPlayAsServer_10() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugPlayAsServer_10)); }
	inline bool get_debugPlayAsServer_10() const { return ___debugPlayAsServer_10; }
	inline bool* get_address_of_debugPlayAsServer_10() { return &___debugPlayAsServer_10; }
	inline void set_debugPlayAsServer_10(bool value)
	{
		___debugPlayAsServer_10 = value;
	}

	inline static int32_t get_offset_of_showDebugInfo_11() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___showDebugInfo_11)); }
	inline bool get_showDebugInfo_11() const { return ___showDebugInfo_11; }
	inline bool* get_address_of_showDebugInfo_11() { return &___showDebugInfo_11; }
	inline void set_showDebugInfo_11(bool value)
	{
		___showDebugInfo_11 = value;
	}

	inline static int32_t get_offset_of_overrideTimeScale_12() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___overrideTimeScale_12)); }
	inline bool get_overrideTimeScale_12() const { return ___overrideTimeScale_12; }
	inline bool* get_address_of_overrideTimeScale_12() { return &___overrideTimeScale_12; }
	inline void set_overrideTimeScale_12(bool value)
	{
		___overrideTimeScale_12 = value;
	}

	inline static int32_t get_offset_of_debugEditorMode_13() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___debugEditorMode_13)); }
	inline int32_t get_debugEditorMode_13() const { return ___debugEditorMode_13; }
	inline int32_t* get_address_of_debugEditorMode_13() { return &___debugEditorMode_13; }
	inline void set_debugEditorMode_13(int32_t value)
	{
		___debugEditorMode_13 = value;
	}

	inline static int32_t get_offset_of_consoleToggleKey_14() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___consoleToggleKey_14)); }
	inline int32_t get_consoleToggleKey_14() const { return ___consoleToggleKey_14; }
	inline int32_t* get_address_of_consoleToggleKey_14() { return &___consoleToggleKey_14; }
	inline void set_consoleToggleKey_14(int32_t value)
	{
		___consoleToggleKey_14 = value;
	}

	inline static int32_t get_offset_of_consoleVisibleByDefault_15() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___consoleVisibleByDefault_15)); }
	inline bool get_consoleVisibleByDefault_15() const { return ___consoleVisibleByDefault_15; }
	inline bool* get_address_of_consoleVisibleByDefault_15() { return &___consoleVisibleByDefault_15; }
	inline void set_consoleVisibleByDefault_15(bool value)
	{
		___consoleVisibleByDefault_15 = value;
	}

	inline static int32_t get_offset_of_compilationWarnLevel_16() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___compilationWarnLevel_16)); }
	inline int32_t get_compilationWarnLevel_16() const { return ___compilationWarnLevel_16; }
	inline int32_t* get_address_of_compilationWarnLevel_16() { return &___compilationWarnLevel_16; }
	inline void set_compilationWarnLevel_16(int32_t value)
	{
		___compilationWarnLevel_16 = value;
	}

	inline static int32_t get_offset_of_editorSkin_17() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___editorSkin_17)); }
	inline int32_t get_editorSkin_17() const { return ___editorSkin_17; }
	inline int32_t* get_address_of_editorSkin_17() { return &___editorSkin_17; }
	inline void set_editorSkin_17(int32_t value)
	{
		___editorSkin_17 = value;
	}

	inline static int32_t get_offset_of_scopeModeHideWarningInGui_18() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___scopeModeHideWarningInGui_18)); }
	inline bool get_scopeModeHideWarningInGui_18() const { return ___scopeModeHideWarningInGui_18; }
	inline bool* get_address_of_scopeModeHideWarningInGui_18() { return &___scopeModeHideWarningInGui_18; }
	inline void set_scopeModeHideWarningInGui_18(bool value)
	{
		___scopeModeHideWarningInGui_18 = value;
	}

	inline static int32_t get_offset_of_masterServerGameId_19() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___masterServerGameId_19)); }
	inline String_t* get_masterServerGameId_19() const { return ___masterServerGameId_19; }
	inline String_t** get_address_of_masterServerGameId_19() { return &___masterServerGameId_19; }
	inline void set_masterServerGameId_19(String_t* value)
	{
		___masterServerGameId_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterServerGameId_19), (void*)value);
	}

	inline static int32_t get_offset_of_showBoltEntityHints_20() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___showBoltEntityHints_20)); }
	inline bool get_showBoltEntityHints_20() const { return ___showBoltEntityHints_20; }
	inline bool* get_address_of_showBoltEntityHints_20() { return &___showBoltEntityHints_20; }
	inline void set_showBoltEntityHints_20(bool value)
	{
		___showBoltEntityHints_20 = value;
	}

	inline static int32_t get_offset_of_serializeProjectAsText_21() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___serializeProjectAsText_21)); }
	inline bool get_serializeProjectAsText_21() const { return ___serializeProjectAsText_21; }
	inline bool* get_address_of_serializeProjectAsText_21() { return &___serializeProjectAsText_21; }
	inline void set_serializeProjectAsText_21(bool value)
	{
		___serializeProjectAsText_21 = value;
	}

	inline static int32_t get_offset_of_photonAppId_22() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___photonAppId_22)); }
	inline String_t* get_photonAppId_22() const { return ___photonAppId_22; }
	inline String_t** get_address_of_photonAppId_22() { return &___photonAppId_22; }
	inline void set_photonAppId_22(String_t* value)
	{
		___photonAppId_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonAppId_22), (void*)value);
	}

	inline static int32_t get_offset_of_photonUsePunch_23() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___photonUsePunch_23)); }
	inline bool get_photonUsePunch_23() const { return ___photonUsePunch_23; }
	inline bool* get_address_of_photonUsePunch_23() { return &___photonUsePunch_23; }
	inline void set_photonUsePunch_23(bool value)
	{
		___photonUsePunch_23 = value;
	}

	inline static int32_t get_offset_of_photonCloudRegionIndex_24() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___photonCloudRegionIndex_24)); }
	inline int32_t get_photonCloudRegionIndex_24() const { return ___photonCloudRegionIndex_24; }
	inline int32_t* get_address_of_photonCloudRegionIndex_24() { return &___photonCloudRegionIndex_24; }
	inline void set_photonCloudRegionIndex_24(int32_t value)
	{
		___photonCloudRegionIndex_24 = value;
	}

	inline static int32_t get_offset_of_instantiateMode_25() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___instantiateMode_25)); }
	inline int32_t get_instantiateMode_25() const { return ___instantiateMode_25; }
	inline int32_t* get_address_of_instantiateMode_25() { return &___instantiateMode_25; }
	inline void set_instantiateMode_25(int32_t value)
	{
		___instantiateMode_25 = value;
	}

	inline static int32_t get_offset_of_globalEntityBehaviourQueryOption_26() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___globalEntityBehaviourQueryOption_26)); }
	inline int32_t get_globalEntityBehaviourQueryOption_26() const { return ___globalEntityBehaviourQueryOption_26; }
	inline int32_t* get_address_of_globalEntityBehaviourQueryOption_26() { return &___globalEntityBehaviourQueryOption_26; }
	inline void set_globalEntityBehaviourQueryOption_26(int32_t value)
	{
		___globalEntityBehaviourQueryOption_26 = value;
	}

	inline static int32_t get_offset_of_globalEntityPriorityCalculatorQueryOption_27() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___globalEntityPriorityCalculatorQueryOption_27)); }
	inline int32_t get_globalEntityPriorityCalculatorQueryOption_27() const { return ___globalEntityPriorityCalculatorQueryOption_27; }
	inline int32_t* get_address_of_globalEntityPriorityCalculatorQueryOption_27() { return &___globalEntityPriorityCalculatorQueryOption_27; }
	inline void set_globalEntityPriorityCalculatorQueryOption_27(int32_t value)
	{
		___globalEntityPriorityCalculatorQueryOption_27 = value;
	}

	inline static int32_t get_offset_of_globalEntityReplicationFilterQueryOption_28() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___globalEntityReplicationFilterQueryOption_28)); }
	inline int32_t get_globalEntityReplicationFilterQueryOption_28() const { return ___globalEntityReplicationFilterQueryOption_28; }
	inline int32_t* get_address_of_globalEntityReplicationFilterQueryOption_28() { return &___globalEntityReplicationFilterQueryOption_28; }
	inline void set_globalEntityReplicationFilterQueryOption_28(int32_t value)
	{
		___globalEntityReplicationFilterQueryOption_28 = value;
	}

	inline static int32_t get_offset_of_a2sServerPort_29() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___a2sServerPort_29)); }
	inline int32_t get_a2sServerPort_29() const { return ___a2sServerPort_29; }
	inline int32_t* get_address_of_a2sServerPort_29() { return &___a2sServerPort_29; }
	inline void set_a2sServerPort_29(int32_t value)
	{
		___a2sServerPort_29 = value;
	}

	inline static int32_t get_offset_of_enableA2sServer_30() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___enableA2sServer_30)); }
	inline bool get_enableA2sServer_30() const { return ___enableA2sServer_30; }
	inline bool* get_address_of_enableA2sServer_30() { return &___enableA2sServer_30; }
	inline void set_enableA2sServer_30(bool value)
	{
		___enableA2sServer_30 = value;
	}

	inline static int32_t get_offset_of_RoomCreateTimeout_31() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___RoomCreateTimeout_31)); }
	inline float get_RoomCreateTimeout_31() const { return ___RoomCreateTimeout_31; }
	inline float* get_address_of_RoomCreateTimeout_31() { return &___RoomCreateTimeout_31; }
	inline void set_RoomCreateTimeout_31(float value)
	{
		___RoomCreateTimeout_31 = value;
	}

	inline static int32_t get_offset_of_RoomJoinTimeout_32() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___RoomJoinTimeout_32)); }
	inline float get_RoomJoinTimeout_32() const { return ___RoomJoinTimeout_32; }
	inline float* get_address_of_RoomJoinTimeout_32() { return &___RoomJoinTimeout_32; }
	inline void set_RoomJoinTimeout_32(float value)
	{
		___RoomJoinTimeout_32 = value;
	}

	inline static int32_t get_offset_of_enableClientMetrics_33() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___enableClientMetrics_33)); }
	inline bool get_enableClientMetrics_33() const { return ___enableClientMetrics_33; }
	inline bool* get_address_of_enableClientMetrics_33() { return &___enableClientMetrics_33; }
	inline void set_enableClientMetrics_33(bool value)
	{
		___enableClientMetrics_33 = value;
	}

	inline static int32_t get_offset_of_enableSourceProvider_34() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628, ___enableSourceProvider_34)); }
	inline bool get_enableSourceProvider_34() const { return ___enableSourceProvider_34; }
	inline bool* get_address_of_enableSourceProvider_34() { return &___enableSourceProvider_34; }
	inline void set_enableSourceProvider_34(bool value)
	{
		___enableSourceProvider_34 = value;
	}
};

struct BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628_StaticFields
{
public:
	// BoltRuntimeSettings BoltRuntimeSettings::_instance
	BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628_StaticFields, ____instance_4)); }
	inline BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * get__instance_4() const { return ____instance_4; }
	inline BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>>
struct  Func_1_tFD74922F0A8F24956FD949F251D28928107B559C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Int32>
struct  Func_1_t30631A63BE46FE93700939B764202D360449FE30  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.String>
struct  Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct  Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Int32>
struct  Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// BoltInternal.GlobalEventListenerBase
struct  GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// BoltInternal.GlobalEventListenerBase BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.prev>k__BackingField
	GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5;
	// BoltInternal.GlobalEventListenerBase BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.next>k__BackingField
	GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6;
	// System.Object BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5)); }
	inline GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5; }
	inline GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6)); }
	inline GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6; }
	inline GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7), (void*)value);
	}
};

struct GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7_StaticFields
{
public:
	// BoltDoubleList`1<BoltInternal.GlobalEventListenerBase> BoltInternal.GlobalEventListenerBase::callbacks
	BoltDoubleList_1_tC2F4AE89C042B4AB98059B541B53E763FAF4A43B * ___callbacks_4;

public:
	inline static int32_t get_offset_of_callbacks_4() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7_StaticFields, ___callbacks_4)); }
	inline BoltDoubleList_1_tC2F4AE89C042B4AB98059B541B53E763FAF4A43B * get_callbacks_4() const { return ___callbacks_4; }
	inline BoltDoubleList_1_tC2F4AE89C042B4AB98059B541B53E763FAF4A43B ** get_address_of_callbacks_4() { return &___callbacks_4; }
	inline void set_callbacks_4(BoltDoubleList_1_tC2F4AE89C042B4AB98059B541B53E763FAF4A43B * value)
	{
		___callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbacks_4), (void*)value);
	}
};


// BoltDebugStart
struct  BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86  : public GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7
{
public:
	// UdpKit.UdpEndPoint BoltDebugStart::_serverEndPoint
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ____serverEndPoint_8;
	// UdpKit.UdpEndPoint BoltDebugStart::_clientEndPoint
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ____clientEndPoint_9;

public:
	inline static int32_t get_offset_of__serverEndPoint_8() { return static_cast<int32_t>(offsetof(BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86, ____serverEndPoint_8)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get__serverEndPoint_8() const { return ____serverEndPoint_8; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of__serverEndPoint_8() { return &____serverEndPoint_8; }
	inline void set__serverEndPoint_8(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		____serverEndPoint_8 = value;
	}

	inline static int32_t get_offset_of__clientEndPoint_9() { return static_cast<int32_t>(offsetof(BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86, ____clientEndPoint_9)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get__clientEndPoint_9() const { return ____clientEndPoint_9; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of__clientEndPoint_9() { return &____clientEndPoint_9; }
	inline void set__clientEndPoint_9(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		____clientEndPoint_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// BoltGlobalBehaviourAttribute[]
struct BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * m_Items[1];

public:
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_gshared (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7A7EA7341B46137CA287CD5C36FF5AD71CC39801_gshared (Func_2_tECD2DCDCBCA3C03DCE9526E91198A3C8DF37C42D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m54408ED2EFA4F730EF559B45507C0009D7EC7917_gshared (Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<STuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1DE444396976E291987DFF91018AEFA1E266DD8D_gshared (List_1_tF863EDCEBF51DC4EC0D81AC99DF181BFA5BEAED3 * __this, const RuntimeMethod* method);
// System.Void STuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void STuple_2__ctor_m7B45B2B02D53243E7E625094495F67003FC02243_gshared (STuple_2_t2FDC1B8684104767786766593BB887A7BC68A6A9 * __this, RuntimeObject * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<STuple`2<System.Object,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF1B6C13925D052E314864CC42B55DA66BE6E6860_gshared (List_1_tF863EDCEBF51DC4EC0D81AC99DF181BFA5BEAED3 * __this, STuple_2_t2FDC1B8684104767786766593BB887A7BC68A6A9  ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared (RuntimeObject* ___source0, Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_m94A2986332967C3E28F8779BF4BBB6E85B5F4A0A_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void BoltInternal.UnityDebugDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer__ctor_m409BFF8C495FC4E252DEEDDAB8E4F9E2E4648330 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527 (Func_1_t30631A63BE46FE93700939B764202D360449FE30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t30631A63BE46FE93700939B764202D360449FE30 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Int32,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9C788DB2885FE34292855EDB77760B59D76F60E1 (Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m7A7EA7341B46137CA287CD5C36FF5AD71CC39801_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.String,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFAFC6E3347557F467438BF7CFF053A652BDF792 (Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m54408ED2EFA4F730EF559B45507C0009D7EC7917_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`1<System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m53BBB5F869D8537BB157FD7F6ACFBE78A9461111 (Func_1_tFD74922F0A8F24956FD949F251D28928107B559C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tFD74922F0A8F24956FD949F251D28928107B559C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Int32 BoltInternal.BoltScenes_Internal::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltScenes_Internal_GetSceneIndex_m17A301CA1BA0D2D62EC3946AF789B34BDA12DC6B (String_t* ___name0, const RuntimeMethod* method);
// System.String BoltInternal.BoltScenes_Internal::GetSceneName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoltScenes_Internal_GetSceneName_m7BC3E9EF628B3455CFCD38AA7A52A0A68E9A589B (int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>::.ctor()
inline void List_1__ctor_m03E8DB2774470793D846651808B4586257BD752F (List_1_t2E76EC245B477489975A4862D811451939F719B7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E76EC245B477489975A4862D811451939F719B7 *, const RuntimeMethod*))List_1__ctor_m1DE444396976E291987DFF91018AEFA1E266DD8D_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.String> BoltAssemblies::get_AllAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltAssemblies_get_AllAssemblies_mD7B88783AEB8715499BCA8AE6FC2E6F3FA6D7D87 (const RuntimeMethod* method);
// System.Reflection.Assembly Bolt.BoltDynamicData::GetAssemblyByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * BoltDynamicData_GetAssemblyByName_mDDC6A055D9F4C538D6C76BA251172AE0A467A75A (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m4B6A318CE4104781ABF30A2BBBCCCFB0FE342316 (Assembly_t * ___left0, Assembly_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void STuple`2<BoltGlobalBehaviourAttribute,System.Type>::.ctor(!0,!1)
inline void STuple_2__ctor_m1CFCE7768051A55AD11289ECA7E43FDC49CCBC5A (STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF * __this, BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * ___a0, Type_t * ___b1, const RuntimeMethod* method)
{
	((  void (*) (STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF *, BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 *, Type_t *, const RuntimeMethod*))STuple_2__ctor_m7B45B2B02D53243E7E625094495F67003FC02243_gshared)(__this, ___a0, ___b1, method);
}
// System.Void System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>>::Add(!0)
inline void List_1_Add_m3528534C44759010D7CF0BEBD2051F90A48F2036 (List_1_t2E76EC245B477489975A4862D811451939F719B7 * __this, STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E76EC245B477489975A4862D811451939F719B7 *, STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF , const RuntimeMethod*))List_1_Add_mF1B6C13925D052E314864CC42B55DA66BE6E6860_gshared)(__this, ___item0, method);
}
// System.Void BoltLog::Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Exception_mC518E7BB315605408BCDAA0394C137DE173639DE (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Bolt.BoltDynamicData/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4B51C528E6F0B2BD6709065B032A0954C80C25C8 (U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * __this, const RuntimeMethod* method);
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.Assembly,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m985D8216A1066DFBE8A01BDEBEFAC7B5D16AE79A (Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Reflection.Assembly>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline Assembly_t * Enumerable_SingleOrDefault_TisAssembly_t_mFB3B75A18D6C8C2DDAB33F0FEC047064A1F9CCE5 (RuntimeObject* ___source0, Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 * ___predicate1, const RuntimeMethod* method)
{
	return ((  Assembly_t * (*) (RuntimeObject*, Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 *, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Out()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method);
// System.Boolean Bolt.ConsoleWriter/PInvoke::AttachConsole(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AttachConsole_mD75311DAE8B25C3A6A6E16258B92A2CD1B7F1141 (uint32_t ___dwProcessId0, const RuntimeMethod* method);
// System.Boolean Bolt.ConsoleWriter/PInvoke::AllocConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AllocConsole_m7EEF92B6433E84F532BCCEB5D97584286F25F3FA (const RuntimeMethod* method);
// System.IntPtr Bolt.ConsoleWriter/PInvoke::GetStdHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PInvoke_GetStdHandle_mAF7CA64C1B4FEC960534F3E69928AA2B097F08ED (int32_t ___nStdHandle0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.IntPtr,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m0A8313289164771CCD511157D77565E878CA7124 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, intptr_t ___handle0, int32_t ___access1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_mFD481E7A16D86AF74F41C928C7828B19EFEF9F5C (StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Console::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_SetOut_mAC2420DF73A65A087FAA07AB367F3B54785C30BF (TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___newOut0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Bolt.ConsoleWriter/PInvoke::FreeConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_FreeConsole_mA6BB2EB1A617C087C70EF49F74E4BD754F8EB51B (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC (int32_t ___value0, const RuntimeMethod* method);
// BoltRuntimeSettings BoltRuntimeSettings::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * BoltRuntimeSettings_get_instance_m47B754B722FEF904F96BCDCD72892FC30950FF2D (const RuntimeMethod* method);
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___address0, uint16_t ___port1, const RuntimeMethod* method);
// BoltConfig BoltRuntimeSettings::GetConfigCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * BoltRuntimeSettings_GetConfigCopy_mD821AF8586A18C9891D8E24161B637FB0C67FFB8 (BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean BoltDebugStartSettings::get_DebugStartIsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA (const RuntimeMethod* method);
// System.Void BoltLog::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Warn_m8B5CD2520D8F1530D813EAE9E06A00CCC5359232 (String_t* ___message0, const RuntimeMethod* method);
// System.Void BoltLauncher::StartServer(UdpKit.UdpEndPoint,BoltConfig,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartServer_m1021D0496D277489FED3C150147FC7AAEBF1E7B6 (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint0, BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * ___config1, String_t* ___scene2, const RuntimeMethod* method);
// System.Boolean BoltDebugStartSettings::get_DebugStartIsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C (const RuntimeMethod* method);
// System.Void BoltLauncher::StartClient(UdpKit.UdpEndPoint,BoltConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartClient_mD43A6709CAF1C33363CD88592919EC14B21A7065 (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint0, BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * ___config1, const RuntimeMethod* method);
// System.Boolean BoltDebugStartSettings::get_DebugStartIsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsSinglePlayer_m4EC810C68307ED87E8B03272FDFB454C5C3E8AF4 (const RuntimeMethod* method);
// System.Void BoltLauncher::StartSinglePlayer(BoltConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartSinglePlayer_m6C737CCA825FA0061AE100EF54FF79869551E36B (BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * ___config0, const RuntimeMethod* method);
// System.Void BoltDebugStartSettings::PositionWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings_PositionWindow_mE437C8A9646874A5441A032EF0A41669C67E1623 (const RuntimeMethod* method);
// System.Void BoltLog::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean BoltNetwork::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsServer_mB3AF06F64BC502B5CBBB1B06F6C6BC0AC82B5B2D (const RuntimeMethod* method);
// System.Boolean BoltNetwork::get_IsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsSinglePlayer_mC0D1747C93998B72427D8BABA932CAD54B4D3DC9 (const RuntimeMethod* method);
// System.Void BoltNetwork::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_LoadScene_m5AE92523B995E77F8E72DEAF5C5A866A91035673 (String_t* ___scene0, const RuntimeMethod* method);
// System.Boolean BoltNetwork::get_IsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsClient_m2332B4488E5A7190D6999BD835F399A05AF6DD7A (const RuntimeMethod* method);
// System.Collections.IEnumerator BoltDebugStart::DelayClientConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltDebugStart_DelayClientConnect_m13A92E86679762C8A39FC5F47025FE8539B1470B (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void BoltDebugStart/<DelayClientConnect>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__7__ctor_m75A46DE7EC80067E513D1956917F8CAE1A12A535 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void BoltInternal.GlobalEventListenerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventListenerBase__ctor_m521FC404755FE1141FB86C7D7462EEAF9C6300EF (GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void BoltNetwork::Connect(System.UInt16,Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_Connect_mCEACF361BB68608385A66C5A8BF934448672C9F7 (uint16_t ___port0, RuntimeObject* ___token1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347 (const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_m94A2986332967C3E28F8779BF4BBB6E85B5F4A0A_gshared)(___source0, ___value1, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1 * Process_GetCurrentProcess_mF8C1CE43DB601735EFB3FB0E0F16D76B01EC897A (const RuntimeMethod* method);
// System.Int32 System.Diagnostics.Process::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Process_get_Id_m3130DCBA499817972DE9AE67C048F203BC795F0D (Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Int32 BoltDebugStartSettings::GetWindowThreadProcessId(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetWindowThreadProcessId_m6240F435903F206ECCAA305FBF4E0FBC8DCC5477 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___handle0, int32_t* ___processId1, const RuntimeMethod* method);
// System.Void BoltDebugStartSettings/EnumWindowsProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumWindowsProc__ctor_m0436A475FE7EA0B4AEE444301300B1B6974F3626 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean BoltDebugStartSettings::EnumWindows(BoltDebugStartSettings/EnumWindowsProc,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_EnumWindows_m1D7DAB9286DBC088C5BE9B54EADB40F05E429096 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * ___callback0, intptr_t ___extraData1, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.HandleRef::get_Wrapper()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * HandleRef_get_Wrapper_m2F91CE78735031BA38DADFCC7A7AC93DED2B3AF4_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Int32 BoltDebugStartSettings::GetSystemMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetSystemMetrics_m89FDC2DD160F31F6902F602DE0DCB537C6647BB7 (int32_t ___index0, const RuntimeMethod* method);
// System.Int32 BoltDebugStartSettings::get_WindowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_get_WindowIndex_m4CF2B150AC861F2CAB2517A32812306BD44EB7CA (const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean BoltDebugStartSettings::SetWindowPos(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_SetWindowPos_m65E386C4739BD1290E70B692F85B4F0E2828227B (intptr_t ___hWnd0, intptr_t ___hWndInsertAfter1, int32_t ___X2, int32_t ___Y3, int32_t ___cx4, int32_t ___cy5, int32_t ___uFlags6, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Bolt.DebugInfo::Label(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_Label_m20F9BC5D23E474CBC4C0C93BB7E2D7F3CBB1B018 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Bolt.DebugInfo::LabelBold(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_LabelBold_m91EAABE7C4806FB49434C90D3911878DC50C3C13 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Bolt.DebugInfo::LabelField(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugInfo_LabelField_m57D52786026E63FF5DE16DC1D65523443666884C (RuntimeObject * ___label0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E (float ___pixels0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
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
// System.Void Bolt.BoltDynamicData::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDynamicData_Setup_m696CBBFA0B8039E1B9266A9876C301E9DE9E9560 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDynamicData_Setup_m696CBBFA0B8039E1B9266A9876C301E9DE9E9560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoltNetworkInternal.DebugDrawer = new BoltInternal.UnityDebugDrawer();
		UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * L_0 = (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB *)il2cpp_codegen_object_new(UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB_il2cpp_TypeInfo_var);
		UnityDebugDrawer__ctor_m409BFF8C495FC4E252DEEDDAB8E4F9E2E4648330(L_0, /*hidden argument*/NULL);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_DebugDrawer_3(L_0);
		// BoltNetworkInternal.UsingUnityPro = false;
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_UsingUnityPro_0((bool)0);
		// BoltNetworkInternal.GetActiveSceneIndex = GetActiveSceneIndex;
		Func_1_t30631A63BE46FE93700939B764202D360449FE30 * L_1 = (Func_1_t30631A63BE46FE93700939B764202D360449FE30 *)il2cpp_codegen_object_new(Func_1_t30631A63BE46FE93700939B764202D360449FE30_il2cpp_TypeInfo_var);
		Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527(L_1, NULL, (intptr_t)((intptr_t)BoltDynamicData_GetActiveSceneIndex_m9C2DD63447144F6D668A261422D9697AE5D66C84_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m27E13FE1436758E3083686F1DC59AABC45F50527_RuntimeMethod_var);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_GetActiveSceneIndex_6(L_1);
		// BoltNetworkInternal.GetSceneName = GetSceneName;
		Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 * L_2 = (Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39 *)il2cpp_codegen_object_new(Func_2_t35641016316BA95C7E0ECC18714A293404AB7C39_il2cpp_TypeInfo_var);
		Func_2__ctor_m9C788DB2885FE34292855EDB77760B59D76F60E1(L_2, NULL, (intptr_t)((intptr_t)BoltDynamicData_GetSceneName_m99FF282E0C2CD190D741F987DC0AD76988F2295B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9C788DB2885FE34292855EDB77760B59D76F60E1_RuntimeMethod_var);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_GetSceneName_4(L_2);
		// BoltNetworkInternal.GetSceneIndex = GetSceneIndex;
		Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 * L_3 = (Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6 *)il2cpp_codegen_object_new(Func_2_tA474DD65084B6057ACD30320BDB00C6A728BB7D6_il2cpp_TypeInfo_var);
		Func_2__ctor_mAFAFC6E3347557F467438BF7CFF053A652BDF792(L_3, NULL, (intptr_t)((intptr_t)BoltDynamicData_GetSceneIndex_mBD9DE6A8C216E2AEC9605C11E79566B976DF2216_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mAFAFC6E3347557F467438BF7CFF053A652BDF792_RuntimeMethod_var);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_GetSceneIndex_5(L_3);
		// BoltNetworkInternal.GetGlobalBehaviourTypes = GetGlobalBehaviourTypes;
		Func_1_tFD74922F0A8F24956FD949F251D28928107B559C * L_4 = (Func_1_tFD74922F0A8F24956FD949F251D28928107B559C *)il2cpp_codegen_object_new(Func_1_tFD74922F0A8F24956FD949F251D28928107B559C_il2cpp_TypeInfo_var);
		Func_1__ctor_m53BBB5F869D8537BB157FD7F6ACFBE78A9461111(L_4, NULL, (intptr_t)((intptr_t)BoltDynamicData_GetGlobalBehaviourTypes_mF403E3AEDCC58626D2AC45A20D0FF22B84C9408B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m53BBB5F869D8537BB157FD7F6ACFBE78A9461111_RuntimeMethod_var);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_GetGlobalBehaviourTypes_7(L_4);
		// BoltNetworkInternal.EnvironmentSetup = BoltInternal.BoltNetworkInternal_User.EnvironmentSetup;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, NULL, (intptr_t)((intptr_t)BoltNetworkInternal_User_EnvironmentSetup_m48A93821744981757F25BC124AF073F0D52D5613_RuntimeMethod_var), /*hidden argument*/NULL);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_EnvironmentSetup_1(L_5);
		// BoltNetworkInternal.EnvironmentReset = BoltInternal.BoltNetworkInternal_User.EnvironmentReset;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, NULL, (intptr_t)((intptr_t)BoltNetworkInternal_User_EnvironmentReset_m39C273C8638323D4EF247067CFBAC1A4A166EE58_RuntimeMethod_var), /*hidden argument*/NULL);
		((BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_StaticFields*)il2cpp_codegen_static_fields_for(BoltNetworkInternal_tC4510718A123098869463A77BE509389FBD1F626_il2cpp_TypeInfo_var))->set_EnvironmentReset_2(L_6);
		// UnitySettings.IsBuildIL2CPP = true;
		((UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields*)il2cpp_codegen_static_fields_for(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_il2cpp_TypeInfo_var))->set_IsBuildIL2CPP_2((bool)1);
		// UnitySettings.CurrentPlatform = Application.platform;
		int32_t L_7 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		((UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_StaticFields*)il2cpp_codegen_static_fields_for(UnitySettings_tB597B424FD3B894D2858C182398A476602FA9653_il2cpp_TypeInfo_var))->set_CurrentPlatform_4(L_7);
		// }
		return;
	}
}
// System.Int32 Bolt.BoltDynamicData::GetActiveSceneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDynamicData_GetActiveSceneIndex_m9C2DD63447144F6D668A261422D9697AE5D66C84 (const RuntimeMethod* method)
{
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return SceneManager.GetActiveScene().buildIndex;
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_0 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_2 = V_1;
		return L_2;
	}
}
// System.Int32 Bolt.BoltDynamicData::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDynamicData_GetSceneIndex_mBD9DE6A8C216E2AEC9605C11E79566B976DF2216 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDynamicData_GetSceneIndex_mBD9DE6A8C216E2AEC9605C11E79566B976DF2216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// return BoltInternal.BoltScenes_Internal.GetSceneIndex(name);
		String_t* L_0 = ___name0;
		int32_t L_1 = BoltScenes_Internal_GetSceneIndex_m17A301CA1BA0D2D62EC3946AF789B34BDA12DC6B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Object)
		// catch
		// return -1;
		V_0 = (-1);
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.String Bolt.BoltDynamicData::GetSceneName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoltDynamicData_GetSceneName_m99FF282E0C2CD190D741F987DC0AD76988F2295B (int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDynamicData_GetSceneName_m99FF282E0C2CD190D741F987DC0AD76988F2295B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// return BoltInternal.BoltScenes_Internal.GetSceneName(index);
		int32_t L_0 = ___index0;
		String_t* L_1 = BoltScenes_Internal_GetSceneName_m7BC3E9EF628B3455CFCD38AA7A52A0A68E9A589B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Object)
		// catch
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<STuple`2<BoltGlobalBehaviourAttribute,System.Type>> Bolt.BoltDynamicData::GetGlobalBehaviourTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2E76EC245B477489975A4862D811451939F719B7 * BoltDynamicData_GetGlobalBehaviourTypes_mF403E3AEDCC58626D2AC45A20D0FF22B84C9408B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDynamicData_GetGlobalBehaviourTypes_mF403E3AEDCC58626D2AC45A20D0FF22B84C9408B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2E76EC245B477489975A4862D811451939F719B7 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Assembly_t * V_2 = NULL;
	bool V_3 = false;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_4 = NULL;
	int32_t V_5 = 0;
	Type_t * V_6 = NULL;
	bool V_7 = false;
	BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Exception_t * V_11 = NULL;
	List_1_t2E76EC245B477489975A4862D811451939F719B7 * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<STuple<BoltGlobalBehaviourAttribute, Type>> result = new List<STuple<BoltGlobalBehaviourAttribute, Type>>();
		List_1_t2E76EC245B477489975A4862D811451939F719B7 * L_0 = (List_1_t2E76EC245B477489975A4862D811451939F719B7 *)il2cpp_codegen_object_new(List_1_t2E76EC245B477489975A4862D811451939F719B7_il2cpp_TypeInfo_var);
		List_1__ctor_m03E8DB2774470793D846651808B4586257BD752F(L_0, /*hidden argument*/List_1__ctor_m03E8DB2774470793D846651808B4586257BD752F_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			// var asmIter = BoltAssemblies.AllAssemblies;
			IL2CPP_RUNTIME_CLASS_INIT(BoltAssemblies_t3DB972C69056DC2A31108BE9F583B42639EDFBFA_il2cpp_TypeInfo_var);
			RuntimeObject* L_1 = BoltAssemblies_get_AllAssemblies_mD7B88783AEB8715499BCA8AE6FC2E6F3FA6D7D87(/*hidden argument*/NULL);
			V_1 = L_1;
			goto IL_00a7;
		}

IL_0013:
		{
			// var asm = GetAssemblyByName(asmIter.Current);
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_tE14471B9BA58E22CC2B0F85AA521BEBB7F04E004_il2cpp_TypeInfo_var, L_2);
			Assembly_t * L_4 = BoltDynamicData_GetAssemblyByName_mDDC6A055D9F4C538D6C76BA251172AE0A467A75A(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			// if (asm == null) { continue; }
			Assembly_t * L_5 = V_2;
			bool L_6 = Assembly_op_Equality_m4B6A318CE4104781ABF30A2BBBCCCFB0FE342316(L_5, (Assembly_t *)NULL, /*hidden argument*/NULL);
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_002e;
			}
		}

IL_002b:
		{
			// if (asm == null) { continue; }
			goto IL_00a7;
		}

IL_002e:
		{
			// foreach (Type type in asm.GetTypes())
			Assembly_t * L_8 = V_2;
			NullCheck(L_8);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(17 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_8);
			V_4 = L_9;
			V_5 = 0;
			goto IL_009e;
		}

IL_003c:
		{
			// foreach (Type type in asm.GetTypes())
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = V_4;
			int32_t L_11 = V_5;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			Type_t * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_6 = L_13;
			// if (typeof(MonoBehaviour).IsAssignableFrom(type))
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_14, /*hidden argument*/NULL);
			Type_t * L_16 = V_6;
			NullCheck(L_15);
			bool L_17 = VirtFuncInvoker1< bool, Type_t * >::Invoke(114 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
			V_7 = L_17;
			bool L_18 = V_7;
			if (!L_18)
			{
				goto IL_0097;
			}
		}

IL_005b:
		{
			// var attrs = (BoltGlobalBehaviourAttribute[])type.GetCustomAttributes(typeof(BoltGlobalBehaviourAttribute), false);
			Type_t * L_19 = V_6;
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
			NullCheck(L_19);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_19, L_21, (bool)0);
			V_8 = ((BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F*)Castclass((RuntimeObject*)L_22, BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F_il2cpp_TypeInfo_var));
			// if (attrs.Length == 1)
			BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F* L_23 = V_8;
			NullCheck(L_23);
			V_9 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))) == ((int32_t)1))? 1 : 0);
			bool L_24 = V_9;
			if (!L_24)
			{
				goto IL_0096;
			}
		}

IL_0082:
		{
			// result.Add(new STuple<BoltGlobalBehaviourAttribute, Type>(attrs[0], type));
			List_1_t2E76EC245B477489975A4862D811451939F719B7 * L_25 = V_0;
			BoltGlobalBehaviourAttributeU5BU5D_tFD116B986193369CA487870EC0E7FC1EC9680B5F* L_26 = V_8;
			NullCheck(L_26);
			int32_t L_27 = 0;
			BoltGlobalBehaviourAttribute_t1320B6C04236E73686DC2C3B8F31529C0FD8C8E2 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			Type_t * L_29 = V_6;
			STuple_2_t3A2AECDBF0D8FBE0CA427BB4D73ABACCC93CE2BF  L_30;
			memset((&L_30), 0, sizeof(L_30));
			STuple_2__ctor_m1CFCE7768051A55AD11289ECA7E43FDC49CCBC5A((&L_30), L_28, L_29, /*hidden argument*/STuple_2__ctor_m1CFCE7768051A55AD11289ECA7E43FDC49CCBC5A_RuntimeMethod_var);
			NullCheck(L_25);
			List_1_Add_m3528534C44759010D7CF0BEBD2051F90A48F2036(L_25, L_30, /*hidden argument*/List_1_Add_m3528534C44759010D7CF0BEBD2051F90A48F2036_RuntimeMethod_var);
		}

IL_0096:
		{
		}

IL_0097:
		{
			int32_t L_31 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		}

IL_009e:
		{
			// foreach (Type type in asm.GetTypes())
			int32_t L_32 = V_5;
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_33 = V_4;
			NullCheck(L_33);
			if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))))
			{
				goto IL_003c;
			}
		}

IL_00a6:
		{
		}

IL_00a7:
		{
			// while (asmIter.MoveNext())
			RuntimeObject* L_34 = V_1;
			NullCheck(L_34);
			bool L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_34);
			V_10 = L_35;
			bool L_36 = V_10;
			if (L_36)
			{
				goto IL_0013;
			}
		}

IL_00b6:
		{
			goto IL_00c7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b9;
		throw e;
	}

CATCH_00b9:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_11 = ((Exception_t *)__exception_local);
		// BoltLog.Exception(e);
		Exception_t * L_37 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Exception_mC518E7BB315605408BCDAA0394C137DE173639DE(L_37, /*hidden argument*/NULL);
		goto IL_00c7;
	} // end catch (depth: 1)

IL_00c7:
	{
		// return result;
		List_1_t2E76EC245B477489975A4862D811451939F719B7 * L_38 = V_0;
		V_12 = L_38;
		goto IL_00cc;
	}

IL_00cc:
	{
		// }
		List_1_t2E76EC245B477489975A4862D811451939F719B7 * L_39 = V_12;
		return L_39;
	}
}
// System.Reflection.Assembly Bolt.BoltDynamicData::GetAssemblyByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * BoltDynamicData_GetAssemblyByName_mDDC6A055D9F4C538D6C76BA251172AE0A467A75A (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDynamicData_GetAssemblyByName_mDDC6A055D9F4C538D6C76BA251172AE0A467A75A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * L_0 = (U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m4B51C528E6F0B2BD6709065B032A0954C80C25C8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->set_name_0(L_2);
		// return AppDomain.CurrentDomain.GetAssemblies().SingleOrDefault(assembly => assembly.GetName().Name == name);
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_3 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		NullCheck(L_3);
		AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_4 = AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23(L_3, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * L_5 = V_0;
		Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 * L_6 = (Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752 *)il2cpp_codegen_object_new(Func_2_tE535EFC317DD4D1C99ADD32444DD668044EBE752_il2cpp_TypeInfo_var);
		Func_2__ctor_m985D8216A1066DFBE8A01BDEBEFAC7B5D16AE79A(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CGetAssemblyByNameU3Eb__0_m4B4D2CBDEA7A653D0AB43AFDF4EBB4529D30ED87_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m985D8216A1066DFBE8A01BDEBEFAC7B5D16AE79A_RuntimeMethod_var);
		Assembly_t * L_7 = Enumerable_SingleOrDefault_TisAssembly_t_mFB3B75A18D6C8C2DDAB33F0FEC047064A1F9CCE5((RuntimeObject*)(RuntimeObject*)L_4, L_6, /*hidden argument*/Enumerable_SingleOrDefault_TisAssembly_t_mFB3B75A18D6C8C2DDAB33F0FEC047064A1F9CCE5_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		Assembly_t * L_8 = V_1;
		return L_8;
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
// System.Void Bolt.BoltDynamicData_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m4B51C528E6F0B2BD6709065B032A0954C80C25C8 (U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Bolt.BoltDynamicData_<>c__DisplayClass5_0::<GetAssemblyByName>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CGetAssemblyByNameU3Eb__0_m4B4D2CBDEA7A653D0AB43AFDF4EBB4529D30ED87 (U3CU3Ec__DisplayClass5_0_tA3259F9A206B2575DE7F83024A4E15B27BC61E98 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	{
		// return AppDomain.CurrentDomain.GetAssemblies().SingleOrDefault(assembly => assembly.GetName().Name == name);
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_1 = VirtFuncInvoker0< AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * >::Invoke(21 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_name_0();
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Bolt.ConsoleWriter::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleWriter_Open_m2DC92A05EE3839724BB14D1BA3162225261002EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConsoleWriter_Open_m2DC92A05EE3839724BB14D1BA3162225261002EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_4 = NULL;
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * V_5 = NULL;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (realOut == null)
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_il2cpp_TypeInfo_var))->get_realOut_0();
		V_1 = (bool)((((RuntimeObject*)(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// realOut = Console.Out;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline(/*hidden argument*/NULL);
		((ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_il2cpp_TypeInfo_var))->set_realOut_0(L_2);
	}

IL_0019:
	{
		// var hasConsole = PInvoke.AttachConsole(0x0ffffffff);
		bool L_3 = PInvoke_AttachConsole_mD75311DAE8B25C3A6A6E16258B92A2CD1B7F1141((-1), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (hasConsole == false)
		bool L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// PInvoke.AllocConsole();
		PInvoke_AllocConsole_m7EEF92B6433E84F532BCCEB5D97584286F25F3FA(/*hidden argument*/NULL);
	}

IL_0030:
	{
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		// var outHandlePtr = PInvoke.GetStdHandle(PInvoke.STD_OUTPUT_HANDLE);
		intptr_t L_6 = PInvoke_GetStdHandle_mAF7CA64C1B4FEC960534F3E69928AA2B097F08ED(((int32_t)-11), /*hidden argument*/NULL);
		V_3 = (intptr_t)L_6;
		// var fileStream = new FileStream(outHandlePtr, FileAccess.Write);
		intptr_t L_7 = V_3;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_8 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m0A8313289164771CCD511157D77565E878CA7124(L_8, (intptr_t)L_7, 2, /*hidden argument*/NULL);
		V_4 = L_8;
		// var stdOut = new StreamWriter(fileStream, Encoding.ASCII);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_9 = V_4;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_10 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_11 = (StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E *)il2cpp_codegen_object_new(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mFD481E7A16D86AF74F41C928C7828B19EFEF9F5C(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		// stdOut.AutoFlush = true;
		StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker1< bool >::Invoke(44 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_12, (bool)1);
		// Console.SetOut(stdOut);
		StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_SetOut_mAC2420DF73A65A087FAA07AB367F3B54785C30BF(L_13, /*hidden argument*/NULL);
		goto IL_0073;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_6 = ((Exception_t *)__exception_local);
		// Debug.Log(e);
		Exception_t * L_14 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_14, /*hidden argument*/NULL);
		goto IL_0073;
	} // end catch (depth: 1)

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Bolt.ConsoleWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleWriter_Close_m0137AB650266EC7FACF47FA0876C64FF962B4A58 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConsoleWriter_Close_m0137AB650266EC7FACF47FA0876C64FF962B4A58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PInvoke.FreeConsole();
		PInvoke_FreeConsole_mA6BB2EB1A617C087C70EF49F74E4BD754F8EB51B(/*hidden argument*/NULL);
		// Console.SetOut(realOut);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_il2cpp_TypeInfo_var))->get_realOut_0();
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		Console_SetOut_mAC2420DF73A65A087FAA07AB367F3B54785C30BF(L_0, /*hidden argument*/NULL);
		// realOut = null;
		((ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_StaticFields*)il2cpp_codegen_static_fields_for(ConsoleWriter_t396543FB3A3746C5E1468C9682023AB1B14A2E14_il2cpp_TypeInfo_var))->set_realOut_0((TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 *)NULL);
		// }
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AttachConsole(uint32_t);
#endif
// System.Boolean Bolt.ConsoleWriter_PInvoke::AttachConsole(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AttachConsole_mD75311DAE8B25C3A6A6E16258B92A2CD1B7F1141 (uint32_t ___dwProcessId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AttachConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AttachConsole)(___dwProcessId0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___dwProcessId0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AllocConsole();
#endif
// System.Boolean Bolt.ConsoleWriter_PInvoke::AllocConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_AllocConsole_m7EEF92B6433E84F532BCCEB5D97584286F25F3FA (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AllocConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AllocConsole)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeConsole();
#endif
// System.Boolean Bolt.ConsoleWriter_PInvoke::FreeConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_FreeConsole_mA6BB2EB1A617C087C70EF49F74E4BD754F8EB51B (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeConsole", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeConsole)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL GetStdHandle(int32_t);
#endif
// System.IntPtr Bolt.ConsoleWriter_PInvoke::GetStdHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PInvoke_GetStdHandle_mAF7CA64C1B4FEC960534F3E69928AA2B097F08ED (int32_t ___nStdHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_STDCALL, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetStdHandle)(___nStdHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___nStdHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetConsoleTitle(char*);
#endif
// System.Boolean Bolt.ConsoleWriter_PInvoke::SetConsoleTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PInvoke_SetConsoleTitle_m20929427FEBB68A9073DBD8557808438721EC201 (String_t* ___lpConsoleTitle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "SetConsoleTitle", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___lpConsoleTitle0' to native representation
	char* ____lpConsoleTitle0_marshaled = NULL;
	____lpConsoleTitle0_marshaled = il2cpp_codegen_marshal_string(___lpConsoleTitle0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetConsoleTitle)(____lpConsoleTitle0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____lpConsoleTitle0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___lpConsoleTitle0' native representation
	il2cpp_codegen_marshal_free(____lpConsoleTitle0_marshaled);
	____lpConsoleTitle0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoltDebugStart::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_Awake_m7034F9FA974D7F249065FD648E77B4DBDF185458 (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_Awake_m7034F9FA974D7F249065FD648E77B4DBDF185458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mC20C40E50BAB994B10DDAC0E3C26A851025337BC(((int32_t)60), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltDebugStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_Start_m6730F24EBCB064C4C429DDE81D14FABEEA11AFEC (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_Start_m6730F24EBCB064C4C429DDE81D14FABEEA11AFEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * V_0 = NULL;
	BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// BoltRuntimeSettings settings = BoltRuntimeSettings.instance;
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_0 = BoltRuntimeSettings_get_instance_m47B754B722FEF904F96BCDCD72892FC30950FF2D(/*hidden argument*/NULL);
		V_0 = L_0;
		// _serverEndPoint = new UdpEndPoint(UdpIPv4Address.Localhost, (ushort)settings.debugStartPort);
		IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_1 = ((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var))->get_Localhost_1();
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_debugStartPort_7();
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_4;
		memset((&L_4), 0, sizeof(L_4));
		UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B((&L_4), L_1, (uint16_t)(((int32_t)((uint16_t)L_3))), /*hidden argument*/NULL);
		__this->set__serverEndPoint_8(L_4);
		// _clientEndPoint = new UdpEndPoint(UdpIPv4Address.Localhost, 0);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_5 = ((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var))->get_Localhost_1();
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_6;
		memset((&L_6), 0, sizeof(L_6));
		UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B((&L_6), L_5, (uint16_t)0, /*hidden argument*/NULL);
		__this->set__clientEndPoint_9(L_6);
		// cfg = settings.GetConfigCopy();
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_7 = V_0;
		NullCheck(L_7);
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_8 = BoltRuntimeSettings_GetConfigCopy_mD821AF8586A18C9891D8E24161B637FB0C67FFB8(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// cfg.connectionTimeout = 60000000;
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_9 = V_1;
		NullCheck(L_9);
		L_9->set_connectionTimeout_27(((int32_t)60000000));
		// cfg.connectionRequestTimeout = 500;
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_connectionRequestTimeout_28(((int32_t)500));
		// cfg.connectionRequestAttempts = 1000;
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_connectionRequestAttempts_29(((int32_t)1000));
		// if (string.IsNullOrEmpty(settings.debugStartMapName) == false)
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_debugStartMapName_9();
		bool L_14 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_13, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00df;
		}
	}
	{
		// if (BoltDebugStartSettings.DebugStartIsServer)
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		bool L_16 = BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA(/*hidden argument*/NULL);
		V_3 = L_16;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// BoltLog.Warn("Starting as SERVER");
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Warn_m8B5CD2520D8F1530D813EAE9E06A00CCC5359232(_stringLiteralD47350E27C49BCD741BC1ACA53A250D6617EB4CF, /*hidden argument*/NULL);
		// BoltLauncher.StartServer(_serverEndPoint, cfg);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_18 = __this->get__serverEndPoint_8();
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_19 = V_1;
		BoltLauncher_StartServer_m1021D0496D277489FED3C150147FC7AAEBF1E7B6(L_18, L_19, (String_t*)NULL, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0090:
	{
		// else if (BoltDebugStartSettings.DebugStartIsClient)
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		bool L_20 = BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C(/*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00b7;
		}
	}
	{
		// BoltLog.Warn("Starting as CLIENT");
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Warn_m8B5CD2520D8F1530D813EAE9E06A00CCC5359232(_stringLiteralFA41624E8C8EB030FD37E9169C13B41571F27866, /*hidden argument*/NULL);
		// BoltLauncher.StartClient(_clientEndPoint, cfg);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_22 = __this->get__clientEndPoint_9();
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_23 = V_1;
		BoltLauncher_StartClient_mD43A6709CAF1C33363CD88592919EC14B21A7065(L_22, L_23, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_00b7:
	{
		// else if (BoltDebugStartSettings.DebugStartIsSinglePlayer)
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		bool L_24 = BoltDebugStartSettings_get_DebugStartIsSinglePlayer_m4EC810C68307ED87E8B03272FDFB454C5C3E8AF4(/*hidden argument*/NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d6;
		}
	}
	{
		// BoltLog.Warn("Starting as SINGLE PLAYER");
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Warn_m8B5CD2520D8F1530D813EAE9E06A00CCC5359232(_stringLiteral6AEC7D48396DF76A6BEE097C349EC003D51DD278, /*hidden argument*/NULL);
		// BoltLauncher.StartSinglePlayer(cfg);
		BoltConfig_t5D65C6D6D12311432AF3D7BF817B5152D7604507 * L_26 = V_1;
		BoltLauncher_StartSinglePlayer_m6C737CCA825FA0061AE100EF54FF79869551E36B(L_26, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// BoltDebugStartSettings.PositionWindow();
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		BoltDebugStartSettings_PositionWindow_mE437C8A9646874A5441A032EF0A41669C67E1623(/*hidden argument*/NULL);
		goto IL_00ec;
	}

IL_00df:
	{
		// BoltLog.Error("No map found to start from");
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralF26B41B7A524E1531D2318A5DEE3EA4FB8821639, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void BoltDebugStart::BoltStartFailed(UdpKit.UdpConnectionDisconnectReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_BoltStartFailed_mEBED49DADF900DB044E69233D890810F5BD3CA78 (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, int32_t ___disconnectReason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_BoltStartFailed_mEBED49DADF900DB044E69233D890810F5BD3CA78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BoltLog.Error("Failed to start debug mode");
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral175411E5A870BDA4F6ADFACA3432815B4ED61B40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltDebugStart::BoltStartDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_BoltStartDone_m4540AF71568F2D900D2DA93BBA9911C6DA12C518 (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_BoltStartDone_m4540AF71568F2D900D2DA93BBA9911C6DA12C518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (BoltNetwork.IsServer || BoltNetwork.IsSinglePlayer)
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var);
		bool L_0 = BoltNetwork_get_IsServer_mB3AF06F64BC502B5CBBB1B06F6C6BC0AC82B5B2D(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var);
		bool L_1 = BoltNetwork_get_IsSinglePlayer_mC0D1747C93998B72427D8BABA932CAD54B4D3DC9(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// BoltNetwork.LoadScene(BoltRuntimeSettings.instance.debugStartMapName);
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_3 = BoltRuntimeSettings_get_instance_m47B754B722FEF904F96BCDCD72892FC30950FF2D(/*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_debugStartMapName_9();
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var);
		BoltNetwork_LoadScene_m5AE92523B995E77F8E72DEAF5C5A866A91035673(L_4, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0028:
	{
		// else if (BoltNetwork.IsClient)
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var);
		bool L_5 = BoltNetwork_get_IsClient_m2332B4488E5A7190D6999BD835F399A05AF6DD7A(/*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// StartCoroutine(DelayClientConnect());
		RuntimeObject* L_7 = BoltDebugStart_DelayClientConnect_m13A92E86679762C8A39FC5F47025FE8539B1470B(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void BoltDebugStart::SceneLoadLocalDone(System.String,Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart_SceneLoadLocalDone_mDDB05AEC8D93F0E482EC49A3BA74D93420C31C6A (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, String_t* ___scene0, RuntimeObject* ___token1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_SceneLoadLocalDone_mDDB05AEC8D93F0E482EC49A3BA74D93420C31C6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BoltDebugStart::DelayClientConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoltDebugStart_DelayClientConnect_m13A92E86679762C8A39FC5F47025FE8539B1470B (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart_DelayClientConnect_m13A92E86679762C8A39FC5F47025FE8539B1470B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * L_0 = (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 *)il2cpp_codegen_object_new(U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1_il2cpp_TypeInfo_var);
		U3CDelayClientConnectU3Ed__7__ctor_m75A46DE7EC80067E513D1956917F8CAE1A12A535(L_0, 0, /*hidden argument*/NULL);
		U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BoltDebugStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStart__ctor_mCD30D3FB386812EA6C25229A7A16936F6322823F (BoltDebugStart_tF36D755C1DF1D1FC4E7C66D2CF0E33B70791FE86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStart__ctor_mCD30D3FB386812EA6C25229A7A16936F6322823F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GlobalEventListenerBase_t605F128C672839866938B15D43DE1D394AC56AA7_il2cpp_TypeInfo_var);
		GlobalEventListenerBase__ctor_m521FC404755FE1141FB86C7D7462EEAF9C6300EF(__this, /*hidden argument*/NULL);
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
// System.Void BoltDebugStart_<DelayClientConnect>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__7__ctor_m75A46DE7EC80067E513D1956917F8CAE1A12A535 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BoltDebugStart_<DelayClientConnect>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__7_System_IDisposable_Dispose_m3ADDC5A947AC1FFA36EED27B1EBD8282B3172056 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BoltDebugStart_<DelayClientConnect>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayClientConnectU3Ed__7_MoveNext_m430F54F6F406A8DAC9A7C5C86BA7DF62AE64377C (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayClientConnectU3Ed__7_MoveNext_m430F54F6F406A8DAC9A7C5C86BA7DF62AE64377C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_3 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_3, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// BoltNetwork.Connect((ushort)BoltRuntimeSettings.instance.debugStartPort);
		BoltRuntimeSettings_t8C39E2886BB03247441E6D79D9879A7DCF18C628 * L_4 = BoltRuntimeSettings_get_instance_m47B754B722FEF904F96BCDCD72892FC30950FF2D(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_debugStartPort_7();
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t6541D7121E11C2B3D7C83ECC7355137F85365A95_il2cpp_TypeInfo_var);
		BoltNetwork_Connect_mCEACF361BB68608385A66C5A8BF934448672C9F7((uint16_t)(((int32_t)((uint16_t)L_5))), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object BoltDebugStart_<DelayClientConnect>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayClientConnectU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7835A283F7979275EFB8D9A0B77E1123F5784418 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BoltDebugStart_<DelayClientConnect>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_Reset_mD6167118E5EB8D1BAE8BB44CF2CA36FA1ACE6B29 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_Reset_mD6167118E5EB8D1BAE8BB44CF2CA36FA1ACE6B29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_Reset_mD6167118E5EB8D1BAE8BB44CF2CA36FA1ACE6B29_RuntimeMethod_var);
	}
}
// System.Object BoltDebugStart_<DelayClientConnect>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayClientConnectU3Ed__7_System_Collections_IEnumerator_get_Current_mDD9E7DDD31007AD51FBF24542BC5AA0B29832D42 (U3CDelayClientConnectU3Ed__7_t1DB6C0D549346EC3ED6BB85D48141C3105E3D2F1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Boolean BoltDebugStartSettings::get_DebugStartIsSinglePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsSinglePlayer_m4EC810C68307ED87E8B03272FDFB454C5C3E8AF4 (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return false; }
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return false; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean BoltDebugStartSettings::get_DebugStartIsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-server"); }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347(/*hidden argument*/NULL);
		bool L_1 = Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021((RuntimeObject*)(RuntimeObject*)L_0, _stringLiteralF7D9BAD6F8FA2F824A43F185425EBA084798B535, /*hidden argument*/Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-server"); }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean BoltDebugStartSettings::get_DebugStartIsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-client"); }
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347(/*hidden argument*/NULL);
		bool L_1 = Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021((RuntimeObject*)(RuntimeObject*)L_0, _stringLiteralCE15B2A647D87453EEFC7F19E066C5EBD868DFEC, /*hidden argument*/Enumerable_Contains_TisString_t_m9E74CBD4DB3CC1B772EA2DD4605DBFC95DE2D021_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// get { return Environment.GetCommandLineArgs().Contains("--bolt-debugstart-client"); }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 BoltDebugStartSettings::get_WindowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_get_WindowIndex_m4CF2B150AC861F2CAB2517A32812306BD44EB7CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings_get_WindowIndex_m4CF2B150AC861F2CAB2517A32812306BD44EB7CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = Environment_GetCommandLineArgs_mB085186484DC6D8E3CF71C2C92C60AF326833347(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000c:
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (arg.StartsWith("--bolt-window-index-"))
		String_t* L_5 = V_2;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_5, _stringLiteralF2E03DB23FD012A29DD9BA97CFF8DBE4C2742D9C, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// return int.Parse(arg.Replace("--bolt-window-index-", ""));
		String_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_8, _stringLiteralF2E03DB23FD012A29DD9BA97CFF8DBE4C2742D9C, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		int32_t L_10 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		goto IL_004a;
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003f:
	{
		// foreach (string arg in Environment.GetCommandLineArgs())
		int32_t L_12 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		V_4 = 0;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		int32_t L_14 = V_4;
		return L_14;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetWindowThreadProcessId(void*, int32_t*);
#endif
// System.Int32 BoltDebugStartSettings::GetWindowThreadProcessId(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetWindowThreadProcessId_m6240F435903F206ECCAA305FBF4E0FBC8DCC5477 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___handle0, int32_t* ___processId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetWindowThreadProcessId", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	____handle0_marshaled = (void*)___handle0.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetWindowThreadProcessId)(____handle0_marshaled, ___processId1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___processId1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL EnumWindows(Il2CppMethodPointer, intptr_t);
#endif
// System.Boolean BoltDebugStartSettings::EnumWindows(BoltDebugStartSettings_EnumWindowsProc,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_EnumWindows_m1D7DAB9286DBC088C5BE9B54EADB40F05E429096 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * ___callback0, intptr_t ___extraData1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "EnumWindows", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(EnumWindows)(____callback0_marshaled, ___extraData1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____callback0_marshaled, ___extraData1);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetSystemMetrics(int32_t);
#endif
// System.Int32 BoltDebugStartSettings::GetSystemMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltDebugStartSettings_GetSystemMetrics_m89FDC2DD160F31F6902F602DE0DCB537C6647BB7 (int32_t ___index0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "GetSystemMetrics", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetSystemMetrics)(___index0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___index0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetWindowPos(intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t);
#endif
// System.Boolean BoltDebugStartSettings::SetWindowPos(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_SetWindowPos_m65E386C4739BD1290E70B692F85B4F0E2828227B (intptr_t ___hWnd0, intptr_t ___hWndInsertAfter1, int32_t ___X2, int32_t ___Y3, int32_t ___cx4, int32_t ___cy5, int32_t ___uFlags6, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("user32.dll"), "SetWindowPos", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetWindowPos)(___hWnd0, ___hWndInsertAfter1, ___X2, ___Y3, ___cx4, ___cy5, ___uFlags6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hWnd0, ___hWndInsertAfter1, ___X2, ___Y3, ___cx4, ___cy5, ___uFlags6);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean BoltDebugStartSettings::Window(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltDebugStartSettings_Window_m193C42363E93D4B8DAE917E5B0DC3C44BC9E15A4 (intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings_Window_m193C42363E93D4B8DAE917E5B0DC3C44BC9E15A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// int pid = -1;
		V_0 = (-1);
		// int unity_pid = System.Diagnostics.Process.GetCurrentProcess().Id;
		IL2CPP_RUNTIME_CLASS_INIT(Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1_il2cpp_TypeInfo_var);
		Process_t7F28AE318E6CCF89716D05E78E2CBD669767D6A1 * L_0 = Process_GetCurrentProcess_mF8C1CE43DB601735EFB3FB0E0F16D76B01EC897A(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Process_get_Id_m3130DCBA499817972DE9AE67C048F203BC795F0D(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// GetWindowThreadProcessId(new HandleRef(handle, hWnd), out pid);
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->get_handle_0();
		intptr_t L_3 = ___hWnd0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_4), L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		BoltDebugStartSettings_GetWindowThreadProcessId_m6240F435903F206ECCAA305FBF4E0FBC8DCC5477(L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// if (pid == unity_pid)
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// unityHandle = new HandleRef(handle, hWnd);
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		RuntimeObject * L_8 = ((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->get_handle_0();
		intptr_t L_9 = ___hWnd0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_10;
		memset((&L_10), 0, sizeof(L_10));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_10), L_8, (intptr_t)L_9, /*hidden argument*/NULL);
		((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->set_unityHandle_1(L_10);
		// return false;
		V_3 = (bool)0;
		goto IL_0042;
	}

IL_003e:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void BoltDebugStartSettings::PositionWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings_PositionWindow_mE437C8A9646874A5441A032EF0A41669C67E1623 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings_PositionWindow_mE437C8A9646874A5441A032EF0A41669C67E1623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (DebugStartIsClient || DebugStartIsServer)
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		bool L_0 = BoltDebugStartSettings_get_DebugStartIsClient_m55E13000A355DA99DF758A4CE7E2DD22B967878C(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		bool L_1 = BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00eb;
		}
	}
	{
		// EnumWindows(Window, IntPtr.Zero);
		EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * L_3 = (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 *)il2cpp_codegen_object_new(EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98_il2cpp_TypeInfo_var);
		EnumWindowsProc__ctor_m0436A475FE7EA0B4AEE444301300B1B6974F3626(L_3, NULL, (intptr_t)((intptr_t)BoltDebugStartSettings_Window_m193C42363E93D4B8DAE917E5B0DC3C44BC9E15A4_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		BoltDebugStartSettings_EnumWindows_m1D7DAB9286DBC088C5BE9B54EADB40F05E429096(L_3, (intptr_t)(0), /*hidden argument*/NULL);
		// if (unityHandle.Wrapper != null)
		RuntimeObject * L_4 = HandleRef_get_Wrapper_m2F91CE78735031BA38DADFCC7A7AC93DED2B3AF4_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->get_address_of_unityHandle_1()), /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00ea;
		}
	}
	{
		// int ww = UnityEngine.Screen.width;
		int32_t L_6 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		V_2 = L_6;
		// int wh = UnityEngine.Screen.height;
		int32_t L_7 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		V_3 = L_7;
		// int x = 0;
		V_4 = 0;
		// int y = 0;
		V_5 = 0;
		// int w = GetSystemMetrics(0);
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		int32_t L_8 = BoltDebugStartSettings_GetSystemMetrics_m89FDC2DD160F31F6902F602DE0DCB537C6647BB7(0, /*hidden argument*/NULL);
		V_6 = L_8;
		// int h = GetSystemMetrics(1);
		int32_t L_9 = BoltDebugStartSettings_GetSystemMetrics_m89FDC2DD160F31F6902F602DE0DCB537C6647BB7(1, /*hidden argument*/NULL);
		V_7 = L_9;
		// if (DebugStartIsServer)
		bool L_10 = BoltDebugStartSettings_get_DebugStartIsServer_m224FD274B1952EB433224A9825B449FAE5D92CFA(/*hidden argument*/NULL);
		V_8 = L_10;
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		// x = w / 2 - (ww / 2);
		int32_t L_12 = V_6;
		int32_t L_13 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_12/(int32_t)2)), (int32_t)((int32_t)((int32_t)L_13/(int32_t)2))));
		// y = h / 2 - (wh / 2);
		int32_t L_14 = V_7;
		int32_t L_15 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_14/(int32_t)2)), (int32_t)((int32_t)((int32_t)L_15/(int32_t)2))));
		goto IL_00c9;
	}

IL_0089:
	{
		// switch (WindowIndex % 4)
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		int32_t L_16 = BoltDebugStartSettings_get_WindowIndex_m4CF2B150AC861F2CAB2517A32812306BD44EB7CA(/*hidden argument*/NULL);
		V_9 = ((int32_t)((int32_t)L_16%(int32_t)4));
		int32_t L_17 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00aa;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00ba;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_00aa:
	{
		// case 1: x = w - ww; break;
		int32_t L_18 = V_6;
		int32_t L_19 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19));
		// case 1: x = w - ww; break;
		goto IL_00c8;
	}

IL_00b2:
	{
		// case 2: y = h - wh; break;
		int32_t L_20 = V_7;
		int32_t L_21 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21));
		// case 2: y = h - wh; break;
		goto IL_00c8;
	}

IL_00ba:
	{
		// x = w - ww;
		int32_t L_22 = V_6;
		int32_t L_23 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
		// y = h - wh;
		int32_t L_24 = V_7;
		int32_t L_25 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25));
		// break;
		goto IL_00c8;
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		// SetWindowPos(unityHandle.Handle, HWND.Top, x, y, ww, wh, SWP.NOSIZE);
		IL2CPP_RUNTIME_CLASS_INIT(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var);
		intptr_t L_26 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)(((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->get_address_of_unityHandle_1()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var);
		intptr_t L_27 = ((HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var))->get_Top_2();
		int32_t L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = V_2;
		int32_t L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var);
		int32_t L_32 = ((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->get_NOSIZE_0();
		BoltDebugStartSettings_SetWindowPos_m65E386C4739BD1290E70B692F85B4F0E2828227B((intptr_t)L_26, (intptr_t)L_27, L_28, L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
	}

IL_00ea:
	{
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void BoltDebugStartSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings__ctor_m8C09572590F1B2E40A9A2A16F15AC86366364883 (BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoltDebugStartSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltDebugStartSettings__cctor_m277ACD89A578956EB06A4945D751278C208A45D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltDebugStartSettings__cctor_m277ACD89A578956EB06A4945D751278C208A45D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly object handle = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->set_handle_0(L_0);
		// static HandleRef unityHandle = new HandleRef();
		il2cpp_codegen_initobj((((BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_StaticFields*)il2cpp_codegen_static_fields_for(BoltDebugStartSettings_t655160C4D197EBB9A627C3E2A9C467539A2AA621_il2cpp_TypeInfo_var))->get_address_of_unityHandle_1()), sizeof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A ));
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___hWnd0, ___lParam1);

	return static_cast<bool>(returnValue);
}
// System.Void BoltDebugStartSettings_EnumWindowsProc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumWindowsProc__ctor_m0436A475FE7EA0B4AEE444301300B1B6974F3626 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean BoltDebugStartSettings_EnumWindowsProc::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumWindowsProc_Invoke_m960B6D934979A3D0AA65DA54875315077C3204FB (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, intptr_t ___hWnd0, intptr_t ___lParam1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___hWnd0, ___lParam1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hWnd0, ___lParam1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___hWnd0, ___lParam1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hWnd0, ___lParam1);
					else
						result = GenericVirtFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hWnd0, ___lParam1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hWnd0, ___lParam1);
					else
						result = VirtFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hWnd0, ___lParam1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hWnd0) - 1), ___lParam1, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hWnd0, ___lParam1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult BoltDebugStartSettings_EnumWindowsProc::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumWindowsProc_BeginInvoke_m0F95A292255DDF97904F0FF6B639BD24EF36D32B (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, intptr_t ___hWnd0, intptr_t ___lParam1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumWindowsProc_BeginInvoke_m0F95A292255DDF97904F0FF6B639BD24EF36D32B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hWnd0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___lParam1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean BoltDebugStartSettings_EnumWindowsProc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnumWindowsProc_EndInvoke_mBC2AC0136B6E11F84F412385FA08996371F0F8C1 (EnumWindowsProc_t5DD041AC30EAA6A6CBB1ECC1B5B7E6ED14077B98 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoltDebugStartSettings_HWND::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HWND__cctor_m4A8336A7FC0D07DC4BE2A7A4CB46F13F29968EE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HWND__cctor_m4A8336A7FC0D07DC4BE2A7A4CB46F13F29968EE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IntPtr
		//   NoTopMost = new IntPtr(-2),
		intptr_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6((&L_0), ((int32_t)-2), /*hidden argument*/NULL);
		((HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var))->set_NoTopMost_0((intptr_t)L_0);
		// TopMost = new IntPtr(-1),
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6((&L_1), (-1), /*hidden argument*/NULL);
		((HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var))->set_TopMost_1((intptr_t)L_1);
		// Top = new IntPtr(0),
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6((&L_2), 0, /*hidden argument*/NULL);
		((HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var))->set_Top_2((intptr_t)L_2);
		// Bottom = new IntPtr(1);
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6((&L_3), 1, /*hidden argument*/NULL);
		((HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_StaticFields*)il2cpp_codegen_static_fields_for(HWND_t737C575EE3BF64EDFC7F840EDA7002D61C16DB00_il2cpp_TypeInfo_var))->set_Bottom_3((intptr_t)L_3);
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
// System.Void BoltDebugStartSettings_SWP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWP__cctor_m611B63CCE813B520412DE8A85357F0201351A5D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWP__cctor_m611B63CCE813B520412DE8A85357F0201351A5D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int
		//   NOSIZE = 0x0001,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOSIZE_0(1);
		// NOMOVE = 0x0002,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOMOVE_1(2);
		// NOZORDER = 0x0004,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOZORDER_2(4);
		// NOREDRAW = 0x0008,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOREDRAW_3(8);
		// NOACTIVATE = 0x0010,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOACTIVATE_4(((int32_t)16));
		// DRAWFRAME = 0x0020,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_DRAWFRAME_5(((int32_t)32));
		// FRAMECHANGED = 0x0020,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_FRAMECHANGED_6(((int32_t)32));
		// SHOWWINDOW = 0x0040,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_SHOWWINDOW_7(((int32_t)64));
		// HIDEWINDOW = 0x0080,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_HIDEWINDOW_8(((int32_t)128));
		// NOCOPYBITS = 0x0100,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOCOPYBITS_9(((int32_t)256));
		// NOOWNERZORDER = 0x0200,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOOWNERZORDER_10(((int32_t)512));
		// NOREPOSITION = 0x0200,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOREPOSITION_11(((int32_t)512));
		// NOSENDCHANGING = 0x0400,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_NOSENDCHANGING_12(((int32_t)1024));
		// DEFERERASE = 0x2000,
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_DEFERERASE_13(((int32_t)8192));
		// ASYNCWINDOWPOS = 0x4000;
		((SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_StaticFields*)il2cpp_codegen_static_fields_for(SWP_t2A8D5A51603901292F610F9A807747B95A783E7F_il2cpp_TypeInfo_var))->set_ASYNCWINDOWPOS_14(((int32_t)16384));
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
// System.Void BoltExecutionOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltExecutionOrderAttribute__ctor_m0CCA9CD0147CD99B5EA2B458D866FD4FA98E74C3 (BoltExecutionOrderAttribute_t91302E2A0AF576CF7E04B5E2760DF4C241F2942C * __this, int32_t ___order0, const RuntimeMethod* method)
{
	{
		// public BoltExecutionOrderAttribute(int order)
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// _executionOrder = order;
		int32_t L_0 = ___order0;
		__this->set__executionOrder_0(L_0);
		// }
		return;
	}
}
// System.Int32 BoltExecutionOrderAttribute::get_executionOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoltExecutionOrderAttribute_get_executionOrder_m524747AE869FEA4652C80069506B95B8F300923B (BoltExecutionOrderAttribute_t91302E2A0AF576CF7E04B5E2760DF4C241F2942C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return _executionOrder; }
		int32_t L_0 = __this->get__executionOrder_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _executionOrder; }
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.IsEditor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_IsEditor_m69AE68667EA8332BF67F459AE63C92BA8ADA4333 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, bool ___isEditor0, const RuntimeMethod* method)
{
	{
		// this.isEditor = isEditor;
		bool L_0 = ___isEditor0;
		__this->set_isEditor_0(L_0);
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.SelectGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_SelectGameObject_m02D6E7D8EF3D1566D8D19360220480D933E90791 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.Indent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_Indent_mA09607954930EA72E898C207BA9806FA05BF4E8B (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.Label(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_Label_mBF915CAFBA68B7EE676A028AF4069687F8039BEE (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityDebugDrawer_BoltInternal_IDebugDrawer_Label_mBF915CAFBA68B7EE676A028AF4069687F8039BEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Bolt.DebugInfo.Label(text);
		String_t* L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DebugInfo_tE71B45CBA7D39CC93E515B60EBA7164DEE2CC5D4_il2cpp_TypeInfo_var);
		DebugInfo_Label_m20F9BC5D23E474CBC4C0C93BB7E2D7F3CBB1B018(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.LabelBold(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelBold_m6AD969503E4D1B6520DFBE7477EFF44EF70C9D38 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelBold_m6AD969503E4D1B6520DFBE7477EFF44EF70C9D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Bolt.DebugInfo.LabelBold(text);
		String_t* L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DebugInfo_tE71B45CBA7D39CC93E515B60EBA7164DEE2CC5D4_il2cpp_TypeInfo_var);
		DebugInfo_LabelBold_m91EAABE7C4806FB49434C90D3911878DC50C3C13(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.LabelField(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelField_mF5B13E5BEBCB75ECE2184A0373C4B7E1ED820449 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, String_t* ___text0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityDebugDrawer_BoltInternal_IDebugDrawer_LabelField_mF5B13E5BEBCB75ECE2184A0373C4B7E1ED820449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Bolt.DebugInfo.LabelField(text, value);
		String_t* L_0 = ___text0;
		RuntimeObject * L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DebugInfo_tE71B45CBA7D39CC93E515B60EBA7164DEE2CC5D4_il2cpp_TypeInfo_var);
		DebugInfo_LabelField_m57D52786026E63FF5DE16DC1D65523443666884C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.Separator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_Separator_mF5764FEC8C6A46AD08B35213935854EE8BCBCCE9 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, const RuntimeMethod* method)
{
	{
		// GUILayout.Space(2);
		GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E((2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::BoltInternal.IDebugDrawer.DrawObjectArray(BoltInternal.IDebugDrawerObjectArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_BoltInternal_IDebugDrawer_DrawObjectArray_m025E84B5C98D1992234745D4F215BA6F13405B49 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, RuntimeObject* ___root0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::DrawObjectArrayItem(BoltInternal.IDebugDrawerObjectArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer_DrawObjectArrayItem_m0C7DCD7F4A87C4672AF8F593E4F2179EE329E668 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BoltInternal.UnityDebugDrawer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDebugDrawer__ctor_m409BFF8C495FC4E252DEEDDAB8E4F9E2E4648330 (UnityDebugDrawer_t47621FDEBEC6A45E06168844CEEA77C72AE0F3BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Action BoltNetworkUtils::Combine(System.Action,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * BoltNetworkUtils_Combine_m8D4D50757BE439233662A491D9EBE22E0E6BBAAD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___self0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoltNetworkUtils_Combine_m8D4D50757BE439233662A491D9EBE22E0E6BBAAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	{
		// return (Action)Delegate.Combine(self, action);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___self0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = ___action1;
		Delegate_t * L_2 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFPhotonBolt_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stdout_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * HandleRef_get_Wrapper_m2F91CE78735031BA38DADFCC7A7AC93DED2B3AF4_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_wrapper_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
