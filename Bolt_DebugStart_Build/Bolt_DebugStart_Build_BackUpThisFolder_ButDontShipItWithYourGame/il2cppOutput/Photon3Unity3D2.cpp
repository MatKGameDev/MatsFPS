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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D;
// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E;
// System.Security.Cryptography.Rijndael
struct Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoTransform_t43C29A7F3A8C2DDAC9F3BF9BF739B03E4D5DE9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CBD217BFB0EC93F291306B34BA5223B44B506A5;
IL2CPP_EXTERN_C String_t* _stringLiteral39AACA340AC6FA39FADE72A4BC162E3F68505A2F;
IL2CPP_EXTERN_C String_t* _stringLiteral74F6059628A004BF18CD6EC44600D208F451C153;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_DeriveSharedKey_m29EC0766FAD79465106167736FEB55F8354B6EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative__ctor_m8FF8E25C7646E51D935ABF3185AF0B09E00E9D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiffieHellmanCryptoProviderNative_get_PublicKey_m2AAC7BAA407B50F443716BA4E2CE3A77DF2F8457_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative_Decrypt_mD76B7353A6E47CA9BFEBA496AE2597AE72EAAD40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative_DeriveSharedKey_m29EC0766FAD79465106167736FEB55F8354B6EAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative_Dispose_m8A4318E08F4A4AB32554C4C18CF59C7389AFCC10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative_Encrypt_m3468D009848944980F7965EB971258C650122A8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative__ctor_m8FF8E25C7646E51D935ABF3185AF0B09E00E9D5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProviderNative_get_PublicKey_m2AAC7BAA407B50F443716BA4E2CE3A77DF2F8457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_CalculatePublicKey_m542A09AD2EA10988260C67EADF9FFA6492C89284_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_Decrypt_m9AD8860DEC217DC76717883C4DFD3C6E59BD062B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_DeriveSharedKey_m4307E1AD821B520CD377CB83E901BF918B2F25D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_Dispose_m695ED7D77F64232768FBE1767766A05A9E88E146_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_Encrypt_m74DD72284D17E3156A9C7F3182457CA3586F276C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider_GenerateRandomSecret_mC00EBB74690725DE2E2194D10FB221184E91866E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider__cctor_mC6430EB5D1201D7268063124E413DB10D2475558_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider__ctor_m756F19FDCD4B8BEC264F3C278188A94C4AD54795_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DiffieHellmanCryptoProvider__ctor_mC60A298836C745155151805BC8666B0FE9E1FA4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OakleyGroups__cctor_mBCB3AA137F7D7C2F975BBBCE380FEE3CF3AB41C2_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Photon.SocketServer.Numeric.BigInteger
struct  BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1  : public RuntimeObject
{
public:
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1, ___data_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1, ___dataLength_2)); }
	inline int32_t get_dataLength_2() const { return ___dataLength_2; }
	inline int32_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int32_t value)
	{
		___dataLength_2 = value;
	}
};

struct BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_StaticFields
{
public:
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___primesBelow2000_0;

public:
	inline static int32_t get_offset_of_primesBelow2000_0() { return static_cast<int32_t>(offsetof(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_StaticFields, ___primesBelow2000_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_primesBelow2000_0() const { return ___primesBelow2000_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_primesBelow2000_0() { return &___primesBelow2000_0; }
	inline void set_primesBelow2000_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___primesBelow2000_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primesBelow2000_0), (void*)value);
	}
};


// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D  : public RuntimeObject
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKey_5;

public:
	inline static int32_t get_offset_of_prime_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D, ___prime_1)); }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * get_prime_1() const { return ___prime_1; }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 ** get_address_of_prime_1() { return &___prime_1; }
	inline void set_prime_1(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * value)
	{
		___prime_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prime_1), (void*)value);
	}

	inline static int32_t get_offset_of_secret_2() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D, ___secret_2)); }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * get_secret_2() const { return ___secret_2; }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 ** get_address_of_secret_2() { return &___secret_2; }
	inline void set_secret_2(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * value)
	{
		___secret_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secret_2), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_3() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D, ___publicKey_3)); }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * get_publicKey_3() const { return ___publicKey_3; }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 ** get_address_of_publicKey_3() { return &___publicKey_3; }
	inline void set_publicKey_3(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * value)
	{
		___publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_crypto_4() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D, ___crypto_4)); }
	inline Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * get_crypto_4() const { return ___crypto_4; }
	inline Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC ** get_address_of_crypto_4() { return &___crypto_4; }
	inline void set_crypto_4(Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * value)
	{
		___crypto_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crypto_4), (void*)value);
	}

	inline static int32_t get_offset_of_sharedKey_5() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D, ___sharedKey_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_sharedKey_5() const { return ___sharedKey_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_sharedKey_5() { return &___sharedKey_5; }
	inline void set_sharedKey_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___sharedKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedKey_5), (void*)value);
	}
};

