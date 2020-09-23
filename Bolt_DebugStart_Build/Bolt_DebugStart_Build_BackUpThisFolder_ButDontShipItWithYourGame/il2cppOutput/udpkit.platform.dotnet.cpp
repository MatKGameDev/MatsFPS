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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039;
// System.Collections.Generic.HashSet`1/Slot<UdpKit.UdpEndPoint>[]
struct SlotU5BU5D_t15438A5EF3DE718A92E1DE64999BE44A2DFE0ABC;
// System.Collections.Generic.HashSet`1/Slot<UdpKit.UdpIPv4Address>[]
struct SlotU5BU5D_tDE41F5D64C63168FCB058C02983EF0D50B0FC796;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>
struct HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552;
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>
struct HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8;
// System.Collections.Generic.IEnumerable`1<UdpKit.UdpEndPoint>
struct IEnumerable_1_t91F88AA28E1AFAB7719697FE81DE2DD0D72337A3;
// System.Collections.Generic.IEnumerable`1<UdpKit.UdpIPv4Address>
struct IEnumerable_1_tA4E3B82F38E66C7E5CA655585ABC4AC95098B9D2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpEndPoint>
struct IEqualityComparer_1_tBE6351F38547537DBE3612B6507417EEA366EAC9;
// System.Collections.Generic.IEqualityComparer`1<UdpKit.UdpIPv4Address>
struct IEqualityComparer_1_t7EE00D20D220B5064C76172D91E9B635CA20DC61;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>
struct List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB;
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint>
struct List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9;
// System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>
struct List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress>
struct Collection_1_t2936BF753B84FF40EB04C0E70099D4264B394FC5;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation>
struct Collection_1_t563D821FFD263D531C66329BD8AB3C85592F6776;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.MulticastIPAddressInformation>
struct Collection_1_t4E4E53981485113BC48D796BC1F08DCF6363BEDF;
// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`1<System.Single>
struct Func_1_tA655F82C43D9C03F75E783D0DF2629CF9676E735;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.IPHostEntry
struct IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Net.Sockets.SocketException
struct SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UdpKit.Platform.DotNet.Utils.DotNetInterface
struct DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466;
// UdpKit.Platform.DotNetPlatform
struct DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20;
// UdpKit.Platform.DotNetPlatform/PrecisionTimer
struct PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21;
// UdpKit.Platform.DotNetSocket
struct DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA;
// UdpKit.Platform.UdpPlatform
struct UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1;
// UdpKit.Platform.UdpPlatformInterface
struct UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5;
// UdpKit.Platform.UdpPlatformInterface[]
struct UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25;
// UdpKit.Platform.UdpPlatformSocket
struct UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871;
// UdpKit.UdpConfig
struct UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF;
// UdpKit.UdpEndPoint[]
struct UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9;
// UdpKit.UdpIPv4Address[]
struct UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dns_t0E6B5B77C654107F106B577875FE899BAF8ADCF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t26327603AC5BEFA8EE4D7320F4E10238F70D96A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAB63C22463965C27A54BCA63F02A4602ED6FB5CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE4115A9EF6AC97B6E7026E78D026E91ACE74A0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral25BA44EC3B391BA4CE5FBBD2979635E254775E7D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D44CBF235C7EC2E761CD547DFFDC626BBA7E500;
IL2CPP_EXTERN_C String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
IL2CPP_EXTERN_C const RuntimeMethod* DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m60686DE4C9CF8735F80BB42A12CBB23D7E0507CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCEBE1C1E2344F7734AAD0BC56B41AC6ACC1242F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB9330B9B81C2B4904112A5C826A4A94FFF210D96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m33A31CD17BC783D23B7C9DBF44ACAA0D5688674E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA6ECAFF0E2D5C92F232A15CCDAE7584FE5BC0CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB98FDEED1AF1A39505BBCF1E429752EA8FFB6D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DotNetInterface_ParseName_mEF92552DD388A53EE20111FCBD976F9425C11EFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetInterface_ParsePhysicalAddress_mE6149AEBAC543666075F4991FD8B8CCA2CFB3717_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_GetIpsFromNetworkInterface_m6FD32421173DAC6F0B849334B0FDB0B5A3EEB639_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_IsValidInterface_m306EC0C94320FF9A600F16427CEFEA22F156F2A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_ParseInterface_m5A12AD4B5B5E7B3DA4998EF3190A357AE64CAE3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_ResolveHostAddressesViaHostName_m3E3F298D565DFAB801858779107176D25E2E7D36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_mFD28ED92D965DB13CDA21028B1E19753346673D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform_CreateSocket_m9780632C0D465ACFEFEE46F11D51EB7DC27D9B6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform_GetBroadcastAddress_m837D29D931327D2C54DD72DCEBA9B455D6F386EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform_GetNetworkInterfaces_m4797913DA7DE9372F9FD479D105354F58E0CACA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform_GetPrecisionTime_mC3EB359E66CE9EE1A2772A7122FCAB7E1BC2DD57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform_ResolveHostAddresses_m31DACFAE9B4CA2D9D7671B10504725B4C1ECC0DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetPlatform__ctor_m007514F61291CF0139B4126802379ED4EF4C0981_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_Bind_m9F3B8CDA6718886B7409FB1846005F0BD014E60C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_Close_m428FBFEA9C70CDE7EDCDAAC1F96A2CA65AA4A353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_RecvFrom_m4BF3AC8C2C74BA04FFCE3C149C02B804F7A1D7A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_RecvPoll_mD08293B7DC2AB0CC2D44A3A192BBF28389EB00A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_SendTo_m8B2F94FD943E29706AC269B46BCC4FCEB1DB1AFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket__ctor_m7462A56CA5CCD9B2D23A377429132FD8A2C10019_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_get_Broadcast_mFC43746BA4608B2D6E2AF37CC35DBCE0F88DB9BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNetSocket_set_Broadcast_m1AB1C2D80BAEF0DFD5F39D35BDB03B06E10DEA11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrecisionTimer__cctor_m7300495C0856E6F9A5229B0FB34CB1A9559E3013_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t798921E0D97CE19C93480EAFF491E58EABE6B97A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____slots_8)); }
	inline SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>
struct  HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t15438A5EF3DE718A92E1DE64999BE44A2DFE0ABC* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____slots_8)); }
	inline SlotU5BU5D_t15438A5EF3DE718A92E1DE64999BE44A2DFE0ABC* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t15438A5EF3DE718A92E1DE64999BE44A2DFE0ABC** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t15438A5EF3DE718A92E1DE64999BE44A2DFE0ABC* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>
struct  HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tDE41F5D64C63168FCB058C02983EF0D50B0FC796* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____slots_8)); }
	inline SlotU5BU5D_tDE41F5D64C63168FCB058C02983EF0D50B0FC796* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tDE41F5D64C63168FCB058C02983EF0D50B0FC796** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tDE41F5D64C63168FCB058C02983EF0D50B0FC796* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>
struct  List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB, ____items_1)); }
	inline UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* get__items_1() const { return ____items_1; }
	inline UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB_StaticFields, ____emptyArray_5)); }
	inline UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UdpPlatformInterfaceU5BU5D_t4192A6A04EA0D8B0A8185DF5B8E1980DC5862B25* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UdpKit.UdpEndPoint>
struct  List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9, ____items_1)); }
	inline UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* get__items_1() const { return ____items_1; }
	inline UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_StaticFields, ____emptyArray_5)); }
	inline UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UdpEndPointU5BU5D_tF32CEA017807C3EBCFA33728F0F7CCC859D634B9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>
struct  List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0, ____items_1)); }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* get__items_1() const { return ____items_1; }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0_StaticFields, ____emptyArray_5)); }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.Net.EndPoint
struct  EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.IPHostEntry
struct  IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D  : public RuntimeObject
{
public:
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;

public:
	inline static int32_t get_offset_of_hostName_0() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___hostName_0)); }
	inline String_t* get_hostName_0() const { return ___hostName_0; }
	inline String_t** get_address_of_hostName_0() { return &___hostName_0; }
	inline void set_hostName_0(String_t* value)
	{
		___hostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___aliases_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aliases_1), (void*)value);
	}

	inline static int32_t get_offset_of_addressList_2() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___addressList_2)); }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* get_addressList_2() const { return ___addressList_2; }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3** get_address_of_addressList_2() { return &___addressList_2; }
	inline void set_addressList_2(IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* value)
	{
		___addressList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressList_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrustedHost_3() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___isTrustedHost_3)); }
	inline bool get_isTrustedHost_3() const { return ___isTrustedHost_3; }
	inline bool* get_address_of_isTrustedHost_3() { return &___isTrustedHost_3; }
	inline void set_isTrustedHost_3(bool value)
	{
		___isTrustedHost_3 = value;
	}
};


// System.Net.NetworkInformation.GatewayIPAddressInformation
struct  GatewayIPAddressInformation_t60531D784C9912D26C6F7C5B0E93900D7DCB324B  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct  GatewayIPAddressInformationCollection_t1DAA274D18774B33C82C45988C9B8F35057E1E3A  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::addresses
	Collection_1_t563D821FFD263D531C66329BD8AB3C85592F6776 * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(GatewayIPAddressInformationCollection_t1DAA274D18774B33C82C45988C9B8F35057E1E3A, ___addresses_0)); }
	inline Collection_1_t563D821FFD263D531C66329BD8AB3C85592F6776 * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_t563D821FFD263D531C66329BD8AB3C85592F6776 ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_t563D821FFD263D531C66329BD8AB3C85592F6776 * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
};


// System.Net.NetworkInformation.IPAddressCollection
struct  IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::addresses
	Collection_1_t2936BF753B84FF40EB04C0E70099D4264B394FC5 * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3, ___addresses_0)); }
	inline Collection_1_t2936BF753B84FF40EB04C0E70099D4264B394FC5 * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_t2936BF753B84FF40EB04C0E70099D4264B394FC5 ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_t2936BF753B84FF40EB04C0E70099D4264B394FC5 * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
};


// System.Net.NetworkInformation.IPAddressInformation
struct  IPAddressInformation_t19E7A885BA4DB0425B8F01A64C3A000E49894BC2  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.IPInterfaceProperties
struct  IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct  MulticastIPAddressInformationCollection_t4CCE2660FCD834B927916455C8B064CFA1D2D5BC  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::addresses
	Collection_1_t4E4E53981485113BC48D796BC1F08DCF6363BEDF * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationCollection_t4CCE2660FCD834B927916455C8B064CFA1D2D5BC, ___addresses_0)); }
	inline Collection_1_t4E4E53981485113BC48D796BC1F08DCF6363BEDF * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_t4E4E53981485113BC48D796BC1F08DCF6363BEDF ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_t4E4E53981485113BC48D796BC1F08DCF6363BEDF * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
};


// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3  : public RuntimeObject
{
public:

public:
};


// System.Net.NetworkInformation.PhysicalAddress
struct  PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::address
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___address_0;
	// System.Boolean System.Net.NetworkInformation.PhysicalAddress::changed
	bool ___changed_1;
	// System.Int32 System.Net.NetworkInformation.PhysicalAddress::hash
	int32_t ___hash_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819, ___address_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_address_0() const { return ___address_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_0), (void*)value);
	}

	inline static int32_t get_offset_of_changed_1() { return static_cast<int32_t>(offsetof(PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819, ___changed_1)); }
	inline bool get_changed_1() const { return ___changed_1; }
	inline bool* get_address_of_changed_1() { return &___changed_1; }
	inline void set_changed_1(bool value)
	{
		___changed_1 = value;
	}

	inline static int32_t get_offset_of_hash_2() { return static_cast<int32_t>(offsetof(PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819, ___hash_2)); }
	inline int32_t get_hash_2() const { return ___hash_2; }
	inline int32_t* get_address_of_hash_2() { return &___hash_2; }
	inline void set_hash_2(int32_t value)
	{
		___hash_2 = value;
	}
};

struct PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819_StaticFields
{
public:
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * ___None_3;

public:
	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819_StaticFields, ___None_3)); }
	inline PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * get_None_3() const { return ___None_3; }
	inline PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}
};


// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct  UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::addresses
	Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423, ___addresses_0)); }
	inline Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_tD2396D955AE4EC54350F111B7375F4D94F3A138C * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addresses_0), (void*)value);
	}
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

// UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils
struct  DotNetPlatformUtils_t176B0250A6793C47A91CC0356DBF9C9956AF2878  : public RuntimeObject
{
public:

public:
};


// UdpKit.Platform.DotNetPlatform_PrecisionTimer
struct  PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21  : public RuntimeObject
{
public:

public:
};

struct PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields
{
public:
	// System.Int64 UdpKit.Platform.DotNetPlatform_PrecisionTimer::start
	int64_t ___start_0;
	// System.Double UdpKit.Platform.DotNetPlatform_PrecisionTimer::freq
	double ___freq_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields, ___start_0)); }
	inline int64_t get_start_0() const { return ___start_0; }
	inline int64_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int64_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_freq_1() { return static_cast<int32_t>(offsetof(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields, ___freq_1)); }
	inline double get_freq_1() const { return ___freq_1; }
	inline double* get_address_of_freq_1() { return &___freq_1; }
	inline void set_freq_1(double value)
	{
		___freq_1 = value;
	}
};


// UdpKit.Platform.UdpPlatform
struct  UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1  : public RuntimeObject
{
public:
	// System.Object UdpKit.Platform.UdpPlatform::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1, ___U3CTokenU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UdpKit.Platform.UdpPlatformInterface
struct  UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5  : public RuntimeObject
{
public:
	// System.Object UdpKit.Platform.UdpPlatformInterface::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5, ___U3CTokenU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UdpKit.Platform.UdpPlatformSocket
struct  UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871  : public RuntimeObject
{
public:
	// System.Object UdpKit.Platform.UdpPlatformSocket::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871, ___U3CTokenU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UdpKit.UdpIPv4Address_Comparer
struct  Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1  : public RuntimeObject
{
public:

public:
};

struct Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_StaticFields
{
public:
	// UdpKit.UdpIPv4Address_Comparer UdpKit.UdpIPv4Address_Comparer::Instance
	Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_StaticFields, ___Instance_0)); }
	inline Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * get_Instance_0() const { return ___Instance_0; }
	inline Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A, ____set_0)); }
	inline HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1_Enumerator<System.String>
struct  Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	String_t* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808, ____set_0)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get__set_0() const { return ____set_0; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808, ____current_3)); }
	inline String_t* get__current_3() const { return ____current_3; }
	inline String_t** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(String_t* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Net.IPEndPoint
struct  IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_5)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Net.NetworkInformation.MulticastIPAddressInformation
struct  MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324  : public IPAddressInformation_t19E7A885BA4DB0425B8F01A64C3A000E49894BC2
{
public:

public:
};


// System.Net.NetworkInformation.UnicastIPAddressInformation
struct  UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5  : public IPAddressInformation_t19E7A885BA4DB0425B8F01A64C3A000E49894BC2
{
public:

public:
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


// UdpKit.Platform.DotNetPlatform
struct  DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20  : public UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1
{
public:
	// UdpKit.UdpConfig UdpKit.Platform.DotNetPlatform::_config
	UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * ____config_1;

public:
	inline static int32_t get_offset_of__config_1() { return static_cast<int32_t>(offsetof(DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20, ____config_1)); }
	inline UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * get__config_1() const { return ____config_1; }
	inline UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF ** get_address_of__config_1() { return &____config_1; }
	inline void set__config_1(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * value)
	{
		____config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____config_1), (void*)value);
	}
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

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_tFF658C883CFC357352A72E6A2217126B61AE63A6 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_tFF658C883CFC357352A72E6A2217126B61AE63A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t6B97F284C3886FDCBE60FF77FEFE80CF11D0B2EC 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t6B97F284C3886FDCBE60FF77FEFE80CF11D0B2EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SelectMode
struct  SelectMode_t384C0C7786507E841593ADDA6785DF0001C06B7B 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t384C0C7786507E841593ADDA6785DF0001C06B7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketError
struct  SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct  SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketOptionLevel
struct  SocketOptionLevel_t75F67243F6A4311CE8731B9A344FECD8186B3B21 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t75F67243F6A4311CE8731B9A344FECD8186B3B21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketOptionName
struct  SocketOptionName_t11A763BEFF673A081DA61B8A7B1DF11909153B28 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionName_t11A763BEFF673A081DA61B8A7B1DF11909153B28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UdpKit.Platform.UdpLinkType
struct  UdpLinkType_tB1C79F379B6372C975FE6367EAAE94AA9BD48B9B 
{
public:
	// System.Int32 UdpKit.Platform.UdpLinkType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UdpLinkType_tB1C79F379B6372C975FE6367EAAE94AA9BD48B9B, ___value___2)); }
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

// UdpKit.UdpSessionSource
struct  UdpSessionSource_t0D708008398DB9DFB60CD65FC7300636368344B0 
{
public:
	// System.Int32 UdpKit.UdpSessionSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UdpSessionSource_t0D708008398DB9DFB60CD65FC7300636368344B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Collections.Generic.List`1_Enumerator<UdpKit.UdpEndPoint>
struct  Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123, ___list_0)); }
	inline List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * get_list_0() const { return ___list_0; }
	inline List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123, ___current_3)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get_current_3() const { return ___current_3; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		___current_3 = value;
	}
};


// System.Net.IPAddress
struct  IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_17)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_18)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_19)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_20)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_40), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UdpKit.Platform.DotNet.Utils.DotNetInterface
struct  DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466  : public UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5
{
public:
	// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::name
	String_t* ___name_1;
	// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::linkType
	int32_t ___linkType_2;
	// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::physicalAddress
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___physicalAddress_3;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::gatewayAddresses
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___gatewayAddresses_4;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::unicastAddresses
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___unicastAddresses_5;
	// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::multicastAddresses
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___multicastAddresses_6;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkType_2() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___linkType_2)); }
	inline int32_t get_linkType_2() const { return ___linkType_2; }
	inline int32_t* get_address_of_linkType_2() { return &___linkType_2; }
	inline void set_linkType_2(int32_t value)
	{
		___linkType_2 = value;
	}

	inline static int32_t get_offset_of_physicalAddress_3() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___physicalAddress_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_physicalAddress_3() const { return ___physicalAddress_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_physicalAddress_3() { return &___physicalAddress_3; }
	inline void set_physicalAddress_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___physicalAddress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicalAddress_3), (void*)value);
	}

	inline static int32_t get_offset_of_gatewayAddresses_4() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___gatewayAddresses_4)); }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* get_gatewayAddresses_4() const { return ___gatewayAddresses_4; }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC** get_address_of_gatewayAddresses_4() { return &___gatewayAddresses_4; }
	inline void set_gatewayAddresses_4(UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* value)
	{
		___gatewayAddresses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gatewayAddresses_4), (void*)value);
	}

	inline static int32_t get_offset_of_unicastAddresses_5() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___unicastAddresses_5)); }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* get_unicastAddresses_5() const { return ___unicastAddresses_5; }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC** get_address_of_unicastAddresses_5() { return &___unicastAddresses_5; }
	inline void set_unicastAddresses_5(UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* value)
	{
		___unicastAddresses_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicastAddresses_5), (void*)value);
	}

	inline static int32_t get_offset_of_multicastAddresses_6() { return static_cast<int32_t>(offsetof(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466, ___multicastAddresses_6)); }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* get_multicastAddresses_6() const { return ___multicastAddresses_6; }
	inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC** get_address_of_multicastAddresses_6() { return &___multicastAddresses_6; }
	inline void set_multicastAddresses_6(UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* value)
	{
		___multicastAddresses_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multicastAddresses_6), (void*)value);
	}
};


// UdpKit.Platform.DotNetSocket
struct  DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA  : public UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871
{
public:
	// System.String UdpKit.Platform.DotNetSocket::error
	String_t* ___error_1;
	// System.Net.Sockets.Socket UdpKit.Platform.DotNetSocket::socket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket_2;
	// UdpKit.Platform.DotNetPlatform UdpKit.Platform.DotNetSocket::platform
	DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * ___platform_3;
	// System.Net.EndPoint UdpKit.Platform.DotNetSocket::recvEndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___recvEndPoint_4;
	// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::endpoint
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint_5;

public:
	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA, ___error_1)); }
	inline String_t* get_error_1() const { return ___error_1; }
	inline String_t** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(String_t* value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA, ___socket_2)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_socket_2() const { return ___socket_2; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_2), (void*)value);
	}

	inline static int32_t get_offset_of_platform_3() { return static_cast<int32_t>(offsetof(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA, ___platform_3)); }
	inline DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * get_platform_3() const { return ___platform_3; }
	inline DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 ** get_address_of_platform_3() { return &___platform_3; }
	inline void set_platform_3(DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * value)
	{
		___platform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_3), (void*)value);
	}

	inline static int32_t get_offset_of_recvEndPoint_4() { return static_cast<int32_t>(offsetof(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA, ___recvEndPoint_4)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_recvEndPoint_4() const { return ___recvEndPoint_4; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_recvEndPoint_4() { return &___recvEndPoint_4; }
	inline void set_recvEndPoint_4(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___recvEndPoint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recvEndPoint_4), (void*)value);
	}

	inline static int32_t get_offset_of_endpoint_5() { return static_cast<int32_t>(offsetof(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA, ___endpoint_5)); }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  get_endpoint_5() const { return ___endpoint_5; }
	inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * get_address_of_endpoint_5() { return &___endpoint_5; }
	inline void set_endpoint_5(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  value)
	{
		___endpoint_5 = value;
	}
};


// UdpKit.UdpConfig
struct  UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF  : public RuntimeObject
{
public:
	// System.Boolean UdpKit.UdpConfig::MasterServerAutoDisconnect
	bool ___MasterServerAutoDisconnect_0;
	// System.Int32 UdpKit.UdpConfig::PacketWindow
	int32_t ___PacketWindow_1;
	// System.Int32 UdpKit.UdpConfig::PacketDatagramSize
	int32_t ___PacketDatagramSize_2;
	// System.Int32 UdpKit.UdpConfig::StreamWindow
	int32_t ___StreamWindow_3;
	// System.Int32 UdpKit.UdpConfig::StreamDatagramSize
	int32_t ___StreamDatagramSize_4;
	// System.UInt32 UdpKit.UdpConfig::NatPunchOnceDelay
	uint32_t ___NatPunchOnceDelay_5;
	// System.Int32 UdpKit.UdpConfig::NatPunchOnceCount
	int32_t ___NatPunchOnceCount_6;
	// System.UInt32 UdpKit.UdpConfig::NatPunchOnceInterval
	uint32_t ___NatPunchOnceInterval_7;
	// System.Int32 UdpKit.UdpConfig::NatPunchRequestCount
	int32_t ___NatPunchRequestCount_8;
	// System.UInt32 UdpKit.UdpConfig::NatPunchRequestInterval
	uint32_t ___NatPunchRequestInterval_9;
	// System.UInt32 UdpKit.UdpConfig::NatProbeEndPointTimeout
	uint32_t ___NatProbeEndPointTimeout_10;
	// System.UInt32 UdpKit.UdpConfig::NatProbeHairpinTimeout
	uint32_t ___NatProbeHairpinTimeout_11;
	// System.UInt32 UdpKit.UdpConfig::HostKeepAliveInterval
	uint32_t ___HostKeepAliveInterval_12;
	// System.Single UdpKit.UdpConfig::RoomUpdateRate
	float ___RoomUpdateRate_13;
	// System.Single UdpKit.UdpConfig::RoomCreateTimeout
	float ___RoomCreateTimeout_14;
	// System.Single UdpKit.UdpConfig::RoomJoinTimeout
	float ___RoomJoinTimeout_15;
	// System.UInt32 UdpKit.UdpConfig::BroadcastInterval
	uint32_t ___BroadcastInterval_16;
	// System.Boolean UdpKit.UdpConfig::IPv6
	bool ___IPv6_17;
	// System.Single UdpKit.UdpConfig::DefaultNetworkPing
	float ___DefaultNetworkPing_18;
	// System.Single UdpKit.UdpConfig::DefaultAliasedPing
	float ___DefaultAliasedPing_19;
	// System.Boolean UdpKit.UdpConfig::AllowPacketOverflow
	bool ___AllowPacketOverflow_20;
	// System.UInt32 UdpKit.UdpConfig::ConnectRequestTimeout
	uint32_t ___ConnectRequestTimeout_21;
	// System.UInt32 UdpKit.UdpConfig::ConnectRequestAttempts
	uint32_t ___ConnectRequestAttempts_22;
	// System.UInt32 UdpKit.UdpConfig::ConnectionTimeout
	uint32_t ___ConnectionTimeout_23;
	// System.UInt32 UdpKit.UdpConfig::PingTimeout
	uint32_t ___PingTimeout_24;
	// System.UInt32 UdpKit.UdpConfig::RecvWithoutAckLimit
	uint32_t ___RecvWithoutAckLimit_25;
	// System.Single UdpKit.UdpConfig::SimulatedLoss
	float ___SimulatedLoss_26;
	// System.Int32 UdpKit.UdpConfig::SimulatedPingMin
	int32_t ___SimulatedPingMin_27;
	// System.Int32 UdpKit.UdpConfig::SimulatedPingMax
	int32_t ___SimulatedPingMax_28;
	// System.Int32 UdpKit.UdpConfig::ConnectionLimit
	int32_t ___ConnectionLimit_29;
	// System.Boolean UdpKit.UdpConfig::AllowIncommingConnections
	bool ___AllowIncommingConnections_30;
	// System.Boolean UdpKit.UdpConfig::AutoAcceptIncommingConnections
	bool ___AutoAcceptIncommingConnections_31;
	// System.Boolean UdpKit.UdpConfig::AllowImplicitAccept
	bool ___AllowImplicitAccept_32;
	// System.Func`1<System.Single> UdpKit.UdpConfig::NoiseFunction
	Func_1_tA655F82C43D9C03F75E783D0DF2629CF9676E735 * ___NoiseFunction_33;
	// System.Boolean UdpKit.UdpConfig::IsBuildMono
	bool ___IsBuildMono_34;
	// System.Boolean UdpKit.UdpConfig::IsBuildDotNet
	bool ___IsBuildDotNet_35;
	// System.Boolean UdpKit.UdpConfig::IsBuildIL2CPP
	bool ___IsBuildIL2CPP_36;
	// UnityEngine.RuntimePlatform UdpKit.UdpConfig::CurrentPlatform
	int32_t ___CurrentPlatform_37;

public:
	inline static int32_t get_offset_of_MasterServerAutoDisconnect_0() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___MasterServerAutoDisconnect_0)); }
	inline bool get_MasterServerAutoDisconnect_0() const { return ___MasterServerAutoDisconnect_0; }
	inline bool* get_address_of_MasterServerAutoDisconnect_0() { return &___MasterServerAutoDisconnect_0; }
	inline void set_MasterServerAutoDisconnect_0(bool value)
	{
		___MasterServerAutoDisconnect_0 = value;
	}

	inline static int32_t get_offset_of_PacketWindow_1() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___PacketWindow_1)); }
	inline int32_t get_PacketWindow_1() const { return ___PacketWindow_1; }
	inline int32_t* get_address_of_PacketWindow_1() { return &___PacketWindow_1; }
	inline void set_PacketWindow_1(int32_t value)
	{
		___PacketWindow_1 = value;
	}

	inline static int32_t get_offset_of_PacketDatagramSize_2() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___PacketDatagramSize_2)); }
	inline int32_t get_PacketDatagramSize_2() const { return ___PacketDatagramSize_2; }
	inline int32_t* get_address_of_PacketDatagramSize_2() { return &___PacketDatagramSize_2; }
	inline void set_PacketDatagramSize_2(int32_t value)
	{
		___PacketDatagramSize_2 = value;
	}

	inline static int32_t get_offset_of_StreamWindow_3() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___StreamWindow_3)); }
	inline int32_t get_StreamWindow_3() const { return ___StreamWindow_3; }
	inline int32_t* get_address_of_StreamWindow_3() { return &___StreamWindow_3; }
	inline void set_StreamWindow_3(int32_t value)
	{
		___StreamWindow_3 = value;
	}

	inline static int32_t get_offset_of_StreamDatagramSize_4() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___StreamDatagramSize_4)); }
	inline int32_t get_StreamDatagramSize_4() const { return ___StreamDatagramSize_4; }
	inline int32_t* get_address_of_StreamDatagramSize_4() { return &___StreamDatagramSize_4; }
	inline void set_StreamDatagramSize_4(int32_t value)
	{
		___StreamDatagramSize_4 = value;
	}

	inline static int32_t get_offset_of_NatPunchOnceDelay_5() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatPunchOnceDelay_5)); }
	inline uint32_t get_NatPunchOnceDelay_5() const { return ___NatPunchOnceDelay_5; }
	inline uint32_t* get_address_of_NatPunchOnceDelay_5() { return &___NatPunchOnceDelay_5; }
	inline void set_NatPunchOnceDelay_5(uint32_t value)
	{
		___NatPunchOnceDelay_5 = value;
	}

	inline static int32_t get_offset_of_NatPunchOnceCount_6() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatPunchOnceCount_6)); }
	inline int32_t get_NatPunchOnceCount_6() const { return ___NatPunchOnceCount_6; }
	inline int32_t* get_address_of_NatPunchOnceCount_6() { return &___NatPunchOnceCount_6; }
	inline void set_NatPunchOnceCount_6(int32_t value)
	{
		___NatPunchOnceCount_6 = value;
	}

	inline static int32_t get_offset_of_NatPunchOnceInterval_7() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatPunchOnceInterval_7)); }
	inline uint32_t get_NatPunchOnceInterval_7() const { return ___NatPunchOnceInterval_7; }
	inline uint32_t* get_address_of_NatPunchOnceInterval_7() { return &___NatPunchOnceInterval_7; }
	inline void set_NatPunchOnceInterval_7(uint32_t value)
	{
		___NatPunchOnceInterval_7 = value;
	}

	inline static int32_t get_offset_of_NatPunchRequestCount_8() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatPunchRequestCount_8)); }
	inline int32_t get_NatPunchRequestCount_8() const { return ___NatPunchRequestCount_8; }
	inline int32_t* get_address_of_NatPunchRequestCount_8() { return &___NatPunchRequestCount_8; }
	inline void set_NatPunchRequestCount_8(int32_t value)
	{
		___NatPunchRequestCount_8 = value;
	}

	inline static int32_t get_offset_of_NatPunchRequestInterval_9() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatPunchRequestInterval_9)); }
	inline uint32_t get_NatPunchRequestInterval_9() const { return ___NatPunchRequestInterval_9; }
	inline uint32_t* get_address_of_NatPunchRequestInterval_9() { return &___NatPunchRequestInterval_9; }
	inline void set_NatPunchRequestInterval_9(uint32_t value)
	{
		___NatPunchRequestInterval_9 = value;
	}

	inline static int32_t get_offset_of_NatProbeEndPointTimeout_10() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatProbeEndPointTimeout_10)); }
	inline uint32_t get_NatProbeEndPointTimeout_10() const { return ___NatProbeEndPointTimeout_10; }
	inline uint32_t* get_address_of_NatProbeEndPointTimeout_10() { return &___NatProbeEndPointTimeout_10; }
	inline void set_NatProbeEndPointTimeout_10(uint32_t value)
	{
		___NatProbeEndPointTimeout_10 = value;
	}

	inline static int32_t get_offset_of_NatProbeHairpinTimeout_11() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NatProbeHairpinTimeout_11)); }
	inline uint32_t get_NatProbeHairpinTimeout_11() const { return ___NatProbeHairpinTimeout_11; }
	inline uint32_t* get_address_of_NatProbeHairpinTimeout_11() { return &___NatProbeHairpinTimeout_11; }
	inline void set_NatProbeHairpinTimeout_11(uint32_t value)
	{
		___NatProbeHairpinTimeout_11 = value;
	}

	inline static int32_t get_offset_of_HostKeepAliveInterval_12() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___HostKeepAliveInterval_12)); }
	inline uint32_t get_HostKeepAliveInterval_12() const { return ___HostKeepAliveInterval_12; }
	inline uint32_t* get_address_of_HostKeepAliveInterval_12() { return &___HostKeepAliveInterval_12; }
	inline void set_HostKeepAliveInterval_12(uint32_t value)
	{
		___HostKeepAliveInterval_12 = value;
	}

	inline static int32_t get_offset_of_RoomUpdateRate_13() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___RoomUpdateRate_13)); }
	inline float get_RoomUpdateRate_13() const { return ___RoomUpdateRate_13; }
	inline float* get_address_of_RoomUpdateRate_13() { return &___RoomUpdateRate_13; }
	inline void set_RoomUpdateRate_13(float value)
	{
		___RoomUpdateRate_13 = value;
	}

	inline static int32_t get_offset_of_RoomCreateTimeout_14() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___RoomCreateTimeout_14)); }
	inline float get_RoomCreateTimeout_14() const { return ___RoomCreateTimeout_14; }
	inline float* get_address_of_RoomCreateTimeout_14() { return &___RoomCreateTimeout_14; }
	inline void set_RoomCreateTimeout_14(float value)
	{
		___RoomCreateTimeout_14 = value;
	}

	inline static int32_t get_offset_of_RoomJoinTimeout_15() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___RoomJoinTimeout_15)); }
	inline float get_RoomJoinTimeout_15() const { return ___RoomJoinTimeout_15; }
	inline float* get_address_of_RoomJoinTimeout_15() { return &___RoomJoinTimeout_15; }
	inline void set_RoomJoinTimeout_15(float value)
	{
		___RoomJoinTimeout_15 = value;
	}

	inline static int32_t get_offset_of_BroadcastInterval_16() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___BroadcastInterval_16)); }
	inline uint32_t get_BroadcastInterval_16() const { return ___BroadcastInterval_16; }
	inline uint32_t* get_address_of_BroadcastInterval_16() { return &___BroadcastInterval_16; }
	inline void set_BroadcastInterval_16(uint32_t value)
	{
		___BroadcastInterval_16 = value;
	}

	inline static int32_t get_offset_of_IPv6_17() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___IPv6_17)); }
	inline bool get_IPv6_17() const { return ___IPv6_17; }
	inline bool* get_address_of_IPv6_17() { return &___IPv6_17; }
	inline void set_IPv6_17(bool value)
	{
		___IPv6_17 = value;
	}

	inline static int32_t get_offset_of_DefaultNetworkPing_18() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___DefaultNetworkPing_18)); }
	inline float get_DefaultNetworkPing_18() const { return ___DefaultNetworkPing_18; }
	inline float* get_address_of_DefaultNetworkPing_18() { return &___DefaultNetworkPing_18; }
	inline void set_DefaultNetworkPing_18(float value)
	{
		___DefaultNetworkPing_18 = value;
	}

	inline static int32_t get_offset_of_DefaultAliasedPing_19() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___DefaultAliasedPing_19)); }
	inline float get_DefaultAliasedPing_19() const { return ___DefaultAliasedPing_19; }
	inline float* get_address_of_DefaultAliasedPing_19() { return &___DefaultAliasedPing_19; }
	inline void set_DefaultAliasedPing_19(float value)
	{
		___DefaultAliasedPing_19 = value;
	}

	inline static int32_t get_offset_of_AllowPacketOverflow_20() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___AllowPacketOverflow_20)); }
	inline bool get_AllowPacketOverflow_20() const { return ___AllowPacketOverflow_20; }
	inline bool* get_address_of_AllowPacketOverflow_20() { return &___AllowPacketOverflow_20; }
	inline void set_AllowPacketOverflow_20(bool value)
	{
		___AllowPacketOverflow_20 = value;
	}

	inline static int32_t get_offset_of_ConnectRequestTimeout_21() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___ConnectRequestTimeout_21)); }
	inline uint32_t get_ConnectRequestTimeout_21() const { return ___ConnectRequestTimeout_21; }
	inline uint32_t* get_address_of_ConnectRequestTimeout_21() { return &___ConnectRequestTimeout_21; }
	inline void set_ConnectRequestTimeout_21(uint32_t value)
	{
		___ConnectRequestTimeout_21 = value;
	}

	inline static int32_t get_offset_of_ConnectRequestAttempts_22() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___ConnectRequestAttempts_22)); }
	inline uint32_t get_ConnectRequestAttempts_22() const { return ___ConnectRequestAttempts_22; }
	inline uint32_t* get_address_of_ConnectRequestAttempts_22() { return &___ConnectRequestAttempts_22; }
	inline void set_ConnectRequestAttempts_22(uint32_t value)
	{
		___ConnectRequestAttempts_22 = value;
	}

	inline static int32_t get_offset_of_ConnectionTimeout_23() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___ConnectionTimeout_23)); }
	inline uint32_t get_ConnectionTimeout_23() const { return ___ConnectionTimeout_23; }
	inline uint32_t* get_address_of_ConnectionTimeout_23() { return &___ConnectionTimeout_23; }
	inline void set_ConnectionTimeout_23(uint32_t value)
	{
		___ConnectionTimeout_23 = value;
	}

	inline static int32_t get_offset_of_PingTimeout_24() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___PingTimeout_24)); }
	inline uint32_t get_PingTimeout_24() const { return ___PingTimeout_24; }
	inline uint32_t* get_address_of_PingTimeout_24() { return &___PingTimeout_24; }
	inline void set_PingTimeout_24(uint32_t value)
	{
		___PingTimeout_24 = value;
	}

	inline static int32_t get_offset_of_RecvWithoutAckLimit_25() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___RecvWithoutAckLimit_25)); }
	inline uint32_t get_RecvWithoutAckLimit_25() const { return ___RecvWithoutAckLimit_25; }
	inline uint32_t* get_address_of_RecvWithoutAckLimit_25() { return &___RecvWithoutAckLimit_25; }
	inline void set_RecvWithoutAckLimit_25(uint32_t value)
	{
		___RecvWithoutAckLimit_25 = value;
	}

	inline static int32_t get_offset_of_SimulatedLoss_26() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___SimulatedLoss_26)); }
	inline float get_SimulatedLoss_26() const { return ___SimulatedLoss_26; }
	inline float* get_address_of_SimulatedLoss_26() { return &___SimulatedLoss_26; }
	inline void set_SimulatedLoss_26(float value)
	{
		___SimulatedLoss_26 = value;
	}

	inline static int32_t get_offset_of_SimulatedPingMin_27() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___SimulatedPingMin_27)); }
	inline int32_t get_SimulatedPingMin_27() const { return ___SimulatedPingMin_27; }
	inline int32_t* get_address_of_SimulatedPingMin_27() { return &___SimulatedPingMin_27; }
	inline void set_SimulatedPingMin_27(int32_t value)
	{
		___SimulatedPingMin_27 = value;
	}

	inline static int32_t get_offset_of_SimulatedPingMax_28() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___SimulatedPingMax_28)); }
	inline int32_t get_SimulatedPingMax_28() const { return ___SimulatedPingMax_28; }
	inline int32_t* get_address_of_SimulatedPingMax_28() { return &___SimulatedPingMax_28; }
	inline void set_SimulatedPingMax_28(int32_t value)
	{
		___SimulatedPingMax_28 = value;
	}

	inline static int32_t get_offset_of_ConnectionLimit_29() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___ConnectionLimit_29)); }
	inline int32_t get_ConnectionLimit_29() const { return ___ConnectionLimit_29; }
	inline int32_t* get_address_of_ConnectionLimit_29() { return &___ConnectionLimit_29; }
	inline void set_ConnectionLimit_29(int32_t value)
	{
		___ConnectionLimit_29 = value;
	}

	inline static int32_t get_offset_of_AllowIncommingConnections_30() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___AllowIncommingConnections_30)); }
	inline bool get_AllowIncommingConnections_30() const { return ___AllowIncommingConnections_30; }
	inline bool* get_address_of_AllowIncommingConnections_30() { return &___AllowIncommingConnections_30; }
	inline void set_AllowIncommingConnections_30(bool value)
	{
		___AllowIncommingConnections_30 = value;
	}

	inline static int32_t get_offset_of_AutoAcceptIncommingConnections_31() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___AutoAcceptIncommingConnections_31)); }
	inline bool get_AutoAcceptIncommingConnections_31() const { return ___AutoAcceptIncommingConnections_31; }
	inline bool* get_address_of_AutoAcceptIncommingConnections_31() { return &___AutoAcceptIncommingConnections_31; }
	inline void set_AutoAcceptIncommingConnections_31(bool value)
	{
		___AutoAcceptIncommingConnections_31 = value;
	}

	inline static int32_t get_offset_of_AllowImplicitAccept_32() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___AllowImplicitAccept_32)); }
	inline bool get_AllowImplicitAccept_32() const { return ___AllowImplicitAccept_32; }
	inline bool* get_address_of_AllowImplicitAccept_32() { return &___AllowImplicitAccept_32; }
	inline void set_AllowImplicitAccept_32(bool value)
	{
		___AllowImplicitAccept_32 = value;
	}

	inline static int32_t get_offset_of_NoiseFunction_33() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___NoiseFunction_33)); }
	inline Func_1_tA655F82C43D9C03F75E783D0DF2629CF9676E735 * get_NoiseFunction_33() const { return ___NoiseFunction_33; }
	inline Func_1_tA655F82C43D9C03F75E783D0DF2629CF9676E735 ** get_address_of_NoiseFunction_33() { return &___NoiseFunction_33; }
	inline void set_NoiseFunction_33(Func_1_tA655F82C43D9C03F75E783D0DF2629CF9676E735 * value)
	{
		___NoiseFunction_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoiseFunction_33), (void*)value);
	}

	inline static int32_t get_offset_of_IsBuildMono_34() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___IsBuildMono_34)); }
	inline bool get_IsBuildMono_34() const { return ___IsBuildMono_34; }
	inline bool* get_address_of_IsBuildMono_34() { return &___IsBuildMono_34; }
	inline void set_IsBuildMono_34(bool value)
	{
		___IsBuildMono_34 = value;
	}

	inline static int32_t get_offset_of_IsBuildDotNet_35() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___IsBuildDotNet_35)); }
	inline bool get_IsBuildDotNet_35() const { return ___IsBuildDotNet_35; }
	inline bool* get_address_of_IsBuildDotNet_35() { return &___IsBuildDotNet_35; }
	inline void set_IsBuildDotNet_35(bool value)
	{
		___IsBuildDotNet_35 = value;
	}

	inline static int32_t get_offset_of_IsBuildIL2CPP_36() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___IsBuildIL2CPP_36)); }
	inline bool get_IsBuildIL2CPP_36() const { return ___IsBuildIL2CPP_36; }
	inline bool* get_address_of_IsBuildIL2CPP_36() { return &___IsBuildIL2CPP_36; }
	inline void set_IsBuildIL2CPP_36(bool value)
	{
		___IsBuildIL2CPP_36 = value;
	}

	inline static int32_t get_offset_of_CurrentPlatform_37() { return static_cast<int32_t>(offsetof(UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF, ___CurrentPlatform_37)); }
	inline int32_t get_CurrentPlatform_37() const { return ___CurrentPlatform_37; }
	inline int32_t* get_address_of_CurrentPlatform_37() { return &___CurrentPlatform_37; }
	inline void set_CurrentPlatform_37(int32_t value)
	{
		___CurrentPlatform_37 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5  : public Win32Exception_tB05BE97AB4CADD54DF96C0109689F0ECA7517668
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5, ___m_EndPoint_20)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UdpKit.UdpIPv4Address[]
struct UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  m_Items[1];