struct DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_StaticFields
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___primeRoot_0;

public:
	inline static int32_t get_offset_of_primeRoot_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_StaticFields, ___primeRoot_0)); }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * get_primeRoot_0() const { return ___primeRoot_0; }
	inline BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 ** get_address_of_primeRoot_0() { return &___primeRoot_0; }
	inline void set_primeRoot_0(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * value)
	{
		___primeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primeRoot_0), (void*)value);
	}
};


// Photon.SocketServer.Security.OakleyGroups
struct  OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F  : public RuntimeObject
{
public:

public:
};

struct OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields
{
public:
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___OakleyPrime1536_3;

public:
	inline static int32_t get_offset_of_Generator_0() { return static_cast<int32_t>(offsetof(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields, ___Generator_0)); }
	inline int32_t get_Generator_0() const { return ___Generator_0; }
	inline int32_t* get_address_of_Generator_0() { return &___Generator_0; }
	inline void set_Generator_0(int32_t value)
	{
		___Generator_0 = value;
	}

	inline static int32_t get_offset_of_OakleyPrime768_1() { return static_cast<int32_t>(offsetof(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields, ___OakleyPrime768_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OakleyPrime768_1() const { return ___OakleyPrime768_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OakleyPrime768_1() { return &___OakleyPrime768_1; }
	inline void set_OakleyPrime768_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OakleyPrime768_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OakleyPrime768_1), (void*)value);
	}

	inline static int32_t get_offset_of_OakleyPrime1024_2() { return static_cast<int32_t>(offsetof(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields, ___OakleyPrime1024_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OakleyPrime1024_2() const { return ___OakleyPrime1024_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OakleyPrime1024_2() { return &___OakleyPrime1024_2; }
	inline void set_OakleyPrime1024_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OakleyPrime1024_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OakleyPrime1024_2), (void*)value);
	}

	inline static int32_t get_offset_of_OakleyPrime1536_3() { return static_cast<int32_t>(offsetof(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields, ___OakleyPrime1536_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_OakleyPrime1536_3() const { return ___OakleyPrime1536_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_OakleyPrime1536_3() { return &___OakleyPrime1536_3; }
	inline void set_OakleyPrime1536_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___OakleyPrime1536_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OakleyPrime1536_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___HashValue_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212
struct  __StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427 
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
		uint8_t __StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128
struct  __StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4__padding[128];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D192
struct  __StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F 
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
		uint8_t __StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F__padding[192];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D9
struct  __StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392__padding[9];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D96
struct  __StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585 
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
		uint8_t __StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585__padding[96];
	};

public:
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


// System.Security.Cryptography.SHA256
struct  SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD  : public HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA
{
public:

public:
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D128 <PrivateImplementationDetails>::3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0
	__StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4  ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0;
	// System.Int64 <PrivateImplementationDetails>::5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5
	int64_t ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D192 <PrivateImplementationDetails>::64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B
	__StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F  ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2;
	// System.Int32 <PrivateImplementationDetails>::9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578
	int32_t ___9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1212 <PrivateImplementationDetails>::AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080
	__StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427  ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D96 <PrivateImplementationDetails>::B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D
	__StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585  ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D9 <PrivateImplementationDetails>::D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC
	__StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392  ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6;

public:
	inline static int32_t get_offset_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0)); }
	inline __StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4  get_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0() const { return ___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0; }
	inline __StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4 * get_address_of_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0() { return &___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0; }
	inline void set_U33F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0(__StaticArrayInitTypeSizeU3D128_tB6C2805CC977A8DEFD5DDA6D11E0A72452EAC0F4  value)
	{
		___3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0 = value;
	}

	inline static int32_t get_offset_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1)); }
	inline int64_t get_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1() const { return ___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1; }
	inline int64_t* get_address_of_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1() { return &___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1; }
	inline void set_U35AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1(int64_t value)
	{
		___5AC9831B2E30EB285EF34F8501620F878432D5C04331AD1AE47F977A83BA41A5_1 = value;
	}