public:
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * m_Items[1];

public:
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * m_Items[1];

public:
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * value)
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


// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7_gshared (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB_gshared (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3_gshared (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A  HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared_inline (Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E_gshared (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * __this, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared (Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared (Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251_gshared (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84BE641CF1EEEED5502AF42082957B2B9C6299D6_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7ECB323A0EE88B43F0CCCF402D23CCFE74624F25_gshared (HashSet_1_t5C091FE05728B3E5BE3A7B748395C8E3AD64B376 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_gshared (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_gshared (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_gshared_inline (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UdpKit.UdpIPv4Address>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D_gshared (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07_gshared (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888_gshared (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_gshared_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123  List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9_gshared (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_gshared_inline (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71_gshared (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9_gshared (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E_gshared (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_gshared_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9_gshared (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_gshared_inline (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method);

// System.Void UdpKit.Platform.UdpPlatformInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformInterface__ctor_m424D8568C26B87783BC6A9F746E123B852B78007 (UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5 * __this, const RuntimeMethod* method);
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseName(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_ParseName_mEF92552DD388A53EE20111FCBD976F9425C11EFC (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method);
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseLinkType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_ParseLinkType_m2DC31E5E3D838DF2D21B229F4F8D72FC41DF547F (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method);
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::ParsePhysicalAddress(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DotNetInterface_ParsePhysicalAddress_mE6149AEBAC543666075F4991FD8B8CCA2CFB3717 (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method);
// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* PhysicalAddress_GetAddressBytes_mF762AE2FAF32672DF5B1689ACA467D02C54FFCA1 (PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor()
inline void List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7 (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, const RuntimeMethod*))List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7_gshared)(__this, method);
}
// System.String System.Net.Dns::GetHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2 (const RuntimeMethod* method);
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  UdpIPv6Address_Parse_m38BF0D7527BF07CAF4AC3A2B7769D643495D8AEA (String_t* ___address0, const RuntimeMethod* method);
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv6Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m6C335BDF13E9D24EEE08FA442DF214A83A7DAECF (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * __this, UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  ___address0, uint16_t ___port1, const RuntimeMethod* method);
// System.Boolean UdpKit.UdpEndPoint::get_IsLan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpEndPoint_get_IsLan_mBAB1D3278F3B893E7E4DED705A5C989AD5B0BB1F (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::Add(!0)
inline void List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 , const RuntimeMethod*))List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB_gshared)(__this, ___item0, method);
}
// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  UdpIPv4Address_Parse_m69682A82AC17EE2F4567F390A13FEEC5F330996F (String_t* ___address0, const RuntimeMethod* method);
// System.Void UdpKit.UdpEndPoint::.ctor(UdpKit.UdpIPv4Address,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___address0, uint16_t ___port1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::.ctor()
inline void HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3 (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 *, const RuntimeMethod*))HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3_gshared)(__this, method);
}
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1 (const RuntimeMethod* method);
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ValidType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_ValidType_mF3A71610E8A0F8B456C9141C33CAB4C9A3E941FB (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::GetIpsFromNetworkInterface(System.Net.NetworkInformation.NetworkInterface,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * DotNetPlatformUtils_GetIpsFromNetworkInterface_m6FD32421173DAC6F0B849334B0FDB0B5A3EEB639 (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, bool ___ipv61, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808  HashSet_1_GetEnumerator_m33A31CD17BC783D23B7C9DBF44ACAA0D5688674E (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808  (*) (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *, const RuntimeMethod*))HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_mB9330B9B81C2B4904112A5C826A4A94FFF210D96_inline (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *, const RuntimeMethod*))Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpEndPoint>::Add(!0)
inline bool HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * __this, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 *, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 , const RuntimeMethod*))HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCEBE1C1E2344F7734AAD0BC56B41AC6ACC1242F1 (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *, const RuntimeMethod*))Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m60686DE4C9CF8735F80BB42A12CBB23D7E0507CD (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *, const RuntimeMethod*))Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251 (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *, const RuntimeMethod*))HashSet_1__ctor_m84BE641CF1EEEED5502AF42082957B2B9C6299D6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9 (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *, String_t*, const RuntimeMethod*))HashSet_1_Add_m7ECB323A0EE88B43F0CCCF402D23CCFE74624F25_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor(System.Collections.Generic.IEqualityComparer`1<!0>)
inline void HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508 (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_gshared)(__this, ___comparer0, method);
}
// UdpKit.UdpIPv4Address UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertAddress(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  DotNetPlatformUtils_ConvertAddress_m4AD80973F8B61E122DA12D441F5E864FA6DFBDA6 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::Add(!0)
inline bool HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 , const RuntimeMethod*))HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_gshared)(__this, ___item0, method);
}
// System.Void UdpKit.UdpLog::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_mF7BDF23861A3D81CBB7E1BF4E493FFF78277AE1C (UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * __this, uint8_t ___a0, uint8_t ___b1, uint8_t ___c2, uint8_t ___d3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::get_Count()
inline int32_t HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_inline (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *, const RuntimeMethod*))HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_gshared_inline)(__this, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UdpKit.UdpIPv4Address>(System.Collections.Generic.IEnumerable`1<!!0>)
inline UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_gshared)(___source0, method);
}
// System.Void UdpKit.Platform.DotNet.Utils.DotNetInterface::.ctor(System.Net.NetworkInformation.NetworkInterface,UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetInterface__ctor_m439F7B459BD4A0DDC0BA869DFCDA97B25C1E4582 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___gw1, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___uni2, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___multi3, const RuntimeMethod* method);
// UdpKit.UdpEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  DotNetPlatformUtils_ConvertEndPoint_mD2712D345083AB732DBFE819DC64FB570A960FC9 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endpoint0, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// System.Void UdpKit.UdpIPv6Address::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv6Address__ctor_m4FCDF2FDA0CB47AC6E09A924326C8192A39C0735 (UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___address0, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method);
// System.Int64 System.Net.IPAddress::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IPAddress_get_Address_m8B052E70BBFB8DC8034EB8D75EA9BB948859D31B (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method);
// System.Void UdpKit.UdpIPv4Address::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpIPv4Address__ctor_m8A223CDB32B909C1D0B38BEC838D482F6350D588 (UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * __this, int64_t ___addr0, const RuntimeMethod* method);
// System.Byte[] UdpKit.UdpIPv6Address::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* UdpIPv6Address_get_Bytes_m5A19483CB08A7624B32F18E2D026EC2CF9179365 (UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE * __this, const RuntimeMethod* method);
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mECE00C2B3299E40127879FE33EFD628C9375F817 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___address0, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address>::.ctor()
inline void HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *, const RuntimeMethod*))HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D_gshared)(__this, method);
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::IsValidInterface(System.Net.NetworkInformation.IPInterfaceProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_IsValidInterface_m306EC0C94320FF9A600F16427CEFEA22F156F2A0 (IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * ___p0, const RuntimeMethod* method);
// System.Boolean UdpKit.UdpIPv4Address::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UdpIPv4Address_get_IsPrivate_m9B851B953B995F791109679DEA04393DC17BF86E (UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UdpKit.Platform.UdpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform__ctor_m45E7694A304A4C13EB201F6DFFE58E5E54FE006F (UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1 * __this, const RuntimeMethod* method);
// System.UInt32 UdpKit.Platform.DotNetPlatform/PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::.ctor()
inline void List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07 (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *, const RuntimeMethod*))List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::FindBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888 (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Count()
inline int32_t List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *, const RuntimeMethod*))List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::GetEnumerator()
inline Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123  List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9 (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123  (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, const RuntimeMethod*))List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::get_Current()
inline UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_inline (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method)
{
	return ((  UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  (*) (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *, const RuntimeMethod*))Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::Add(!0)
inline void List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71 (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *, UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 , const RuntimeMethod*))List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::MoveNext()
inline bool Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9 (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *, const RuntimeMethod*))Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UdpKit.UdpEndPoint>::Dispose()
inline void Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *, const RuntimeMethod*))Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UdpKit.UdpIPv4Address>::get_Item(System.Int32)
inline UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  (*) (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_gshared_inline)(__this, ___index0, method);
}
// System.Void UdpKit.Platform.DotNetSocket::.ctor(UdpKit.Platform.DotNetPlatform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket__ctor_m7462A56CA5CCD9B2D23A377429132FD8A2C10019 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * ___platform0, bool ___ipv61, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>::.ctor()
inline void List_1__ctor_mB98FDEED1AF1A39505BBCF1E429752EA8FFB6D23 (List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UdpKit.Platform.DotNet.Utils.DotNetInterface UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ParseInterface(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * DotNetPlatformUtils_ParseInterface_m5A12AD4B5B5E7B3DA4998EF3190A357AE64CAE3E (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface>::Add(!0)
inline void List_1_Add_mA6ECAFF0E2D5C92F232A15CCDAE7584FE5BC0CD8 (List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * __this, UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB *, UdpPlatformInterface_tE5DD06023288B95991ABF5B6E550DDED5FA2CEC5 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void UdpKit.UdpLog::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpLog_Error_mAC4FD24FE442F809DE534607D2A20DA515C12D6C (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostAddressesViaHostName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * DotNetPlatformUtils_ResolveHostAddressesViaHostName_m3E3F298D565DFAB801858779107176D25E2E7D36 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9 (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<UdpKit.UdpEndPoint>::get_Count()
inline int32_t List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_inline (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, const RuntimeMethod*))List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostLocalAddressViaNetworkInterfaces(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_mFD28ED92D965DB13CDA21028B1E19753346673D6 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.UdpPlatform::ResolveHostAddresses(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * UdpPlatform_ResolveHostAddresses_mD8C04DF3DFFEA18151BE95C5BEB95EB0C45DC757 (UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1 * __this, int32_t ___port0, bool ___ipv61, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UdpKit.Platform.UdpPlatformSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket__ctor_m35EFA528C20E303F69BE87BB7141C5804186A450 (UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_SetSocketOption_m545931224E0FBC0073E60A755F70180105A4CBC0 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___optionLevel0, int32_t ___optionName1, bool ___optionValue2, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UdpKit.Platform.DotNetSocket::HandleSocketException(System.Net.Sockets.SocketException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * ___exn0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_IsBound_mAA2B548E5DBCC2B693A6DAA612648199C6291A8A_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void UdpKit.Platform.DotNetSocket::VerifyIsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_EnableBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_get_EnableBroadcast_m9473111CD8081B4C7B4741F2EA18D68A024FD7D9 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Net.IPEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14 (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___localEP0, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// UdpKit.UdpEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26 (EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___endpoint0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m7115D6E24DEF6BD3BA6A476E18C36D023F2EBEBA (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** ___remoteEP4, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m95926F192663BB81CC267386B93F6D8E57FDF434 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEP4, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824 (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1F94EA1226068BD1B7EAA1B836A59C99979F579E (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void UdpKit.Platform.DotNet.Utils.DotNetInterface::.ctor(System.Net.NetworkInformation.NetworkInterface,UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[],UdpKit.UdpIPv4Address[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetInterface__ctor_m439F7B459BD4A0DDC0BA869DFCDA97B25C1E4582 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___gw1, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___uni2, UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* ___multi3, const RuntimeMethod* method)
{
	{
		UdpPlatformInterface__ctor_m424D8568C26B87783BC6A9F746E123B852B78007(__this, /*hidden argument*/NULL);
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_0 = ___n0;
		String_t* L_1 = DotNetInterface_ParseName_mEF92552DD388A53EE20111FCBD976F9425C11EFC(L_0, /*hidden argument*/NULL);
		__this->set_name_1(L_1);
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_2 = ___n0;
		int32_t L_3 = DotNetInterface_ParseLinkType_m2DC31E5E3D838DF2D21B229F4F8D72FC41DF547F(L_2, /*hidden argument*/NULL);
		__this->set_linkType_2(L_3);
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_4 = ___n0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = DotNetInterface_ParsePhysicalAddress_mE6149AEBAC543666075F4991FD8B8CCA2CFB3717(L_4, /*hidden argument*/NULL);
		__this->set_physicalAddress_3(L_5);
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_6 = ___gw1;
		__this->set_gatewayAddresses_4(L_6);
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_7 = ___uni2;
		__this->set_unicastAddresses_5(L_7);
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_8 = ___multi3;
		__this->set_multicastAddresses_6(L_8);
		return;
	}
}
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_get_Name_m363C46F35400958CD01AC50969EDC496AE005CF6 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_name_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::get_LinkType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_get_LinkType_m4A6EBB672C68F337D4524628F47CC18F62412D17 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_linkType_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_PhysicalAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DotNetInterface_get_PhysicalAddress_m5909A7510AEB615A2741B855A7B1D768D841DDE4 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_physicalAddress_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_GatewayAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* DotNetInterface_get_GatewayAddresses_mC34A1514707408596E2CF9488E45448F34DDDCEC (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_0 = __this->get_gatewayAddresses_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_UnicastAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* DotNetInterface_get_UnicastAddresses_mDBC99C4EB378424955BF5AC2DABA62DE6A33DAF7 (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_0 = __this->get_unicastAddresses_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpIPv4Address[] UdpKit.Platform.DotNet.Utils.DotNetInterface::get_MulticastAddresses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* DotNetInterface_get_MulticastAddresses_m1CDEBC6FEB692B2769344DDCC0E578673044F39B (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * __this, const RuntimeMethod* method)
{
	UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* V_0 = NULL;
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_0 = __this->get_multicastAddresses_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseName(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetInterface_ParseName_mEF92552DD388A53EE20111FCBD976F9425C11EFC (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetInterface_ParseName_mEF92552DD388A53EE20111FCBD976F9425C11EFC_MetadataUsageId);
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
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_0 = ___n0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Net.NetworkInformation.NetworkInterface::get_Description() */, L_0);
		V_0 = L_1;
		goto IL_0015;
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
		V_0 = _stringLiteral25BA44EC3B391BA4CE5FBBD2979635E254775E7D;
		goto IL_0015;
	} // end catch (depth: 1)

IL_0015:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] UdpKit.Platform.DotNet.Utils.DotNetInterface::ParsePhysicalAddress(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DotNetInterface_ParsePhysicalAddress_mE6149AEBAC543666075F4991FD8B8CCA2CFB3717 (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetInterface_ParsePhysicalAddress_mE6149AEBAC543666075F4991FD8B8CCA2CFB3717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
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
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_0 = ___n0;
		NullCheck(L_0);
		PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * L_1 = VirtFuncInvoker0< PhysicalAddress_tCF033BF11EA5580F9CD4F11571E5679884D29819 * >::Invoke(14 /* System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.NetworkInterface::GetPhysicalAddress() */, L_0);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = PhysicalAddress_GetAddressBytes_mF762AE2FAF32672DF5B1689ACA467D02C54FFCA1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0010;
		throw e;
	}

CATCH_0010:
	{ // begin catch(System.Object)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_3;
		goto IL_001b;
	} // end catch (depth: 1)

IL_001b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		return L_4;
	}
}
// UdpKit.Platform.UdpLinkType UdpKit.Platform.DotNet.Utils.DotNetInterface::ParseLinkType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetInterface_ParseLinkType_m2DC31E5E3D838DF2D21B229F4F8D72FC41DF547F (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)62))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)26))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_001c;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)62))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0040;
	}

IL_0023:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)69))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)71))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)117))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0040;
	}

IL_0038:
	{
		V_2 = 2;
		goto IL_0044;
	}

IL_003c:
	{
		V_2 = 1;
		goto IL_0044;
	}

IL_0040:
	{
		V_2 = 0;
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_10 = V_2;
		return L_10;
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
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostAddressesViaHostName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * DotNetPlatformUtils_ResolveHostAddressesViaHostName_m3E3F298D565DFAB801858779107176D25E2E7D36 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_ResolveHostAddressesViaHostName_m3E3F298D565DFAB801858779107176D25E2E7D36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * V_0 = NULL;
	IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * V_1 = NULL;
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* V_2 = NULL;
	int32_t V_3 = 0;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_4 = NULL;
	bool V_5 = false;
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_0 = (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *)il2cpp_codegen_object_new(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_il2cpp_TypeInfo_var);
		List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7(L_0, /*hidden argument*/List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Dns_t0E6B5B77C654107F106B577875FE899BAF8ADCF9_il2cpp_TypeInfo_var);
			String_t* L_1 = Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2(/*hidden argument*/NULL);
			IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_2 = Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38(L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_3 = V_1;
			NullCheck(L_3);
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_4 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			V_3 = 0;
			goto IL_00b8;
		}

IL_0022:
		{
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_5 = V_2;
			int32_t L_6 = V_3;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_4 = L_8;
			bool L_9 = ___ipv61;
			if (!L_9)
			{
				goto IL_0038;
			}
		}

IL_002b:
		{
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_10 = V_4;
			NullCheck(L_10);
			int32_t L_11 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_10, /*hidden argument*/NULL);
			G_B5_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)23)))? 1 : 0);
			goto IL_0039;
		}

IL_0038:
		{
			G_B5_0 = 0;
		}

IL_0039:
		{
			V_5 = (bool)G_B5_0;
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_006e;
			}
		}

IL_003f:
		{
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_13 = V_4;
			NullCheck(L_13);
			String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			IL2CPP_RUNTIME_CLASS_INIT(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_il2cpp_TypeInfo_var);
			UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  L_15 = UdpIPv6Address_Parse_m38BF0D7527BF07CAF4AC3A2B7769D643495D8AEA(L_14, /*hidden argument*/NULL);
			int32_t L_16 = ___port0;
			UdpEndPoint__ctor_m6C335BDF13E9D24EEE08FA442DF214A83A7DAECF((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_6), L_15, (uint16_t)(((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
			bool L_17 = UdpEndPoint_get_IsLan_mBAB1D3278F3B893E7E4DED705A5C989AD5B0BB1F((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_6), /*hidden argument*/NULL);
			V_7 = L_17;
			bool L_18 = V_7;
			if (!L_18)
			{
				goto IL_006d;
			}
		}

IL_0062:
		{
			List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_19 = V_0;
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_20 = V_6;
			NullCheck(L_19);
			List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB(L_19, L_20, /*hidden argument*/List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB_RuntimeMethod_var);
		}

IL_006d:
		{
		}

IL_006e:
		{
			bool L_21 = ___ipv61;
			if (L_21)
			{
				goto IL_007d;
			}
		}

IL_0071:
		{
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_22 = V_4;
			NullCheck(L_22);
			int32_t L_23 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_22, /*hidden argument*/NULL);
			G_B12_0 = ((((int32_t)L_23) == ((int32_t)2))? 1 : 0);
			goto IL_007e;
		}

IL_007d:
		{
			G_B12_0 = 0;
		}

IL_007e:
		{
			V_8 = (bool)G_B12_0;
			bool L_24 = V_8;
			if (!L_24)
			{
				goto IL_00b3;
			}
		}

IL_0084:
		{
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_27 = UdpIPv4Address_Parse_m69682A82AC17EE2F4567F390A13FEEC5F330996F(L_26, /*hidden argument*/NULL);
			int32_t L_28 = ___port0;
			UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_9), L_27, (uint16_t)(((int32_t)((uint16_t)L_28))), /*hidden argument*/NULL);
			bool L_29 = UdpEndPoint_get_IsLan_mBAB1D3278F3B893E7E4DED705A5C989AD5B0BB1F((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_9), /*hidden argument*/NULL);
			V_10 = L_29;
			bool L_30 = V_10;
			if (!L_30)
			{
				goto IL_00b2;
			}
		}

IL_00a7:
		{
			List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_31 = V_0;
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_32 = V_9;
			NullCheck(L_31);
			List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB(L_31, L_32, /*hidden argument*/List_1_Add_m8905C9D8476474164D3BEE050C698BED171BB9CB_RuntimeMethod_var);
		}

IL_00b2:
		{
		}

IL_00b3:
		{
			int32_t L_33 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_00b8:
		{
			int32_t L_34 = V_3;
			IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_35 = V_2;
			NullCheck(L_35);
			if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))))
			{
				goto IL_0022;
			}
		}

IL_00c1:
		{
			goto IL_00c9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c4;
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.Object)
		goto IL_00c9;
	} // end catch (depth: 1)

IL_00c9:
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_36 = V_0;
		V_11 = L_36;
		goto IL_00ce;
	}

IL_00ce:
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_37 = V_11;
		return L_37;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ResolveHostLocalAddressViaNetworkInterfaces(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_mFD28ED92D965DB13CDA21028B1E19753346673D6 (int32_t ___port0, bool ___ipv61, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_mFD28ED92D965DB13CDA21028B1E19753346673D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * V_0 = NULL;
	NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808  V_6;
	memset((&V_6), 0, sizeof(V_6));
	String_t* V_7 = NULL;
	bool V_8 = false;
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Exception_t * V_14 = NULL;
	Exception_t * V_15 = NULL;
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * L_0 = (HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 *)il2cpp_codegen_object_new(HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3(L_0, /*hidden argument*/HashSet_1__ctor_mF19EF30745BE76F8FCD9F3708ED94B9F7F03F1E3_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_1 = NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1(/*hidden argument*/NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_0108;
		}

IL_0016:
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}

IL_001b:
		try
		{ // begin try (depth: 2)
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0033;
				}
			}

IL_0025:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				G_B6_0 = ((((int32_t)((((int32_t)L_9) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0034;
			}

IL_0033:
			{
				G_B6_0 = 0;
			}

IL_0034:
			{
				V_4 = (bool)G_B6_0;
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0040;
				}
			}

IL_003a:
			{
				goto IL_0104;
			}

IL_0040:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_11 = V_3;
				bool L_12 = DotNetPlatformUtils_ValidType_mF3A71610E8A0F8B456C9141C33CAB4C9A3E941FB(L_11, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				bool L_13 = V_5;
				if (!L_13)
				{
					goto IL_0055;
				}
			}

IL_004f:
			{
				goto IL_0104;
			}

IL_0055:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_14 = V_3;
				bool L_15 = ___ipv61;
				HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_16 = DotNetPlatformUtils_GetIpsFromNetworkInterface_m6FD32421173DAC6F0B849334B0FDB0B5A3EEB639(L_14, L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808  L_17 = HashSet_1_GetEnumerator_m33A31CD17BC783D23B7C9DBF44ACAA0D5688674E(L_16, /*hidden argument*/HashSet_1_GetEnumerator_m33A31CD17BC783D23B7C9DBF44ACAA0D5688674E_RuntimeMethod_var);
				V_6 = L_17;
			}

IL_0064:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00d8;
				}

IL_0066:
				{
					String_t* L_18 = Enumerator_get_Current_mB9330B9B81C2B4904112A5C826A4A94FFF210D96_inline((Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *)(&V_6), /*hidden argument*/Enumerator_get_Current_mB9330B9B81C2B4904112A5C826A4A94FFF210D96_RuntimeMethod_var);
					V_7 = L_18;
					bool L_19 = ___ipv61;
					V_8 = L_19;
					bool L_20 = V_8;
					if (!L_20)
					{
						goto IL_00a3;
					}
				}

IL_0077:
				{
					String_t* L_21 = V_7;
					IL2CPP_RUNTIME_CLASS_INIT(UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE_il2cpp_TypeInfo_var);
					UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  L_22 = UdpIPv6Address_Parse_m38BF0D7527BF07CAF4AC3A2B7769D643495D8AEA(L_21, /*hidden argument*/NULL);
					int32_t L_23 = ___port0;
					UdpEndPoint__ctor_m6C335BDF13E9D24EEE08FA442DF214A83A7DAECF((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_9), L_22, (uint16_t)(((int32_t)((uint16_t)L_23))), /*hidden argument*/NULL);
					bool L_24 = UdpEndPoint_get_IsLan_mBAB1D3278F3B893E7E4DED705A5C989AD5B0BB1F((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_9), /*hidden argument*/NULL);
					V_10 = L_24;
					bool L_25 = V_10;
					if (!L_25)
					{
						goto IL_00a0;
					}
				}

IL_0095:
				{
					HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * L_26 = V_0;
					UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_27 = V_9;
					NullCheck(L_26);
					HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E(L_26, L_27, /*hidden argument*/HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E_RuntimeMethod_var);
				}

IL_00a0:
				{
					goto IL_00d7;
				}

IL_00a3:
				{
					bool L_28 = ___ipv61;
					V_11 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
					bool L_29 = V_11;
					if (!L_29)
					{
						goto IL_00d7;
					}
				}

IL_00ad:
				{
					String_t* L_30 = V_7;
					IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_31 = UdpIPv4Address_Parse_m69682A82AC17EE2F4567F390A13FEEC5F330996F(L_30, /*hidden argument*/NULL);
					int32_t L_32 = ___port0;
					UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_12), L_31, (uint16_t)(((int32_t)((uint16_t)L_32))), /*hidden argument*/NULL);
					bool L_33 = UdpEndPoint_get_IsLan_mBAB1D3278F3B893E7E4DED705A5C989AD5B0BB1F((UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)(&V_12), /*hidden argument*/NULL);
					V_13 = L_33;
					bool L_34 = V_13;
					if (!L_34)
					{
						goto IL_00d6;
					}
				}

IL_00cb:
				{
					HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * L_35 = V_0;
					UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_36 = V_12;
					NullCheck(L_35);
					HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E(L_35, L_36, /*hidden argument*/HashSet_1_Add_m07203524FEA6E5409F17AC8E9073912B1509A56E_RuntimeMethod_var);
				}

IL_00d6:
				{
				}

IL_00d7:
				{
				}

IL_00d8:
				{
					bool L_37 = Enumerator_MoveNext_mCEBE1C1E2344F7734AAD0BC56B41AC6ACC1242F1((Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mCEBE1C1E2344F7734AAD0BC56B41AC6ACC1242F1_RuntimeMethod_var);
					if (L_37)
					{
						goto IL_0066;
					}
				}

IL_00e1:
				{
					IL2CPP_LEAVE(0xF2, FINALLY_00e3);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00e3;
			}

FINALLY_00e3:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m60686DE4C9CF8735F80BB42A12CBB23D7E0507CD((Enumerator_t346CC8E8FDCB7BD6271A70FFEB4343D39EE63808 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m60686DE4C9CF8735F80BB42A12CBB23D7E0507CD_RuntimeMethod_var);
				IL2CPP_END_FINALLY(227)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(227)
			{
				IL2CPP_JUMP_TBL(0xF2, IL_00f2)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_00f2:
			{
				goto IL_0103;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00f5;
			throw e;
		}

CATCH_00f5:
		{ // begin catch(System.Exception)
			V_14 = ((Exception_t *)__exception_local);
			Exception_t * L_38 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_38, /*hidden argument*/NULL);
			goto IL_0103;
		} // end catch (depth: 2)

IL_0103:
		{
		}

IL_0104:
		{
			int32_t L_39 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		}

IL_0108:
		{
			int32_t L_40 = V_2;
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_41 = V_1;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))))
			{
				goto IL_0016;
			}
		}