	inline static int32_t get_offset_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2)); }
	inline __StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F  get_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2() const { return ___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2; }
	inline __StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F * get_address_of_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2() { return &___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2; }
	inline void set_U364FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2(__StaticArrayInitTypeSizeU3D192_t1DB998B26578730EC61CF66FEC2458A60D9F101F  value)
	{
		___64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2 = value;
	}

	inline static int32_t get_offset_of_U39861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3)); }
	inline int32_t get_U39861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3() const { return ___9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3; }
	inline int32_t* get_address_of_U39861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3() { return &___9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3; }
	inline void set_U39861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3(int32_t value)
	{
		___9861CC9D89A9C2AC4A3E5E45590B8E6295934212CF1D66E474F7DA16A8CCD578_3 = value;
	}

	inline static int32_t get_offset_of_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4)); }
	inline __StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427  get_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() const { return ___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4; }
	inline __StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427 * get_address_of_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4() { return &___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4; }
	inline void set_AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4(__StaticArrayInitTypeSizeU3D1212_t2C4570CCBE5E1A083504724A1CE7C429106B3427  value)
	{
		___AE7403CB8E1F18EE4BC7F393E29CEC17BD61C7113E81F786B632AF02ED952080_4 = value;
	}

	inline static int32_t get_offset_of_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5)); }
	inline __StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585  get_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() const { return ___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5; }
	inline __StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585 * get_address_of_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5() { return &___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5; }
	inline void set_B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5(__StaticArrayInitTypeSizeU3D96_t0957F41433C484353F0E88F744AFDAE7883CA585  value)
	{
		___B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5 = value;
	}

	inline static int32_t get_offset_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C_StaticFields, ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6)); }
	inline __StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392  get_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() const { return ___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6; }
	inline __StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392 * get_address_of_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6() { return &___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6; }
	inline void set_D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6(__StaticArrayInitTypeSizeU3D9_tFB912DFBF349339B8FF8FD90664028147FE90392  value)
	{
		___D0707B65D15E1083DE1735661550D02D20F47B8BC1C144D4F7EFFB60924A7CFC_6 = value;
	}
};


// Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative
struct  DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1  : public RuntimeObject
{
public:
	// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::cryptor
	intptr_t ___cryptor_0;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::sharedKeyHash
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash_1;

public:
	inline static int32_t get_offset_of_cryptor_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1, ___cryptor_0)); }
	inline intptr_t get_cryptor_0() const { return ___cryptor_0; }
	inline intptr_t* get_address_of_cryptor_0() { return &___cryptor_0; }
	inline void set_cryptor_0(intptr_t value)
	{
		___cryptor_0 = value;
	}

	inline static int32_t get_offset_of_sharedKeyHash_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1, ___sharedKeyHash_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_sharedKeyHash_1() const { return ___sharedKeyHash_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_sharedKeyHash_1() { return &___sharedKeyHash_1; }
	inline void set_sharedKeyHash_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___sharedKeyHash_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedKeyHash_1), (void*)value);
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

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Security.Cryptography.CipherMode
struct  CipherMode_t1DC3069D617AC3D17A2608F5BB36C0F115D229DF 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t1DC3069D617AC3D17A2608F5BB36C0F115D229DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.PaddingMode
struct  PaddingMode_tA6F228B2795D29C9554F2D6824DB9FF67519A0E0 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_tA6F228B2795D29C9554F2D6824DB9FF67519A0E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2  : public SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2, ____buffer_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA256_6() { return static_cast<int32_t>(offsetof(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2, ____stateSHA256_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__stateSHA256_6() const { return ____stateSHA256_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__stateSHA256_6() { return &____stateSHA256_6; }
	inline void set__stateSHA256_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____stateSHA256_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateSHA256_6), (void*)value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2, ____W_7)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__W_7() const { return ____W_7; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____W_7), (void*)value);
	}
};