IL_0111:
		{
			goto IL_0122;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0114;
		throw e;
	}

CATCH_0114:
	{ // begin catch(System.Exception)
		V_15 = ((Exception_t *)__exception_local);
		Exception_t * L_42 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_42, /*hidden argument*/NULL);
		goto IL_0122;
	} // end catch (depth: 1)

IL_0122:
	{
		HashSet_1_t18C16A3103084D768D02BCD479155DB14CEA4552 * L_43 = V_0;
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_44 = (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *)il2cpp_codegen_object_new(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_il2cpp_TypeInfo_var);
		List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251(L_44, L_43, /*hidden argument*/List_1__ctor_m202FC482D6401EA9F3B6E99FDF2175E9EF713251_RuntimeMethod_var);
		V_16 = L_44;
		goto IL_012c;
	}

IL_012c:
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_45 = V_16;
		return L_45;
	}
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ValidType(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_ValidType_mF3A71610E8A0F8B456C9141C33CAB4C9A3E941FB (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_0 = ___n0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)26))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0015;
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)26))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)69))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)62))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)69))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)71))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_003c;
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)117))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0047;
	}

IL_0043:
	{
		V_2 = (bool)1;
		goto IL_004b;
	}

IL_0047:
	{
		V_2 = (bool)0;
		goto IL_004b;
	}

IL_004b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Collections.Generic.HashSet`1<System.String> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::GetIpsFromNetworkInterface(System.Net.NetworkInformation.NetworkInterface,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * DotNetPlatformUtils_GetIpsFromNetworkInterface_m6FD32421173DAC6F0B849334B0FDB0B5A3EEB639 (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, bool ___ipv61, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_GetIpsFromNetworkInterface_m6FD32421173DAC6F0B849334B0FDB0B5A3EEB639_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * V_0 = NULL;
	IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * V_1 = NULL;
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_0 = (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *)il2cpp_codegen_object_new(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E(L_0, /*hidden argument*/HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_1 = ___n0;
		NullCheck(L_1);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_2 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_1);
		V_1 = L_2;
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0012;
		throw e;
	}

CATCH_0012:
	{ // begin catch(System.Object)
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_3 = V_0;
		V_2 = L_3;
		goto IL_00e7;
	} // end catch (depth: 1)

IL_001b:
	{
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_4 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_00e3;
		}
	}
	{
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_6 = V_1;
			NullCheck(L_6);
			UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_7 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_6);
			NullCheck(L_7);
			RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_7);
			V_4 = L_8;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00b6;
			}

IL_0038:
			{
				RuntimeObject* L_9 = V_4;
				NullCheck(L_9);
				UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_10 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_9);
				V_5 = L_10;
			}

IL_0042:
			try
			{ // begin try (depth: 3)
				{
					bool L_11 = ___ipv61;
					if (L_11)
					{
						goto IL_0057;
					}
				}

IL_0046:
				{
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_12 = V_5;
					NullCheck(L_12);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_13 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_12);
					NullCheck(L_13);
					int32_t L_14 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_13, /*hidden argument*/NULL);
					G_B11_0 = ((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
					goto IL_0058;
				}

IL_0057:
				{
					G_B11_0 = 0;
				}

IL_0058:
				{
					V_6 = (bool)G_B11_0;
					bool L_15 = V_6;
					if (!L_15)
					{
						goto IL_0073;
					}
				}

IL_005e:
				{
					HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_16 = V_0;
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_17 = V_5;
					NullCheck(L_17);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_18 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_17);
					NullCheck(L_18);
					String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
					NullCheck(L_16);
					HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_16, L_19, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
				}

IL_0073:
				{
					bool L_20 = ___ipv61;
					if (!L_20)
					{
						goto IL_0088;
					}
				}

IL_0076:
				{
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_21 = V_5;
					NullCheck(L_21);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_22 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_21);
					NullCheck(L_22);
					int32_t L_23 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_22, /*hidden argument*/NULL);
					G_B16_0 = ((((int32_t)L_23) == ((int32_t)((int32_t)23)))? 1 : 0);
					goto IL_0089;
				}

IL_0088:
				{
					G_B16_0 = 0;
				}

IL_0089:
				{
					V_7 = (bool)G_B16_0;
					bool L_24 = V_7;
					if (!L_24)
					{
						goto IL_00a4;
					}
				}

IL_008f:
				{
					HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_25 = V_0;
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_26 = V_5;
					NullCheck(L_26);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_27 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_26);
					NullCheck(L_27);
					String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
					NullCheck(L_25);
					HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_25, L_28, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
				}

IL_00a4:
				{
					goto IL_00b5;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_00a7;
				throw e;
			}

CATCH_00a7:
			{ // begin catch(System.Exception)
				V_8 = ((Exception_t *)__exception_local);
				Exception_t * L_29 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
				Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_29, /*hidden argument*/NULL);
				goto IL_00b5;
			} // end catch (depth: 3)

IL_00b5:
			{
			}

IL_00b6:
			{
				RuntimeObject* L_30 = V_4;
				NullCheck(L_30);
				bool L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_0038;
				}
			}

IL_00c2:
			{
				IL2CPP_LEAVE(0xD1, FINALLY_00c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00c4;
		}

FINALLY_00c4:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_32 = V_4;
				if (!L_32)
				{
					goto IL_00d0;
				}
			}

IL_00c8:
			{
				RuntimeObject* L_33 = V_4;
				NullCheck(L_33);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_33);
			}

IL_00d0:
			{
				IL2CPP_END_FINALLY(196)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(196)
		{
			IL2CPP_JUMP_TBL(0xD1, IL_00d1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00d1:
		{
			goto IL_00e2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d4;
		throw e;
	}

CATCH_00d4:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		Exception_t * L_34 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_34, /*hidden argument*/NULL);
		goto IL_00e2;
	} // end catch (depth: 1)

IL_00e2:
	{
	}

IL_00e3:
	{
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_35 = V_0;
		V_2 = L_35;
		goto IL_00e7;
	}

IL_00e7:
	{
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_36 = V_2;
		return L_36;
	}
}
// UdpKit.Platform.DotNet.Utils.DotNetInterface UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ParseInterface(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * DotNetPlatformUtils_ParseInterface_m5A12AD4B5B5E7B3DA4998EF3190A357AE64CAE3E (NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_ParseInterface_m5A12AD4B5B5E7B3DA4998EF3190A357AE64CAE3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * V_0 = NULL;
	HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * V_1 = NULL;
	HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * V_2 = NULL;
	IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * V_3 = NULL;
	DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_7 = NULL;
	bool V_8 = false;
	Exception_t * V_9 = NULL;
	Exception_t * V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_12 = NULL;
	bool V_13 = false;
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t * V_15 = NULL;
	Exception_t * V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324 * V_18 = NULL;
	bool V_19 = false;
	Exception_t * V_20 = NULL;
	Exception_t * V_21 = NULL;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 17);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B55_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_il2cpp_TypeInfo_var);
		Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * L_0 = ((Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_il2cpp_TypeInfo_var))->get_Instance_0();
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_1 = (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *)il2cpp_codegen_object_new(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508(L_1, L_0, /*hidden argument*/HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_RuntimeMethod_var);
		V_0 = L_1;
		Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * L_2 = ((Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_il2cpp_TypeInfo_var))->get_Instance_0();
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_3 = (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *)il2cpp_codegen_object_new(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508(L_3, L_2, /*hidden argument*/HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_RuntimeMethod_var);
		V_1 = L_3;
		Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1 * L_4 = ((Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t1D6B8E14764F34B0648BBE36957A46C64A21B3A1_il2cpp_TypeInfo_var))->get_Instance_0();
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_5 = (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *)il2cpp_codegen_object_new(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508(L_5, L_4, /*hidden argument*/HashSet_1__ctor_m8BE220715ACD608E6357D2F408A3FB9164E6E508_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = (IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD *)NULL;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_6 = ___n0;
		NullCheck(L_6);
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_7 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_6);
		V_3 = L_7;
		goto IL_0039;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Object)
		V_4 = (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 *)NULL;
		goto IL_026a;
	} // end catch (depth: 1)

IL_0039:
	{
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_8 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_024e;
		}
	}
	{
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_10 = V_3;
			NullCheck(L_10);
			IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * L_11 = VirtFuncInvoker0< IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * >::Invoke(10 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DnsAddresses() */, L_10);
			NullCheck(L_11);
			RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator() */, L_11);
			V_6 = L_12;
		}

IL_0056:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a0;
			}

IL_0058:
			{
				RuntimeObject* L_13 = V_6;
				NullCheck(L_13);
				IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_14 = InterfaceFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>::get_Current() */, IEnumerator_1_t26327603AC5BEFA8EE4D7320F4E10238F70D96A7_il2cpp_TypeInfo_var, L_13);
				V_7 = L_14;
			}

IL_0062:
			try
			{ // begin try (depth: 3)
				{
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_15 = V_7;
					NullCheck(L_15);
					int32_t L_16 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_15, /*hidden argument*/NULL);
					V_8 = (bool)((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
					bool L_17 = V_8;
					if (!L_17)
					{
						goto IL_0083;
					}
				}

IL_0073:
				{
					HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_18 = V_0;
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_19 = V_7;
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_20 = DotNetPlatformUtils_ConvertAddress_m4AD80973F8B61E122DA12D441F5E864FA6DFBDA6(L_19, /*hidden argument*/NULL);
					NullCheck(L_18);
					HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_18, L_20, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
				}

IL_0083:
				{
					goto IL_009f;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0086;
				throw e;
			}

CATCH_0086:
			{ // begin catch(System.Exception)
				V_9 = ((Exception_t *)__exception_local);
				Exception_t * L_21 = V_9;
				NullCheck(L_21);
				String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
				IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
				UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_22, L_23, /*hidden argument*/NULL);
				goto IL_009f;
			} // end catch (depth: 3)

IL_009f:
			{
			}

IL_00a0:
			{
				RuntimeObject* L_24 = V_6;
				NullCheck(L_24);
				bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_24);
				if (L_25)
				{
					goto IL_0058;
				}
			}

IL_00a9:
			{
				IL2CPP_LEAVE(0xB8, FINALLY_00ab);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ab;
		}

FINALLY_00ab:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_26 = V_6;
				if (!L_26)
				{
					goto IL_00b7;
				}
			}

IL_00af:
			{
				RuntimeObject* L_27 = V_6;
				NullCheck(L_27);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
			}

IL_00b7:
			{
				IL2CPP_END_FINALLY(171)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(171)
		{
			IL2CPP_JUMP_TBL(0xB8, IL_00b8)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00b8:
		{
			goto IL_00d4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bb;
		throw e;
	}

CATCH_00bb:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		Exception_t * L_28 = V_10;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
		UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_29, L_30, /*hidden argument*/NULL);
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00d4:
	{
	}

IL_00d5:
	try
	{ // begin try (depth: 1)
		{
			IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_31 = V_3;
			NullCheck(L_31);
			UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_32 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_31);
			NullCheck(L_32);
			RuntimeObject* L_33 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_32);
			V_11 = L_33;
		}

IL_00e4:
		try
		{ // begin try (depth: 2)
			{
				goto IL_015e;
			}

IL_00e6:
			{
				RuntimeObject* L_34 = V_11;
				NullCheck(L_34);
				UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_35 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_34);
				V_12 = L_35;
			}

IL_00f0:
			try
			{ // begin try (depth: 3)
				{
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_36 = V_12;
					NullCheck(L_36);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_37 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_36);
					NullCheck(L_37);
					int32_t L_38 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_37, /*hidden argument*/NULL);
					V_13 = (bool)((((int32_t)L_38) == ((int32_t)2))? 1 : 0);
					bool L_39 = V_13;
					if (!L_39)
					{
						goto IL_0141;
					}
				}

IL_0106:
				{
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_40 = V_12;
					NullCheck(L_40);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_41 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_40);
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_42 = DotNetPlatformUtils_ConvertAddress_m4AD80973F8B61E122DA12D441F5E864FA6DFBDA6(L_41, /*hidden argument*/NULL);
					V_14 = L_42;
					HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_43 = V_1;
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_44 = V_14;
					NullCheck(L_43);
					HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_43, L_44, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
					HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_45 = V_0;
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_46 = V_14;
					uint8_t L_47 = L_46.get_Byte3_7();
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_48 = V_14;
					uint8_t L_49 = L_48.get_Byte2_6();
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_50 = V_14;
					uint8_t L_51 = L_50.get_Byte1_5();
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_52;
					memset((&L_52), 0, sizeof(L_52));
					UdpIPv4Address__ctor_mF7BDF23861A3D81CBB7E1BF4E493FFF78277AE1C((&L_52), L_47, L_49, L_51, (uint8_t)1, /*hidden argument*/NULL);
					NullCheck(L_45);
					HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_45, L_52, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
				}

IL_0141:
				{
					goto IL_015d;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0144;
				throw e;
			}

CATCH_0144:
			{ // begin catch(System.Exception)
				V_15 = ((Exception_t *)__exception_local);
				Exception_t * L_53 = V_15;
				NullCheck(L_53);
				String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
				IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
				UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_54, L_55, /*hidden argument*/NULL);
				goto IL_015d;
			} // end catch (depth: 3)

IL_015d:
			{
			}

IL_015e:
			{
				RuntimeObject* L_56 = V_11;
				NullCheck(L_56);
				bool L_57 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_56);
				if (L_57)
				{
					goto IL_00e6;
				}
			}

IL_016a:
			{
				IL2CPP_LEAVE(0x179, FINALLY_016c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_016c;
		}

FINALLY_016c:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_58 = V_11;
				if (!L_58)
				{
					goto IL_0178;
				}
			}

IL_0170:
			{
				RuntimeObject* L_59 = V_11;
				NullCheck(L_59);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_59);
			}

IL_0178:
			{
				IL2CPP_END_FINALLY(364)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(364)
		{
			IL2CPP_JUMP_TBL(0x179, IL_0179)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0179:
		{
			goto IL_0195;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_017c;
		throw e;
	}

CATCH_017c:
	{ // begin catch(System.Exception)
		V_16 = ((Exception_t *)__exception_local);
		Exception_t * L_60 = V_16;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_62 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
		UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_61, L_62, /*hidden argument*/NULL);
		goto IL_0195;
	} // end catch (depth: 1)

IL_0195:
	{
	}

IL_0196:
	try
	{ // begin try (depth: 1)
		{
			IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_63 = V_3;
			NullCheck(L_63);
			MulticastIPAddressInformationCollection_t4CCE2660FCD834B927916455C8B064CFA1D2D5BC * L_64 = VirtFuncInvoker0< MulticastIPAddressInformationCollection_t4CCE2660FCD834B927916455C8B064CFA1D2D5BC * >::Invoke(8 /* System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_MulticastAddresses() */, L_63);
			NullCheck(L_64);
			RuntimeObject* L_65 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::GetEnumerator() */, L_64);
			V_17 = L_65;
		}

IL_01a5:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01f9;
			}

IL_01a7:
			{
				RuntimeObject* L_66 = V_17;
				NullCheck(L_66);
				MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324 * L_67 = InterfaceFuncInvoker0< MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.MulticastIPAddressInformation>::get_Current() */, IEnumerator_1_tAB63C22463965C27A54BCA63F02A4602ED6FB5CA_il2cpp_TypeInfo_var, L_66);
				V_18 = L_67;
			}

IL_01b1:
			try
			{ // begin try (depth: 3)
				{
					MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324 * L_68 = V_18;
					NullCheck(L_68);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_69 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_68);
					NullCheck(L_69);
					int32_t L_70 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_69, /*hidden argument*/NULL);
					V_19 = (bool)((((int32_t)L_70) == ((int32_t)2))? 1 : 0);
					bool L_71 = V_19;
					if (!L_71)
					{
						goto IL_01dc;
					}
				}

IL_01c7:
				{
					HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_72 = V_2;
					MulticastIPAddressInformation_tEE431A437A8149A1E125C4D403F03F14997FE324 * L_73 = V_18;
					NullCheck(L_73);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_74 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_73);
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_75 = DotNetPlatformUtils_ConvertAddress_m4AD80973F8B61E122DA12D441F5E864FA6DFBDA6(L_74, /*hidden argument*/NULL);
					NullCheck(L_72);
					HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_72, L_75, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
				}

IL_01dc:
				{
					goto IL_01f8;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_01df;
				throw e;
			}

CATCH_01df:
			{ // begin catch(System.Exception)
				V_20 = ((Exception_t *)__exception_local);
				Exception_t * L_76 = V_20;
				NullCheck(L_76);
				String_t* L_77 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_76);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
				IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
				UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_77, L_78, /*hidden argument*/NULL);
				goto IL_01f8;
			} // end catch (depth: 3)

IL_01f8:
			{
			}

IL_01f9:
			{
				RuntimeObject* L_79 = V_17;
				NullCheck(L_79);
				bool L_80 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_79);
				if (L_80)
				{
					goto IL_01a7;
				}
			}

IL_0202:
			{
				IL2CPP_LEAVE(0x211, FINALLY_0204);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0204;
		}

FINALLY_0204:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_81 = V_17;
				if (!L_81)
				{
					goto IL_0210;
				}
			}

IL_0208:
			{
				RuntimeObject* L_82 = V_17;
				NullCheck(L_82);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_82);
			}

IL_0210:
			{
				IL2CPP_END_FINALLY(516)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(516)
		{
			IL2CPP_JUMP_TBL(0x211, IL_0211)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0211:
		{
			goto IL_022d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0214;
		throw e;
	}

CATCH_0214:
	{ // begin catch(System.Exception)
		V_21 = ((Exception_t *)__exception_local);
		Exception_t * L_83 = V_21;
		NullCheck(L_83);
		String_t* L_84 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_83);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_85 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
		UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_84, L_85, /*hidden argument*/NULL);
		goto IL_022d;
	} // end catch (depth: 1)

IL_022d:
	{
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_86 = V_1;
		NullCheck(L_86);
		int32_t L_87 = HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_inline(L_86, /*hidden argument*/HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_RuntimeMethod_var);
		if (!L_87)
		{
			goto IL_0240;
		}
	}
	{
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_88 = V_0;
		NullCheck(L_88);
		int32_t L_89 = HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_inline(L_88, /*hidden argument*/HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_RuntimeMethod_var);
		G_B55_0 = ((((int32_t)L_89) == ((int32_t)0))? 1 : 0);
		goto IL_0241;
	}

IL_0240:
	{
		G_B55_0 = 1;
	}

IL_0241:
	{
		V_22 = (bool)G_B55_0;
		bool L_90 = V_22;
		if (!L_90)
		{
			goto IL_024d;
		}
	}
	{
		V_4 = (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 *)NULL;
		goto IL_026a;
	}

IL_024d:
	{
	}

IL_024e:
	{
		NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_91 = ___n0;
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_92 = V_0;
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_93 = Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1(L_92, /*hidden argument*/Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_RuntimeMethod_var);
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_94 = V_1;
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_95 = Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1(L_94, /*hidden argument*/Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_RuntimeMethod_var);
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_96 = V_2;
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_97 = Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1(L_96, /*hidden argument*/Enumerable_ToArray_TisUdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_m44C362DA70826C709D8B847928D594C54C0BCCD1_RuntimeMethod_var);
		DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * L_98 = (DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 *)il2cpp_codegen_object_new(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466_il2cpp_TypeInfo_var);
		DotNetInterface__ctor_m439F7B459BD4A0DDC0BA869DFCDA97B25C1E4582(L_98, L_91, L_93, L_95, L_97, /*hidden argument*/NULL);
		V_4 = L_98;
		goto IL_026a;
	}

IL_026a:
	{
		DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * L_99 = V_4;
		return L_99;
	}
}
// UdpKit.UdpEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26 (EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___endpoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_0 = ___endpoint0;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_1 = DotNetPlatformUtils_ConvertEndPoint_mD2712D345083AB732DBFE819DC64FB570A960FC9(((IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)CastclassClass((RuntimeObject*)L_0, IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_2 = V_0;
		return L_2;
	}
}
// UdpKit.UdpEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  DotNetPlatformUtils_ConvertEndPoint_mD2712D345083AB732DBFE819DC64FB570A960FC9 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___endpoint0, const RuntimeMethod* method)
{
	bool V_0 = false;
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_0 = ___endpoint0;
		NullCheck(L_0);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_4 = ___endpoint0;
		NullCheck(L_4);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_5 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2(L_5, /*hidden argument*/NULL);
		UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  L_7;
		memset((&L_7), 0, sizeof(L_7));
		UdpIPv6Address__ctor_m4FCDF2FDA0CB47AC6E09A924326C8192A39C0735((&L_7), L_6, /*hidden argument*/NULL);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_8 = ___endpoint0;
		NullCheck(L_8);
		int32_t L_9 = IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline(L_8, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_10;
		memset((&L_10), 0, sizeof(L_10));
		UdpEndPoint__ctor_m6C335BDF13E9D24EEE08FA442DF214A83A7DAECF((&L_10), L_7, (uint16_t)(((int32_t)((uint16_t)L_9))), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0054;
	}

IL_0034:
	{
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_11 = ___endpoint0;
		NullCheck(L_11);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_12 = IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int64_t L_13 = IPAddress_get_Address_m8B052E70BBFB8DC8034EB8D75EA9BB948859D31B(L_12, /*hidden argument*/NULL);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_14;
		memset((&L_14), 0, sizeof(L_14));
		UdpIPv4Address__ctor_m8A223CDB32B909C1D0B38BEC838D482F6350D588((&L_14), L_13, /*hidden argument*/NULL);
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_15 = ___endpoint0;
		NullCheck(L_15);
		int32_t L_16 = IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline(L_15, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_17;
		memset((&L_17), 0, sizeof(L_17));
		UdpEndPoint__ctor_m225F830BF02B682B159E96B55A3F2A071D0C4F9B((&L_17), L_14, (uint16_t)(((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0054;
	}

IL_0054:
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_18 = V_1;
		return L_18;
	}
}
// UdpKit.UdpIPv4Address UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertAddress(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  DotNetPlatformUtils_ConvertAddress_m4AD80973F8B61E122DA12D441F5E864FA6DFBDA6 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, const RuntimeMethod* method)
{
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = ___address0;
		NullCheck(L_0);
		int64_t L_1 = IPAddress_get_Address_m8B052E70BBFB8DC8034EB8D75EA9BB948859D31B(L_0, /*hidden argument*/NULL);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_2;
		memset((&L_2), 0, sizeof(L_2));
		UdpIPv4Address__ctor_m8A223CDB32B909C1D0B38BEC838D482F6350D588((&L_2), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_3 = V_0;
		return L_3;
	}
}
// System.Net.IPEndPoint UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::ConvertEndPoint(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14 (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * V_2 = NULL;
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_0 = ___endpoint0;
		bool L_1 = L_0.get_IPv6_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_3 = ___endpoint0;
		UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE  L_4 = L_3.get_AddressIPv6_6();
		V_1 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = UdpIPv6Address_get_Bytes_m5A19483CB08A7624B32F18E2D026EC2CF9179365((UdpIPv6Address_t8B6F0383197AA9FAC040E2B0AC0331AB75B7B4EE *)(&V_1), /*hidden argument*/NULL);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_6 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)il2cpp_codegen_object_new(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress__ctor_mECE00C2B3299E40127879FE33EFD628C9375F817(L_6, L_5, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_7 = ___endpoint0;
		uint16_t L_8 = L_7.get_Port_2();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_9 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_9, L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_007f;
	}

IL_002d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = L_10;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_12 = ___endpoint0;
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_13 = L_12.get_Address_5();
		uint8_t L_14 = L_13.get_Byte3_7();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_14);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = L_11;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_16 = ___endpoint0;
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_17 = L_16.get_Address_5();
		uint8_t L_18 = L_17.get_Byte2_6();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = L_15;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_20 = ___endpoint0;
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_21 = L_20.get_Address_5();
		uint8_t L_22 = L_21.get_Byte1_5();
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_22);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = L_19;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_24 = ___endpoint0;
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_25 = L_24.get_Address_5();
		uint8_t L_26 = L_25.get_Byte0_4();
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_26);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_27 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)il2cpp_codegen_object_new(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress__ctor_mECE00C2B3299E40127879FE33EFD628C9375F817(L_27, L_23, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_28 = ___endpoint0;
		uint16_t L_29 = L_28.get_Port_2();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_30 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_30, L_27, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		goto IL_007f;
	}

IL_007f:
	{
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_31 = V_2;
		return L_31;
	}
}
// System.Collections.Generic.HashSet`1<UdpKit.UdpIPv4Address> UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::FindBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * V_0 = NULL;
	NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * V_3 = NULL;
	IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_11 = NULL;
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	RuntimeObject* V_14 = NULL;
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_15 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_16 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_17 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_18 = NULL;
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	Exception_t * V_24 = NULL;
	Exception_t * V_25 = NULL;
	HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * V_26 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 8);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_0 = (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 *)il2cpp_codegen_object_new(HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D(L_0, /*hidden argument*/HashSet_1__ctor_m9FC1ED9CEFC9F1CA2A49142BF0B670F4427DFA5D_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_1 = NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1(/*hidden argument*/NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_020a;
		}

IL_0016:
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}

IL_001b:
		try
		{ // begin try (depth: 2)
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_002e;
				}
			}

IL_0025:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				if ((!(((uint32_t)L_9) == ((uint32_t)4))))
				{
					goto IL_0039;
				}
			}

IL_002e:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_10 = V_3;
				bool L_11 = DotNetPlatformUtils_ValidType_mF3A71610E8A0F8B456C9141C33CAB4C9A3E941FB(L_10, /*hidden argument*/NULL);
				G_B7_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				goto IL_003a;
			}

IL_0039:
			{
				G_B7_0 = 1;
			}

IL_003a:
			{
				V_5 = (bool)G_B7_0;
				bool L_12 = V_5;
				if (!L_12)
				{
					goto IL_0046;
				}
			}

IL_0040:
			{
				goto IL_0206;
			}

IL_0046:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_13 = V_3;
				NullCheck(L_13);
				IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_14 = VirtFuncInvoker0< IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * >::Invoke(7 /* System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.NetworkInterface::GetIPProperties() */, L_13);
				V_4 = L_14;
				IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_15 = V_4;
				bool L_16 = DotNetPlatformUtils_IsValidInterface_m306EC0C94320FF9A600F16427CEFEA22F156F2A0(L_15, /*hidden argument*/NULL);
				V_6 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
				bool L_17 = V_6;
				if (!L_17)
				{
					goto IL_0064;
				}
			}

IL_005e:
			{
				goto IL_0206;
			}

IL_0064:
			{
				IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_18 = V_4;
				NullCheck(L_18);
				UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * L_19 = VirtFuncInvoker0< UnicastIPAddressInformationCollection_tD9E2F18356869DB9726F0B62232F1003F733B423 * >::Invoke(7 /* System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_UnicastAddresses() */, L_18);
				NullCheck(L_19);
				RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::GetEnumerator() */, L_19);
				V_7 = L_20;
			}

IL_0073:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01d9;
				}

IL_0078:
				{
					RuntimeObject* L_21 = V_7;
					NullCheck(L_21);
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_22 = InterfaceFuncInvoker0< UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.UnicastIPAddressInformation>::get_Current() */, IEnumerator_1_t1832F88929CE7C558676FB002FC111AB3DC5E01A_il2cpp_TypeInfo_var, L_21);
					V_8 = L_22;
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_23 = V_8;
					NullCheck(L_23);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_24 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_23);
					NullCheck(L_24);
					int32_t L_25 = IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline(L_24, /*hidden argument*/NULL);
					V_9 = (bool)((((int32_t)L_25) == ((int32_t)2))? 1 : 0);
					bool L_26 = V_9;
					if (!L_26)
					{
						goto IL_01d8;
					}
				}

IL_009a:
				{
					IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_27 = V_4;
					NullCheck(L_27);
					IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * L_28 = VirtFuncInvoker0< IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * >::Invoke(12 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DhcpServerAddresses() */, L_27);
					NullCheck(L_28);
					int32_t L_29 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Net.NetworkInformation.IPAddressCollection::get_Count() */, L_28);
					V_10 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
					bool L_30 = V_10;
					if (!L_30)
					{
						goto IL_00f9;
					}
				}

IL_00b0:
				{
					UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_31 = V_8;
					NullCheck(L_31);
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_32 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_31);
					NullCheck(L_32);
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2(L_32, /*hidden argument*/NULL);
					V_11 = L_33;
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_11;
					NullCheck(L_34);
					(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
					ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_35 = V_11;
					IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_36 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)il2cpp_codegen_object_new(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
					IPAddress__ctor_mECE00C2B3299E40127879FE33EFD628C9375F817(L_36, L_35, /*hidden argument*/NULL);
					NullCheck(L_36);
					String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
					IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_38 = UdpIPv4Address_Parse_m69682A82AC17EE2F4567F390A13FEEC5F330996F(L_37, /*hidden argument*/NULL);
					V_12 = L_38;
					bool L_39 = UdpIPv4Address_get_IsPrivate_m9B851B953B995F791109679DEA04393DC17BF86E((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 *)(&V_12), /*hidden argument*/NULL);
					V_13 = L_39;
					bool L_40 = V_13;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}

IL_00e8:
				{
					HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_41 = V_0;
					UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_42 = V_12;
					NullCheck(L_41);
					HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_41, L_42, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
				}

IL_00f3:
				{
					goto IL_01d7;
				}

IL_00f9:
				{
					IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_43 = V_4;
					NullCheck(L_43);
					IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * L_44 = VirtFuncInvoker0< IPAddressCollection_tAA587709D1FC7AA236D25617ACCB680A563B6DB3 * >::Invoke(12 /* System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.IPInterfaceProperties::get_DhcpServerAddresses() */, L_43);
					NullCheck(L_44);
					RuntimeObject* L_45 = VirtFuncInvoker0< RuntimeObject* >::Invoke(18 /* System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator() */, L_44);
					V_14 = L_45;
				}

IL_0109:
				try
				{ // begin try (depth: 4)
					{
						goto IL_01bb;
					}

IL_010e:
					{
						RuntimeObject* L_46 = V_14;
						NullCheck(L_46);
						IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_47 = InterfaceFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>::get_Current() */, IEnumerator_1_t26327603AC5BEFA8EE4D7320F4E10238F70D96A7_il2cpp_TypeInfo_var, L_46);
						V_15 = L_47;
						UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_48 = V_8;
						NullCheck(L_48);
						IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_49 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.IPAddressInformation::get_Address() */, L_48);
						NullCheck(L_49);
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2(L_49, /*hidden argument*/NULL);
						V_16 = L_50;
						UnicastIPAddressInformation_tF88F51AB68CAA2D4D7FCC5EC680B747CB1B4CFC5 * L_51 = V_8;
						NullCheck(L_51);
						IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_52 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(13 /* System.Net.IPAddress System.Net.NetworkInformation.UnicastIPAddressInformation::get_IPv4Mask() */, L_51);
						NullCheck(L_52);
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_53 = IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2(L_52, /*hidden argument*/NULL);
						V_17 = L_53;
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = V_16;
						NullCheck(L_54);
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = V_17;
						NullCheck(L_55);
						V_20 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
						bool L_56 = V_20;
						if (!L_56)
						{
							goto IL_0152;
						}
					}

IL_0147:
					{
						ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_57 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
						ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_57, _stringLiteral2D44CBF235C7EC2E761CD547DFFDC626BBA7E500, /*hidden argument*/NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6_RuntimeMethod_var);
					}

IL_0152:
					{
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_58 = V_16;
						NullCheck(L_58);
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_59 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))));
						V_18 = L_59;
						V_21 = 0;
						goto IL_0181;
					}

IL_0162:
					{
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = V_18;
						int32_t L_61 = V_21;
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_16;
						int32_t L_63 = V_21;
						NullCheck(L_62);
						int32_t L_64 = L_63;
						uint8_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_66 = V_17;
						int32_t L_67 = V_21;
						NullCheck(L_66);
						int32_t L_68 = L_67;
						uint8_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
						NullCheck(L_60);
						(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_65|(int32_t)((int32_t)((int32_t)L_69^(int32_t)((int32_t)255)))))))));
						int32_t L_70 = V_21;
						V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
					}

IL_0181:
					{
						int32_t L_71 = V_21;
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_72 = V_18;
						NullCheck(L_72);
						V_22 = (bool)((((int32_t)L_71) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))? 1 : 0);
						bool L_73 = V_22;
						if (L_73)
						{
							goto IL_0162;
						}
					}