struct SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2_StaticFields, ____K_8)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__K_8() const { return ____K_8; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____K_8), (void*)value);
	}
};


// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___IVValue_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___KeyValue_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
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


// System.Security.Cryptography.Rijndael
struct  Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC  : public SymmetricAlgorithm_t0A2EC7E7AD8B8976832B4F0AC432B691F862E789
{
public:

public:
};

struct Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t934CCA482596402177BAF86727F169872D74934E* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_10), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182  : public Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m0D6D2701B42A83E5A0E074BB41832EA80808B160 (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inData0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_GenerateRandomSecret_mC00EBB74690725DE2E2194D10FB221184E91866E (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, int32_t ___secretLength0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_CalculatePublicKey_m542A09AD2EA10988260C67EADF9FFA6492C89284 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mA6A1CDD39CD6CFCD208B3F102A01C90B5C4D4134 (RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182 * __this, const RuntimeMethod* method);
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BigInteger_GetBytes_m3074082860A2626AA7E75AD54145CECEA2BD08A0 (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * __this, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_CalculateSharedKey_mD31E24DA719371ABDCA5F4A0CBD4629C0E5E12A7 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___otherPartyPublicKey0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mE7ED908AA6371B0BA6184B06894171B10A589529 (SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2 * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122 (HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m5019411EFF7D26EA519E8721DC3A69CC41E23DB3 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * BigInteger_ModPow_mB1C5C90220C0D27D250191C03961A28955B89FE3 (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * __this, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___exp0, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___n1, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * BigInteger_GenerateRandom_mA119A58325209C562BC58AAAC950251E40C6B7C0 (int32_t ___bits0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * BigInteger_op_Implicit_m77909B69687C77A5E3B8F0C8C3FC71C36ED06D60 (int32_t ___value0, const RuntimeMethod* method);
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * BigInteger_op_Subtraction_m87772CCF4BC8508B87B64CFC272EF45B00B11FB3 (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi10, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_mFD712DD6BACCBBF8522C6C91F7F9D74E1EB351DC (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi10, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi21, const RuntimeMethod* method);
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mF28D172221460DBCE66A188F54F195628E8E3967 (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi10, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___bi21, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m81170D9A09D3CD01A25F643ED97348CBB1673B0C (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m282278D194293372D8BF3DD9D0C756844F93094A (const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m936DA64D7FABD6E890E0C0919D9482C90C537AF6 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t ___source0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_mE62543C5EA2D91B93999E1CC15D6A14D98EFF650 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mA8DA63FA96EB12756651890BF40A9ECF9E5120A8 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method);
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m1ECA9577B04E13C12E6A6B469476AAB6AED3E0E8 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m6AEC734973EAA3E24BB1BB7C46967A167EB13D8F (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mE9DE80C11D2F5B587B406B4907DCAF10BC991C93 (intptr_t ___cryptor0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_m756F19FDCD4B8BEC264F3C278188A94C4AD54795 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m756F19FDCD4B8BEC264F3C278188A94C4AD54795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->get_OakleyPrime768_1();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 *)il2cpp_codegen_object_new(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var);
		BigInteger__ctor_m0D6D2701B42A83E5A0E074BB41832EA80808B160(L_1, L_0, /*hidden argument*/NULL);
		__this->set_prime_1(L_1);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_mC00EBB74690725DE2E2194D10FB221184E91866E(__this, ((int32_t)160), /*hidden argument*/NULL);
		__this->set_secret_2(L_2);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m542A09AD2EA10988260C67EADF9FFA6492C89284(__this, /*hidden argument*/NULL);
		__this->set_publicKey_3(L_3);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__ctor_mC60A298836C745155151805BC8666B0FE9E1FA4F (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cryptoKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_mC60A298836C745155151805BC8666B0FE9E1FA4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182 * L_0 = (RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182 *)il2cpp_codegen_object_new(RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_mA6A1CDD39CD6CFCD208B3F102A01C90B5C4D4134(L_0, /*hidden argument*/NULL);
		__this->set_crypto_4(L_0);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_1 = __this->get_crypto_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___cryptoKey0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_3 = __this->get_crypto_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, L_4);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_5 = __this->get_crypto_4();
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_5, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProvider_get_PublicKey_m105DC0F3DE282906953F98B372B31BEF004AEFA9 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_0 = __this->get_publicKey_3();
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = BigInteger_GetBytes_m3074082860A2626AA7E75AD54145CECEA2BD08A0(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_DeriveSharedKey_m4307E1AD821B520CD377CB83E901BF918B2F25D9 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_DeriveSharedKey_m4307E1AD821B520CD377CB83E901BF918B2F25D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_0 = NULL;
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___otherPartyPublicKey0;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 *)il2cpp_codegen_object_new(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var);
		BigInteger__ctor_m0D6D2701B42A83E5A0E074BB41832EA80808B160(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_2 = V_0;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_mD31E24DA719371ABDCA5F4A0CBD4629C0E5E12A7(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = BigInteger_GetBytes_m3074082860A2626AA7E75AD54145CECEA2BD08A0(L_4, /*hidden argument*/NULL);
		__this->set_sharedKey_5(L_5);
		SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2 * L_6 = (SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2 *)il2cpp_codegen_object_new(SHA256Managed_tC093E6558E9FD287F00C58DE11B758F4779FB3A2_il2cpp_TypeInfo_var);
		SHA256Managed__ctor_mE7ED908AA6371B0BA6184B06894171B10A589529(L_6, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_7 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_sharedKey_5();
		NullCheck(L_7);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = HashAlgorithm_ComputeHash_m18501D3068AEBEB5FA83EA72BE780E371DB0C122(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		IL2CPP_LEAVE(0x3E, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_10 = V_3;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0036:
		{
			SHA256_tF15350D910DF8AC1E6ADDBA904218F95554711BD * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182 * L_12 = (RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182 *)il2cpp_codegen_object_new(RijndaelManaged_t4E3376C5DAE4AB0D658F4A00A1FE7496DB258182_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_mA6A1CDD39CD6CFCD208B3F102A01C90B5C4D4134(L_12, /*hidden argument*/NULL);
		__this->set_crypto_4(L_12);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_13 = __this->get_crypto_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_13, L_14);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_15 = __this->get_crypto_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_15);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, L_16);
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_17 = __this->get_crypto_4();
		NullCheck(L_17);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_17, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProvider_Encrypt_m74DD72284D17E3156A9C7F3182457CA3586F276C (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Encrypt_m74DD72284D17E3156A9C7F3182457CA3586F276C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t43C29A7F3A8C2DDAC9F3BF9BF739B03E4D5DE9A9_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProvider_Decrypt_m9AD8860DEC217DC76717883C4DFD3C6E59BD062B (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Decrypt_m9AD8860DEC217DC76717883C4DFD3C6E59BD062B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Rijndael_t9C59A398CC1C66BF7FC586DE417CCB517CCEB1DC * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t43C29A7F3A8C2DDAC9F3BF9BF739B03E4D5DE9A9_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m695ED7D77F64232768FBE1767766A05A9E88E146 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Dispose_m695ED7D77F64232768FBE1767766A05A9E88E146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProvider_Dispose_m5019411EFF7D26EA519E8721DC3A69CC41E23DB3(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider_Dispose_m5019411EFF7D26EA519E8721DC3A69CC41E23DB3 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_CalculatePublicKey_m542A09AD2EA10988260C67EADF9FFA6492C89284 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_CalculatePublicKey_m542A09AD2EA10988260C67EADF9FFA6492C89284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_il2cpp_TypeInfo_var);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_0 = ((DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_il2cpp_TypeInfo_var))->get_primeRoot_0();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = __this->get_secret_2();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_3 = BigInteger_ModPow_mB1C5C90220C0D27D250191C03961A28955B89FE3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_CalculateSharedKey_mD31E24DA719371ABDCA5F4A0CBD4629C0E5E12A7 (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_0 = NULL;
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_0 = ___otherPartyPublicKey0;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = __this->get_secret_2();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_3 = BigInteger_ModPow_mB1C5C90220C0D27D250191C03961A28955B89FE3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * DiffieHellmanCryptoProvider_GenerateRandomSecret_mC00EBB74690725DE2E2194D10FB221184E91866E (DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D * __this, int32_t ___secretLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_GenerateRandomSecret_mC00EBB74690725DE2E2194D10FB221184E91866E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_0 = NULL;
	bool V_1 = false;
	BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = BigInteger_GenerateRandom_mA119A58325209C562BC58AAAC950251E40C6B7C0(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_2 = V_0;
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_3 = __this->get_prime_1();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_4 = BigInteger_op_Implicit_m77909B69687C77A5E3B8F0C8C3FC71C36ED06D60(1, /*hidden argument*/NULL);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_5 = BigInteger_op_Subtraction_m87772CCF4BC8508B87B64CFC272EF45B00B11FB3(L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = BigInteger_op_GreaterThanOrEqual_mFD712DD6BACCBBF8522C6C91F7F9D74E1EB351DC(L_2, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var);
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_8 = BigInteger_op_Implicit_m77909B69687C77A5E3B8F0C8C3FC71C36ED06D60(0, /*hidden argument*/NULL);
		bool L_9 = BigInteger_op_Equality_mF28D172221460DBCE66A188F54F195628E8E3967(L_7, L_8, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_11 = V_0;
		V_2 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_12 = V_2;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProvider__cctor_mC6430EB5D1201D7268063124E413DB10D2475558 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__cctor_mC6430EB5D1201D7268063124E413DB10D2475558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->get_Generator_0();
		BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 * L_1 = (BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1 *)il2cpp_codegen_object_new(BigInteger_tB13213F2E9593E0FB1B6CD9E0F85B7DA14A7C5E1_il2cpp_TypeInfo_var);
		BigInteger__ctor_m81170D9A09D3CD01A25F643ED97348CBB1673B0C(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t5B3F8408DAD9118CCF4547CBA34C83FE502B205D_il2cpp_TypeInfo_var))->set_primeRoot_0(L_1);
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
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL egCryptorCreate();
#endif
// System.IntPtr Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DiffieHellmanCryptoProviderNative_egCryptorCreate_m282278D194293372D8BF3DD9D0C756844F93094A (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorPublicKey(intptr_t, intptr_t*, int32_t*);
#endif
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorPublicKey(System.IntPtr,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m936DA64D7FABD6E890E0C0919D9482C90C537AF6 (intptr_t ___cryptor0, intptr_t* ___key1, int32_t* ___keySize2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorPublicKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorPublicKey)(___cryptor0, ___key1, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ___key1, ___keySize2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDeriveSharedKey(intptr_t, uint8_t*, int32_t);
#endif
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDeriveSharedKey(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_mE62543C5EA2D91B93999E1CC15D6A14D98EFF650 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serverPublicKey1, int32_t ___keySize2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDeriveSharedKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___serverPublicKey1' to native representation
	uint8_t* ____serverPublicKey1_marshaled = NULL;
	if (___serverPublicKey1 != NULL)
	{
		____serverPublicKey1_marshaled = reinterpret_cast<uint8_t*>((___serverPublicKey1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDeriveSharedKey)(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____serverPublicKey1_marshaled, ___keySize2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorEncrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorEncrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mA8DA63FA96EB12756651890BF40A9ECF9E5120A8 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___plainData1, int32_t ___plainDataOffset2, int32_t ___plainDataSize3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash4, intptr_t* ___encodedData5, int32_t* ___encodedDataSize6, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorEncrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___plainData1' to native representation
	uint8_t* ____plainData1_marshaled = NULL;
	if (___plainData1 != NULL)
	{
		____plainData1_marshaled = reinterpret_cast<uint8_t*>((___plainData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorEncrypt)(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____plainData1_marshaled, ___plainDataOffset2, ___plainDataSize3, ____sharedKeyHash4_marshaled, ___encodedData5, ___encodedDataSize6);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL egCryptorDecrypt(intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
#endif
// System.Int32 Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDecrypt(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Byte[],System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m1ECA9577B04E13C12E6A6B469476AAB6AED3E0E8 (intptr_t ___cryptor0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encodedData1, int32_t ___encodedDataOffset2, int32_t ___encodedDataSize3, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash4, intptr_t* ___plainData5, int32_t* ___plainDataSize6, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, uint8_t*, intptr_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDecrypt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___encodedData1' to native representation
	uint8_t* ____encodedData1_marshaled = NULL;
	if (___encodedData1 != NULL)
	{
		____encodedData1_marshaled = reinterpret_cast<uint8_t*>((___encodedData1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___sharedKeyHash4' to native representation
	uint8_t* ____sharedKeyHash4_marshaled = NULL;
	if (___sharedKeyHash4 != NULL)
	{
		____sharedKeyHash4_marshaled = reinterpret_cast<uint8_t*>((___sharedKeyHash4)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(egCryptorDecrypt)(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cryptor0, ____encodedData1_marshaled, ___encodedDataOffset2, ___encodedDataSize3, ____sharedKeyHash4_marshaled, ___plainData5, ___plainDataSize6);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL egCryptorDispose(intptr_t);
#endif
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::egCryptorDispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_egCryptorDispose_mE9DE80C11D2F5B587B406B4907DCAF10BC991C93 (intptr_t ___cryptor0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("PhotonCryptoPlugin"), "egCryptorDispose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(egCryptorDispose)(___cryptor0);
	#else
	il2cppPInvokeFunc(___cryptor0);
	#endif

}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_m1D753DA810935AC7373C4A4A32440E596BB46B64 (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = DiffieHellmanCryptoProviderNative_egCryptorCreate_m282278D194293372D8BF3DD9D0C756844F93094A(/*hidden argument*/NULL);
		__this->set_cryptor_0((intptr_t)L_0);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative__ctor_m8FF8E25C7646E51D935ABF3185AF0B09E00E9D5A (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sharedKeyHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative__ctor_m8FF8E25C7646E51D935ABF3185AF0B09E00E9D5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___sharedKeyHash0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral39AACA340AC6FA39FADE72A4BC162E3F68505A2F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, DiffieHellmanCryptoProviderNative__ctor_m8FF8E25C7646E51D935ABF3185AF0B09E00E9D5A_RuntimeMethod_var);
	}

IL_001c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___sharedKeyHash0;
		__this->set_sharedKeyHash_1(L_3);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::get_PublicKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProviderNative_get_PublicKey_m2AAC7BAA407B50F443716BA4E2CE3A77DF2F8457 (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative_get_PublicKey_m2AAC7BAA407B50F443716BA4E2CE3A77DF2F8457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_sharedKeyHash_1();
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteral0CBD217BFB0EC93F291306B34BA5223B44B506A5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, DiffieHellmanCryptoProviderNative_get_PublicKey_m2AAC7BAA407B50F443716BA4E2CE3A77DF2F8457_RuntimeMethod_var);
	}

IL_001a:
	{
		intptr_t L_3 = __this->get_cryptor_0();
		DiffieHellmanCryptoProviderNative_egCryptorPublicKey_m936DA64D7FABD6E890E0C0919D9482C90C537AF6((intptr_t)L_3, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		intptr_t L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_2;
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_2;
		V_4 = L_9;
		goto IL_0040;
	}

IL_0040:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_4;
		return L_10;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::DeriveSharedKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_DeriveSharedKey_m29EC0766FAD79465106167736FEB55F8354B6EAB (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative_DeriveSharedKey_m29EC0766FAD79465106167736FEB55F8354B6EAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_sharedKeyHash_1();
		V_0 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_2, _stringLiteral74F6059628A004BF18CD6EC44600D208F451C153, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, DiffieHellmanCryptoProviderNative_DeriveSharedKey_m29EC0766FAD79465106167736FEB55F8354B6EAB_RuntimeMethod_var);
	}

IL_001a:
	{
		intptr_t L_3 = __this->get_cryptor_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___otherPartyPublicKey0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___otherPartyPublicKey0;
		NullCheck(L_5);
		DiffieHellmanCryptoProviderNative_egCryptorDeriveSharedKey_mE62543C5EA2D91B93999E1CC15D6A14D98EFF650((intptr_t)L_3, L_4, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Encrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProviderNative_Encrypt_m3468D009848944980F7965EB971258C650122A8D (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative_Encrypt_m3468D009848944980F7965EB971258C650122A8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	{
		intptr_t L_0 = __this->get_cryptor_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_sharedKeyHash_1();
		int32_t L_5 = DiffieHellmanCryptoProviderNative_egCryptorEncrypt_mA8DA63FA96EB12756651890BF40A9ECF9E5120A8((intptr_t)L_0, L_1, L_2, L_3, L_4, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_3;
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_4;
		return L_13;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Decrypt(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* DiffieHellmanCryptoProviderNative_Decrypt_mD76B7353A6E47CA9BFEBA496AE2597AE72EAAD40 (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative_Decrypt_mD76B7353A6E47CA9BFEBA496AE2597AE72EAAD40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	{
		intptr_t L_0 = __this->get_cryptor_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_sharedKeyHash_1();
		int32_t L_5 = DiffieHellmanCryptoProviderNative_egCryptorDecrypt_m1ECA9577B04E13C12E6A6B469476AAB6AED3E0E8((intptr_t)L_0, L_1, L_2, L_3, L_4, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_3 = L_8;
		intptr_t L_9 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_3;
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_3;
		V_4 = L_12;
		goto IL_003d;
	}

IL_0037:
	{
		V_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		goto IL_003d;
	}

IL_003d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_4;
		return L_13;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m8A4318E08F4A4AB32554C4C18CF59C7389AFCC10 (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProviderNative_Dispose_m8A4318E08F4A4AB32554C4C18CF59C7389AFCC10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DiffieHellmanCryptoProviderNative_Dispose_m6AEC734973EAA3E24BB1BB7C46967A167EB13D8F(__this, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProviderNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiffieHellmanCryptoProviderNative_Dispose_m6AEC734973EAA3E24BB1BB7C46967A167EB13D8F (DiffieHellmanCryptoProviderNative_t592764678EAE96D9085E7AD9B6A883AAD09934A1 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_cryptor_0();
		V_1 = (bool)1;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_4 = __this->get_cryptor_0();
		DiffieHellmanCryptoProviderNative_egCryptorDispose_mE9DE80C11D2F5B587B406B4907DCAF10BC991C93((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0021:
	{
	}

IL_0022:
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OakleyGroups__cctor_mBCB3AA137F7D7C2F975BBBCE380FEE3CF3AB41C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OakleyGroups__cctor_mBCB3AA137F7D7C2F975BBBCE380FEE3CF3AB41C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->set_Generator_0(((int32_t)22));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____B52BA6A3026520A6C49D37E4587601801BEE500123B3259B6BF03E7CECC3E63D_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->set_OakleyPrime768_1(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____3F35A3F5F6C4376A744ACAD409BB22F8D897F949D2311D885ADAA890981B67A0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->set_OakleyPrime1024_2(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t16DB311CA7461C87E565684E5517CF184ACB7F0C____64FCC83EC403930BF18393DBC883CCAA1FBB08AC876F77F7AA99748CA945019B_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t5687DCD9A0690BF8E47117394A7788C94FD1621F_il2cpp_TypeInfo_var))->set_OakleyPrime1536_3(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