IL_018f:
					{
						ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_74 = V_18;
						IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_75 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)il2cpp_codegen_object_new(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
						IPAddress__ctor_mECE00C2B3299E40127879FE33EFD628C9375F817(L_75, L_74, /*hidden argument*/NULL);
						NullCheck(L_75);
						String_t* L_76 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
						IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
						UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_77 = UdpIPv4Address_Parse_m69682A82AC17EE2F4567F390A13FEEC5F330996F(L_76, /*hidden argument*/NULL);
						V_19 = L_77;
						bool L_78 = UdpIPv4Address_get_IsPrivate_m9B851B953B995F791109679DEA04393DC17BF86E((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 *)(&V_19), /*hidden argument*/NULL);
						V_23 = L_78;
						bool L_79 = V_23;
						if (!L_79)
						{
							goto IL_01ba;
						}
					}

IL_01af:
					{
						HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_80 = V_0;
						UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_81 = V_19;
						NullCheck(L_80);
						HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C(L_80, L_81, /*hidden argument*/HashSet_1_Add_mD46ED02E8A2E8CC5137A220B1010152BE48F1D9C_RuntimeMethod_var);
					}

IL_01ba:
					{
					}

IL_01bb:
					{
						RuntimeObject* L_82 = V_14;
						NullCheck(L_82);
						bool L_83 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_82);
						if (L_83)
						{
							goto IL_010e;
						}
					}

IL_01c7:
					{
						IL2CPP_LEAVE(0x1D6, FINALLY_01c9);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_01c9;
				}

FINALLY_01c9:
				{ // begin finally (depth: 4)
					{
						RuntimeObject* L_84 = V_14;
						if (!L_84)
						{
							goto IL_01d5;
						}
					}

IL_01cd:
					{
						RuntimeObject* L_85 = V_14;
						NullCheck(L_85);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_85);
					}

IL_01d5:
					{
						IL2CPP_END_FINALLY(457)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(457)
				{
					IL2CPP_JUMP_TBL(0x1D6, IL_01d6)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_01d6:
				{
				}

IL_01d7:
				{
				}

IL_01d8:
				{
				}

IL_01d9:
				{
					RuntimeObject* L_86 = V_7;
					NullCheck(L_86);
					bool L_87 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_86);
					if (L_87)
					{
						goto IL_0078;
					}
				}

IL_01e5:
				{
					IL2CPP_LEAVE(0x1F4, FINALLY_01e7);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01e7;
			}

FINALLY_01e7:
			{ // begin finally (depth: 3)
				{
					RuntimeObject* L_88 = V_7;
					if (!L_88)
					{
						goto IL_01f3;
					}
				}

IL_01eb:
				{
					RuntimeObject* L_89 = V_7;
					NullCheck(L_89);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_89);
				}

IL_01f3:
				{
					IL2CPP_END_FINALLY(487)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(487)
			{
				IL2CPP_JUMP_TBL(0x1F4, IL_01f4)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_01f4:
			{
				goto IL_0205;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_01f7;
			throw e;
		}

CATCH_01f7:
		{ // begin catch(System.Exception)
			V_24 = ((Exception_t *)__exception_local);
			Exception_t * L_90 = V_24;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_90, /*hidden argument*/NULL);
			goto IL_0205;
		} // end catch (depth: 2)

IL_0205:
		{
		}

IL_0206:
		{
			int32_t L_91 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		}

IL_020a:
		{
			int32_t L_92 = V_2;
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_93 = V_1;
			NullCheck(L_93);
			if ((((int32_t)L_92) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))))
			{
				goto IL_0016;
			}
		}

IL_0213:
		{
			goto IL_0224;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0216;
		throw e;
	}

CATCH_0216:
	{ // begin catch(System.Exception)
		V_25 = ((Exception_t *)__exception_local);
		Exception_t * L_94 = V_25;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_94, /*hidden argument*/NULL);
		goto IL_0224;
	} // end catch (depth: 1)

IL_0224:
	{
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_95 = V_0;
		V_26 = L_95;
		goto IL_0229;
	}

IL_0229:
	{
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_96 = V_26;
		return L_96;
	}
}
// System.Boolean UdpKit.Platform.DotNet.Utils.DotNetPlatformUtils::IsValidInterface(System.Net.NetworkInformation.IPInterfaceProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatformUtils_IsValidInterface_m306EC0C94320FF9A600F16427CEFEA22F156F2A0 (IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatformUtils_IsValidInterface_m306EC0C94320FF9A600F16427CEFEA22F156F2A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	GatewayIPAddressInformation_t60531D784C9912D26C6F7C5B0E93900D7DCB324B * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	bool G_B7_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	bool G_B5_0 = false;
	bool G_B6_0 = false;
	int32_t G_B8_0 = 0;
	bool G_B8_1 = false;
	{
		V_0 = (bool)1;
		IPInterfaceProperties_t16A9E6459482381768E76F58DC871754C282BFCD * L_0 = ___p0;
		NullCheck(L_0);
		GatewayIPAddressInformationCollection_t1DAA274D18774B33C82C45988C9B8F35057E1E3A * L_1 = VirtFuncInvoker0< GatewayIPAddressInformationCollection_t1DAA274D18774B33C82C45988C9B8F35057E1E3A * >::Invoke(11 /* System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.IPInterfaceProperties::get_GatewayAddresses() */, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(19 /* System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation> System.Net.NetworkInformation.GatewayIPAddressInformationCollection::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			GatewayIPAddressInformation_t60531D784C9912D26C6F7C5B0E93900D7DCB324B * L_4 = InterfaceFuncInvoker0< GatewayIPAddressInformation_t60531D784C9912D26C6F7C5B0E93900D7DCB324B * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.GatewayIPAddressInformation>::get_Current() */, IEnumerator_1_tE4115A9EF6AC97B6E7026E78D026E91ACE74A0CD_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			GatewayIPAddressInformation_t60531D784C9912D26C6F7C5B0E93900D7DCB324B * L_5 = V_2;
			NullCheck(L_5);
			IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_6 = VirtFuncInvoker0< IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * >::Invoke(4 /* System.Net.IPAddress System.Net.NetworkInformation.GatewayIPAddressInformation::get_Address() */, L_5);
			NullCheck(L_6);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2(L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_3;
			NullCheck(L_9);
			G_B3_0 = L_8;
			if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))) == ((uint32_t)4))))
			{
				G_B7_0 = L_8;
				goto IL_0044;
			}
		}

IL_002d:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_3;
			NullCheck(L_10);
			int32_t L_11 = 0;
			uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			G_B4_0 = G_B3_0;
			if (!L_12)
			{
				G_B7_0 = G_B3_0;
				goto IL_0044;
			}
		}

IL_0032:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_3;
			NullCheck(L_13);
			int32_t L_14 = 1;
			uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			G_B5_0 = G_B4_0;
			if (!L_15)
			{
				G_B7_0 = G_B4_0;
				goto IL_0044;
			}
		}

IL_0037:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = V_3;
			NullCheck(L_16);
			int32_t L_17 = 2;
			uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			G_B6_0 = G_B5_0;
			if (!L_18)
			{
				G_B7_0 = G_B5_0;
				goto IL_0044;
			}
		}

IL_003c:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_3;
			NullCheck(L_19);
			int32_t L_20 = 3;
			uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			G_B8_0 = ((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
			G_B8_1 = G_B6_0;
			goto IL_0045;
		}

IL_0044:
		{
			G_B8_0 = 0;
			G_B8_1 = G_B7_0;
		}

IL_0045:
		{
			V_0 = (bool)((int32_t)((int32_t)G_B8_1&(int32_t)G_B8_0));
		}

IL_0048:
		{
			RuntimeObject* L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0012;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_1;
			if (!L_24)
			{
				goto IL_005c;
			}
		}

IL_0055:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_25);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		bool L_26 = V_0;
		V_4 = L_26;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_27 = V_4;
		return L_27;
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
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SessionListProvidedExternally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SessionListProvidedExternally_m419C79140FC3FCFAF39C61D6A5B69747D883236A (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SupportsBroadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SupportsBroadcast_m56FDEEE3632A0F6C0FBB85F1B13D59CBF7387665 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UdpKit.Platform.DotNetPlatform::get_SupportsMasterServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetPlatform_get_SupportsMasterServer_m733452743B75FF58822AF5BD84FF9DEE9B09B673 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetPlatform__ctor_m007514F61291CF0139B4126802379ED4EF4C0981 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform__ctor_m007514F61291CF0139B4126802379ED4EF4C0981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UdpPlatform__ctor_m45E7694A304A4C13EB201F6DFFE58E5E54FE006F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var);
		PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137(/*hidden argument*/NULL);
		return;
	}
}
// UdpKit.UdpSessionSource UdpKit.Platform.DotNetPlatform::GetSessionSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetPlatform_GetSessionSource_m875AC195C53296A595F6EF0601FB490188302F63 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// UdpKit.UdpIPv4Address UdpKit.Platform.DotNetPlatform::GetBroadcastAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  DotNetPlatform_GetBroadcastAddress_m837D29D931327D2C54DD72DCEBA9B455D6F386EB (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform_GetBroadcastAddress_m837D29D931327D2C54DD72DCEBA9B455D6F386EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * V_0 = NULL;
	bool V_1 = false;
	Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_3;
	memset((&V_3), 0, sizeof(V_3));
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	{
		List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_0 = (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 *)il2cpp_codegen_object_new(List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0_il2cpp_TypeInfo_var);
		List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07(L_0, /*hidden argument*/List_1__ctor_mA77E329CF1692F2129B4D03C5ECC6BD4300F7B07_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_1 = V_0;
		HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * L_2 = DotNetPlatformUtils_FindBroadcastAddress_mA991BE87D28ECA03EB414E9C4770658CF19892A6(/*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888(L_1, L_2, /*hidden argument*/List_1_AddRange_mF997FDA2F5A70F1C57BC8426B9BB4A24F7DC8888_RuntimeMethod_var);
		List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_inline(L_3, /*hidden argument*/List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_6 = VirtFuncInvoker2< List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *, int32_t, bool >::Invoke(23 /* System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.UdpPlatform::ResolveHostAddresses(System.Int32,System.Boolean) */, __this, 1, (bool)0);
		NullCheck(L_6);
		Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123  L_7 = List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9(L_6, /*hidden argument*/List_1_GetEnumerator_mB8247FE2438EA5E85F3599132D63B1E144BDFEF9_RuntimeMethod_var);
		V_2 = L_7;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_0032:
		{
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_8 = Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_inline((Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_RuntimeMethod_var);
			V_3 = L_8;
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_9 = V_3;
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_10 = L_9.get_Address_5();
			V_4 = L_10;
			(&V_4)->set_Byte0_4((uint8_t)((int32_t)255));
			bool L_11 = UdpIPv4Address_get_IsPrivate_m9B851B953B995F791109679DEA04393DC17BF86E((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714 *)(&V_4), /*hidden argument*/NULL);
			V_5 = L_11;
			bool L_12 = V_5;
			if (!L_12)
			{
				goto IL_0067;
			}
		}

IL_005c:
		{
			List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_13 = V_0;
			UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_14 = V_4;
			NullCheck(L_13);
			List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71(L_13, L_14, /*hidden argument*/List_1_Add_m25C29A6D690035EF1E9F8237A1092141667BBC71_RuntimeMethod_var);
		}

IL_0067:
		{
		}

IL_0068:
		{
			bool L_15 = Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9((Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m00B49F500BEC6E68E09C1870A2E46482DEEE9AB9_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0032;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x82, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E((Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFD5B76F2B4503795CDE2D855129A11EAE268943E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x82, IL_0082)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0082:
	{
	}

IL_0083:
	{
		List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_inline(L_16, /*hidden argument*/List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * L_18 = V_0;
		NullCheck(L_18);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_19 = List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_inline(L_18, 0, /*hidden argument*/List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_RuntimeMethod_var);
		G_B13_0 = L_19;
		goto IL_0099;
	}

IL_0094:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var);
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_20 = ((UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_StaticFields*)il2cpp_codegen_static_fields_for(UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714_il2cpp_TypeInfo_var))->get_Any_0();
		G_B13_0 = L_20;
	}

IL_0099:
	{
		V_6 = G_B13_0;
		goto IL_009d;
	}

IL_009d:
	{
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_21 = V_6;
		return L_21;
	}
}
// UdpKit.Platform.UdpPlatformSocket UdpKit.Platform.DotNetPlatform::CreateSocket(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871 * DotNetPlatform_CreateSocket_m9780632C0D465ACFEFEE46F11D51EB7DC27D9B6E (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, bool ___ipv60, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform_CreateSocket_m9780632C0D465ACFEFEE46F11D51EB7DC27D9B6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871 * V_0 = NULL;
	{
		bool L_0 = ___ipv60;
		DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * L_1 = (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA *)il2cpp_codegen_object_new(DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA_il2cpp_TypeInfo_var);
		DotNetSocket__ctor_m7462A56CA5CCD9B2D23A377429132FD8A2C10019(L_1, __this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		UdpPlatformSocket_tC9160653C210BF32618ABA496BC4D8CF7DA73871 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UdpKit.Platform.UdpPlatformInterface> UdpKit.Platform.DotNetPlatform::GetNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * DotNetPlatform_GetNetworkInterfaces_m4797913DA7DE9372F9FD479D105354F58E0CACA2 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform_GetNetworkInterfaces_m4797913DA7DE9372F9FD479D105354F58E0CACA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * V_0 = NULL;
	NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* V_1 = NULL;
	int32_t V_2 = 0;
	NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * V_3 = NULL;
	DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	Exception_t * V_9 = NULL;
	List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 6);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B6_0 = 0;
	{
		List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * L_0 = (List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB *)il2cpp_codegen_object_new(List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB_il2cpp_TypeInfo_var);
		List_1__ctor_mB98FDEED1AF1A39505BBCF1E429752EA8FFB6D23(L_0, /*hidden argument*/List_1__ctor_mB98FDEED1AF1A39505BBCF1E429752EA8FFB6D23_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_1 = NetworkInterface_GetAllNetworkInterfaces_mECF52873ABF0B957ACD25FD76B56DD63FDF6C0A1(/*hidden argument*/NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_008c;
		}

IL_0013:
		{
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_3 = L_5;
		}

IL_0018:
		try
		{ // begin try (depth: 2)
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_6 = V_3;
				NullCheck(L_6);
				int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_6);
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0030;
				}
			}

IL_0022:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_8 = V_3;
				NullCheck(L_8);
				int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_8);
				G_B6_0 = ((((int32_t)((((int32_t)L_9) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0031;
			}

IL_0030:
			{
				G_B6_0 = 0;
			}

IL_0031:
			{
				V_5 = (bool)G_B6_0;
				bool L_10 = V_5;
				if (!L_10)
				{
					goto IL_003a;
				}
			}

IL_0037:
			{
				goto IL_0088;
			}

IL_003a:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_11 = V_3;
				NullCheck(L_11);
				int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_11);
				V_6 = (bool)((((int32_t)L_12) == ((int32_t)((int32_t)24)))? 1 : 0);
				bool L_13 = V_6;
				if (!L_13)
				{
					goto IL_004d;
				}
			}

IL_004a:
			{
				goto IL_0088;
			}

IL_004d:
			{
				NetworkInterface_t6EB01731844BE34CBB1345B22ECCE73C3D52DDE3 * L_14 = V_3;
				DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * L_15 = DotNetPlatformUtils_ParseInterface_m5A12AD4B5B5E7B3DA4998EF3190A357AE64CAE3E(L_14, /*hidden argument*/NULL);
				V_4 = L_15;
				DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * L_16 = V_4;
				V_7 = (bool)((!(((RuntimeObject*)(DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_17 = V_7;
				if (!L_17)
				{
					goto IL_006b;
				}
			}

IL_0060:
			{
				List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * L_18 = V_0;
				DotNetInterface_t85E50BE2104593C5F3F7C7482EB5EC70C640E466 * L_19 = V_4;
				NullCheck(L_18);
				List_1_Add_mA6ECAFF0E2D5C92F232A15CCDAE7584FE5BC0CD8(L_18, L_19, /*hidden argument*/List_1_Add_mA6ECAFF0E2D5C92F232A15CCDAE7584FE5BC0CD8_RuntimeMethod_var);
			}

IL_006b:
			{
				goto IL_0087;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_006e;
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.Exception)
			V_8 = ((Exception_t *)__exception_local);
			Exception_t * L_20 = V_8;
			NullCheck(L_20);
			String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
			UdpLog_Error_mAC4FD24FE442F809DE534607D2A20DA515C12D6C(L_21, L_22, /*hidden argument*/NULL);
			goto IL_0087;
		} // end catch (depth: 2)

IL_0087:
		{
		}

IL_0088:
		{
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		}

IL_008c:
		{
			int32_t L_24 = V_2;
			NetworkInterfaceU5BU5D_t2F5BC45273F12ACF6215EF7925A20B304454D26B* L_25 = V_1;
			NullCheck(L_25);
			if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
			{
				goto IL_0013;
			}
		}

IL_0092:
		{
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		Exception_t * L_26 = V_9;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
		UdpLog_Error_mAC4FD24FE442F809DE534607D2A20DA515C12D6C(L_27, L_28, /*hidden argument*/NULL);
		goto IL_00ae;
	} // end catch (depth: 1)

IL_00ae:
	{
		List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * L_29 = V_0;
		V_10 = L_29;
		goto IL_00b3;
	}

IL_00b3:
	{
		List_1_t3CD14302E65A5E5DC7C6A90E009DE8F2B8C3D3EB * L_30 = V_10;
		return L_30;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpEndPoint> UdpKit.Platform.DotNetPlatform::ResolveHostAddresses(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * DotNetPlatform_ResolveHostAddresses_m31DACFAE9B4CA2D9D7671B10504725B4C1ECC0DE (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, int32_t ___port0, bool ___ipv61, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform_ResolveHostAddresses_m31DACFAE9B4CA2D9D7671B10504725B4C1ECC0DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * V_5 = NULL;
	int32_t G_B6_0 = 0;
	List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * G_B11_0 = NULL;
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_0 = (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 *)il2cpp_codegen_object_new(List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9_il2cpp_TypeInfo_var);
		List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7(L_0, /*hidden argument*/List_1__ctor_m62E058871406CC6F4AEFB29015173151DC6ADFB7_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_1 = V_0;
		int32_t L_2 = ___port0;
		bool L_3 = ___ipv61;
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_4 = DotNetPlatformUtils_ResolveHostAddressesViaHostName_m3E3F298D565DFAB801858779107176D25E2E7D36(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9(L_1, L_4, /*hidden argument*/List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9_RuntimeMethod_var);
		V_1 = (bool)1;
		UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * L_5 = __this->get__config_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_CurrentPlatform_37();
		V_3 = L_6;
		int32_t L_7 = V_3;
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0030;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_inline(L_10, /*hidden argument*/List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_RuntimeMethod_var);
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
	}

IL_003f:
	{
		V_4 = (bool)G_B6_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_13 = V_0;
		int32_t L_14 = ___port0;
		bool L_15 = ___ipv61;
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_16 = DotNetPlatformUtils_ResolveHostLocalAddressViaNetworkInterfaces_mFD28ED92D965DB13CDA21028B1E19753346673D6(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9(L_13, L_16, /*hidden argument*/List_1_AddRange_m9DBB02AB48AFB3CAFD98CEE9E5790E6BFBA82DB9_RuntimeMethod_var);
	}

IL_0055:
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_inline(L_17, /*hidden argument*/List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_19 = V_0;
		G_B11_0 = L_19;
		goto IL_0068;
	}

IL_0060:
	{
		int32_t L_20 = ___port0;
		bool L_21 = ___ipv61;
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_22 = UdpPlatform_ResolveHostAddresses_mD8C04DF3DFFEA18151BE95C5BEB95EB0C45DC757(__this, L_20, L_21, /*hidden argument*/NULL);
		G_B11_0 = L_22;
	}

IL_0068:
	{
		V_5 = G_B11_0;
		goto IL_006c;
	}

IL_006c:
	{
		List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * L_23 = V_5;
		return L_23;
	}
}
// System.UInt32 UdpKit.Platform.DotNetPlatform::GetPrecisionTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DotNetPlatform_GetPrecisionTime_mC3EB359E66CE9EE1A2772A7122FCAB7E1BC2DD57 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetPlatform_GetPrecisionTime_mC3EB359E66CE9EE1A2772A7122FCAB7E1BC2DD57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var);
		uint32_t L_0 = PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform::Configure(UdpKit.UdpConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetPlatform_Configure_m45DF27E4409E3AF5A731F193DDB79750033B9767 (DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * __this, UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * ___config0, const RuntimeMethod* method)
{
	{
		UdpConfig_t64BC28DD07FE76982D4C9E978FC97F77E19E9CEF * L_0 = ___config0;
		__this->set__config_1(L_0);
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
// System.UInt32 UdpKit.Platform.DotNetPlatform_PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecisionTimer_GetCurrentTime_mB43DA0D4E429E0B35E1C5940ACD47001AC661137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	uint32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var))->get_start_0();
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1));
		int64_t L_2 = V_0;
		double L_3 = ((PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var))->get_freq_1();
		V_1 = ((double)il2cpp_codegen_multiply((double)(((double)((double)L_2))), (double)L_3));
		double L_4 = V_1;
		V_2 = (il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(((double)il2cpp_codegen_multiply((double)L_4, (double)(1000.0)))));
		goto IL_0025;
	}

IL_0025:
	{
		uint32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform_PrecisionTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrecisionTimer__ctor_m2D779B4EB35A38E7FA725026770B5C35951A537F (PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UdpKit.Platform.DotNetPlatform_PrecisionTimer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrecisionTimer__cctor_m7300495C0856E6F9A5229B0FB34CB1A9559E3013 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecisionTimer__cctor_m7300495C0856E6F9A5229B0FB34CB1A9559E3013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA(/*hidden argument*/NULL);
		((PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var))->set_start_0(L_0);
		int64_t L_1 = ((Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var))->get_Frequency_0();
		((PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_t5184A2ABBEE6FA8B3151050F4ACFA28974D31B21_il2cpp_TypeInfo_var))->set_freq_1(((double)((double)(1.0)/(double)(((double)((double)L_1))))));
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
// System.Void UdpKit.Platform.DotNetSocket::.ctor(UdpKit.Platform.DotNetPlatform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket__ctor_m7462A56CA5CCD9B2D23A377429132FD8A2C10019 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * ___platform0, bool ___ipv61, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket__ctor_m7462A56CA5CCD9B2D23A377429132FD8A2C10019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * G_B3_0 = NULL;
	DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * G_B4_1 = NULL;
	{
		UdpPlatformSocket__ctor_m35EFA528C20E303F69BE87BB7141C5804186A450(__this, /*hidden argument*/NULL);
		DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * L_0 = ___platform0;
		__this->set_platform_3(L_0);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = ___ipv61;
			G_B2_0 = __this;
			if (L_1)
			{
				G_B3_0 = __this;
				goto IL_0017;
			}
		}

IL_0014:
		{
			G_B4_0 = 2;
			G_B4_1 = G_B2_0;
			goto IL_0019;
		}

IL_0017:
		{
			G_B4_0 = ((int32_t)23);
			G_B4_1 = G_B3_0;
		}

IL_0019:
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
			Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_2, G_B4_0, 2, ((int32_t)17), /*hidden argument*/NULL);
			NullCheck(G_B4_1);
			G_B4_1->set_socket_2(L_2);
			bool L_3 = ___ipv61;
			V_0 = L_3;
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003e;
			}
		}

IL_002b:
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_5 = __this->get_socket_2();
			NullCheck(L_5);
			Socket_SetSocketOption_m545931224E0FBC0073E60A755F70180105A4CBC0(L_5, ((int32_t)41), ((int32_t)27), (bool)0, /*hidden argument*/NULL);
		}

IL_003e:
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_6 = __this->get_socket_2();
			NullCheck(L_6);
			Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC(L_6, (bool)0, /*hidden argument*/NULL);
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004e;
		throw e;
	}

CATCH_004e:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_7 = V_1;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_7, /*hidden argument*/NULL);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		bool L_8 = ___ipv61;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_10 = ((IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var))->get_IPv6Any_7();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_11 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_11, L_10, 0, /*hidden argument*/NULL);
		__this->set_recvEndPoint_4(L_11);
		goto IL_0088;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_12 = ((IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var))->get_Any_0();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_13 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_13, L_12, 0, /*hidden argument*/NULL);
		__this->set_recvEndPoint_4(L_13);
	}

IL_0088:
	{
		return;
	}
}
// UdpKit.Platform.UdpPlatform UdpKit.Platform.DotNetSocket::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1 * DotNetSocket_get_Platform_m1FAA5D04B63DECF182D4D9C7A6D495AD811FAAFD (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1 * V_0 = NULL;
	{
		DotNetPlatform_t3A4898B828C9F4B0D1B43DD8E46BC4EDBBDCAD20 * L_0 = __this->get_platform_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatform_t44C6B175C66C350B40462204C90A3F9CE759E7C1 * L_1 = V_0;
		return L_1;
	}
}
// System.String UdpKit.Platform.DotNetSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotNetSocket_get_Error_mA0054E63C63FD6A5A458D44DE15FBFD8E2244B29 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_error_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::get_IsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_get_IsBound_m50EDA86E581603EE810EBE65415A5EBC7568AACC (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_1 = __this->get_socket_2();
		NullCheck(L_1);
		bool L_2 = Socket_get_IsBound_mAA2B548E5DBCC2B693A6DAA612648199C6291A8A_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UdpKit.UdpEndPoint UdpKit.Platform.DotNetSocket::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  DotNetSocket_get_EndPoint_mA524445E85F470041287522F339C8A0A7FCF6DB9 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248(__this, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_0 = __this->get_endpoint_5();
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::get_Broadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_get_Broadcast_mFC43746BA4608B2D6E2AF37CC35DBCE0F88DB9BE (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_get_Broadcast_mFC43746BA4608B2D6E2AF37CC35DBCE0F88DB9BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248(__this, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		__this->set_error_1((String_t*)NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		NullCheck(L_0);
		bool L_1 = Socket_get_EnableBroadcast_m9473111CD8081B4C7B4741F2EA18D68A024FD7D9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_2 = V_1;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_2, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::set_Broadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_set_Broadcast_m1AB1C2D80BAEF0DFD5F39D35BDB03B06E10DEA11 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_set_Broadcast_m1AB1C2D80BAEF0DFD5F39D35BDB03B06E10DEA11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248(__this, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Socket_set_EnableBroadcast_mAF6DE2B827F1D6D57C53981CB89C708B08D80626(L_0, L_1, /*hidden argument*/NULL);
		goto IL_002d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0019;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		__this->set_error_1((String_t*)NULL);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_2 = V_0;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_2, /*hidden argument*/NULL);
		goto IL_002d;
	} // end catch (depth: 1)

IL_002d:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_Close_m428FBFEA9C70CDE7EDCDAAC1F96A2CA65AA4A353 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_Close_m428FBFEA9C70CDE7EDCDAAC1F96A2CA65AA4A353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248(__this, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		__this->set_error_1((String_t*)NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		NullCheck(L_0);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_0, /*hidden argument*/NULL);
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001f;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_1 = V_0;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_1, /*hidden argument*/NULL);
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::Bind(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_Bind_m9F3B8CDA6718886B7409FB1846005F0BD014E60C (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___ep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_Bind_m9F3B8CDA6718886B7409FB1846005F0BD014E60C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_0 = NULL;
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
		__this->set_error_1((String_t*)NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_1 = ___ep0;
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_2 = DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30(L_0, L_2, /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_socket_2();
		NullCheck(L_3);
		EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_4 = Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C(L_3, /*hidden argument*/NULL);
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_5 = DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26(L_4, /*hidden argument*/NULL);
		__this->set_endpoint_5(L_5);
		goto IL_0041;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0034;
		throw e;
	}

CATCH_0034:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_0 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_6 = V_0;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_6, /*hidden argument*/NULL);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		return;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::RecvPoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_RecvPoll_mE86DC25C3B8380308063D4EE4DBA89ADC73BBD93 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = VirtFuncInvoker1< bool, int32_t >::Invoke(13 /* System.Boolean UdpKit.Platform.UdpPlatformSocket::RecvPoll(System.Int32) */, __this, 0);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UdpKit.Platform.DotNetSocket::RecvPoll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNetSocket_RecvPoll_mD08293B7DC2AB0CC2D44A3A192BBF28389EB00A3 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_RecvPoll_mD08293B7DC2AB0CC2D44A3A192BBF28389EB00A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_1 = NULL;
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
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		int32_t L_1 = ___timeout0;
		NullCheck(L_0);
		bool L_2 = Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)1000))), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_3 = V_1;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_3, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UdpKit.Platform.DotNetSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetSocket_RecvFrom_m4BF3AC8C2C74BA04FFCE3C149C02B804F7A1D7A0 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___bufferSize1, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * ___remoteEndpoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_RecvFrom_m4BF3AC8C2C74BA04FFCE3C149C02B804F7A1D7A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
			int32_t L_2 = ___bufferSize1;
			EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** L_3 = __this->get_address_of_recvEndPoint_4();
			NullCheck(L_0);
			int32_t L_4 = Socket_ReceiveFrom_m7115D6E24DEF6BD3BA6A476E18C36D023F2EBEBA(L_0, L_1, 0, L_2, 0, (EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 **)L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0036;
			}
		}

IL_0020:
		{
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 * L_7 = ___remoteEndpoint2;
			EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * L_8 = __this->get_recvEndPoint_4();
			UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_9 = DotNetPlatformUtils_ConvertEndPoint_m44D8333BF1ECBAFCA08E4DB338E07702578C3B26(L_8, /*hidden argument*/NULL);
			*(UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 *)L_7 = L_9;
			int32_t L_10 = V_0;
			V_2 = L_10;
			goto IL_0049;
		}

IL_0036:
		{
			V_2 = (-1);
			goto IL_0049;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003b;
		throw e;
	}

CATCH_003b:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_3 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_11 = V_3;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_11, /*hidden argument*/NULL);
		V_2 = (-1);
		goto IL_0049;
	} // end catch (depth: 1)

IL_0049:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Int32 UdpKit.Platform.DotNetSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNetSocket_SendTo_m8B2F94FD943E29706AC269B46BCC4FCEB1DB1AFD (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___bytesToSend1, UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  ___endpoint2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_SendTo_m8B2F94FD943E29706AC269B46BCC4FCEB1DB1AFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * V_1 = NULL;
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
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		int32_t L_2 = ___bytesToSend1;
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_3 = ___endpoint2;
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_4 = DotNetPlatformUtils_ConvertEndPoint_mB8E7E559DD552DD897EDBA913E901957C8849A14(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_5 = Socket_SendTo_m95926F192663BB81CC267386B93F6D8E57FDF434(L_0, L_1, 0, L_2, 0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0028;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001a;
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.Net.Sockets.SocketException)
		V_1 = ((SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 *)__exception_local);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_6 = V_1;
		DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701(__this, L_6, /*hidden argument*/NULL);
		V_0 = (-1);
		goto IL_0028;
	} // end catch (depth: 1)

IL_0028:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::HandleSocketException(System.Net.Sockets.SocketException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * ___exn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_HandleSocketException_m643C575A0A74CA8BC2849F84254E2CD55B920701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_0 = ___exn0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Runtime.InteropServices.ExternalException::get_ErrorCode() */, L_0);
		V_0 = L_1;
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		SocketException_t75481CF49BCAF5685A5A9E6933909E0B65E7E0A5 * L_3 = ___exn0;
		NullCheck(L_3);
		int32_t L_4 = SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = Box(SocketError_t0157BEC7F0A26C8FC31D392B2B7C6CFCD695D5E7_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_1 = *(int32_t*)UnBox(L_5);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_6, /*hidden argument*/NULL);
		__this->set_error_1(L_7);
		String_t* L_8 = __this->get_error_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(UdpLog_t420306ADB3644281E90C583CB0F69C8ED4AF3F12_il2cpp_TypeInfo_var);
		UdpLog_Warn_mA252CB98BE82903B5AA3CC2DED38EBB204C73A4A(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UdpKit.Platform.DotNetSocket::VerifyIsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248 (DotNetSocket_t82B2427FAB0C6356885F445ED00C7475923189CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean UdpKit.Platform.UdpPlatformSocket::get_IsBound() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1F94EA1226068BD1B7EAA1B836A59C99979F579E(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, DotNetSocket_VerifyIsBound_m811C37221B8FB0E6D9275DA43506BA1CF8717248_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_0 = __this->get_addressList_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693_inline (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9_inline (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Socket_get_IsBound_mAA2B548E5DBCC2B693A6DAA612648199C6291A8A_inline (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_bound_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared_inline (Enumerator_tC01102D13E6FA5B4F99A7406FE3F96BED7C2250A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m7640BC1F513709D5929062F9E8F972810DB07B2F_gshared_inline (HashSet_1_t03906E753A4B404B2726402FDBA9C68218CEB5C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA4A9DB4EA25FC3F765D68CA6C0C8A61D961542A0_gshared_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  Enumerator_get_Current_mB745C623F78FF25D6D452E8F184B29606D98D78C_gshared_inline (Enumerator_t11C47906AA23DEFB20A053F21328AB7F43D65123 * __this, const RuntimeMethod* method)
{
	{
		UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27  L_0 = (UdpEndPoint_t0723ADD90D7B16D583BF1D70137B37D6E2043B27 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  List_1_get_Item_mB0A2F9A1AA07F861570DAADAE25639750010CED0_gshared_inline (List_1_t5421704F2D0B734ED739CB4A0EC7FC49E8570EB0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC* L_2 = (UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC*)__this->get__items_1();
		int32_t L_3 = ___index0;
		UdpIPv4Address_t4C2FEC187BEAA56581DF534C874B7644F315C714  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((UdpIPv4AddressU5BU5D_tF23C9085F793ED89A85FC785AA0A6796BE686ADC*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8D0C81ABD35B64ED81AC951DD76F43DBDB35B11D_gshared_inline (List_1_t2B0A243388FCB4D4EDEECC21646405B30B4D9DA9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
