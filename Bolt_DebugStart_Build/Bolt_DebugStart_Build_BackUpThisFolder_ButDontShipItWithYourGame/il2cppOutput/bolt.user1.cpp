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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Bolt.BitSet
struct BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E;
// Bolt.BitSet[]
struct BitSetU5BU5D_t1C86700EE7AA024FD732F8C25EB39FF7C0AF7037;
// Bolt.Command
struct Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6;
// Bolt.CommandHistory
struct CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E;
// Bolt.Command_Meta
struct Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E;
// Bolt.Entity
struct Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085;
// Bolt.EventDispatcher
struct EventDispatcher_t7426081D9ACD0A2FCF1AFACA036F7F12E6CBB9D7;
// Bolt.IEntityBehaviour[]
struct IEntityBehaviourU5BU5D_t1551F8963A8CE1E147C0E20B403596327997B8C3;
// Bolt.IEntityReplicationFilter
struct IEntityReplicationFilter_tD0DDE7042E3C7B8A2FFC18FB0700A3F285EC0537;
// Bolt.IEntitySerializer
struct IEntitySerializer_tF7A86F8EDC9DF45C60240B19B75C6550325F5E2A;
// Bolt.IPriorityCalculator
struct IPriorityCalculator_t1FA0B29F365EC2396D9BEF500F639A1459FA74AE;
// Bolt.IProtocolToken
struct IProtocolToken_t44A2F1B824B23A2FEF0566AE9E728D9F2E33B7AD;
// Bolt.NetworkCommand_Data
struct NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E;
// Bolt.NetworkObj
struct NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF;
// Bolt.NetworkObj[]
struct NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA;
// Bolt.NetworkObj_Meta
struct NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E;
// Bolt.NetworkProperty
struct NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A;
// Bolt.NetworkPropertyInfo[]
struct NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2;
// Bolt.NetworkProperty_Bool
struct NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E;
// Bolt.NetworkProperty_Float
struct NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214;
// Bolt.NetworkProperty_Integer
struct NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095;
// Bolt.NetworkProperty_Mecanim
struct NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8;
// Bolt.NetworkProperty_Transform
struct NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB;
// Bolt.NetworkProperty_Vector
struct NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB;
// Bolt.NetworkState
struct NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481;
// Bolt.NetworkState/PropertyField
struct PropertyField_t041CA3EFB1AB083DECCBA1FFBA576689C70D0F38;
// Bolt.NetworkState_Meta
struct NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8;
// Bolt.NetworkStorage
struct NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4;
// Bolt.NetworkTransform
struct NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF;
// Bolt.NetworkValue[]
struct NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D;
// Bolt.ObjectPool`1<RobotState>
struct ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5;
// Bolt.ObjectPool`1<System.Object>
struct ObjectPool_1_t746D3F4174581DBC6509B8B16E30DCB143C9574C;
// Bolt.ObjectPool`1<TPCCommand>
struct ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546;
// Bolt.ObjectPool`1<TPCCommandInput>
struct ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC;
// Bolt.ObjectPool`1<TPCCommandLocalResult>
struct ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35;
// Bolt.ObjectPool`1<TPCCommandResult>
struct ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6;
// Bolt.ObjectPool`1<TPCstate>
struct ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3;
// Bolt.ObjectPool`1<WeaponSlot>
struct ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4;
// Bolt.Priority[]
struct PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543;
// BoltConnection
struct BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0;
// BoltDoubleList`1<Bolt.Command>
struct BoltDoubleList_1_t6E60AA73B0A0090C43C588CE5A54CA30517F287B;
// BoltDoubleList`1<Bolt.NetworkStorage>
struct BoltDoubleList_1_tEB4DF397793BA50969E656FF80A3955B530ABF26;
// BoltDoubleList`1<EntityProxy>
struct BoltDoubleList_1_tA077E8108724A19D92BB0A9F02B1B6A558E58BFF;
// BoltEntity
struct BoltEntity_tCEB10FB040659F92CEBBB9F62139977232E8248C;
// BoltRingBuffer`1<System.Int32>
struct BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985;
// ITPCCommandInput
struct ITPCCommandInput_tD30FE8F46CF0F537A775BE9C8D6D56D553CAFE4E;
// ITPCCommandLocalResult
struct ITPCCommandLocalResult_tB0862D83A20F9A3FBC625867B9C4A906A09A8E00;
// ITPCCommandResult
struct ITPCCommandResult_t4E878A3DCA8CF8DF81FEBEF9C5E173E15DDC4ECD;
// RobotState
struct RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F;
// RobotState_Meta
struct RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Bolt.PropertyCallback>>
struct Dictionary_2_tEC2A166290C0E993C616FB30461BB1C886572535;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Bolt.PropertyCallbackSimple>>
struct Dictionary_2_tD15C1DCDA5FFAD5B8DEB846CE79BCF9B606B95F1;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<Bolt.NetworkObj>
struct List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF;
// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo>
struct List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Animator>
struct List_1_t1524106F6534D255CD402B73C421A6E3E9D1D2BA;
// System.Collections.Generic.Stack`1<Bolt.NetworkStorage>
struct Stack_1_tF7F2322C84370B4AB54CBEF94CD76734910606A0;
// System.Collections.Generic.Stack`1<RobotState>
struct Stack_1_t042D50099EBDA41756EA086395049327D70919FD;
// System.Collections.Generic.Stack`1<TPCCommand>
struct Stack_1_t64CFA260AE4BF88C7C69E4BA95DEF52D1F4CEE71;
// System.Collections.Generic.Stack`1<TPCCommandInput>
struct Stack_1_tB91366BBF4D120ED805C19049961C5CE8C4305B1;
// System.Collections.Generic.Stack`1<TPCCommandLocalResult>
struct Stack_1_tB8312237E061F485376FCB65D9F8FB555D3CA50C;
// System.Collections.Generic.Stack`1<TPCCommandResult>
struct Stack_1_t2A45A5285785D6279576DD508C9539AAE5485183;
// System.Collections.Generic.Stack`1<TPCstate>
struct Stack_1_t5E2D5821A8FEEFF3963E7CF2990E6C109034CC90;
// System.Collections.Generic.Stack`1<WeaponSlot>
struct Stack_1_tCB983936EEDEA0658BEFF154B19E3F65BCF74572;
// System.Func`3<BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_3_t0833DE21D9B4410E0EEAE4D6E17B92153BFABDD5;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TPCCommand
struct TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD;
// TPCCommandInput
struct TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81;
// TPCCommandInput_Meta
struct TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F;
// TPCCommandLocalResult
struct TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A;
// TPCCommandLocalResult_Meta
struct TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94;
// TPCCommandResult
struct TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B;
// TPCCommandResult_Meta
struct TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE;
// TPCCommand_Meta
struct TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE;
// TPCstate
struct TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50;
// TPCstate_Meta
struct TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// WeaponSlot
struct WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C;
// WeaponSlot_Meta
struct WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8;

IL2CPP_EXTERN_C RuntimeClass* BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Factory_t9A1D0098B1D119A860841455306B525649AF6B82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFactory_tF1AB765CB243AA521C368EA798373F1A24DB0BB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07322967F564EBF1343606C49663C09D5FC3EBB9;
IL2CPP_EXTERN_C String_t* _stringLiteral0CAB934D6888BE11DFF0F0D8409DECB7802C57E2;
IL2CPP_EXTERN_C String_t* _stringLiteral1BFE9EC1A633EAB83C02E52400A5A8296CD0B968;
IL2CPP_EXTERN_C String_t* _stringLiteral271E9A568C0E9E562431CCB1F5DA3422162DE7B8;
IL2CPP_EXTERN_C String_t* _stringLiteral27DD9A30CFC55FDC5754C7237CF964938D7EFFF3;
IL2CPP_EXTERN_C String_t* _stringLiteral2967083730BC8A2461A7EFE981484A2852587540;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE30AB707A735B348859D20D4873E47A3C8FD44;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2CB022BC3D26BD1407C4AA787D5E46E1AD4C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F4EF44A648CC43A2273E34FD28D0DDA191AB7F9;
IL2CPP_EXTERN_C String_t* _stringLiteral379D6CE99A8A95A7096AB579D454784C82A994D8;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAA59D4BC3756040B8CE9E673C09F929E6EE9BA;
IL2CPP_EXTERN_C String_t* _stringLiteral74725C18DE45649BE3239474052A6B4EEDCD334F;
IL2CPP_EXTERN_C String_t* _stringLiteral755DD2B528D094DBE9CEBBC94F28562118438AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral767A3311C18C9E7D1C083DFA6EFD9C0556E3645F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F2A033EB104AC5BF44EAD0FF7B4BC39C336E17D;
IL2CPP_EXTERN_C String_t* _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB768895BD2715066C010F04F2E5836421FAFD6;
IL2CPP_EXTERN_C String_t* _stringLiteralAA080615B293428A562B433EE01BB4E584F0961A;
IL2CPP_EXTERN_C String_t* _stringLiteralACE0C5E90AC07202E99D0186576979BACAC854C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB09C738B597622E82F63DE1194D044A3D23AC067;
IL2CPP_EXTERN_C String_t* _stringLiteralB568D47F2E244743B1FD7472DB836EF9769C21F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB586E4F14C4E7A15F2965B5D1692D42E97DE116E;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E70A93FFB28A4E665D29C8896F86B38E51AC09;
IL2CPP_EXTERN_C String_t* _stringLiteralBFE6177C462E94E91B71972117D451280F10944F;
IL2CPP_EXTERN_C String_t* _stringLiteralC320CD729AD8BE4FFE22C3D888412160B311C0FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF83E3E0DF47D3979B0C885CE75B6CD84C9FACD;
IL2CPP_EXTERN_C String_t* _stringLiteralCB5349600C1431CCC4CABDF88C8D303306884476;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EA2A4AED734D796C3C7F821D4405C53E64D7F6;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155;
IL2CPP_EXTERN_C String_t* _stringLiteralDEA51BB13A4467C505EE6181171375F497334D54;
IL2CPP_EXTERN_C String_t* _stringLiteralE148376A7394E1DF288977776580E23427AF2951;
IL2CPP_EXTERN_C String_t* _stringLiteralE90E5ED0B6645BDC866FB97576B5E0316154F2B2;
IL2CPP_EXTERN_C String_t* _stringLiteralE9CDD127DC893BBA460DDF9A9062FA849679C3EF;
IL2CPP_EXTERN_C String_t* _stringLiteralEDBB139EEB46857EB0792CB5456F48C753A05C5F;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m1056395BEB7B4225857C7A7C8CB327909B69C97E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m17255C15DBDC6558D0E8AF012E73D481648C19FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m31585F300B6DA37C309A7E5797A3DE1FE7F590F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m496AB4D7173A74C21C4B8FC01247C8ECA5CE6D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_m84A1C9E7091E0FE4D023E7EC70A971B1F47C9546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mDE87106FFBB1EC0F30A2BE22EDF48B4678B013F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mE8FF551CC1F811BF9B1D4E714714497FE11EEFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_m3581CDFF7D2332AA141D6B3F16219A62418EE15D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_m7419DB22FD7E328D8A467CC2D8CBB1AEA6DF74BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_m80C0B8F509EA9EF28A7FD80DA2B99B8A278D10E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_m8FAABCE79732D0D30B735409B826F45C7EE54EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_m90398A1E8A67E2E0CD4AC14ABA1D2EAB62E8A765_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_mE9FF2FDB00D5EC0046264D70AA93E8C62CFDF4E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Return_mFCEE5826C615043FB496C37B43158969D8434A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m093FC4684971E97D7A668C068D5D9E7E6FFD828D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m1DDF2182B04295C77E97A9B6EA4F57CD9A34A17F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m445E55DF6E338A1EF774B830B105594071E4CD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m728FE251FA9B629617B876C75B80F470B1824398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m9B3EF320FA71D999086594BDFFB5D80930F907B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_mDBE7A0D535C7A0386BFCD3B525414BDEC5A5A407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_mF19EC2F380D46480361539ED1CBDE4A7BDE47703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IRobotState_t7EADECEC03820317ED32A4A44F1D4CCF7060C4C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ITPCCommandInput_tD30FE8F46CF0F537A775BE9C8D6D56D553CAFE4E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ITPCCommandLocalResult_tB0862D83A20F9A3FBC625867B9C4A906A09A8E00_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ITPCCommandResult_t4E878A3DCA8CF8DF81FEBEF9C5E173E15DDC4ECD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ITPCstate_t47C5F46C47FEC810973AD2F876E14AB0A335476F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t RobotState_Meta_Bolt_IFactory_Create_mB6D637B53844B4FF232C6987B2A9A48E223C9A59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_Meta_Bolt_IFactory_Return_m468AAAA9C956E7A128EEB2DF700EADA4F4622B29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_Meta_Bolt_IFactory_get_TypeObject_m7AF2CBDF1EB2CDC527373089E0F466AE3E2A5E5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_Meta_InitMeta_mD6FC87AC35604A456FFD50E095D2A7C9F3CEDFB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_Meta__cctor_m4C8EA3A5D57B50128336DB947BEB4038750A8F99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState__ctor_mC461C940D4BDC34E2D39D52DE63B8724F5A0E741_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_set_AngularSpeed_m06441820E532C9DF627DFBB5463EAEE14A8514E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_set_PlayerInSight_m7DF33F026013B6F0A2E9DB9BEB9E498540C5B081_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RobotState_set_Speed_mB252E9D5E9F6D8FAE3D474DD7B684897C7789669_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta_Bolt_IFactory_Create_m9CBA40B2231817BD4E898256C36D8423C04A53BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta_Bolt_IFactory_Return_mF26D6345AD975DBB95A8371926EE8B8234F82C92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta_Bolt_IFactory_get_TypeObject_mDC41C98C8638456E5B01E572DD748869D19F02BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta_InitMeta_m63F550DADC5FF5E628BF4ABE28D4EC892AB94EE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta__cctor_m2F80736655EAE2E8F8A02147245250058B3812D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput_Meta__ctor_m6F29421AD95D0D8DC8B4688E91EF49198C8526F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandInput__ctor_m5FD434EA5EDA695D1FF08B9F94E1FB6B04455B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta_Bolt_IFactory_Create_m6D9B3D3CFAC196FFC6656B7B2B36109A8D8E0F08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta_Bolt_IFactory_Return_mA452E901976EEFBFD4D5CAB4B6A2B5428AF32549_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta_Bolt_IFactory_get_TypeObject_m583F085FEC2F7565EA0F77B87392E7A371BE6D5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta_InitMeta_mDCF4C5F1256D0167DFEF562CBCC41F55263F35AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta__cctor_m7A29D37471BF9FC16EACE42A6AC921DB94F9F554_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult_Meta__ctor_m784CF44AF588332847A2C1CD44396EE617E66053_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandLocalResult__ctor_mC5A624E0454AC637BA82DA28F952408983D5E341_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta_Bolt_IFactory_Create_m9EC05F7A0D8C817DEC8C228FA88554637395D5CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta_Bolt_IFactory_Return_m722ABAA15E6BA694492750EFCC64081D3AF9AE5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta_Bolt_IFactory_get_TypeObject_mAE8B14E1B49D921B243F6F9CB159EB7E017CAE51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta_InitMeta_mD40DE2B760CDD8A5477FEC99C4DF5C28E2BD285D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta__cctor_m0BE577DD72AA97E7DF354BA7AD67672573CBF5A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult_Meta__ctor_m4ED70DF547E4BBFAED804C8680D640EF3D593973_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommandResult__ctor_m535B570878A547CB4D7748F78767D6586F7FE2AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Create_m99B22506FCA05D167EF7708E385AC7FF6D383206_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta_Bolt_IFactory_Create_m119EB729741CDE6033757306B18BE6F38D1E07D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta_Bolt_IFactory_Return_mE28768D8149720F50BFC4C3BAB50CA4DEB4B53E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta_Bolt_IFactory_get_TypeObject_m1DD665FABA5F2307B05990920A941CB991B6C863_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta_InitMeta_mC3DB55862FECB7311910A28E59C0B0C2A45EEEA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta_InitObject_m694510EFC3FA23AFAC1563EA429AE4158C8E19AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_Meta__cctor_mC50763B5A0F8728173FD7D09CD45033AD885D5BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand__ctor_m066EB9444D567BA4ED9991932724CBA8AA0C9560_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_get_Input_mF1C808081239E18ED1D22ADA10D898011BFBB989_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_get_LocalResult_mEF4FFFD5E85C3C0774B8E9835FCE7F6E44F7C228_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCCommand_get_Result_mB4E82B39BC96163B8CDA02083B8CB53EFBFD987F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_Meta_Bolt_IFactory_Create_m8702CE8D04166EBF8009657A0FC5F107721A556D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_Meta_Bolt_IFactory_Return_m891F22F9708F33DEAA1360F6A66BFDD096C4A175_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_Meta_Bolt_IFactory_get_TypeObject_mB282D3B2AA3A576443D173C95B3EEB49909C16D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_Meta_InitMeta_m943F5110D78B5384FADC2606391588312A28FF77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_Meta__cctor_mAC084E5D1AB96128300D7FD95DDFB3A3A7AE2468_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate__ctor_m95025E633B551539D1567995D4F05D0215D7A2A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_crouch_m1A33E584C72E8B0F58444A2D1D7F7B26629E01E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_forward_m7002CE6727BC8A4374E934AE40CFE4197EF4FE45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_grounded_m370CCBB53124358BD09F564CC59D5DAA3B977660_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_jump_m7A3EAABD859C55425440BEAC753551EC76F27708_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_jumpleg_mCC6FF54FEF83FD83EF4BB6F1A5FB9A96356CD788_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TPCstate_set_turn_m81EB747040131161E82A7CA6475898A2C7FC1D79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta_Bolt_IFactory_Create_m1BC4E809B97837BDB0714C5F4EF2957B3B8B2C41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta_Bolt_IFactory_Return_m65AEB751B45F985139994FC2FF8F7804D2216C9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta_Bolt_IFactory_get_TypeObject_m0D89673978263C55E1DFE92C3C419F8C04E43924_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta_InitMeta_m7E73CB669B7AA20CD969C21B3F8C5C842DCA4317_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta__cctor_m064A627D303D113567AE8013FD3FE93C42D0E24C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_Meta__ctor_m2D43F7F2EF62A584EAD5BF74D9144DB381438EED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot__ctor_m9B132855ACE20993FC6358BC175326192CFCEB8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_set_WeaponAmmo_mF76445DE95DF24B8463AC043F21A4D9AF83784E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WeaponSlot_set_WeaponId_m117E53AF8DF38068D0B7F291898FFB6C67DB43FC_MetadataUsageId;

struct NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2;
struct NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Bolt.NetworkObj
struct  NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF  : public RuntimeObject
{
public:
	// System.String Bolt.NetworkObj::Path
	String_t* ___Path_0;
	// Bolt.NetworkObj Bolt.NetworkObj::Root
	NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___Root_1;
	// System.Collections.Generic.List`1<Bolt.NetworkObj> Bolt.NetworkObj::RootObjects
	List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * ___RootObjects_2;
	// Bolt.NetworkObj_Meta Bolt.NetworkObj::Meta
	NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * ___Meta_3;
	// System.Int32 Bolt.NetworkObj::OffsetObjects
	int32_t ___OffsetObjects_4;
	// System.Int32 Bolt.NetworkObj::OffsetStorage
	int32_t ___OffsetStorage_5;
	// System.Int32 Bolt.NetworkObj::OffsetProperties
	int32_t ___OffsetProperties_6;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___Path_0)); }
	inline String_t* get_Path_0() const { return ___Path_0; }
	inline String_t** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(String_t* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_0), (void*)value);
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___Root_1)); }
	inline NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * get_Root_1() const { return ___Root_1; }
	inline NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_1), (void*)value);
	}

	inline static int32_t get_offset_of_RootObjects_2() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___RootObjects_2)); }
	inline List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * get_RootObjects_2() const { return ___RootObjects_2; }
	inline List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF ** get_address_of_RootObjects_2() { return &___RootObjects_2; }
	inline void set_RootObjects_2(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * value)
	{
		___RootObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootObjects_2), (void*)value);
	}

	inline static int32_t get_offset_of_Meta_3() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___Meta_3)); }
	inline NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * get_Meta_3() const { return ___Meta_3; }
	inline NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E ** get_address_of_Meta_3() { return &___Meta_3; }
	inline void set_Meta_3(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * value)
	{
		___Meta_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Meta_3), (void*)value);
	}

	inline static int32_t get_offset_of_OffsetObjects_4() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___OffsetObjects_4)); }
	inline int32_t get_OffsetObjects_4() const { return ___OffsetObjects_4; }
	inline int32_t* get_address_of_OffsetObjects_4() { return &___OffsetObjects_4; }
	inline void set_OffsetObjects_4(int32_t value)
	{
		___OffsetObjects_4 = value;
	}

	inline static int32_t get_offset_of_OffsetStorage_5() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___OffsetStorage_5)); }
	inline int32_t get_OffsetStorage_5() const { return ___OffsetStorage_5; }
	inline int32_t* get_address_of_OffsetStorage_5() { return &___OffsetStorage_5; }
	inline void set_OffsetStorage_5(int32_t value)
	{
		___OffsetStorage_5 = value;
	}

	inline static int32_t get_offset_of_OffsetProperties_6() { return static_cast<int32_t>(offsetof(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF, ___OffsetProperties_6)); }
	inline int32_t get_OffsetProperties_6() const { return ___OffsetProperties_6; }
	inline int32_t* get_address_of_OffsetProperties_6() { return &___OffsetProperties_6; }
	inline void set_OffsetProperties_6(int32_t value)
	{
		___OffsetProperties_6 = value;
	}
};


// Bolt.ObjectPool`1<RobotState>
struct  ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_t042D50099EBDA41756EA086395049327D70919FD * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5, ____pool_0)); }
	inline Stack_1_t042D50099EBDA41756EA086395049327D70919FD * get__pool_0() const { return ____pool_0; }
	inline Stack_1_t042D50099EBDA41756EA086395049327D70919FD ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_t042D50099EBDA41756EA086395049327D70919FD * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<TPCCommand>
struct  ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_t64CFA260AE4BF88C7C69E4BA95DEF52D1F4CEE71 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546, ____pool_0)); }
	inline Stack_1_t64CFA260AE4BF88C7C69E4BA95DEF52D1F4CEE71 * get__pool_0() const { return ____pool_0; }
	inline Stack_1_t64CFA260AE4BF88C7C69E4BA95DEF52D1F4CEE71 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_t64CFA260AE4BF88C7C69E4BA95DEF52D1F4CEE71 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<TPCCommandInput>
struct  ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_tB91366BBF4D120ED805C19049961C5CE8C4305B1 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC, ____pool_0)); }
	inline Stack_1_tB91366BBF4D120ED805C19049961C5CE8C4305B1 * get__pool_0() const { return ____pool_0; }
	inline Stack_1_tB91366BBF4D120ED805C19049961C5CE8C4305B1 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_tB91366BBF4D120ED805C19049961C5CE8C4305B1 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<TPCCommandLocalResult>
struct  ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_tB8312237E061F485376FCB65D9F8FB555D3CA50C * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35, ____pool_0)); }
	inline Stack_1_tB8312237E061F485376FCB65D9F8FB555D3CA50C * get__pool_0() const { return ____pool_0; }
	inline Stack_1_tB8312237E061F485376FCB65D9F8FB555D3CA50C ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_tB8312237E061F485376FCB65D9F8FB555D3CA50C * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<TPCCommandResult>
struct  ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_t2A45A5285785D6279576DD508C9539AAE5485183 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6, ____pool_0)); }
	inline Stack_1_t2A45A5285785D6279576DD508C9539AAE5485183 * get__pool_0() const { return ____pool_0; }
	inline Stack_1_t2A45A5285785D6279576DD508C9539AAE5485183 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_t2A45A5285785D6279576DD508C9539AAE5485183 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<TPCstate>
struct  ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_t5E2D5821A8FEEFF3963E7CF2990E6C109034CC90 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3, ____pool_0)); }
	inline Stack_1_t5E2D5821A8FEEFF3963E7CF2990E6C109034CC90 * get__pool_0() const { return ____pool_0; }
	inline Stack_1_t5E2D5821A8FEEFF3963E7CF2990E6C109034CC90 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_t5E2D5821A8FEEFF3963E7CF2990E6C109034CC90 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// Bolt.ObjectPool`1<WeaponSlot>
struct  ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> Bolt.ObjectPool`1::_pool
	Stack_1_tCB983936EEDEA0658BEFF154B19E3F65BCF74572 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4, ____pool_0)); }
	inline Stack_1_tCB983936EEDEA0658BEFF154B19E3F65BCF74572 * get__pool_0() const { return ____pool_0; }
	inline Stack_1_tCB983936EEDEA0658BEFF154B19E3F65BCF74572 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Stack_1_tCB983936EEDEA0658BEFF154B19E3F65BCF74572 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// BoltObject
struct  BoltObject_tC819064D474789CAD83022C9E02B590A79CF3400  : public RuntimeObject
{
public:
	// System.Boolean BoltObject::_pooled
	bool ____pooled_0;

public:
	inline static int32_t get_offset_of__pooled_0() { return static_cast<int32_t>(offsetof(BoltObject_tC819064D474789CAD83022C9E02B590A79CF3400, ____pooled_0)); }
	inline bool get__pooled_0() const { return ____pooled_0; }
	inline bool* get_address_of__pooled_0() { return &____pooled_0; }
	inline void set__pooled_0(bool value)
	{
		____pooled_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Bolt.NetworkObj>
struct  List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF, ____items_1)); }
	inline NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* get__items_1() const { return ____items_1; }
	inline NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF_StaticFields, ____emptyArray_5)); }
	inline NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NetworkObjU5BU5D_t04844067449ECE3FD8C079955A44F325CA04F5FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// Bolt.BitSet
struct  BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E  : public BoltObject_tC819064D474789CAD83022C9E02B590A79CF3400
{
public:
	// System.UInt64 Bolt.BitSet::Bits0
	uint64_t ___Bits0_3;
	// System.UInt64 Bolt.BitSet::Bits1
	uint64_t ___Bits1_4;
	// System.UInt64 Bolt.BitSet::Bits2
	uint64_t ___Bits2_5;
	// System.UInt64 Bolt.BitSet::Bits3
	uint64_t ___Bits3_6;
	// System.UInt64 Bolt.BitSet::Bits4
	uint64_t ___Bits4_7;
	// System.UInt64 Bolt.BitSet::Bits5
	uint64_t ___Bits5_8;
	// System.UInt64 Bolt.BitSet::Bits6
	uint64_t ___Bits6_9;
	// System.UInt64 Bolt.BitSet::Bits7
	uint64_t ___Bits7_10;
	// System.UInt64 Bolt.BitSet::Bits8
	uint64_t ___Bits8_11;
	// System.UInt64 Bolt.BitSet::Bits9
	uint64_t ___Bits9_12;
	// System.UInt64 Bolt.BitSet::Bits10
	uint64_t ___Bits10_13;
	// System.UInt64 Bolt.BitSet::Bits11
	uint64_t ___Bits11_14;
	// System.UInt64 Bolt.BitSet::Bits12
	uint64_t ___Bits12_15;
	// System.UInt64 Bolt.BitSet::Bits13
	uint64_t ___Bits13_16;
	// System.UInt64 Bolt.BitSet::Bits14
	uint64_t ___Bits14_17;
	// System.UInt64 Bolt.BitSet::Bits15
	uint64_t ___Bits15_18;

public:
	inline static int32_t get_offset_of_Bits0_3() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits0_3)); }
	inline uint64_t get_Bits0_3() const { return ___Bits0_3; }
	inline uint64_t* get_address_of_Bits0_3() { return &___Bits0_3; }
	inline void set_Bits0_3(uint64_t value)
	{
		___Bits0_3 = value;
	}

	inline static int32_t get_offset_of_Bits1_4() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits1_4)); }
	inline uint64_t get_Bits1_4() const { return ___Bits1_4; }
	inline uint64_t* get_address_of_Bits1_4() { return &___Bits1_4; }
	inline void set_Bits1_4(uint64_t value)
	{
		___Bits1_4 = value;
	}

	inline static int32_t get_offset_of_Bits2_5() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits2_5)); }
	inline uint64_t get_Bits2_5() const { return ___Bits2_5; }
	inline uint64_t* get_address_of_Bits2_5() { return &___Bits2_5; }
	inline void set_Bits2_5(uint64_t value)
	{
		___Bits2_5 = value;
	}

	inline static int32_t get_offset_of_Bits3_6() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits3_6)); }
	inline uint64_t get_Bits3_6() const { return ___Bits3_6; }
	inline uint64_t* get_address_of_Bits3_6() { return &___Bits3_6; }
	inline void set_Bits3_6(uint64_t value)
	{
		___Bits3_6 = value;
	}

	inline static int32_t get_offset_of_Bits4_7() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits4_7)); }
	inline uint64_t get_Bits4_7() const { return ___Bits4_7; }
	inline uint64_t* get_address_of_Bits4_7() { return &___Bits4_7; }
	inline void set_Bits4_7(uint64_t value)
	{
		___Bits4_7 = value;
	}

	inline static int32_t get_offset_of_Bits5_8() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits5_8)); }
	inline uint64_t get_Bits5_8() const { return ___Bits5_8; }
	inline uint64_t* get_address_of_Bits5_8() { return &___Bits5_8; }
	inline void set_Bits5_8(uint64_t value)
	{
		___Bits5_8 = value;
	}

	inline static int32_t get_offset_of_Bits6_9() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits6_9)); }
	inline uint64_t get_Bits6_9() const { return ___Bits6_9; }
	inline uint64_t* get_address_of_Bits6_9() { return &___Bits6_9; }
	inline void set_Bits6_9(uint64_t value)
	{
		___Bits6_9 = value;
	}

	inline static int32_t get_offset_of_Bits7_10() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits7_10)); }
	inline uint64_t get_Bits7_10() const { return ___Bits7_10; }
	inline uint64_t* get_address_of_Bits7_10() { return &___Bits7_10; }
	inline void set_Bits7_10(uint64_t value)
	{
		___Bits7_10 = value;
	}

	inline static int32_t get_offset_of_Bits8_11() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits8_11)); }
	inline uint64_t get_Bits8_11() const { return ___Bits8_11; }
	inline uint64_t* get_address_of_Bits8_11() { return &___Bits8_11; }
	inline void set_Bits8_11(uint64_t value)
	{
		___Bits8_11 = value;
	}

	inline static int32_t get_offset_of_Bits9_12() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits9_12)); }
	inline uint64_t get_Bits9_12() const { return ___Bits9_12; }
	inline uint64_t* get_address_of_Bits9_12() { return &___Bits9_12; }
	inline void set_Bits9_12(uint64_t value)
	{
		___Bits9_12 = value;
	}

	inline static int32_t get_offset_of_Bits10_13() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits10_13)); }
	inline uint64_t get_Bits10_13() const { return ___Bits10_13; }
	inline uint64_t* get_address_of_Bits10_13() { return &___Bits10_13; }
	inline void set_Bits10_13(uint64_t value)
	{
		___Bits10_13 = value;
	}

	inline static int32_t get_offset_of_Bits11_14() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits11_14)); }
	inline uint64_t get_Bits11_14() const { return ___Bits11_14; }
	inline uint64_t* get_address_of_Bits11_14() { return &___Bits11_14; }
	inline void set_Bits11_14(uint64_t value)
	{
		___Bits11_14 = value;
	}

	inline static int32_t get_offset_of_Bits12_15() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits12_15)); }
	inline uint64_t get_Bits12_15() const { return ___Bits12_15; }
	inline uint64_t* get_address_of_Bits12_15() { return &___Bits12_15; }
	inline void set_Bits12_15(uint64_t value)
	{
		___Bits12_15 = value;
	}

	inline static int32_t get_offset_of_Bits13_16() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits13_16)); }
	inline uint64_t get_Bits13_16() const { return ___Bits13_16; }
	inline uint64_t* get_address_of_Bits13_16() { return &___Bits13_16; }
	inline void set_Bits13_16(uint64_t value)
	{
		___Bits13_16 = value;
	}

	inline static int32_t get_offset_of_Bits14_17() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits14_17)); }
	inline uint64_t get_Bits14_17() const { return ___Bits14_17; }
	inline uint64_t* get_address_of_Bits14_17() { return &___Bits14_17; }
	inline void set_Bits14_17(uint64_t value)
	{
		___Bits14_17 = value;
	}

	inline static int32_t get_offset_of_Bits15_18() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E, ___Bits15_18)); }
	inline uint64_t get_Bits15_18() const { return ___Bits15_18; }
	inline uint64_t* get_address_of_Bits15_18() { return &___Bits15_18; }
	inline void set_Bits15_18(uint64_t value)
	{
		___Bits15_18 = value;
	}
};

struct BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E_StaticFields
{
public:
	// Bolt.BitSet Bolt.BitSet::Full
	BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * ___Full_2;

public:
	inline static int32_t get_offset_of_Full_2() { return static_cast<int32_t>(offsetof(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E_StaticFields, ___Full_2)); }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * get_Full_2() const { return ___Full_2; }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E ** get_address_of_Full_2() { return &___Full_2; }
	inline void set_Full_2(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * value)
	{
		___Full_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Full_2), (void*)value);
	}
};


// Bolt.CommandFlags
struct  CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C 
{
public:
	// System.Int32 Bolt.CommandFlags::bits
	int32_t ___bits_7;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}
};

struct CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields
{
public:
	// Bolt.CommandFlags Bolt.CommandFlags::ZERO
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___ZERO_0;
	// Bolt.CommandFlags Bolt.CommandFlags::HAS_EXECUTED
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___HAS_EXECUTED_1;
	// Bolt.CommandFlags Bolt.CommandFlags::SEND_STATE
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___SEND_STATE_2;
	// Bolt.CommandFlags Bolt.CommandFlags::SEND_STATE_PERFORMED
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___SEND_STATE_PERFORMED_3;
	// Bolt.CommandFlags Bolt.CommandFlags::CORRECTION_RECEIVED
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___CORRECTION_RECEIVED_4;
	// Bolt.CommandFlags Bolt.CommandFlags::DISPOSE
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___DISPOSE_5;
	// Bolt.CommandFlags Bolt.CommandFlags::MISSING
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___MISSING_6;

public:
	inline static int32_t get_offset_of_ZERO_0() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___ZERO_0)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_ZERO_0() const { return ___ZERO_0; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_ZERO_0() { return &___ZERO_0; }
	inline void set_ZERO_0(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___ZERO_0 = value;
	}

	inline static int32_t get_offset_of_HAS_EXECUTED_1() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___HAS_EXECUTED_1)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_HAS_EXECUTED_1() const { return ___HAS_EXECUTED_1; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_HAS_EXECUTED_1() { return &___HAS_EXECUTED_1; }
	inline void set_HAS_EXECUTED_1(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___HAS_EXECUTED_1 = value;
	}

	inline static int32_t get_offset_of_SEND_STATE_2() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___SEND_STATE_2)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_SEND_STATE_2() const { return ___SEND_STATE_2; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_SEND_STATE_2() { return &___SEND_STATE_2; }
	inline void set_SEND_STATE_2(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___SEND_STATE_2 = value;
	}

	inline static int32_t get_offset_of_SEND_STATE_PERFORMED_3() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___SEND_STATE_PERFORMED_3)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_SEND_STATE_PERFORMED_3() const { return ___SEND_STATE_PERFORMED_3; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_SEND_STATE_PERFORMED_3() { return &___SEND_STATE_PERFORMED_3; }
	inline void set_SEND_STATE_PERFORMED_3(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___SEND_STATE_PERFORMED_3 = value;
	}

	inline static int32_t get_offset_of_CORRECTION_RECEIVED_4() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___CORRECTION_RECEIVED_4)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_CORRECTION_RECEIVED_4() const { return ___CORRECTION_RECEIVED_4; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_CORRECTION_RECEIVED_4() { return &___CORRECTION_RECEIVED_4; }
	inline void set_CORRECTION_RECEIVED_4(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___CORRECTION_RECEIVED_4 = value;
	}

	inline static int32_t get_offset_of_DISPOSE_5() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___DISPOSE_5)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_DISPOSE_5() const { return ___DISPOSE_5; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_DISPOSE_5() { return &___DISPOSE_5; }
	inline void set_DISPOSE_5(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___DISPOSE_5 = value;
	}

	inline static int32_t get_offset_of_MISSING_6() { return static_cast<int32_t>(offsetof(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C_StaticFields, ___MISSING_6)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_MISSING_6() const { return ___MISSING_6; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_MISSING_6() { return &___MISSING_6; }
	inline void set_MISSING_6(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___MISSING_6 = value;
	}
};


// Bolt.EntityFlags
struct  EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C 
{
public:
	// System.Int32 Bolt.EntityFlags::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};

struct EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields
{
public:
	// Bolt.EntityFlags Bolt.EntityFlags::ZERO
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___ZERO_0;
	// Bolt.EntityFlags Bolt.EntityFlags::HAS_CONTROL
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___HAS_CONTROL_1;
	// Bolt.EntityFlags Bolt.EntityFlags::PERSIST_ON_LOAD
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___PERSIST_ON_LOAD_2;
	// Bolt.EntityFlags Bolt.EntityFlags::ATTACHED
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___ATTACHED_3;
	// Bolt.EntityFlags Bolt.EntityFlags::CONTROLLER_LOCAL_PREDICTION
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___CONTROLLER_LOCAL_PREDICTION_4;
	// Bolt.EntityFlags Bolt.EntityFlags::SCENE_OBJECT
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___SCENE_OBJECT_5;

public:
	inline static int32_t get_offset_of_ZERO_0() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___ZERO_0)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_ZERO_0() const { return ___ZERO_0; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_ZERO_0() { return &___ZERO_0; }
	inline void set_ZERO_0(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___ZERO_0 = value;
	}

	inline static int32_t get_offset_of_HAS_CONTROL_1() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___HAS_CONTROL_1)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_HAS_CONTROL_1() const { return ___HAS_CONTROL_1; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_HAS_CONTROL_1() { return &___HAS_CONTROL_1; }
	inline void set_HAS_CONTROL_1(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___HAS_CONTROL_1 = value;
	}

	inline static int32_t get_offset_of_PERSIST_ON_LOAD_2() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___PERSIST_ON_LOAD_2)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_PERSIST_ON_LOAD_2() const { return ___PERSIST_ON_LOAD_2; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_PERSIST_ON_LOAD_2() { return &___PERSIST_ON_LOAD_2; }
	inline void set_PERSIST_ON_LOAD_2(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___PERSIST_ON_LOAD_2 = value;
	}

	inline static int32_t get_offset_of_ATTACHED_3() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___ATTACHED_3)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_ATTACHED_3() const { return ___ATTACHED_3; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_ATTACHED_3() { return &___ATTACHED_3; }
	inline void set_ATTACHED_3(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___ATTACHED_3 = value;
	}

	inline static int32_t get_offset_of_CONTROLLER_LOCAL_PREDICTION_4() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___CONTROLLER_LOCAL_PREDICTION_4)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_CONTROLLER_LOCAL_PREDICTION_4() const { return ___CONTROLLER_LOCAL_PREDICTION_4; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_CONTROLLER_LOCAL_PREDICTION_4() { return &___CONTROLLER_LOCAL_PREDICTION_4; }
	inline void set_CONTROLLER_LOCAL_PREDICTION_4(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___CONTROLLER_LOCAL_PREDICTION_4 = value;
	}

	inline static int32_t get_offset_of_SCENE_OBJECT_5() { return static_cast<int32_t>(offsetof(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C_StaticFields, ___SCENE_OBJECT_5)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_SCENE_OBJECT_5() const { return ___SCENE_OBJECT_5; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_SCENE_OBJECT_5() { return &___SCENE_OBJECT_5; }
	inline void set_SCENE_OBJECT_5(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___SCENE_OBJECT_5 = value;
	}
};


// Bolt.NetworkCommand_Data
struct  NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E  : public NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF
{
public:
	// Bolt.IProtocolToken Bolt.NetworkCommand_Data::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E, ___U3CTokenU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CTokenU3Ek__BackingField_7() const { return ___U3CTokenU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CTokenU3Ek__BackingField_7() { return &___U3CTokenU3Ek__BackingField_7; }
	inline void set_U3CTokenU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CTokenU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_7), (void*)value);
	}
};


// Bolt.NetworkId
struct  NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Bolt.NetworkId::Packed
			uint64_t ___Packed_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Packed_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Bolt.NetworkId::Connection
			uint32_t ___Connection_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Connection_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Entity_2_OffsetPadding[4];
			// System.UInt32 Bolt.NetworkId::Entity
			uint32_t ___Entity_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Entity_2_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___Entity_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Packed_0() { return static_cast<int32_t>(offsetof(NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9, ___Packed_0)); }
	inline uint64_t get_Packed_0() const { return ___Packed_0; }
	inline uint64_t* get_address_of_Packed_0() { return &___Packed_0; }
	inline void set_Packed_0(uint64_t value)
	{
		___Packed_0 = value;
	}

	inline static int32_t get_offset_of_Connection_1() { return static_cast<int32_t>(offsetof(NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9, ___Connection_1)); }
	inline uint32_t get_Connection_1() const { return ___Connection_1; }
	inline uint32_t* get_address_of_Connection_1() { return &___Connection_1; }
	inline void set_Connection_1(uint32_t value)
	{
		___Connection_1 = value;
	}

	inline static int32_t get_offset_of_Entity_2() { return static_cast<int32_t>(offsetof(NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9, ___Entity_2)); }
	inline uint32_t get_Entity_2() const { return ___Entity_2; }
	inline uint32_t* get_address_of_Entity_2() { return &___Entity_2; }
	inline void set_Entity_2(uint32_t value)
	{
		___Entity_2 = value;
	}
};


// Bolt.NetworkObj_Meta_Offsets
struct  Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB 
{
public:
	// System.Int32 Bolt.NetworkObj_Meta_Offsets::OffsetStorage
	int32_t ___OffsetStorage_0;
	// System.Int32 Bolt.NetworkObj_Meta_Offsets::OffsetObjects
	int32_t ___OffsetObjects_1;
	// System.Int32 Bolt.NetworkObj_Meta_Offsets::OffsetProperties
	int32_t ___OffsetProperties_2;

public:
	inline static int32_t get_offset_of_OffsetStorage_0() { return static_cast<int32_t>(offsetof(Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB, ___OffsetStorage_0)); }
	inline int32_t get_OffsetStorage_0() const { return ___OffsetStorage_0; }
	inline int32_t* get_address_of_OffsetStorage_0() { return &___OffsetStorage_0; }
	inline void set_OffsetStorage_0(int32_t value)
	{
		___OffsetStorage_0 = value;
	}

	inline static int32_t get_offset_of_OffsetObjects_1() { return static_cast<int32_t>(offsetof(Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB, ___OffsetObjects_1)); }
	inline int32_t get_OffsetObjects_1() const { return ___OffsetObjects_1; }
	inline int32_t* get_address_of_OffsetObjects_1() { return &___OffsetObjects_1; }
	inline void set_OffsetObjects_1(int32_t value)
	{
		___OffsetObjects_1 = value;
	}

	inline static int32_t get_offset_of_OffsetProperties_2() { return static_cast<int32_t>(offsetof(Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB, ___OffsetProperties_2)); }
	inline int32_t get_OffsetProperties_2() const { return ___OffsetProperties_2; }
	inline int32_t* get_address_of_OffsetProperties_2() { return &___OffsetProperties_2; }
	inline void set_OffsetProperties_2(int32_t value)
	{
		___OffsetProperties_2 = value;
	}
};


// Bolt.NetworkObj_Root
struct  NetworkObj_Root_t24AF24D023291D58992F832F123F23E299B31FE6  : public NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF
{
public:

public:
};


// Bolt.NetworkPropertyInfo
struct  NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9 
{
public:
	// System.Int32[] Bolt.NetworkPropertyInfo::Indices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___Indices_0;
	// System.String[] Bolt.NetworkPropertyInfo::Paths
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Paths_1;
	// System.Int32 Bolt.NetworkPropertyInfo::OffsetObjects
	int32_t ___OffsetObjects_2;
	// Bolt.NetworkProperty Bolt.NetworkPropertyInfo::Property
	NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * ___Property_3;

public:
	inline static int32_t get_offset_of_Indices_0() { return static_cast<int32_t>(offsetof(NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9, ___Indices_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_Indices_0() const { return ___Indices_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_Indices_0() { return &___Indices_0; }
	inline void set_Indices_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___Indices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_0), (void*)value);
	}

	inline static int32_t get_offset_of_Paths_1() { return static_cast<int32_t>(offsetof(NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9, ___Paths_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Paths_1() const { return ___Paths_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Paths_1() { return &___Paths_1; }
	inline void set_Paths_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Paths_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Paths_1), (void*)value);
	}

	inline static int32_t get_offset_of_OffsetObjects_2() { return static_cast<int32_t>(offsetof(NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9, ___OffsetObjects_2)); }
	inline int32_t get_OffsetObjects_2() const { return ___OffsetObjects_2; }
	inline int32_t* get_address_of_OffsetObjects_2() { return &___OffsetObjects_2; }
	inline void set_OffsetObjects_2(int32_t value)
	{
		___OffsetObjects_2 = value;
	}

	inline static int32_t get_offset_of_Property_3() { return static_cast<int32_t>(offsetof(NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9, ___Property_3)); }
	inline NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * get_Property_3() const { return ___Property_3; }
	inline NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A ** get_address_of_Property_3() { return &___Property_3; }
	inline void set_Property_3(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * value)
	{
		___Property_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Bolt.NetworkPropertyInfo
struct NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Indices_0;
	char** ___Paths_1;
	int32_t ___OffsetObjects_2;
	NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * ___Property_3;
};
// Native definition for COM marshalling of Bolt.NetworkPropertyInfo
struct NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Indices_0;
	Il2CppChar** ___Paths_1;
	int32_t ___OffsetObjects_2;
	NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * ___Property_3;
};

// Bolt.NetworkTrigger
struct  NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Bolt.NetworkTrigger::Frame
			int32_t ___Frame_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Frame_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___History_1_OffsetPadding[4];
			// System.Int32 Bolt.NetworkTrigger::History
			int32_t ___History_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___History_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___History_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Frame_0() { return static_cast<int32_t>(offsetof(NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E, ___Frame_0)); }
	inline int32_t get_Frame_0() const { return ___Frame_0; }
	inline int32_t* get_address_of_Frame_0() { return &___Frame_0; }
	inline void set_Frame_0(int32_t value)
	{
		___Frame_0 = value;
	}

	inline static int32_t get_offset_of_History_1() { return static_cast<int32_t>(offsetof(NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E, ___History_1)); }
	inline int32_t get_History_1() const { return ___History_1; }
	inline int32_t* get_address_of_History_1() { return &___History_1; }
	inline void set_History_1(int32_t value)
	{
		___History_1 = value;
	}
};


// Bolt.PrefabId
struct  PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B 
{
public:
	// System.Int32 Bolt.PrefabId::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// Bolt.PropertyFloatCompressionSettings
struct  PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 
{
public:
	// System.Int32 Bolt.PropertyFloatCompressionSettings::_bits
	int32_t ____bits_0;
	// System.Single Bolt.PropertyFloatCompressionSettings::_pack
	float ____pack_1;
	// System.Single Bolt.PropertyFloatCompressionSettings::_read
	float ____read_2;
	// System.Single Bolt.PropertyFloatCompressionSettings::_shift
	float ____shift_3;

public:
	inline static int32_t get_offset_of__bits_0() { return static_cast<int32_t>(offsetof(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96, ____bits_0)); }
	inline int32_t get__bits_0() const { return ____bits_0; }
	inline int32_t* get_address_of__bits_0() { return &____bits_0; }
	inline void set__bits_0(int32_t value)
	{
		____bits_0 = value;
	}

	inline static int32_t get_offset_of__pack_1() { return static_cast<int32_t>(offsetof(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96, ____pack_1)); }
	inline float get__pack_1() const { return ____pack_1; }
	inline float* get_address_of__pack_1() { return &____pack_1; }
	inline void set__pack_1(float value)
	{
		____pack_1 = value;
	}

	inline static int32_t get_offset_of__read_2() { return static_cast<int32_t>(offsetof(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96, ____read_2)); }
	inline float get__read_2() const { return ____read_2; }
	inline float* get_address_of__read_2() { return &____read_2; }
	inline void set__read_2(float value)
	{
		____read_2 = value;
	}

	inline static int32_t get_offset_of__shift_3() { return static_cast<int32_t>(offsetof(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96, ____shift_3)); }
	inline float get__shift_3() const { return ____shift_3; }
	inline float* get_address_of__shift_3() { return &____shift_3; }
	inline void set__shift_3(float value)
	{
		____shift_3 = value;
	}
};


// Bolt.PropertyFloatSettings
struct  PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E 
{
public:
	// System.Boolean Bolt.PropertyFloatSettings::IsAngle
	bool ___IsAngle_0;

public:
	inline static int32_t get_offset_of_IsAngle_0() { return static_cast<int32_t>(offsetof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E, ___IsAngle_0)); }
	inline bool get_IsAngle_0() const { return ___IsAngle_0; }
	inline bool* get_address_of_IsAngle_0() { return &___IsAngle_0; }
	inline void set_IsAngle_0(bool value)
	{
		___IsAngle_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Bolt.PropertyFloatSettings
struct PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E_marshaled_pinvoke
{
	int32_t ___IsAngle_0;
};
// Native definition for COM marshalling of Bolt.PropertyFloatSettings
struct PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E_marshaled_com
{
	int32_t ___IsAngle_0;
};

// Bolt.PropertyIntCompressionSettings
struct  PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481 
{
public:
	// System.Int32 Bolt.PropertyIntCompressionSettings::_bits
	int32_t ____bits_0;
	// System.Int32 Bolt.PropertyIntCompressionSettings::_shift
	int32_t ____shift_1;

public:
	inline static int32_t get_offset_of__bits_0() { return static_cast<int32_t>(offsetof(PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481, ____bits_0)); }
	inline int32_t get__bits_0() const { return ____bits_0; }
	inline int32_t* get_address_of__bits_0() { return &____bits_0; }
	inline void set__bits_0(int32_t value)
	{
		____bits_0 = value;
	}

	inline static int32_t get_offset_of__shift_1() { return static_cast<int32_t>(offsetof(PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481, ____shift_1)); }
	inline int32_t get__shift_1() const { return ____shift_1; }
	inline int32_t* get_address_of__shift_1() { return &____shift_1; }
	inline void set__shift_1(int32_t value)
	{
		____shift_1 = value;
	}
};


// Bolt.PropertyInterpolationSettings
struct  PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5 
{
public:
	// System.Boolean Bolt.PropertyInterpolationSettings::Enabled
	bool ___Enabled_0;
	// System.Single Bolt.PropertyInterpolationSettings::SnapMagnitude
	float ___SnapMagnitude_1;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_SnapMagnitude_1() { return static_cast<int32_t>(offsetof(PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5, ___SnapMagnitude_1)); }
	inline float get_SnapMagnitude_1() const { return ___SnapMagnitude_1; }
	inline float* get_address_of_SnapMagnitude_1() { return &___SnapMagnitude_1; }
	inline void set_SnapMagnitude_1(float value)
	{
		___SnapMagnitude_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Bolt.PropertyInterpolationSettings
struct PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5_marshaled_pinvoke
{
	int32_t ___Enabled_0;
	float ___SnapMagnitude_1;
};
// Native definition for COM marshalling of Bolt.PropertyInterpolationSettings
struct PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5_marshaled_com
{
	int32_t ___Enabled_0;
	float ___SnapMagnitude_1;
};

// Bolt.TypeId
struct  TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2 
{
public:
	// System.Int32 Bolt.TypeId::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// WeaponSlot
struct  WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C  : public NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF
{
public:

public:
};


// Bolt.Command
struct  Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6  : public NetworkObj_Root_t24AF24D023291D58992F832F123F23E299B31FE6
{
public:
	// Bolt.NetworkStorage Bolt.Command::storage
	NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * ___storage_10;
	// Bolt.Command_Meta Bolt.Command::Meta
	Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E * ___Meta_11;
	// System.Int32 Bolt.Command::SmoothFrameFrom
	int32_t ___SmoothFrameFrom_12;
	// System.Int32 Bolt.Command::SmoothFrameTo
	int32_t ___SmoothFrameTo_13;
	// System.Boolean Bolt.Command::<AssignedInputDeltaCompression>k__BackingField
	bool ___U3CAssignedInputDeltaCompressionU3Ek__BackingField_14;
	// System.Boolean Bolt.Command::<AssignedResultDeltaCompression>k__BackingField
	bool ___U3CAssignedResultDeltaCompressionU3Ek__BackingField_15;
	// Bolt.NetworkStorage Bolt.Command::SmoothStorageFrom
	NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * ___SmoothStorageFrom_16;
	// Bolt.NetworkStorage Bolt.Command::SmoothStorageTo
	NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * ___SmoothStorageTo_17;
	// System.UInt16 Bolt.Command::Sequence
	uint16_t ___Sequence_18;
	// Bolt.CommandFlags Bolt.Command::Flags
	CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  ___Flags_19;
	// System.Int32 Bolt.Command::<ServerFrame>k__BackingField
	int32_t ___U3CServerFrameU3Ek__BackingField_20;
	// System.Object Bolt.Command::<UserToken>k__BackingField
	RuntimeObject * ___U3CUserTokenU3Ek__BackingField_21;
	// System.Boolean Bolt.Command::shouldDeltaCompressInput
	bool ___shouldDeltaCompressInput_22;
	// System.Boolean Bolt.Command::shouldDeltaCompressResult
	bool ___shouldDeltaCompressResult_23;
	// Bolt.Command Bolt.Command::<IBoltListNode<Bolt.Command>.prev>k__BackingField
	Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * ___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24;
	// Bolt.Command Bolt.Command::<IBoltListNode<Bolt.Command>.next>k__BackingField
	Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * ___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25;
	// System.Object Bolt.Command::<IBoltListNode<Bolt.Command>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_storage_10() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___storage_10)); }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * get_storage_10() const { return ___storage_10; }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 ** get_address_of_storage_10() { return &___storage_10; }
	inline void set_storage_10(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * value)
	{
		___storage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storage_10), (void*)value);
	}

	inline static int32_t get_offset_of_Meta_11() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___Meta_11)); }
	inline Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E * get_Meta_11() const { return ___Meta_11; }
	inline Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E ** get_address_of_Meta_11() { return &___Meta_11; }
	inline void set_Meta_11(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E * value)
	{
		___Meta_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Meta_11), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothFrameFrom_12() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___SmoothFrameFrom_12)); }
	inline int32_t get_SmoothFrameFrom_12() const { return ___SmoothFrameFrom_12; }
	inline int32_t* get_address_of_SmoothFrameFrom_12() { return &___SmoothFrameFrom_12; }
	inline void set_SmoothFrameFrom_12(int32_t value)
	{
		___SmoothFrameFrom_12 = value;
	}

	inline static int32_t get_offset_of_SmoothFrameTo_13() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___SmoothFrameTo_13)); }
	inline int32_t get_SmoothFrameTo_13() const { return ___SmoothFrameTo_13; }
	inline int32_t* get_address_of_SmoothFrameTo_13() { return &___SmoothFrameTo_13; }
	inline void set_SmoothFrameTo_13(int32_t value)
	{
		___SmoothFrameTo_13 = value;
	}

	inline static int32_t get_offset_of_U3CAssignedInputDeltaCompressionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CAssignedInputDeltaCompressionU3Ek__BackingField_14)); }
	inline bool get_U3CAssignedInputDeltaCompressionU3Ek__BackingField_14() const { return ___U3CAssignedInputDeltaCompressionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CAssignedInputDeltaCompressionU3Ek__BackingField_14() { return &___U3CAssignedInputDeltaCompressionU3Ek__BackingField_14; }
	inline void set_U3CAssignedInputDeltaCompressionU3Ek__BackingField_14(bool value)
	{
		___U3CAssignedInputDeltaCompressionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CAssignedResultDeltaCompressionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CAssignedResultDeltaCompressionU3Ek__BackingField_15)); }
	inline bool get_U3CAssignedResultDeltaCompressionU3Ek__BackingField_15() const { return ___U3CAssignedResultDeltaCompressionU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CAssignedResultDeltaCompressionU3Ek__BackingField_15() { return &___U3CAssignedResultDeltaCompressionU3Ek__BackingField_15; }
	inline void set_U3CAssignedResultDeltaCompressionU3Ek__BackingField_15(bool value)
	{
		___U3CAssignedResultDeltaCompressionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_SmoothStorageFrom_16() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___SmoothStorageFrom_16)); }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * get_SmoothStorageFrom_16() const { return ___SmoothStorageFrom_16; }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 ** get_address_of_SmoothStorageFrom_16() { return &___SmoothStorageFrom_16; }
	inline void set_SmoothStorageFrom_16(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * value)
	{
		___SmoothStorageFrom_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmoothStorageFrom_16), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothStorageTo_17() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___SmoothStorageTo_17)); }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * get_SmoothStorageTo_17() const { return ___SmoothStorageTo_17; }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 ** get_address_of_SmoothStorageTo_17() { return &___SmoothStorageTo_17; }
	inline void set_SmoothStorageTo_17(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * value)
	{
		___SmoothStorageTo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmoothStorageTo_17), (void*)value);
	}

	inline static int32_t get_offset_of_Sequence_18() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___Sequence_18)); }
	inline uint16_t get_Sequence_18() const { return ___Sequence_18; }
	inline uint16_t* get_address_of_Sequence_18() { return &___Sequence_18; }
	inline void set_Sequence_18(uint16_t value)
	{
		___Sequence_18 = value;
	}

	inline static int32_t get_offset_of_Flags_19() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___Flags_19)); }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  get_Flags_19() const { return ___Flags_19; }
	inline CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C * get_address_of_Flags_19() { return &___Flags_19; }
	inline void set_Flags_19(CommandFlags_t585CDB7190CF50B900F305B72AE10718B8DE619C  value)
	{
		___Flags_19 = value;
	}

	inline static int32_t get_offset_of_U3CServerFrameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CServerFrameU3Ek__BackingField_20)); }
	inline int32_t get_U3CServerFrameU3Ek__BackingField_20() const { return ___U3CServerFrameU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CServerFrameU3Ek__BackingField_20() { return &___U3CServerFrameU3Ek__BackingField_20; }
	inline void set_U3CServerFrameU3Ek__BackingField_20(int32_t value)
	{
		___U3CServerFrameU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CUserTokenU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CUserTokenU3Ek__BackingField_21)); }
	inline RuntimeObject * get_U3CUserTokenU3Ek__BackingField_21() const { return ___U3CUserTokenU3Ek__BackingField_21; }
	inline RuntimeObject ** get_address_of_U3CUserTokenU3Ek__BackingField_21() { return &___U3CUserTokenU3Ek__BackingField_21; }
	inline void set_U3CUserTokenU3Ek__BackingField_21(RuntimeObject * value)
	{
		___U3CUserTokenU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserTokenU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_shouldDeltaCompressInput_22() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___shouldDeltaCompressInput_22)); }
	inline bool get_shouldDeltaCompressInput_22() const { return ___shouldDeltaCompressInput_22; }
	inline bool* get_address_of_shouldDeltaCompressInput_22() { return &___shouldDeltaCompressInput_22; }
	inline void set_shouldDeltaCompressInput_22(bool value)
	{
		___shouldDeltaCompressInput_22 = value;
	}

	inline static int32_t get_offset_of_shouldDeltaCompressResult_23() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___shouldDeltaCompressResult_23)); }
	inline bool get_shouldDeltaCompressResult_23() const { return ___shouldDeltaCompressResult_23; }
	inline bool* get_address_of_shouldDeltaCompressResult_23() { return &___shouldDeltaCompressResult_23; }
	inline void set_shouldDeltaCompressResult_23(bool value)
	{
		___shouldDeltaCompressResult_23 = value;
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24)); }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * get_U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24() const { return ___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24; }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 ** get_address_of_U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24() { return &___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24; }
	inline void set_U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * value)
	{
		___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_CommandU3E_prevU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25)); }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * get_U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25() const { return ___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25; }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 ** get_address_of_U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25() { return &___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25; }
	inline void set_U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * value)
	{
		___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_CommandU3E_nextU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6, ___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26() const { return ___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26() { return &___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26; }
	inline void set_U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_CommandU3E_listU3Ek__BackingField_26), (void*)value);
	}
};


// Bolt.DoubleBuffer`1<UnityEngine.Quaternion>
struct  DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7 
{
public:
	// T Bolt.DoubleBuffer`1::Previous
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Previous_0;
	// T Bolt.DoubleBuffer`1::Current
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Current_1;

public:
	inline static int32_t get_offset_of_Previous_0() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7, ___Previous_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Previous_0() const { return ___Previous_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Previous_0() { return &___Previous_0; }
	inline void set_Previous_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Previous_0 = value;
	}

	inline static int32_t get_offset_of_Current_1() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7, ___Current_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Current_1() const { return ___Current_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Current_1() { return &___Current_1; }
	inline void set_Current_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Current_1 = value;
	}
};


// Bolt.DoubleBuffer`1<UnityEngine.Vector3>
struct  DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7 
{
public:
	// T Bolt.DoubleBuffer`1::Previous
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Previous_0;
	// T Bolt.DoubleBuffer`1::Current
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Current_1;

public:
	inline static int32_t get_offset_of_Previous_0() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7, ___Previous_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Previous_0() const { return ___Previous_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Previous_0() { return &___Previous_0; }
	inline void set_Previous_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Previous_0 = value;
	}

	inline static int32_t get_offset_of_Current_1() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7, ___Current_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Current_1() const { return ___Current_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Current_1() { return &___Current_1; }
	inline void set_Current_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Current_1 = value;
	}
};


// Bolt.ExtrapolationVelocityModes
struct  ExtrapolationVelocityModes_t2F5EBA1B0F1E43FD640A47C7D059947BE386DC4C 
{
public:
	// System.Int32 Bolt.ExtrapolationVelocityModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtrapolationVelocityModes_t2F5EBA1B0F1E43FD640A47C7D059947BE386DC4C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.MecanimDirection
struct  MecanimDirection_t7697DB767A0B14E85C9D68986157F54CEA02F16F 
{
public:
	// System.Int32 Bolt.MecanimDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MecanimDirection_t7697DB767A0B14E85C9D68986157F54CEA02F16F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.MecanimMode
struct  MecanimMode_tD10DE47C0677E8A5F043DB896B61BE5420F1C391 
{
public:
	// System.Int32 Bolt.MecanimMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MecanimMode_tD10DE47C0677E8A5F043DB896B61BE5420F1C391, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.NetworkObj_Meta
struct  NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E  : public RuntimeObject
{
public:
	// Bolt.TypeId Bolt.NetworkObj_Meta::TypeId
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  ___TypeId_2;
	// Bolt.BitSet[] Bolt.NetworkObj_Meta::Filters
	BitSetU5BU5D_t1C86700EE7AA024FD732F8C25EB39FF7C0AF7037* ___Filters_3;
	// Bolt.Priority[] Bolt.NetworkObj_Meta::PropertiesTempPriority
	PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* ___PropertiesTempPriority_4;
	// Bolt.NetworkPropertyInfo[] Bolt.NetworkObj_Meta::Properties
	NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* ___Properties_5;
	// System.Collections.Generic.HashSet`1<System.String> Bolt.NetworkObj_Meta::CallbackPaths
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___CallbackPaths_6;
	// System.Collections.Generic.Stack`1<Bolt.NetworkStorage> Bolt.NetworkObj_Meta::StoragePool
	Stack_1_tF7F2322C84370B4AB54CBEF94CD76734910606A0 * ___StoragePool_7;
	// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo> Bolt.NetworkObj_Meta::OnRender
	List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * ___OnRender_8;
	// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo> Bolt.NetworkObj_Meta::OnSimulateAfter
	List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * ___OnSimulateAfter_9;
	// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo> Bolt.NetworkObj_Meta::OnSimulateBefore
	List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * ___OnSimulateBefore_10;
	// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo> Bolt.NetworkObj_Meta::OnControlGainedLost
	List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * ___OnControlGainedLost_11;
	// System.Collections.Generic.List`1<Bolt.NetworkPropertyInfo> Bolt.NetworkObj_Meta::OnFrameCloned
	List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * ___OnFrameCloned_12;
	// System.Int32 Bolt.NetworkObj_Meta::CountObjects
	int32_t ___CountObjects_13;
	// System.Int32 Bolt.NetworkObj_Meta::CountStorage
	int32_t ___CountStorage_14;
	// System.Int32 Bolt.NetworkObj_Meta::CountProperties
	int32_t ___CountProperties_15;

public:
	inline static int32_t get_offset_of_TypeId_2() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___TypeId_2)); }
	inline TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  get_TypeId_2() const { return ___TypeId_2; }
	inline TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2 * get_address_of_TypeId_2() { return &___TypeId_2; }
	inline void set_TypeId_2(TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  value)
	{
		___TypeId_2 = value;
	}

	inline static int32_t get_offset_of_Filters_3() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___Filters_3)); }
	inline BitSetU5BU5D_t1C86700EE7AA024FD732F8C25EB39FF7C0AF7037* get_Filters_3() const { return ___Filters_3; }
	inline BitSetU5BU5D_t1C86700EE7AA024FD732F8C25EB39FF7C0AF7037** get_address_of_Filters_3() { return &___Filters_3; }
	inline void set_Filters_3(BitSetU5BU5D_t1C86700EE7AA024FD732F8C25EB39FF7C0AF7037* value)
	{
		___Filters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filters_3), (void*)value);
	}

	inline static int32_t get_offset_of_PropertiesTempPriority_4() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___PropertiesTempPriority_4)); }
	inline PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* get_PropertiesTempPriority_4() const { return ___PropertiesTempPriority_4; }
	inline PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543** get_address_of_PropertiesTempPriority_4() { return &___PropertiesTempPriority_4; }
	inline void set_PropertiesTempPriority_4(PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* value)
	{
		___PropertiesTempPriority_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertiesTempPriority_4), (void*)value);
	}

	inline static int32_t get_offset_of_Properties_5() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___Properties_5)); }
	inline NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* get_Properties_5() const { return ___Properties_5; }
	inline NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2** get_address_of_Properties_5() { return &___Properties_5; }
	inline void set_Properties_5(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* value)
	{
		___Properties_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Properties_5), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackPaths_6() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___CallbackPaths_6)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_CallbackPaths_6() const { return ___CallbackPaths_6; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_CallbackPaths_6() { return &___CallbackPaths_6; }
	inline void set_CallbackPaths_6(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___CallbackPaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackPaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_StoragePool_7() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___StoragePool_7)); }
	inline Stack_1_tF7F2322C84370B4AB54CBEF94CD76734910606A0 * get_StoragePool_7() const { return ___StoragePool_7; }
	inline Stack_1_tF7F2322C84370B4AB54CBEF94CD76734910606A0 ** get_address_of_StoragePool_7() { return &___StoragePool_7; }
	inline void set_StoragePool_7(Stack_1_tF7F2322C84370B4AB54CBEF94CD76734910606A0 * value)
	{
		___StoragePool_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StoragePool_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnRender_8() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___OnRender_8)); }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * get_OnRender_8() const { return ___OnRender_8; }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 ** get_address_of_OnRender_8() { return &___OnRender_8; }
	inline void set_OnRender_8(List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * value)
	{
		___OnRender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRender_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnSimulateAfter_9() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___OnSimulateAfter_9)); }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * get_OnSimulateAfter_9() const { return ___OnSimulateAfter_9; }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 ** get_address_of_OnSimulateAfter_9() { return &___OnSimulateAfter_9; }
	inline void set_OnSimulateAfter_9(List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * value)
	{
		___OnSimulateAfter_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSimulateAfter_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnSimulateBefore_10() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___OnSimulateBefore_10)); }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * get_OnSimulateBefore_10() const { return ___OnSimulateBefore_10; }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 ** get_address_of_OnSimulateBefore_10() { return &___OnSimulateBefore_10; }
	inline void set_OnSimulateBefore_10(List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * value)
	{
		___OnSimulateBefore_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSimulateBefore_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnControlGainedLost_11() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___OnControlGainedLost_11)); }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * get_OnControlGainedLost_11() const { return ___OnControlGainedLost_11; }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 ** get_address_of_OnControlGainedLost_11() { return &___OnControlGainedLost_11; }
	inline void set_OnControlGainedLost_11(List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * value)
	{
		___OnControlGainedLost_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControlGainedLost_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnFrameCloned_12() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___OnFrameCloned_12)); }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * get_OnFrameCloned_12() const { return ___OnFrameCloned_12; }
	inline List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 ** get_address_of_OnFrameCloned_12() { return &___OnFrameCloned_12; }
	inline void set_OnFrameCloned_12(List_1_t6AF690E64E32F8B7ABDDE0004EBCF8CE4639C5A7 * value)
	{
		___OnFrameCloned_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFrameCloned_12), (void*)value);
	}

	inline static int32_t get_offset_of_CountObjects_13() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___CountObjects_13)); }
	inline int32_t get_CountObjects_13() const { return ___CountObjects_13; }
	inline int32_t* get_address_of_CountObjects_13() { return &___CountObjects_13; }
	inline void set_CountObjects_13(int32_t value)
	{
		___CountObjects_13 = value;
	}

	inline static int32_t get_offset_of_CountStorage_14() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___CountStorage_14)); }
	inline int32_t get_CountStorage_14() const { return ___CountStorage_14; }
	inline int32_t* get_address_of_CountStorage_14() { return &___CountStorage_14; }
	inline void set_CountStorage_14(int32_t value)
	{
		___CountStorage_14 = value;
	}

	inline static int32_t get_offset_of_CountProperties_15() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E, ___CountProperties_15)); }
	inline int32_t get_CountProperties_15() const { return ___CountProperties_15; }
	inline int32_t* get_address_of_CountProperties_15() { return &___CountProperties_15; }
	inline void set_CountProperties_15(int32_t value)
	{
		___CountProperties_15 = value;
	}
};

struct NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_StaticFields
{
public:
	// System.Int32[] Bolt.NetworkObj_Meta::ZeroIndices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___ZeroIndices_0;
	// System.String[] Bolt.NetworkObj_Meta::ZeroPaths
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ZeroPaths_1;

public:
	inline static int32_t get_offset_of_ZeroIndices_0() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_StaticFields, ___ZeroIndices_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_ZeroIndices_0() const { return ___ZeroIndices_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_ZeroIndices_0() { return &___ZeroIndices_0; }
	inline void set_ZeroIndices_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___ZeroIndices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZeroIndices_0), (void*)value);
	}

	inline static int32_t get_offset_of_ZeroPaths_1() { return static_cast<int32_t>(offsetof(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_StaticFields, ___ZeroPaths_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ZeroPaths_1() const { return ___ZeroPaths_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ZeroPaths_1() { return &___ZeroPaths_1; }
	inline void set_ZeroPaths_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ZeroPaths_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ZeroPaths_1), (void*)value);
	}
};


// Bolt.NetworkProperty
struct  NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A  : public RuntimeObject
{
public:
	// System.Int32 Bolt.NetworkProperty::OffsetStorage
	int32_t ___OffsetStorage_0;
	// System.Int32 Bolt.NetworkProperty::OffsetProperties
	int32_t ___OffsetProperties_1;
	// System.Int32 Bolt.NetworkProperty::PropertyFilters
	int32_t ___PropertyFilters_2;
	// System.Int32 Bolt.NetworkProperty::PropertyNameHash
	int32_t ___PropertyNameHash_3;
	// System.String Bolt.NetworkProperty::PropertyName
	String_t* ___PropertyName_4;
	// System.Int32 Bolt.NetworkProperty::PropertyPriority
	int32_t ___PropertyPriority_5;
	// Bolt.NetworkObj_Meta Bolt.NetworkProperty::PropertyMeta
	NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * ___PropertyMeta_6;
	// System.Boolean Bolt.NetworkProperty::ToProxies
	bool ___ToProxies_7;
	// System.Boolean Bolt.NetworkProperty::ToController
	bool ___ToController_8;
	// Bolt.PropertyInterpolationSettings Bolt.NetworkProperty::Interpolation
	PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5  ___Interpolation_9;

public:
	inline static int32_t get_offset_of_OffsetStorage_0() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___OffsetStorage_0)); }
	inline int32_t get_OffsetStorage_0() const { return ___OffsetStorage_0; }
	inline int32_t* get_address_of_OffsetStorage_0() { return &___OffsetStorage_0; }
	inline void set_OffsetStorage_0(int32_t value)
	{
		___OffsetStorage_0 = value;
	}

	inline static int32_t get_offset_of_OffsetProperties_1() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___OffsetProperties_1)); }
	inline int32_t get_OffsetProperties_1() const { return ___OffsetProperties_1; }
	inline int32_t* get_address_of_OffsetProperties_1() { return &___OffsetProperties_1; }
	inline void set_OffsetProperties_1(int32_t value)
	{
		___OffsetProperties_1 = value;
	}

	inline static int32_t get_offset_of_PropertyFilters_2() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___PropertyFilters_2)); }
	inline int32_t get_PropertyFilters_2() const { return ___PropertyFilters_2; }
	inline int32_t* get_address_of_PropertyFilters_2() { return &___PropertyFilters_2; }
	inline void set_PropertyFilters_2(int32_t value)
	{
		___PropertyFilters_2 = value;
	}

	inline static int32_t get_offset_of_PropertyNameHash_3() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___PropertyNameHash_3)); }
	inline int32_t get_PropertyNameHash_3() const { return ___PropertyNameHash_3; }
	inline int32_t* get_address_of_PropertyNameHash_3() { return &___PropertyNameHash_3; }
	inline void set_PropertyNameHash_3(int32_t value)
	{
		___PropertyNameHash_3 = value;
	}

	inline static int32_t get_offset_of_PropertyName_4() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___PropertyName_4)); }
	inline String_t* get_PropertyName_4() const { return ___PropertyName_4; }
	inline String_t** get_address_of_PropertyName_4() { return &___PropertyName_4; }
	inline void set_PropertyName_4(String_t* value)
	{
		___PropertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPriority_5() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___PropertyPriority_5)); }
	inline int32_t get_PropertyPriority_5() const { return ___PropertyPriority_5; }
	inline int32_t* get_address_of_PropertyPriority_5() { return &___PropertyPriority_5; }
	inline void set_PropertyPriority_5(int32_t value)
	{
		___PropertyPriority_5 = value;
	}

	inline static int32_t get_offset_of_PropertyMeta_6() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___PropertyMeta_6)); }
	inline NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * get_PropertyMeta_6() const { return ___PropertyMeta_6; }
	inline NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E ** get_address_of_PropertyMeta_6() { return &___PropertyMeta_6; }
	inline void set_PropertyMeta_6(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * value)
	{
		___PropertyMeta_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyMeta_6), (void*)value);
	}

	inline static int32_t get_offset_of_ToProxies_7() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___ToProxies_7)); }
	inline bool get_ToProxies_7() const { return ___ToProxies_7; }
	inline bool* get_address_of_ToProxies_7() { return &___ToProxies_7; }
	inline void set_ToProxies_7(bool value)
	{
		___ToProxies_7 = value;
	}

	inline static int32_t get_offset_of_ToController_8() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___ToController_8)); }
	inline bool get_ToController_8() const { return ___ToController_8; }
	inline bool* get_address_of_ToController_8() { return &___ToController_8; }
	inline void set_ToController_8(bool value)
	{
		___ToController_8 = value;
	}

	inline static int32_t get_offset_of_Interpolation_9() { return static_cast<int32_t>(offsetof(NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A, ___Interpolation_9)); }
	inline PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5  get_Interpolation_9() const { return ___Interpolation_9; }
	inline PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5 * get_address_of_Interpolation_9() { return &___Interpolation_9; }
	inline void set_Interpolation_9(PropertyInterpolationSettings_t9D7B066BC2582E47C277C3FDA284609468076CD5  value)
	{
		___Interpolation_9 = value;
	}
};


// Bolt.NetworkState
struct  NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481  : public NetworkObj_Root_t24AF24D023291D58992F832F123F23E299B31FE6
{
public:
	// System.Single Bolt.NetworkState::MecanimWarningTimeout
	float ___MecanimWarningTimeout_7;
	// Bolt.Entity Bolt.NetworkState::Entity
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * ___Entity_8;
	// System.Collections.Generic.List`1<UnityEngine.Animator> Bolt.NetworkState::Animators
	List_1_t1524106F6534D255CD402B73C421A6E3E9D1D2BA * ___Animators_9;
	// Bolt.NetworkState_Meta Bolt.NetworkState::Meta
	NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 * ___Meta_10;
	// Bolt.BitSet Bolt.NetworkState::PropertyDefaultMask
	BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * ___PropertyDefaultMask_11;
	// Bolt.Priority[] Bolt.NetworkState::PropertyPriorityTemp
	PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* ___PropertyPriorityTemp_12;
	// BoltDoubleList`1<Bolt.NetworkStorage> Bolt.NetworkState::Frames
	BoltDoubleList_1_tEB4DF397793BA50969E656FF80A3955B530ABF26 * ___Frames_13;
	// Bolt.NetworkState_PropertyField Bolt.NetworkState::propertyFieldRoot
	PropertyField_t041CA3EFB1AB083DECCBA1FFBA576689C70D0F38 * ___propertyFieldRoot_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Bolt.PropertyCallback>> Bolt.NetworkState::_callbacks
	Dictionary_2_tEC2A166290C0E993C616FB30461BB1C886572535 * ____callbacks_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Bolt.PropertyCallbackSimple>> Bolt.NetworkState::_callbacksSimple
	Dictionary_2_tD15C1DCDA5FFAD5B8DEB846CE79BCF9B606B95F1 * ____callbacksSimple_16;
	// Bolt.BitSet Bolt.NetworkState::_changedProperties
	BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * ____changedProperties_17;

public:
	inline static int32_t get_offset_of_MecanimWarningTimeout_7() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___MecanimWarningTimeout_7)); }
	inline float get_MecanimWarningTimeout_7() const { return ___MecanimWarningTimeout_7; }
	inline float* get_address_of_MecanimWarningTimeout_7() { return &___MecanimWarningTimeout_7; }
	inline void set_MecanimWarningTimeout_7(float value)
	{
		___MecanimWarningTimeout_7 = value;
	}

	inline static int32_t get_offset_of_Entity_8() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___Entity_8)); }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * get_Entity_8() const { return ___Entity_8; }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 ** get_address_of_Entity_8() { return &___Entity_8; }
	inline void set_Entity_8(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * value)
	{
		___Entity_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entity_8), (void*)value);
	}

	inline static int32_t get_offset_of_Animators_9() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___Animators_9)); }
	inline List_1_t1524106F6534D255CD402B73C421A6E3E9D1D2BA * get_Animators_9() const { return ___Animators_9; }
	inline List_1_t1524106F6534D255CD402B73C421A6E3E9D1D2BA ** get_address_of_Animators_9() { return &___Animators_9; }
	inline void set_Animators_9(List_1_t1524106F6534D255CD402B73C421A6E3E9D1D2BA * value)
	{
		___Animators_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Animators_9), (void*)value);
	}

	inline static int32_t get_offset_of_Meta_10() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___Meta_10)); }
	inline NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 * get_Meta_10() const { return ___Meta_10; }
	inline NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 ** get_address_of_Meta_10() { return &___Meta_10; }
	inline void set_Meta_10(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 * value)
	{
		___Meta_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Meta_10), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyDefaultMask_11() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___PropertyDefaultMask_11)); }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * get_PropertyDefaultMask_11() const { return ___PropertyDefaultMask_11; }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E ** get_address_of_PropertyDefaultMask_11() { return &___PropertyDefaultMask_11; }
	inline void set_PropertyDefaultMask_11(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * value)
	{
		___PropertyDefaultMask_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyDefaultMask_11), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyPriorityTemp_12() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___PropertyPriorityTemp_12)); }
	inline PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* get_PropertyPriorityTemp_12() const { return ___PropertyPriorityTemp_12; }
	inline PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543** get_address_of_PropertyPriorityTemp_12() { return &___PropertyPriorityTemp_12; }
	inline void set_PropertyPriorityTemp_12(PriorityU5BU5D_t425E674C3C1D64EF5E338E959E3C1E29CC624543* value)
	{
		___PropertyPriorityTemp_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyPriorityTemp_12), (void*)value);
	}

	inline static int32_t get_offset_of_Frames_13() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___Frames_13)); }
	inline BoltDoubleList_1_tEB4DF397793BA50969E656FF80A3955B530ABF26 * get_Frames_13() const { return ___Frames_13; }
	inline BoltDoubleList_1_tEB4DF397793BA50969E656FF80A3955B530ABF26 ** get_address_of_Frames_13() { return &___Frames_13; }
	inline void set_Frames_13(BoltDoubleList_1_tEB4DF397793BA50969E656FF80A3955B530ABF26 * value)
	{
		___Frames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Frames_13), (void*)value);
	}

	inline static int32_t get_offset_of_propertyFieldRoot_14() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ___propertyFieldRoot_14)); }
	inline PropertyField_t041CA3EFB1AB083DECCBA1FFBA576689C70D0F38 * get_propertyFieldRoot_14() const { return ___propertyFieldRoot_14; }
	inline PropertyField_t041CA3EFB1AB083DECCBA1FFBA576689C70D0F38 ** get_address_of_propertyFieldRoot_14() { return &___propertyFieldRoot_14; }
	inline void set_propertyFieldRoot_14(PropertyField_t041CA3EFB1AB083DECCBA1FFBA576689C70D0F38 * value)
	{
		___propertyFieldRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyFieldRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__callbacks_15() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ____callbacks_15)); }
	inline Dictionary_2_tEC2A166290C0E993C616FB30461BB1C886572535 * get__callbacks_15() const { return ____callbacks_15; }
	inline Dictionary_2_tEC2A166290C0E993C616FB30461BB1C886572535 ** get_address_of__callbacks_15() { return &____callbacks_15; }
	inline void set__callbacks_15(Dictionary_2_tEC2A166290C0E993C616FB30461BB1C886572535 * value)
	{
		____callbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacks_15), (void*)value);
	}

	inline static int32_t get_offset_of__callbacksSimple_16() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ____callbacksSimple_16)); }
	inline Dictionary_2_tD15C1DCDA5FFAD5B8DEB846CE79BCF9B606B95F1 * get__callbacksSimple_16() const { return ____callbacksSimple_16; }
	inline Dictionary_2_tD15C1DCDA5FFAD5B8DEB846CE79BCF9B606B95F1 ** get_address_of__callbacksSimple_16() { return &____callbacksSimple_16; }
	inline void set__callbacksSimple_16(Dictionary_2_tD15C1DCDA5FFAD5B8DEB846CE79BCF9B606B95F1 * value)
	{
		____callbacksSimple_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacksSimple_16), (void*)value);
	}

	inline static int32_t get_offset_of__changedProperties_17() { return static_cast<int32_t>(offsetof(NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481, ____changedProperties_17)); }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * get__changedProperties_17() const { return ____changedProperties_17; }
	inline BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E ** get_address_of__changedProperties_17() { return &____changedProperties_17; }
	inline void set__changedProperties_17(BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E * value)
	{
		____changedProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____changedProperties_17), (void*)value);
	}
};


// Bolt.NetworkStorage
struct  NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4  : public BitSet_t4C5DCEAAB72D534AFDE2FB4EBF8E4A13A223C78E
{
public:
	// System.Int32 Bolt.NetworkStorage::Frame
	int32_t ___Frame_19;
	// Bolt.NetworkObj Bolt.NetworkStorage::Root
	NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___Root_20;
	// Bolt.NetworkValue[] Bolt.NetworkStorage::Values
	NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* ___Values_21;
	// Bolt.NetworkStorage Bolt.NetworkStorage::<IBoltListNode<Bolt.NetworkStorage>.prev>k__BackingField
	NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22;
	// Bolt.NetworkStorage Bolt.NetworkStorage::<IBoltListNode<Bolt.NetworkStorage>.next>k__BackingField
	NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23;
	// System.Object Bolt.NetworkStorage::<IBoltListNode<Bolt.NetworkStorage>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_Frame_19() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___Frame_19)); }
	inline int32_t get_Frame_19() const { return ___Frame_19; }
	inline int32_t* get_address_of_Frame_19() { return &___Frame_19; }
	inline void set_Frame_19(int32_t value)
	{
		___Frame_19 = value;
	}

	inline static int32_t get_offset_of_Root_20() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___Root_20)); }
	inline NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * get_Root_20() const { return ___Root_20; }
	inline NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF ** get_address_of_Root_20() { return &___Root_20; }
	inline void set_Root_20(NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * value)
	{
		___Root_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_20), (void*)value);
	}

	inline static int32_t get_offset_of_Values_21() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___Values_21)); }
	inline NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* get_Values_21() const { return ___Values_21; }
	inline NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D** get_address_of_Values_21() { return &___Values_21; }
	inline void set_Values_21(NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* value)
	{
		___Values_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22)); }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * get_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22() const { return ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22; }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 ** get_address_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22() { return &___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22; }
	inline void set_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * value)
	{
		___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_prevU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23)); }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * get_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23() const { return ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23; }
	inline NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 ** get_address_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23() { return &___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23; }
	inline void set_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * value)
	{
		___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_nextU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4, ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24() const { return ___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24() { return &___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24; }
	inline void set_U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_NetworkStorageU3E_listU3Ek__BackingField_24), (void*)value);
	}
};


// Bolt.NetworkValue
struct  NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Bolt.NetworkValue::Packed0
			uint64_t ___Packed0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Packed0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_1_OffsetPadding[8];
			// System.UInt64 Bolt.NetworkValue::Packed1
			uint64_t ___Packed1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Packed1_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean Bolt.NetworkValue::Bool
			bool ___Bool_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___Bool_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Bolt.NetworkValue::Int0
			int32_t ___Int0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Int0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Bolt.NetworkValue::Float0
			float ___Float0_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_5_OffsetPadding[4];
			// System.Single Bolt.NetworkValue::Float1
			float ___Float1_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_5_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_6_OffsetPadding[8];
			// System.Single Bolt.NetworkValue::Float2
			float ___Float2_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_6_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_7_OffsetPadding[12];
			// System.Single Bolt.NetworkValue::Float3
			float ___Float3_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_7_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid Bolt.NetworkValue::Guid
			Guid_t  ___Guid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t  ___Guid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Bolt.NetworkId Bolt.NetworkValue::NetworkId
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Bolt.PrefabId Bolt.NetworkValue::PrefabId
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Bolt.NetworkTrigger Bolt.NetworkValue::TriggerLocal
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TriggerSend_12_OffsetPadding[8];
			// Bolt.NetworkTrigger Bolt.NetworkValue::TriggerSend
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TriggerSend_12_OffsetPadding_forAlignmentOnly[8];
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Vector2 Bolt.NetworkValue::Vector2
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Vector3 Bolt.NetworkValue::Vector3
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Quaternion Bolt.NetworkValue::Quaternion
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Color Bolt.NetworkValue::Color
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.Color32 Bolt.NetworkValue::Color32
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding[12];
			// System.Boolean Bolt.NetworkValue::HasCopiedFromTransform
			bool ___HasCopiedFromTransform_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding_forAlignmentOnly[12];
			bool ___HasCopiedFromTransform_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Object_19_OffsetPadding[16];
			// System.Object Bolt.NetworkValue::Object
			RuntimeObject * ___Object_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Object_19_OffsetPadding_forAlignmentOnly[16];
			RuntimeObject * ___Object_19_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Packed0_0() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Packed0_0)); }
	inline uint64_t get_Packed0_0() const { return ___Packed0_0; }
	inline uint64_t* get_address_of_Packed0_0() { return &___Packed0_0; }
	inline void set_Packed0_0(uint64_t value)
	{
		___Packed0_0 = value;
	}

	inline static int32_t get_offset_of_Packed1_1() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Packed1_1)); }
	inline uint64_t get_Packed1_1() const { return ___Packed1_1; }
	inline uint64_t* get_address_of_Packed1_1() { return &___Packed1_1; }
	inline void set_Packed1_1(uint64_t value)
	{
		___Packed1_1 = value;
	}

	inline static int32_t get_offset_of_Bool_2() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Bool_2)); }
	inline bool get_Bool_2() const { return ___Bool_2; }
	inline bool* get_address_of_Bool_2() { return &___Bool_2; }
	inline void set_Bool_2(bool value)
	{
		___Bool_2 = value;
	}

	inline static int32_t get_offset_of_Int0_3() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Int0_3)); }
	inline int32_t get_Int0_3() const { return ___Int0_3; }
	inline int32_t* get_address_of_Int0_3() { return &___Int0_3; }
	inline void set_Int0_3(int32_t value)
	{
		___Int0_3 = value;
	}

	inline static int32_t get_offset_of_Float0_4() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Float0_4)); }
	inline float get_Float0_4() const { return ___Float0_4; }
	inline float* get_address_of_Float0_4() { return &___Float0_4; }
	inline void set_Float0_4(float value)
	{
		___Float0_4 = value;
	}

	inline static int32_t get_offset_of_Float1_5() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Float1_5)); }
	inline float get_Float1_5() const { return ___Float1_5; }
	inline float* get_address_of_Float1_5() { return &___Float1_5; }
	inline void set_Float1_5(float value)
	{
		___Float1_5 = value;
	}

	inline static int32_t get_offset_of_Float2_6() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Float2_6)); }
	inline float get_Float2_6() const { return ___Float2_6; }
	inline float* get_address_of_Float2_6() { return &___Float2_6; }
	inline void set_Float2_6(float value)
	{
		___Float2_6 = value;
	}

	inline static int32_t get_offset_of_Float3_7() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Float3_7)); }
	inline float get_Float3_7() const { return ___Float3_7; }
	inline float* get_address_of_Float3_7() { return &___Float3_7; }
	inline void set_Float3_7(float value)
	{
		___Float3_7 = value;
	}

	inline static int32_t get_offset_of_Guid_8() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Guid_8)); }
	inline Guid_t  get_Guid_8() const { return ___Guid_8; }
	inline Guid_t * get_address_of_Guid_8() { return &___Guid_8; }
	inline void set_Guid_8(Guid_t  value)
	{
		___Guid_8 = value;
	}

	inline static int32_t get_offset_of_NetworkId_9() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___NetworkId_9)); }
	inline NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  get_NetworkId_9() const { return ___NetworkId_9; }
	inline NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9 * get_address_of_NetworkId_9() { return &___NetworkId_9; }
	inline void set_NetworkId_9(NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  value)
	{
		___NetworkId_9 = value;
	}

	inline static int32_t get_offset_of_PrefabId_10() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___PrefabId_10)); }
	inline PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  get_PrefabId_10() const { return ___PrefabId_10; }
	inline PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B * get_address_of_PrefabId_10() { return &___PrefabId_10; }
	inline void set_PrefabId_10(PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  value)
	{
		___PrefabId_10 = value;
	}

	inline static int32_t get_offset_of_TriggerLocal_11() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___TriggerLocal_11)); }
	inline NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  get_TriggerLocal_11() const { return ___TriggerLocal_11; }
	inline NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E * get_address_of_TriggerLocal_11() { return &___TriggerLocal_11; }
	inline void set_TriggerLocal_11(NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  value)
	{
		___TriggerLocal_11 = value;
	}

	inline static int32_t get_offset_of_TriggerSend_12() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___TriggerSend_12)); }
	inline NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  get_TriggerSend_12() const { return ___TriggerSend_12; }
	inline NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E * get_address_of_TriggerSend_12() { return &___TriggerSend_12; }
	inline void set_TriggerSend_12(NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  value)
	{
		___TriggerSend_12 = value;
	}

	inline static int32_t get_offset_of_Vector2_13() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Vector2_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Vector2_13() const { return ___Vector2_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Vector2_13() { return &___Vector2_13; }
	inline void set_Vector2_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Vector2_13 = value;
	}

	inline static int32_t get_offset_of_Vector3_14() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Vector3_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Vector3_14() const { return ___Vector3_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Vector3_14() { return &___Vector3_14; }
	inline void set_Vector3_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Vector3_14 = value;
	}

	inline static int32_t get_offset_of_Quaternion_15() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Quaternion_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Quaternion_15() const { return ___Quaternion_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Quaternion_15() { return &___Quaternion_15; }
	inline void set_Quaternion_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Quaternion_15 = value;
	}

	inline static int32_t get_offset_of_Color_16() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Color_16)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_Color_16() const { return ___Color_16; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_Color_16() { return &___Color_16; }
	inline void set_Color_16(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___Color_16 = value;
	}

	inline static int32_t get_offset_of_Color32_17() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Color32_17)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_Color32_17() const { return ___Color32_17; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_Color32_17() { return &___Color32_17; }
	inline void set_Color32_17(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___Color32_17 = value;
	}

	inline static int32_t get_offset_of_HasCopiedFromTransform_18() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___HasCopiedFromTransform_18)); }
	inline bool get_HasCopiedFromTransform_18() const { return ___HasCopiedFromTransform_18; }
	inline bool* get_address_of_HasCopiedFromTransform_18() { return &___HasCopiedFromTransform_18; }
	inline void set_HasCopiedFromTransform_18(bool value)
	{
		___HasCopiedFromTransform_18 = value;
	}

	inline static int32_t get_offset_of_Object_19() { return static_cast<int32_t>(offsetof(NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126, ___Object_19)); }
	inline RuntimeObject * get_Object_19() const { return ___Object_19; }
	inline RuntimeObject ** get_address_of_Object_19() { return &___Object_19; }
	inline void set_Object_19(RuntimeObject * value)
	{
		___Object_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Object_19), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Bolt.NetworkValue
struct NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Packed0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Packed0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_1_OffsetPadding[8];
			uint64_t ___Packed1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Packed1_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Bool_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Bool_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Int0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Int0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_5_OffsetPadding[4];
			float ___Float1_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_5_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_6_OffsetPadding[8];
			float ___Float2_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_6_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_7_OffsetPadding[12];
			float ___Float3_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_7_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Guid_t  ___Guid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t  ___Guid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TriggerSend_12_OffsetPadding[8];
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TriggerSend_12_OffsetPadding_forAlignmentOnly[8];
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding[12];
			int32_t ___HasCopiedFromTransform_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding_forAlignmentOnly[12];
			int32_t ___HasCopiedFromTransform_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Object_19_OffsetPadding[16];
			Il2CppIUnknown* ___Object_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Object_19_OffsetPadding_forAlignmentOnly[16];
			Il2CppIUnknown* ___Object_19_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of Bolt.NetworkValue
struct NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Packed0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Packed0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_1_OffsetPadding[8];
			uint64_t ___Packed1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Packed1_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Bool_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Bool_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___Int0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Int0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_5_OffsetPadding[4];
			float ___Float1_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_5_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_6_OffsetPadding[8];
			float ___Float2_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_6_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_7_OffsetPadding[12];
			float ___Float3_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_7_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Guid_t  ___Guid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t  ___Guid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerLocal_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TriggerSend_12_OffsetPadding[8];
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TriggerSend_12_OffsetPadding_forAlignmentOnly[8];
			NetworkTrigger_t84DF9BEE80D30662125166250B42390B2B62639E  ___TriggerSend_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Vector2_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Vector3_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Quaternion_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___Color32_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding[12];
			int32_t ___HasCopiedFromTransform_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___HasCopiedFromTransform_18_OffsetPadding_forAlignmentOnly[12];
			int32_t ___HasCopiedFromTransform_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Object_19_OffsetPadding[16];
			Il2CppIUnknown* ___Object_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Object_19_OffsetPadding_forAlignmentOnly[16];
			Il2CppIUnknown* ___Object_19_forAlignmentOnly;
		};
	};
};

// Bolt.PropertyVectorCompressionSettings
struct  PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C 
{
public:
	// System.Boolean Bolt.PropertyVectorCompressionSettings::StrictComparison
	bool ___StrictComparison_0;
	// Bolt.PropertyFloatCompressionSettings Bolt.PropertyVectorCompressionSettings::X
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___X_1;
	// Bolt.PropertyFloatCompressionSettings Bolt.PropertyVectorCompressionSettings::Y
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Y_2;
	// Bolt.PropertyFloatCompressionSettings Bolt.PropertyVectorCompressionSettings::Z
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Z_3;

public:
	inline static int32_t get_offset_of_StrictComparison_0() { return static_cast<int32_t>(offsetof(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C, ___StrictComparison_0)); }
	inline bool get_StrictComparison_0() const { return ___StrictComparison_0; }
	inline bool* get_address_of_StrictComparison_0() { return &___StrictComparison_0; }
	inline void set_StrictComparison_0(bool value)
	{
		___StrictComparison_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C, ___X_1)); }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  get_X_1() const { return ___X_1; }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 * get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C, ___Y_2)); }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  get_Y_2() const { return ___Y_2; }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 * get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C, ___Z_3)); }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  get_Z_3() const { return ___Z_3; }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 * get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  value)
	{
		___Z_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Bolt.PropertyVectorCompressionSettings
struct PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C_marshaled_pinvoke
{
	int32_t ___StrictComparison_0;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___X_1;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Y_2;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Z_3;
};
// Native definition for COM marshalling of Bolt.PropertyVectorCompressionSettings
struct PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C_marshaled_com
{
	int32_t ___StrictComparison_0;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___X_1;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Y_2;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Z_3;
};

// Bolt.QueryComponentOptions
struct  QueryComponentOptions_t48572062BDC178E8F5A332F15036D7063FC154DF 
{
public:
	// System.Int32 Bolt.QueryComponentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryComponentOptions_t48572062BDC178E8F5A332F15036D7063FC154DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.TransformSpaces
struct  TransformSpaces_tE663516F4B42C6C725E1584E10041F7112D3A158 
{
public:
	// System.Int32 Bolt.TransformSpaces::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformSpaces_tE663516F4B42C6C725E1584E10041F7112D3A158, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.UniqueId
struct  UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Guid Bolt.UniqueId::guid
			Guid_t  ___guid_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Guid_t  ___guid_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Bolt.UniqueId::uint0
			uint32_t ___uint0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint1_2_OffsetPadding[4];
			// System.UInt32 Bolt.UniqueId::uint1
			uint32_t ___uint1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint1_2_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint2_3_OffsetPadding[8];
			// System.UInt32 Bolt.UniqueId::uint2
			uint32_t ___uint2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint2_3_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint3_4_OffsetPadding[12];
			// System.UInt32 Bolt.UniqueId::uint3
			uint32_t ___uint3_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint3_4_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint3_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Bolt.UniqueId::byte0
			uint8_t ___byte0_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte0_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte1_6_OffsetPadding[1];
			// System.Byte Bolt.UniqueId::byte1
			uint8_t ___byte1_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte1_6_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte1_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte2_7_OffsetPadding[2];
			// System.Byte Bolt.UniqueId::byte2
			uint8_t ___byte2_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte2_7_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte2_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte3_8_OffsetPadding[3];
			// System.Byte Bolt.UniqueId::byte3
			uint8_t ___byte3_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte3_8_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte3_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte4_9_OffsetPadding[4];
			// System.Byte Bolt.UniqueId::byte4
			uint8_t ___byte4_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte4_9_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte4_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte5_10_OffsetPadding[5];
			// System.Byte Bolt.UniqueId::byte5
			uint8_t ___byte5_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte5_10_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte5_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte6_11_OffsetPadding[6];
			// System.Byte Bolt.UniqueId::byte6
			uint8_t ___byte6_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte6_11_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte6_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte7_12_OffsetPadding[7];
			// System.Byte Bolt.UniqueId::byte7
			uint8_t ___byte7_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte7_12_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte7_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte8_13_OffsetPadding[8];
			// System.Byte Bolt.UniqueId::byte8
			uint8_t ___byte8_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte8_13_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte8_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte9_14_OffsetPadding[9];
			// System.Byte Bolt.UniqueId::byte9
			uint8_t ___byte9_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte9_14_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte9_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte10_15_OffsetPadding[10];
			// System.Byte Bolt.UniqueId::byte10
			uint8_t ___byte10_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte10_15_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte10_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte11_16_OffsetPadding[11];
			// System.Byte Bolt.UniqueId::byte11
			uint8_t ___byte11_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte11_16_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte11_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte12_17_OffsetPadding[12];
			// System.Byte Bolt.UniqueId::byte12
			uint8_t ___byte12_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte12_17_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte12_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte13_18_OffsetPadding[13];
			// System.Byte Bolt.UniqueId::byte13
			uint8_t ___byte13_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte13_18_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte13_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte14_19_OffsetPadding[14];
			// System.Byte Bolt.UniqueId::byte14
			uint8_t ___byte14_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte14_19_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte14_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte15_20_OffsetPadding[15];
			// System.Byte Bolt.UniqueId::byte15
			uint8_t ___byte15_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte15_20_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte15_20_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_uint0_1() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___uint0_1)); }
	inline uint32_t get_uint0_1() const { return ___uint0_1; }
	inline uint32_t* get_address_of_uint0_1() { return &___uint0_1; }
	inline void set_uint0_1(uint32_t value)
	{
		___uint0_1 = value;
	}

	inline static int32_t get_offset_of_uint1_2() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___uint1_2)); }
	inline uint32_t get_uint1_2() const { return ___uint1_2; }
	inline uint32_t* get_address_of_uint1_2() { return &___uint1_2; }
	inline void set_uint1_2(uint32_t value)
	{
		___uint1_2 = value;
	}

	inline static int32_t get_offset_of_uint2_3() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___uint2_3)); }
	inline uint32_t get_uint2_3() const { return ___uint2_3; }
	inline uint32_t* get_address_of_uint2_3() { return &___uint2_3; }
	inline void set_uint2_3(uint32_t value)
	{
		___uint2_3 = value;
	}

	inline static int32_t get_offset_of_uint3_4() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___uint3_4)); }
	inline uint32_t get_uint3_4() const { return ___uint3_4; }
	inline uint32_t* get_address_of_uint3_4() { return &___uint3_4; }
	inline void set_uint3_4(uint32_t value)
	{
		___uint3_4 = value;
	}

	inline static int32_t get_offset_of_byte0_5() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte0_5)); }
	inline uint8_t get_byte0_5() const { return ___byte0_5; }
	inline uint8_t* get_address_of_byte0_5() { return &___byte0_5; }
	inline void set_byte0_5(uint8_t value)
	{
		___byte0_5 = value;
	}

	inline static int32_t get_offset_of_byte1_6() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte1_6)); }
	inline uint8_t get_byte1_6() const { return ___byte1_6; }
	inline uint8_t* get_address_of_byte1_6() { return &___byte1_6; }
	inline void set_byte1_6(uint8_t value)
	{
		___byte1_6 = value;
	}

	inline static int32_t get_offset_of_byte2_7() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte2_7)); }
	inline uint8_t get_byte2_7() const { return ___byte2_7; }
	inline uint8_t* get_address_of_byte2_7() { return &___byte2_7; }
	inline void set_byte2_7(uint8_t value)
	{
		___byte2_7 = value;
	}

	inline static int32_t get_offset_of_byte3_8() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte3_8)); }
	inline uint8_t get_byte3_8() const { return ___byte3_8; }
	inline uint8_t* get_address_of_byte3_8() { return &___byte3_8; }
	inline void set_byte3_8(uint8_t value)
	{
		___byte3_8 = value;
	}

	inline static int32_t get_offset_of_byte4_9() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte4_9)); }
	inline uint8_t get_byte4_9() const { return ___byte4_9; }
	inline uint8_t* get_address_of_byte4_9() { return &___byte4_9; }
	inline void set_byte4_9(uint8_t value)
	{
		___byte4_9 = value;
	}

	inline static int32_t get_offset_of_byte5_10() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte5_10)); }
	inline uint8_t get_byte5_10() const { return ___byte5_10; }
	inline uint8_t* get_address_of_byte5_10() { return &___byte5_10; }
	inline void set_byte5_10(uint8_t value)
	{
		___byte5_10 = value;
	}

	inline static int32_t get_offset_of_byte6_11() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte6_11)); }
	inline uint8_t get_byte6_11() const { return ___byte6_11; }
	inline uint8_t* get_address_of_byte6_11() { return &___byte6_11; }
	inline void set_byte6_11(uint8_t value)
	{
		___byte6_11 = value;
	}

	inline static int32_t get_offset_of_byte7_12() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte7_12)); }
	inline uint8_t get_byte7_12() const { return ___byte7_12; }
	inline uint8_t* get_address_of_byte7_12() { return &___byte7_12; }
	inline void set_byte7_12(uint8_t value)
	{
		___byte7_12 = value;
	}

	inline static int32_t get_offset_of_byte8_13() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte8_13)); }
	inline uint8_t get_byte8_13() const { return ___byte8_13; }
	inline uint8_t* get_address_of_byte8_13() { return &___byte8_13; }
	inline void set_byte8_13(uint8_t value)
	{
		___byte8_13 = value;
	}

	inline static int32_t get_offset_of_byte9_14() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte9_14)); }
	inline uint8_t get_byte9_14() const { return ___byte9_14; }
	inline uint8_t* get_address_of_byte9_14() { return &___byte9_14; }
	inline void set_byte9_14(uint8_t value)
	{
		___byte9_14 = value;
	}

	inline static int32_t get_offset_of_byte10_15() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte10_15)); }
	inline uint8_t get_byte10_15() const { return ___byte10_15; }
	inline uint8_t* get_address_of_byte10_15() { return &___byte10_15; }
	inline void set_byte10_15(uint8_t value)
	{
		___byte10_15 = value;
	}

	inline static int32_t get_offset_of_byte11_16() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte11_16)); }
	inline uint8_t get_byte11_16() const { return ___byte11_16; }
	inline uint8_t* get_address_of_byte11_16() { return &___byte11_16; }
	inline void set_byte11_16(uint8_t value)
	{
		___byte11_16 = value;
	}

	inline static int32_t get_offset_of_byte12_17() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte12_17)); }
	inline uint8_t get_byte12_17() const { return ___byte12_17; }
	inline uint8_t* get_address_of_byte12_17() { return &___byte12_17; }
	inline void set_byte12_17(uint8_t value)
	{
		___byte12_17 = value;
	}

	inline static int32_t get_offset_of_byte13_18() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte13_18)); }
	inline uint8_t get_byte13_18() const { return ___byte13_18; }
	inline uint8_t* get_address_of_byte13_18() { return &___byte13_18; }
	inline void set_byte13_18(uint8_t value)
	{
		___byte13_18 = value;
	}

	inline static int32_t get_offset_of_byte14_19() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte14_19)); }
	inline uint8_t get_byte14_19() const { return ___byte14_19; }
	inline uint8_t* get_address_of_byte14_19() { return &___byte14_19; }
	inline void set_byte14_19(uint8_t value)
	{
		___byte14_19 = value;
	}

	inline static int32_t get_offset_of_byte15_20() { return static_cast<int32_t>(offsetof(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819, ___byte15_20)); }
	inline uint8_t get_byte15_20() const { return ___byte15_20; }
	inline uint8_t* get_address_of_byte15_20() { return &___byte15_20; }
	inline void set_byte15_20(uint8_t value)
	{
		___byte15_20 = value;
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


// TPCCommandInput
struct  TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81  : public NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E
{
public:

public:
};


// TPCCommandLocalResult
struct  TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A  : public NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E
{
public:

public:
};


// TPCCommandResult
struct  TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B  : public NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E
{
public:

public:
};


// Bolt.Command_Meta
struct  Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// System.Boolean Bolt.Command_Meta::IsInstant
	bool ___IsInstant_16;
	// System.Boolean Bolt.Command_Meta::LimitOnePerFrame
	bool ___LimitOnePerFrame_17;
	// System.Int32 Bolt.Command_Meta::SmoothFrames
	int32_t ___SmoothFrames_18;
	// System.Boolean Bolt.Command_Meta::CompressZeroValues
	bool ___CompressZeroValues_19;
	// System.Boolean Bolt.Command_Meta::EnableInputDeltaCompression
	bool ___EnableInputDeltaCompression_20;
	// System.Boolean Bolt.Command_Meta::EnableResultDeltaCompression
	bool ___EnableResultDeltaCompression_21;

public:
	inline static int32_t get_offset_of_IsInstant_16() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___IsInstant_16)); }
	inline bool get_IsInstant_16() const { return ___IsInstant_16; }
	inline bool* get_address_of_IsInstant_16() { return &___IsInstant_16; }
	inline void set_IsInstant_16(bool value)
	{
		___IsInstant_16 = value;
	}

	inline static int32_t get_offset_of_LimitOnePerFrame_17() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___LimitOnePerFrame_17)); }
	inline bool get_LimitOnePerFrame_17() const { return ___LimitOnePerFrame_17; }
	inline bool* get_address_of_LimitOnePerFrame_17() { return &___LimitOnePerFrame_17; }
	inline void set_LimitOnePerFrame_17(bool value)
	{
		___LimitOnePerFrame_17 = value;
	}

	inline static int32_t get_offset_of_SmoothFrames_18() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___SmoothFrames_18)); }
	inline int32_t get_SmoothFrames_18() const { return ___SmoothFrames_18; }
	inline int32_t* get_address_of_SmoothFrames_18() { return &___SmoothFrames_18; }
	inline void set_SmoothFrames_18(int32_t value)
	{
		___SmoothFrames_18 = value;
	}

	inline static int32_t get_offset_of_CompressZeroValues_19() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___CompressZeroValues_19)); }
	inline bool get_CompressZeroValues_19() const { return ___CompressZeroValues_19; }
	inline bool* get_address_of_CompressZeroValues_19() { return &___CompressZeroValues_19; }
	inline void set_CompressZeroValues_19(bool value)
	{
		___CompressZeroValues_19 = value;
	}

	inline static int32_t get_offset_of_EnableInputDeltaCompression_20() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___EnableInputDeltaCompression_20)); }
	inline bool get_EnableInputDeltaCompression_20() const { return ___EnableInputDeltaCompression_20; }
	inline bool* get_address_of_EnableInputDeltaCompression_20() { return &___EnableInputDeltaCompression_20; }
	inline void set_EnableInputDeltaCompression_20(bool value)
	{
		___EnableInputDeltaCompression_20 = value;
	}

	inline static int32_t get_offset_of_EnableResultDeltaCompression_21() { return static_cast<int32_t>(offsetof(Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E, ___EnableResultDeltaCompression_21)); }
	inline bool get_EnableResultDeltaCompression_21() const { return ___EnableResultDeltaCompression_21; }
	inline bool* get_address_of_EnableResultDeltaCompression_21() { return &___EnableResultDeltaCompression_21; }
	inline void set_EnableResultDeltaCompression_21(bool value)
	{
		___EnableResultDeltaCompression_21 = value;
	}
};


// Bolt.Entity
struct  Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085  : public RuntimeObject
{
public:
	// System.Boolean Bolt.Entity::_canQueueCommands
	bool ____canQueueCommands_0;
	// System.Boolean Bolt.Entity::_canQueueCallbacks
	bool ____canQueueCallbacks_1;
	// Bolt.UniqueId Bolt.Entity::SceneId
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  ___SceneId_2;
	// Bolt.NetworkId Bolt.Entity::NetworkId
	NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  ___NetworkId_3;
	// Bolt.PrefabId Bolt.Entity::PrefabId
	PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  ___PrefabId_4;
	// Bolt.EntityFlags Bolt.Entity::Flags
	EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  ___Flags_5;
	// System.Boolean Bolt.Entity::AttachIsRunning
	bool ___AttachIsRunning_6;
	// UnityEngine.Vector3 Bolt.Entity::SpawnPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___SpawnPosition_7;
	// UnityEngine.Quaternion Bolt.Entity::SpawnRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___SpawnRotation_8;
	// Bolt.Entity Bolt.Entity::Parent
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * ___Parent_9;
	// BoltEntity Bolt.Entity::UnityObject
	BoltEntity_tCEB10FB040659F92CEBBB9F62139977232E8248C * ___UnityObject_10;
	// BoltConnection Bolt.Entity::Source
	BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * ___Source_11;
	// BoltConnection Bolt.Entity::Controller
	BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * ___Controller_12;
	// Bolt.IProtocolToken Bolt.Entity::DetachToken
	RuntimeObject* ___DetachToken_13;
	// Bolt.IProtocolToken Bolt.Entity::AttachToken
	RuntimeObject* ___AttachToken_14;
	// Bolt.IProtocolToken Bolt.Entity::ControlLostToken
	RuntimeObject* ___ControlLostToken_15;
	// Bolt.IProtocolToken Bolt.Entity::ControlGainedToken
	RuntimeObject* ___ControlGainedToken_16;
	// Bolt.IEntitySerializer Bolt.Entity::Serializer
	RuntimeObject* ___Serializer_17;
	// Bolt.IEntityBehaviour[] Bolt.Entity::Behaviours
	IEntityBehaviourU5BU5D_t1551F8963A8CE1E147C0E20B403596327997B8C3* ___Behaviours_18;
	// Bolt.IPriorityCalculator Bolt.Entity::PriorityCalculator
	RuntimeObject* ___PriorityCalculator_19;
	// Bolt.IEntityReplicationFilter Bolt.Entity::ReplicationFilter
	RuntimeObject* ___ReplicationFilter_20;
	// System.Boolean Bolt.Entity::IsOwner
	bool ___IsOwner_21;
	// System.Boolean Bolt.Entity::IsFrozen
	bool ___IsFrozen_22;
	// System.Boolean Bolt.Entity::AutoRemoveChildEntities
	bool ___AutoRemoveChildEntities_23;
	// System.Boolean Bolt.Entity::AllowFirstReplicationWhenFrozen
	bool ___AllowFirstReplicationWhenFrozen_24;
	// Bolt.QueryComponentOptions Bolt.Entity::EntityBehaviourQueryOption
	int32_t ___EntityBehaviourQueryOption_25;
	// Bolt.QueryComponentOptions Bolt.Entity::EntityPriorityCalculatorQueryOption
	int32_t ___EntityPriorityCalculatorQueryOption_26;
	// Bolt.QueryComponentOptions Bolt.Entity::EntityReplicationFilterQueryOption
	int32_t ___EntityReplicationFilterQueryOption_27;
	// System.Int32 Bolt.Entity::UpdateRate
	int32_t ___UpdateRate_28;
	// System.Int32 Bolt.Entity::LastFrameReceived
	int32_t ___LastFrameReceived_29;
	// System.Int32 Bolt.Entity::AutoFreezeProxyFrames
	int32_t ___AutoFreezeProxyFrames_30;
	// System.Boolean Bolt.Entity::CanFreeze
	bool ___CanFreeze_31;
	// System.UInt16 Bolt.Entity::CommandSequence
	uint16_t ___CommandSequence_32;
	// Bolt.Command Bolt.Entity::CommandLastExecuted
	Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * ___CommandLastExecuted_33;
	// Bolt.EventDispatcher Bolt.Entity::EventDispatcher
	EventDispatcher_t7426081D9ACD0A2FCF1AFACA036F7F12E6CBB9D7 * ___EventDispatcher_34;
	// BoltDoubleList`1<Bolt.Command> Bolt.Entity::CommandQueue
	BoltDoubleList_1_t6E60AA73B0A0090C43C588CE5A54CA30517F287B * ___CommandQueue_35;
	// BoltDoubleList`1<EntityProxy> Bolt.Entity::Proxies
	BoltDoubleList_1_tA077E8108724A19D92BB0A9F02B1B6A558E58BFF * ___Proxies_36;
	// Bolt.CommandHistory Bolt.Entity::InputsSent
	CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * ___InputsSent_37;
	// Bolt.CommandHistory Bolt.Entity::InputsReceived
	CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * ___InputsReceived_38;
	// Bolt.CommandHistory Bolt.Entity::ResultsSent
	CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * ___ResultsSent_39;
	// Bolt.CommandHistory Bolt.Entity::ResultsReceived
	CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * ___ResultsReceived_40;
	// BoltRingBuffer`1<System.Int32> Bolt.Entity::ProcessedCommandFrames
	BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * ___ProcessedCommandFrames_41;
	// BoltRingBuffer`1<System.Int32> Bolt.Entity::ProcessedCommandTypes
	BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * ___ProcessedCommandTypes_42;
	// BoltRingBuffer`1<System.Int32> Bolt.Entity::_queuedCommandFrames
	BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * ____queuedCommandFrames_43;
	// BoltRingBuffer`1<System.Int32> Bolt.Entity::_queuedCommandTypes
	BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * ____queuedCommandTypes_44;
	// BoltRingBuffer`1<System.Int32> Bolt.Entity::_commandsCount
	BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * ____commandsCount_45;
	// System.Int32 Bolt.Entity::_commandDejitterDelay
	int32_t ____commandDejitterDelay_46;
	// System.Boolean Bolt.Entity::_dynamicCommandDejitterDelay
	bool ____dynamicCommandDejitterDelay_47;
	// Bolt.Entity Bolt.Entity::<IBoltListNode<Bolt.Entity>.prev>k__BackingField
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * ___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48;
	// Bolt.Entity Bolt.Entity::<IBoltListNode<Bolt.Entity>.next>k__BackingField
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * ___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49;
	// System.Object Bolt.Entity::<IBoltListNode<Bolt.Entity>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50;

public:
	inline static int32_t get_offset_of__canQueueCommands_0() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____canQueueCommands_0)); }
	inline bool get__canQueueCommands_0() const { return ____canQueueCommands_0; }
	inline bool* get_address_of__canQueueCommands_0() { return &____canQueueCommands_0; }
	inline void set__canQueueCommands_0(bool value)
	{
		____canQueueCommands_0 = value;
	}

	inline static int32_t get_offset_of__canQueueCallbacks_1() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____canQueueCallbacks_1)); }
	inline bool get__canQueueCallbacks_1() const { return ____canQueueCallbacks_1; }
	inline bool* get_address_of__canQueueCallbacks_1() { return &____canQueueCallbacks_1; }
	inline void set__canQueueCallbacks_1(bool value)
	{
		____canQueueCallbacks_1 = value;
	}

	inline static int32_t get_offset_of_SceneId_2() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___SceneId_2)); }
	inline UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  get_SceneId_2() const { return ___SceneId_2; }
	inline UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819 * get_address_of_SceneId_2() { return &___SceneId_2; }
	inline void set_SceneId_2(UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  value)
	{
		___SceneId_2 = value;
	}

	inline static int32_t get_offset_of_NetworkId_3() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___NetworkId_3)); }
	inline NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  get_NetworkId_3() const { return ___NetworkId_3; }
	inline NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9 * get_address_of_NetworkId_3() { return &___NetworkId_3; }
	inline void set_NetworkId_3(NetworkId_t57EE493B64011F3E6EADAD3FCA022ECCC6A887F9  value)
	{
		___NetworkId_3 = value;
	}

	inline static int32_t get_offset_of_PrefabId_4() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___PrefabId_4)); }
	inline PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  get_PrefabId_4() const { return ___PrefabId_4; }
	inline PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B * get_address_of_PrefabId_4() { return &___PrefabId_4; }
	inline void set_PrefabId_4(PrefabId_tE37CFA47DD6398BBECC6E3A9BDA827C4C69C142B  value)
	{
		___PrefabId_4 = value;
	}

	inline static int32_t get_offset_of_Flags_5() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Flags_5)); }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  get_Flags_5() const { return ___Flags_5; }
	inline EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C * get_address_of_Flags_5() { return &___Flags_5; }
	inline void set_Flags_5(EntityFlags_t690CEEBB5715E0202AE567656C8FF50743D7379C  value)
	{
		___Flags_5 = value;
	}

	inline static int32_t get_offset_of_AttachIsRunning_6() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___AttachIsRunning_6)); }
	inline bool get_AttachIsRunning_6() const { return ___AttachIsRunning_6; }
	inline bool* get_address_of_AttachIsRunning_6() { return &___AttachIsRunning_6; }
	inline void set_AttachIsRunning_6(bool value)
	{
		___AttachIsRunning_6 = value;
	}

	inline static int32_t get_offset_of_SpawnPosition_7() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___SpawnPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_SpawnPosition_7() const { return ___SpawnPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_SpawnPosition_7() { return &___SpawnPosition_7; }
	inline void set_SpawnPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___SpawnPosition_7 = value;
	}

	inline static int32_t get_offset_of_SpawnRotation_8() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___SpawnRotation_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_SpawnRotation_8() const { return ___SpawnRotation_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_SpawnRotation_8() { return &___SpawnRotation_8; }
	inline void set_SpawnRotation_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___SpawnRotation_8 = value;
	}

	inline static int32_t get_offset_of_Parent_9() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Parent_9)); }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * get_Parent_9() const { return ___Parent_9; }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 ** get_address_of_Parent_9() { return &___Parent_9; }
	inline void set_Parent_9(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * value)
	{
		___Parent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_9), (void*)value);
	}

	inline static int32_t get_offset_of_UnityObject_10() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___UnityObject_10)); }
	inline BoltEntity_tCEB10FB040659F92CEBBB9F62139977232E8248C * get_UnityObject_10() const { return ___UnityObject_10; }
	inline BoltEntity_tCEB10FB040659F92CEBBB9F62139977232E8248C ** get_address_of_UnityObject_10() { return &___UnityObject_10; }
	inline void set_UnityObject_10(BoltEntity_tCEB10FB040659F92CEBBB9F62139977232E8248C * value)
	{
		___UnityObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnityObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_Source_11() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Source_11)); }
	inline BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * get_Source_11() const { return ___Source_11; }
	inline BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 ** get_address_of_Source_11() { return &___Source_11; }
	inline void set_Source_11(BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * value)
	{
		___Source_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Source_11), (void*)value);
	}

	inline static int32_t get_offset_of_Controller_12() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Controller_12)); }
	inline BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * get_Controller_12() const { return ___Controller_12; }
	inline BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 ** get_address_of_Controller_12() { return &___Controller_12; }
	inline void set_Controller_12(BoltConnection_tDB5EF05916CB81DD7DC027474796B5E75E1271E0 * value)
	{
		___Controller_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controller_12), (void*)value);
	}

	inline static int32_t get_offset_of_DetachToken_13() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___DetachToken_13)); }
	inline RuntimeObject* get_DetachToken_13() const { return ___DetachToken_13; }
	inline RuntimeObject** get_address_of_DetachToken_13() { return &___DetachToken_13; }
	inline void set_DetachToken_13(RuntimeObject* value)
	{
		___DetachToken_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DetachToken_13), (void*)value);
	}

	inline static int32_t get_offset_of_AttachToken_14() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___AttachToken_14)); }
	inline RuntimeObject* get_AttachToken_14() const { return ___AttachToken_14; }
	inline RuntimeObject** get_address_of_AttachToken_14() { return &___AttachToken_14; }
	inline void set_AttachToken_14(RuntimeObject* value)
	{
		___AttachToken_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttachToken_14), (void*)value);
	}

	inline static int32_t get_offset_of_ControlLostToken_15() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ControlLostToken_15)); }
	inline RuntimeObject* get_ControlLostToken_15() const { return ___ControlLostToken_15; }
	inline RuntimeObject** get_address_of_ControlLostToken_15() { return &___ControlLostToken_15; }
	inline void set_ControlLostToken_15(RuntimeObject* value)
	{
		___ControlLostToken_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControlLostToken_15), (void*)value);
	}

	inline static int32_t get_offset_of_ControlGainedToken_16() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ControlGainedToken_16)); }
	inline RuntimeObject* get_ControlGainedToken_16() const { return ___ControlGainedToken_16; }
	inline RuntimeObject** get_address_of_ControlGainedToken_16() { return &___ControlGainedToken_16; }
	inline void set_ControlGainedToken_16(RuntimeObject* value)
	{
		___ControlGainedToken_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControlGainedToken_16), (void*)value);
	}

	inline static int32_t get_offset_of_Serializer_17() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Serializer_17)); }
	inline RuntimeObject* get_Serializer_17() const { return ___Serializer_17; }
	inline RuntimeObject** get_address_of_Serializer_17() { return &___Serializer_17; }
	inline void set_Serializer_17(RuntimeObject* value)
	{
		___Serializer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Serializer_17), (void*)value);
	}

	inline static int32_t get_offset_of_Behaviours_18() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Behaviours_18)); }
	inline IEntityBehaviourU5BU5D_t1551F8963A8CE1E147C0E20B403596327997B8C3* get_Behaviours_18() const { return ___Behaviours_18; }
	inline IEntityBehaviourU5BU5D_t1551F8963A8CE1E147C0E20B403596327997B8C3** get_address_of_Behaviours_18() { return &___Behaviours_18; }
	inline void set_Behaviours_18(IEntityBehaviourU5BU5D_t1551F8963A8CE1E147C0E20B403596327997B8C3* value)
	{
		___Behaviours_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Behaviours_18), (void*)value);
	}

	inline static int32_t get_offset_of_PriorityCalculator_19() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___PriorityCalculator_19)); }
	inline RuntimeObject* get_PriorityCalculator_19() const { return ___PriorityCalculator_19; }
	inline RuntimeObject** get_address_of_PriorityCalculator_19() { return &___PriorityCalculator_19; }
	inline void set_PriorityCalculator_19(RuntimeObject* value)
	{
		___PriorityCalculator_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PriorityCalculator_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReplicationFilter_20() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ReplicationFilter_20)); }
	inline RuntimeObject* get_ReplicationFilter_20() const { return ___ReplicationFilter_20; }
	inline RuntimeObject** get_address_of_ReplicationFilter_20() { return &___ReplicationFilter_20; }
	inline void set_ReplicationFilter_20(RuntimeObject* value)
	{
		___ReplicationFilter_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReplicationFilter_20), (void*)value);
	}

	inline static int32_t get_offset_of_IsOwner_21() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___IsOwner_21)); }
	inline bool get_IsOwner_21() const { return ___IsOwner_21; }
	inline bool* get_address_of_IsOwner_21() { return &___IsOwner_21; }
	inline void set_IsOwner_21(bool value)
	{
		___IsOwner_21 = value;
	}

	inline static int32_t get_offset_of_IsFrozen_22() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___IsFrozen_22)); }
	inline bool get_IsFrozen_22() const { return ___IsFrozen_22; }
	inline bool* get_address_of_IsFrozen_22() { return &___IsFrozen_22; }
	inline void set_IsFrozen_22(bool value)
	{
		___IsFrozen_22 = value;
	}

	inline static int32_t get_offset_of_AutoRemoveChildEntities_23() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___AutoRemoveChildEntities_23)); }
	inline bool get_AutoRemoveChildEntities_23() const { return ___AutoRemoveChildEntities_23; }
	inline bool* get_address_of_AutoRemoveChildEntities_23() { return &___AutoRemoveChildEntities_23; }
	inline void set_AutoRemoveChildEntities_23(bool value)
	{
		___AutoRemoveChildEntities_23 = value;
	}

	inline static int32_t get_offset_of_AllowFirstReplicationWhenFrozen_24() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___AllowFirstReplicationWhenFrozen_24)); }
	inline bool get_AllowFirstReplicationWhenFrozen_24() const { return ___AllowFirstReplicationWhenFrozen_24; }
	inline bool* get_address_of_AllowFirstReplicationWhenFrozen_24() { return &___AllowFirstReplicationWhenFrozen_24; }
	inline void set_AllowFirstReplicationWhenFrozen_24(bool value)
	{
		___AllowFirstReplicationWhenFrozen_24 = value;
	}

	inline static int32_t get_offset_of_EntityBehaviourQueryOption_25() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___EntityBehaviourQueryOption_25)); }
	inline int32_t get_EntityBehaviourQueryOption_25() const { return ___EntityBehaviourQueryOption_25; }
	inline int32_t* get_address_of_EntityBehaviourQueryOption_25() { return &___EntityBehaviourQueryOption_25; }
	inline void set_EntityBehaviourQueryOption_25(int32_t value)
	{
		___EntityBehaviourQueryOption_25 = value;
	}

	inline static int32_t get_offset_of_EntityPriorityCalculatorQueryOption_26() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___EntityPriorityCalculatorQueryOption_26)); }
	inline int32_t get_EntityPriorityCalculatorQueryOption_26() const { return ___EntityPriorityCalculatorQueryOption_26; }
	inline int32_t* get_address_of_EntityPriorityCalculatorQueryOption_26() { return &___EntityPriorityCalculatorQueryOption_26; }
	inline void set_EntityPriorityCalculatorQueryOption_26(int32_t value)
	{
		___EntityPriorityCalculatorQueryOption_26 = value;
	}

	inline static int32_t get_offset_of_EntityReplicationFilterQueryOption_27() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___EntityReplicationFilterQueryOption_27)); }
	inline int32_t get_EntityReplicationFilterQueryOption_27() const { return ___EntityReplicationFilterQueryOption_27; }
	inline int32_t* get_address_of_EntityReplicationFilterQueryOption_27() { return &___EntityReplicationFilterQueryOption_27; }
	inline void set_EntityReplicationFilterQueryOption_27(int32_t value)
	{
		___EntityReplicationFilterQueryOption_27 = value;
	}

	inline static int32_t get_offset_of_UpdateRate_28() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___UpdateRate_28)); }
	inline int32_t get_UpdateRate_28() const { return ___UpdateRate_28; }
	inline int32_t* get_address_of_UpdateRate_28() { return &___UpdateRate_28; }
	inline void set_UpdateRate_28(int32_t value)
	{
		___UpdateRate_28 = value;
	}

	inline static int32_t get_offset_of_LastFrameReceived_29() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___LastFrameReceived_29)); }
	inline int32_t get_LastFrameReceived_29() const { return ___LastFrameReceived_29; }
	inline int32_t* get_address_of_LastFrameReceived_29() { return &___LastFrameReceived_29; }
	inline void set_LastFrameReceived_29(int32_t value)
	{
		___LastFrameReceived_29 = value;
	}

	inline static int32_t get_offset_of_AutoFreezeProxyFrames_30() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___AutoFreezeProxyFrames_30)); }
	inline int32_t get_AutoFreezeProxyFrames_30() const { return ___AutoFreezeProxyFrames_30; }
	inline int32_t* get_address_of_AutoFreezeProxyFrames_30() { return &___AutoFreezeProxyFrames_30; }
	inline void set_AutoFreezeProxyFrames_30(int32_t value)
	{
		___AutoFreezeProxyFrames_30 = value;
	}

	inline static int32_t get_offset_of_CanFreeze_31() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___CanFreeze_31)); }
	inline bool get_CanFreeze_31() const { return ___CanFreeze_31; }
	inline bool* get_address_of_CanFreeze_31() { return &___CanFreeze_31; }
	inline void set_CanFreeze_31(bool value)
	{
		___CanFreeze_31 = value;
	}

	inline static int32_t get_offset_of_CommandSequence_32() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___CommandSequence_32)); }
	inline uint16_t get_CommandSequence_32() const { return ___CommandSequence_32; }
	inline uint16_t* get_address_of_CommandSequence_32() { return &___CommandSequence_32; }
	inline void set_CommandSequence_32(uint16_t value)
	{
		___CommandSequence_32 = value;
	}

	inline static int32_t get_offset_of_CommandLastExecuted_33() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___CommandLastExecuted_33)); }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * get_CommandLastExecuted_33() const { return ___CommandLastExecuted_33; }
	inline Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 ** get_address_of_CommandLastExecuted_33() { return &___CommandLastExecuted_33; }
	inline void set_CommandLastExecuted_33(Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * value)
	{
		___CommandLastExecuted_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandLastExecuted_33), (void*)value);
	}

	inline static int32_t get_offset_of_EventDispatcher_34() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___EventDispatcher_34)); }
	inline EventDispatcher_t7426081D9ACD0A2FCF1AFACA036F7F12E6CBB9D7 * get_EventDispatcher_34() const { return ___EventDispatcher_34; }
	inline EventDispatcher_t7426081D9ACD0A2FCF1AFACA036F7F12E6CBB9D7 ** get_address_of_EventDispatcher_34() { return &___EventDispatcher_34; }
	inline void set_EventDispatcher_34(EventDispatcher_t7426081D9ACD0A2FCF1AFACA036F7F12E6CBB9D7 * value)
	{
		___EventDispatcher_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDispatcher_34), (void*)value);
	}

	inline static int32_t get_offset_of_CommandQueue_35() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___CommandQueue_35)); }
	inline BoltDoubleList_1_t6E60AA73B0A0090C43C588CE5A54CA30517F287B * get_CommandQueue_35() const { return ___CommandQueue_35; }
	inline BoltDoubleList_1_t6E60AA73B0A0090C43C588CE5A54CA30517F287B ** get_address_of_CommandQueue_35() { return &___CommandQueue_35; }
	inline void set_CommandQueue_35(BoltDoubleList_1_t6E60AA73B0A0090C43C588CE5A54CA30517F287B * value)
	{
		___CommandQueue_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandQueue_35), (void*)value);
	}

	inline static int32_t get_offset_of_Proxies_36() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___Proxies_36)); }
	inline BoltDoubleList_1_tA077E8108724A19D92BB0A9F02B1B6A558E58BFF * get_Proxies_36() const { return ___Proxies_36; }
	inline BoltDoubleList_1_tA077E8108724A19D92BB0A9F02B1B6A558E58BFF ** get_address_of_Proxies_36() { return &___Proxies_36; }
	inline void set_Proxies_36(BoltDoubleList_1_tA077E8108724A19D92BB0A9F02B1B6A558E58BFF * value)
	{
		___Proxies_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Proxies_36), (void*)value);
	}

	inline static int32_t get_offset_of_InputsSent_37() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___InputsSent_37)); }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * get_InputsSent_37() const { return ___InputsSent_37; }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E ** get_address_of_InputsSent_37() { return &___InputsSent_37; }
	inline void set_InputsSent_37(CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * value)
	{
		___InputsSent_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputsSent_37), (void*)value);
	}

	inline static int32_t get_offset_of_InputsReceived_38() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___InputsReceived_38)); }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * get_InputsReceived_38() const { return ___InputsReceived_38; }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E ** get_address_of_InputsReceived_38() { return &___InputsReceived_38; }
	inline void set_InputsReceived_38(CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * value)
	{
		___InputsReceived_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputsReceived_38), (void*)value);
	}

	inline static int32_t get_offset_of_ResultsSent_39() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ResultsSent_39)); }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * get_ResultsSent_39() const { return ___ResultsSent_39; }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E ** get_address_of_ResultsSent_39() { return &___ResultsSent_39; }
	inline void set_ResultsSent_39(CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * value)
	{
		___ResultsSent_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultsSent_39), (void*)value);
	}

	inline static int32_t get_offset_of_ResultsReceived_40() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ResultsReceived_40)); }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * get_ResultsReceived_40() const { return ___ResultsReceived_40; }
	inline CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E ** get_address_of_ResultsReceived_40() { return &___ResultsReceived_40; }
	inline void set_ResultsReceived_40(CommandHistory_t2C8BD83C08D4DC6B44F9351A50EB946FDD9E299E * value)
	{
		___ResultsReceived_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultsReceived_40), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessedCommandFrames_41() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ProcessedCommandFrames_41)); }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * get_ProcessedCommandFrames_41() const { return ___ProcessedCommandFrames_41; }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 ** get_address_of_ProcessedCommandFrames_41() { return &___ProcessedCommandFrames_41; }
	inline void set_ProcessedCommandFrames_41(BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * value)
	{
		___ProcessedCommandFrames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessedCommandFrames_41), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessedCommandTypes_42() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___ProcessedCommandTypes_42)); }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * get_ProcessedCommandTypes_42() const { return ___ProcessedCommandTypes_42; }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 ** get_address_of_ProcessedCommandTypes_42() { return &___ProcessedCommandTypes_42; }
	inline void set_ProcessedCommandTypes_42(BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * value)
	{
		___ProcessedCommandTypes_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessedCommandTypes_42), (void*)value);
	}

	inline static int32_t get_offset_of__queuedCommandFrames_43() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____queuedCommandFrames_43)); }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * get__queuedCommandFrames_43() const { return ____queuedCommandFrames_43; }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 ** get_address_of__queuedCommandFrames_43() { return &____queuedCommandFrames_43; }
	inline void set__queuedCommandFrames_43(BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * value)
	{
		____queuedCommandFrames_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedCommandFrames_43), (void*)value);
	}

	inline static int32_t get_offset_of__queuedCommandTypes_44() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____queuedCommandTypes_44)); }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * get__queuedCommandTypes_44() const { return ____queuedCommandTypes_44; }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 ** get_address_of__queuedCommandTypes_44() { return &____queuedCommandTypes_44; }
	inline void set__queuedCommandTypes_44(BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * value)
	{
		____queuedCommandTypes_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queuedCommandTypes_44), (void*)value);
	}

	inline static int32_t get_offset_of__commandsCount_45() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____commandsCount_45)); }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * get__commandsCount_45() const { return ____commandsCount_45; }
	inline BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 ** get_address_of__commandsCount_45() { return &____commandsCount_45; }
	inline void set__commandsCount_45(BoltRingBuffer_1_t84FA53C53758A0EFD53EEF6CE89E25D9DD49A985 * value)
	{
		____commandsCount_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commandsCount_45), (void*)value);
	}

	inline static int32_t get_offset_of__commandDejitterDelay_46() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____commandDejitterDelay_46)); }
	inline int32_t get__commandDejitterDelay_46() const { return ____commandDejitterDelay_46; }
	inline int32_t* get_address_of__commandDejitterDelay_46() { return &____commandDejitterDelay_46; }
	inline void set__commandDejitterDelay_46(int32_t value)
	{
		____commandDejitterDelay_46 = value;
	}

	inline static int32_t get_offset_of__dynamicCommandDejitterDelay_47() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ____dynamicCommandDejitterDelay_47)); }
	inline bool get__dynamicCommandDejitterDelay_47() const { return ____dynamicCommandDejitterDelay_47; }
	inline bool* get_address_of__dynamicCommandDejitterDelay_47() { return &____dynamicCommandDejitterDelay_47; }
	inline void set__dynamicCommandDejitterDelay_47(bool value)
	{
		____dynamicCommandDejitterDelay_47 = value;
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48)); }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * get_U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48() const { return ___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48; }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 ** get_address_of_U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48() { return &___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48; }
	inline void set_U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * value)
	{
		___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_EntityU3E_prevU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49)); }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * get_U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49() const { return ___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49; }
	inline Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 ** get_address_of_U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49() { return &___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49; }
	inline void set_U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * value)
	{
		___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_EntityU3E_nextU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085, ___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50() const { return ___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50() { return &___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50; }
	inline void set_U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBolt_EntityU3E_listU3Ek__BackingField_50), (void*)value);
	}
};


// Bolt.NetworkProperty_Mecanim
struct  NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8  : public NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A
{
public:
	// Bolt.MecanimMode Bolt.NetworkProperty_Mecanim::MecanimMode
	int32_t ___MecanimMode_10;
	// Bolt.MecanimDirection Bolt.NetworkProperty_Mecanim::MecanimDirection
	int32_t ___MecanimDirection_11;
	// System.Single Bolt.NetworkProperty_Mecanim::MecanimDamping
	float ___MecanimDamping_12;
	// System.Int32 Bolt.NetworkProperty_Mecanim::MecanimLayer
	int32_t ___MecanimLayer_13;

public:
	inline static int32_t get_offset_of_MecanimMode_10() { return static_cast<int32_t>(offsetof(NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8, ___MecanimMode_10)); }
	inline int32_t get_MecanimMode_10() const { return ___MecanimMode_10; }
	inline int32_t* get_address_of_MecanimMode_10() { return &___MecanimMode_10; }
	inline void set_MecanimMode_10(int32_t value)
	{
		___MecanimMode_10 = value;
	}

	inline static int32_t get_offset_of_MecanimDirection_11() { return static_cast<int32_t>(offsetof(NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8, ___MecanimDirection_11)); }
	inline int32_t get_MecanimDirection_11() const { return ___MecanimDirection_11; }
	inline int32_t* get_address_of_MecanimDirection_11() { return &___MecanimDirection_11; }
	inline void set_MecanimDirection_11(int32_t value)
	{
		___MecanimDirection_11 = value;
	}

	inline static int32_t get_offset_of_MecanimDamping_12() { return static_cast<int32_t>(offsetof(NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8, ___MecanimDamping_12)); }
	inline float get_MecanimDamping_12() const { return ___MecanimDamping_12; }
	inline float* get_address_of_MecanimDamping_12() { return &___MecanimDamping_12; }
	inline void set_MecanimDamping_12(float value)
	{
		___MecanimDamping_12 = value;
	}

	inline static int32_t get_offset_of_MecanimLayer_13() { return static_cast<int32_t>(offsetof(NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8, ___MecanimLayer_13)); }
	inline int32_t get_MecanimLayer_13() const { return ___MecanimLayer_13; }
	inline int32_t* get_address_of_MecanimLayer_13() { return &___MecanimLayer_13; }
	inline void set_MecanimLayer_13(int32_t value)
	{
		___MecanimLayer_13 = value;
	}
};


// Bolt.NetworkProperty_Vector
struct  NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB  : public NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A
{
public:
	// Bolt.PropertyVectorCompressionSettings Bolt.NetworkProperty_Vector::Compression
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  ___Compression_10;

public:
	inline static int32_t get_offset_of_Compression_10() { return static_cast<int32_t>(offsetof(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB, ___Compression_10)); }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  get_Compression_10() const { return ___Compression_10; }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C * get_address_of_Compression_10() { return &___Compression_10; }
	inline void set_Compression_10(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  value)
	{
		___Compression_10 = value;
	}
};


// Bolt.NetworkTransform
struct  NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF  : public RuntimeObject
{
public:
	// System.Int32 Bolt.NetworkTransform::PropertyIndex
	int32_t ___PropertyIndex_0;
	// UnityEngine.Transform Bolt.NetworkTransform::Render
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Render_1;
	// UnityEngine.Transform Bolt.NetworkTransform::Simulate
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Simulate_2;
	// System.Boolean Bolt.NetworkTransform::SkipInterpolation
	bool ___SkipInterpolation_3;
	// System.Func`3<BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3> Bolt.NetworkTransform::Clamper
	Func_3_t0833DE21D9B4410E0EEAE4D6E17B92153BFABDD5 * ___Clamper_4;
	// Bolt.DoubleBuffer`1<UnityEngine.Vector3> Bolt.NetworkTransform::RenderDoubleBufferPosition
	DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7  ___RenderDoubleBufferPosition_5;
	// Bolt.DoubleBuffer`1<UnityEngine.Quaternion> Bolt.NetworkTransform::RenderDoubleBufferRotation
	DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7  ___RenderDoubleBufferRotation_6;
	// Bolt.TransformSpaces Bolt.NetworkTransform::space
	int32_t ___space_7;

public:
	inline static int32_t get_offset_of_PropertyIndex_0() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___PropertyIndex_0)); }
	inline int32_t get_PropertyIndex_0() const { return ___PropertyIndex_0; }
	inline int32_t* get_address_of_PropertyIndex_0() { return &___PropertyIndex_0; }
	inline void set_PropertyIndex_0(int32_t value)
	{
		___PropertyIndex_0 = value;
	}

	inline static int32_t get_offset_of_Render_1() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___Render_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Render_1() const { return ___Render_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Render_1() { return &___Render_1; }
	inline void set_Render_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Render_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Render_1), (void*)value);
	}

	inline static int32_t get_offset_of_Simulate_2() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___Simulate_2)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Simulate_2() const { return ___Simulate_2; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Simulate_2() { return &___Simulate_2; }
	inline void set_Simulate_2(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Simulate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Simulate_2), (void*)value);
	}

	inline static int32_t get_offset_of_SkipInterpolation_3() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___SkipInterpolation_3)); }
	inline bool get_SkipInterpolation_3() const { return ___SkipInterpolation_3; }
	inline bool* get_address_of_SkipInterpolation_3() { return &___SkipInterpolation_3; }
	inline void set_SkipInterpolation_3(bool value)
	{
		___SkipInterpolation_3 = value;
	}

	inline static int32_t get_offset_of_Clamper_4() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___Clamper_4)); }
	inline Func_3_t0833DE21D9B4410E0EEAE4D6E17B92153BFABDD5 * get_Clamper_4() const { return ___Clamper_4; }
	inline Func_3_t0833DE21D9B4410E0EEAE4D6E17B92153BFABDD5 ** get_address_of_Clamper_4() { return &___Clamper_4; }
	inline void set_Clamper_4(Func_3_t0833DE21D9B4410E0EEAE4D6E17B92153BFABDD5 * value)
	{
		___Clamper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Clamper_4), (void*)value);
	}

	inline static int32_t get_offset_of_RenderDoubleBufferPosition_5() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___RenderDoubleBufferPosition_5)); }
	inline DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7  get_RenderDoubleBufferPosition_5() const { return ___RenderDoubleBufferPosition_5; }
	inline DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7 * get_address_of_RenderDoubleBufferPosition_5() { return &___RenderDoubleBufferPosition_5; }
	inline void set_RenderDoubleBufferPosition_5(DoubleBuffer_1_tA6E10F27A1C2654EE5D71C92717B5B011EBC90C7  value)
	{
		___RenderDoubleBufferPosition_5 = value;
	}

	inline static int32_t get_offset_of_RenderDoubleBufferRotation_6() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___RenderDoubleBufferRotation_6)); }
	inline DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7  get_RenderDoubleBufferRotation_6() const { return ___RenderDoubleBufferRotation_6; }
	inline DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7 * get_address_of_RenderDoubleBufferRotation_6() { return &___RenderDoubleBufferRotation_6; }
	inline void set_RenderDoubleBufferRotation_6(DoubleBuffer_1_t30EB4286DEDB631A53D79455ECAED348C0826CD7  value)
	{
		___RenderDoubleBufferRotation_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}
};


// Bolt.PropertyExtrapolationSettings
struct  PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615 
{
public:
	// System.Boolean Bolt.PropertyExtrapolationSettings::Enabled
	bool ___Enabled_0;
	// System.Int32 Bolt.PropertyExtrapolationSettings::MaxFrames
	int32_t ___MaxFrames_1;
	// System.Single Bolt.PropertyExtrapolationSettings::ErrorTolerance
	float ___ErrorTolerance_2;
	// System.Single Bolt.PropertyExtrapolationSettings::SnapMagnitude
	float ___SnapMagnitude_3;
	// Bolt.ExtrapolationVelocityModes Bolt.PropertyExtrapolationSettings::VelocityMode
	int32_t ___VelocityMode_4;

public:
	inline static int32_t get_offset_of_Enabled_0() { return static_cast<int32_t>(offsetof(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615, ___Enabled_0)); }
	inline bool get_Enabled_0() const { return ___Enabled_0; }
	inline bool* get_address_of_Enabled_0() { return &___Enabled_0; }
	inline void set_Enabled_0(bool value)
	{
		___Enabled_0 = value;
	}

	inline static int32_t get_offset_of_MaxFrames_1() { return static_cast<int32_t>(offsetof(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615, ___MaxFrames_1)); }
	inline int32_t get_MaxFrames_1() const { return ___MaxFrames_1; }
	inline int32_t* get_address_of_MaxFrames_1() { return &___MaxFrames_1; }
	inline void set_MaxFrames_1(int32_t value)
	{
		___MaxFrames_1 = value;
	}

	inline static int32_t get_offset_of_ErrorTolerance_2() { return static_cast<int32_t>(offsetof(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615, ___ErrorTolerance_2)); }
	inline float get_ErrorTolerance_2() const { return ___ErrorTolerance_2; }
	inline float* get_address_of_ErrorTolerance_2() { return &___ErrorTolerance_2; }
	inline void set_ErrorTolerance_2(float value)
	{
		___ErrorTolerance_2 = value;
	}

	inline static int32_t get_offset_of_SnapMagnitude_3() { return static_cast<int32_t>(offsetof(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615, ___SnapMagnitude_3)); }
	inline float get_SnapMagnitude_3() const { return ___SnapMagnitude_3; }
	inline float* get_address_of_SnapMagnitude_3() { return &___SnapMagnitude_3; }
	inline void set_SnapMagnitude_3(float value)
	{
		___SnapMagnitude_3 = value;
	}

	inline static int32_t get_offset_of_VelocityMode_4() { return static_cast<int32_t>(offsetof(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615, ___VelocityMode_4)); }
	inline int32_t get_VelocityMode_4() const { return ___VelocityMode_4; }
	inline int32_t* get_address_of_VelocityMode_4() { return &___VelocityMode_4; }
	inline void set_VelocityMode_4(int32_t value)
	{
		___VelocityMode_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Bolt.PropertyExtrapolationSettings
struct PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615_marshaled_pinvoke
{
	int32_t ___Enabled_0;
	int32_t ___MaxFrames_1;
	float ___ErrorTolerance_2;
	float ___SnapMagnitude_3;
	int32_t ___VelocityMode_4;
};
// Native definition for COM marshalling of Bolt.PropertyExtrapolationSettings
struct PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615_marshaled_com
{
	int32_t ___Enabled_0;
	int32_t ___MaxFrames_1;
	float ___ErrorTolerance_2;
	float ___SnapMagnitude_3;
	int32_t ___VelocityMode_4;
};

// Bolt.PropertyQuaternionCompression
struct  PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27 
{
public:
	// System.Boolean Bolt.PropertyQuaternionCompression::QuaternionMode
	bool ___QuaternionMode_0;
	// System.Boolean Bolt.PropertyQuaternionCompression::QuaternionStrictComparison
	bool ___QuaternionStrictComparison_1;
	// Bolt.PropertyVectorCompressionSettings Bolt.PropertyQuaternionCompression::Euler
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  ___Euler_2;
	// Bolt.PropertyFloatCompressionSettings Bolt.PropertyQuaternionCompression::Quaternion
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Quaternion_3;

public:
	inline static int32_t get_offset_of_QuaternionMode_0() { return static_cast<int32_t>(offsetof(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27, ___QuaternionMode_0)); }
	inline bool get_QuaternionMode_0() const { return ___QuaternionMode_0; }
	inline bool* get_address_of_QuaternionMode_0() { return &___QuaternionMode_0; }
	inline void set_QuaternionMode_0(bool value)
	{
		___QuaternionMode_0 = value;
	}

	inline static int32_t get_offset_of_QuaternionStrictComparison_1() { return static_cast<int32_t>(offsetof(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27, ___QuaternionStrictComparison_1)); }
	inline bool get_QuaternionStrictComparison_1() const { return ___QuaternionStrictComparison_1; }
	inline bool* get_address_of_QuaternionStrictComparison_1() { return &___QuaternionStrictComparison_1; }
	inline void set_QuaternionStrictComparison_1(bool value)
	{
		___QuaternionStrictComparison_1 = value;
	}

	inline static int32_t get_offset_of_Euler_2() { return static_cast<int32_t>(offsetof(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27, ___Euler_2)); }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  get_Euler_2() const { return ___Euler_2; }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C * get_address_of_Euler_2() { return &___Euler_2; }
	inline void set_Euler_2(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  value)
	{
		___Euler_2 = value;
	}

	inline static int32_t get_offset_of_Quaternion_3() { return static_cast<int32_t>(offsetof(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27, ___Quaternion_3)); }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  get_Quaternion_3() const { return ___Quaternion_3; }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 * get_address_of_Quaternion_3() { return &___Quaternion_3; }
	inline void set_Quaternion_3(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  value)
	{
		___Quaternion_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Bolt.PropertyQuaternionCompression
struct PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27_marshaled_pinvoke
{
	int32_t ___QuaternionMode_0;
	int32_t ___QuaternionStrictComparison_1;
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C_marshaled_pinvoke ___Euler_2;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Quaternion_3;
};
// Native definition for COM marshalling of Bolt.PropertyQuaternionCompression
struct PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27_marshaled_com
{
	int32_t ___QuaternionMode_0;
	int32_t ___QuaternionStrictComparison_1;
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C_marshaled_com ___Euler_2;
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Quaternion_3;
};

// RobotState
struct  RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F  : public NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481
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


// TPCCommand
struct  TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD  : public Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6
{
public:

public:
};


// TPCCommandInput_Meta
struct  TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// Bolt.ObjectPool`1<TPCCommandInput> TPCCommandInput_Meta::_pool
	ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * ____pool_17;

public:
	inline static int32_t get_offset_of__pool_17() { return static_cast<int32_t>(offsetof(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F, ____pool_17)); }
	inline ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * get__pool_17() const { return ____pool_17; }
	inline ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC ** get_address_of__pool_17() { return &____pool_17; }
	inline void set__pool_17(ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * value)
	{
		____pool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_17), (void*)value);
	}
};

struct TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields
{
public:
	// TPCCommandInput_Meta TPCCommandInput_Meta::Instance
	TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields, ___Instance_16)); }
	inline TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * get_Instance_16() const { return ___Instance_16; }
	inline TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// TPCCommandLocalResult_Meta
struct  TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// Bolt.ObjectPool`1<TPCCommandLocalResult> TPCCommandLocalResult_Meta::_pool
	ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * ____pool_17;

public:
	inline static int32_t get_offset_of__pool_17() { return static_cast<int32_t>(offsetof(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94, ____pool_17)); }
	inline ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * get__pool_17() const { return ____pool_17; }
	inline ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 ** get_address_of__pool_17() { return &____pool_17; }
	inline void set__pool_17(ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * value)
	{
		____pool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_17), (void*)value);
	}
};

struct TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields
{
public:
	// TPCCommandLocalResult_Meta TPCCommandLocalResult_Meta::Instance
	TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields, ___Instance_16)); }
	inline TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * get_Instance_16() const { return ___Instance_16; }
	inline TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// TPCCommandResult_Meta
struct  TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// Bolt.ObjectPool`1<TPCCommandResult> TPCCommandResult_Meta::_pool
	ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * ____pool_17;

public:
	inline static int32_t get_offset_of__pool_17() { return static_cast<int32_t>(offsetof(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE, ____pool_17)); }
	inline ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * get__pool_17() const { return ____pool_17; }
	inline ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 ** get_address_of__pool_17() { return &____pool_17; }
	inline void set__pool_17(ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * value)
	{
		____pool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_17), (void*)value);
	}
};

struct TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields
{
public:
	// TPCCommandResult_Meta TPCCommandResult_Meta::Instance
	TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields, ___Instance_16)); }
	inline TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * get_Instance_16() const { return ___Instance_16; }
	inline TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// TPCstate
struct  TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50  : public NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481
{
public:

public:
};


// WeaponSlot_Meta
struct  WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// Bolt.ObjectPool`1<WeaponSlot> WeaponSlot_Meta::_pool
	ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * ____pool_17;

public:
	inline static int32_t get_offset_of__pool_17() { return static_cast<int32_t>(offsetof(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8, ____pool_17)); }
	inline ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * get__pool_17() const { return ____pool_17; }
	inline ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 ** get_address_of__pool_17() { return &____pool_17; }
	inline void set__pool_17(ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * value)
	{
		____pool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_17), (void*)value);
	}
};

struct WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_StaticFields
{
public:
	// WeaponSlot_Meta WeaponSlot_Meta::Instance
	WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_StaticFields, ___Instance_16)); }
	inline WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * get_Instance_16() const { return ___Instance_16; }
	inline WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// Bolt.NetworkProperty_Bool
struct  NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E  : public NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8
{
public:

public:
};


// Bolt.NetworkProperty_Float
struct  NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214  : public NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8
{
public:
	// Bolt.PropertyFloatSettings Bolt.NetworkProperty_Float::Settings
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  ___Settings_14;
	// Bolt.PropertyFloatCompressionSettings Bolt.NetworkProperty_Float::Compression
	PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___Compression_15;

public:
	inline static int32_t get_offset_of_Settings_14() { return static_cast<int32_t>(offsetof(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214, ___Settings_14)); }
	inline PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  get_Settings_14() const { return ___Settings_14; }
	inline PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E * get_address_of_Settings_14() { return &___Settings_14; }
	inline void set_Settings_14(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  value)
	{
		___Settings_14 = value;
	}

	inline static int32_t get_offset_of_Compression_15() { return static_cast<int32_t>(offsetof(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214, ___Compression_15)); }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  get_Compression_15() const { return ___Compression_15; }
	inline PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96 * get_address_of_Compression_15() { return &___Compression_15; }
	inline void set_Compression_15(PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  value)
	{
		___Compression_15 = value;
	}
};


// Bolt.NetworkProperty_Integer
struct  NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095  : public NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8
{
public:
	// Bolt.PropertyIntCompressionSettings Bolt.NetworkProperty_Integer::Compression
	PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  ___Compression_14;

public:
	inline static int32_t get_offset_of_Compression_14() { return static_cast<int32_t>(offsetof(NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095, ___Compression_14)); }
	inline PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  get_Compression_14() const { return ___Compression_14; }
	inline PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481 * get_address_of_Compression_14() { return &___Compression_14; }
	inline void set_Compression_14(PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  value)
	{
		___Compression_14 = value;
	}
};


// Bolt.NetworkProperty_Transform
struct  NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB  : public NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A
{
public:
	// System.Int32 Bolt.NetworkProperty_Transform::PositionMask
	int32_t ___PositionMask_13;
	// System.Int32 Bolt.NetworkProperty_Transform::RotationMask
	int32_t ___RotationMask_14;
	// System.Boolean Bolt.NetworkProperty_Transform::PositionEnabled
	bool ___PositionEnabled_15;
	// System.Boolean Bolt.NetworkProperty_Transform::RotationEnabled
	bool ___RotationEnabled_16;
	// Bolt.TransformSpaces Bolt.NetworkProperty_Transform::Space
	int32_t ___Space_17;
	// Bolt.PropertyExtrapolationSettings Bolt.NetworkProperty_Transform::Extrapolation
	PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  ___Extrapolation_18;
	// Bolt.PropertyQuaternionCompression Bolt.NetworkProperty_Transform::RotationCompression
	PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  ___RotationCompression_19;
	// Bolt.PropertyVectorCompressionSettings Bolt.NetworkProperty_Transform::PositionCompression
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  ___PositionCompression_20;

public:
	inline static int32_t get_offset_of_PositionMask_13() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___PositionMask_13)); }
	inline int32_t get_PositionMask_13() const { return ___PositionMask_13; }
	inline int32_t* get_address_of_PositionMask_13() { return &___PositionMask_13; }
	inline void set_PositionMask_13(int32_t value)
	{
		___PositionMask_13 = value;
	}

	inline static int32_t get_offset_of_RotationMask_14() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___RotationMask_14)); }
	inline int32_t get_RotationMask_14() const { return ___RotationMask_14; }
	inline int32_t* get_address_of_RotationMask_14() { return &___RotationMask_14; }
	inline void set_RotationMask_14(int32_t value)
	{
		___RotationMask_14 = value;
	}

	inline static int32_t get_offset_of_PositionEnabled_15() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___PositionEnabled_15)); }
	inline bool get_PositionEnabled_15() const { return ___PositionEnabled_15; }
	inline bool* get_address_of_PositionEnabled_15() { return &___PositionEnabled_15; }
	inline void set_PositionEnabled_15(bool value)
	{
		___PositionEnabled_15 = value;
	}

	inline static int32_t get_offset_of_RotationEnabled_16() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___RotationEnabled_16)); }
	inline bool get_RotationEnabled_16() const { return ___RotationEnabled_16; }
	inline bool* get_address_of_RotationEnabled_16() { return &___RotationEnabled_16; }
	inline void set_RotationEnabled_16(bool value)
	{
		___RotationEnabled_16 = value;
	}

	inline static int32_t get_offset_of_Space_17() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___Space_17)); }
	inline int32_t get_Space_17() const { return ___Space_17; }
	inline int32_t* get_address_of_Space_17() { return &___Space_17; }
	inline void set_Space_17(int32_t value)
	{
		___Space_17 = value;
	}

	inline static int32_t get_offset_of_Extrapolation_18() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___Extrapolation_18)); }
	inline PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  get_Extrapolation_18() const { return ___Extrapolation_18; }
	inline PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615 * get_address_of_Extrapolation_18() { return &___Extrapolation_18; }
	inline void set_Extrapolation_18(PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  value)
	{
		___Extrapolation_18 = value;
	}

	inline static int32_t get_offset_of_RotationCompression_19() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___RotationCompression_19)); }
	inline PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  get_RotationCompression_19() const { return ___RotationCompression_19; }
	inline PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27 * get_address_of_RotationCompression_19() { return &___RotationCompression_19; }
	inline void set_RotationCompression_19(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  value)
	{
		___RotationCompression_19 = value;
	}

	inline static int32_t get_offset_of_PositionCompression_20() { return static_cast<int32_t>(offsetof(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB, ___PositionCompression_20)); }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  get_PositionCompression_20() const { return ___PositionCompression_20; }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C * get_address_of_PositionCompression_20() { return &___PositionCompression_20; }
	inline void set_PositionCompression_20(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  value)
	{
		___PositionCompression_20 = value;
	}
};


// Bolt.NetworkState_Meta
struct  NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8  : public NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E
{
public:
	// System.Int32 Bolt.NetworkState_Meta::PropertyIdBits
	int32_t ___PropertyIdBits_16;
	// System.Int32 Bolt.NetworkState_Meta::PacketMaxBits
	int32_t ___PacketMaxBits_17;
	// System.Int32 Bolt.NetworkState_Meta::PacketMaxProperties
	int32_t ___PacketMaxProperties_18;
	// System.Int32 Bolt.NetworkState_Meta::PacketMaxPropertiesBits
	int32_t ___PacketMaxPropertiesBits_19;
	// Bolt.PropertyVectorCompressionSettings Bolt.NetworkState_Meta::InstantiationPositionCompression
	PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  ___InstantiationPositionCompression_20;
	// Bolt.PropertyQuaternionCompression Bolt.NetworkState_Meta::InstantiationRotationCompression
	PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  ___InstantiationRotationCompression_21;

public:
	inline static int32_t get_offset_of_PropertyIdBits_16() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___PropertyIdBits_16)); }
	inline int32_t get_PropertyIdBits_16() const { return ___PropertyIdBits_16; }
	inline int32_t* get_address_of_PropertyIdBits_16() { return &___PropertyIdBits_16; }
	inline void set_PropertyIdBits_16(int32_t value)
	{
		___PropertyIdBits_16 = value;
	}

	inline static int32_t get_offset_of_PacketMaxBits_17() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___PacketMaxBits_17)); }
	inline int32_t get_PacketMaxBits_17() const { return ___PacketMaxBits_17; }
	inline int32_t* get_address_of_PacketMaxBits_17() { return &___PacketMaxBits_17; }
	inline void set_PacketMaxBits_17(int32_t value)
	{
		___PacketMaxBits_17 = value;
	}

	inline static int32_t get_offset_of_PacketMaxProperties_18() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___PacketMaxProperties_18)); }
	inline int32_t get_PacketMaxProperties_18() const { return ___PacketMaxProperties_18; }
	inline int32_t* get_address_of_PacketMaxProperties_18() { return &___PacketMaxProperties_18; }
	inline void set_PacketMaxProperties_18(int32_t value)
	{
		___PacketMaxProperties_18 = value;
	}

	inline static int32_t get_offset_of_PacketMaxPropertiesBits_19() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___PacketMaxPropertiesBits_19)); }
	inline int32_t get_PacketMaxPropertiesBits_19() const { return ___PacketMaxPropertiesBits_19; }
	inline int32_t* get_address_of_PacketMaxPropertiesBits_19() { return &___PacketMaxPropertiesBits_19; }
	inline void set_PacketMaxPropertiesBits_19(int32_t value)
	{
		___PacketMaxPropertiesBits_19 = value;
	}

	inline static int32_t get_offset_of_InstantiationPositionCompression_20() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___InstantiationPositionCompression_20)); }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  get_InstantiationPositionCompression_20() const { return ___InstantiationPositionCompression_20; }
	inline PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C * get_address_of_InstantiationPositionCompression_20() { return &___InstantiationPositionCompression_20; }
	inline void set_InstantiationPositionCompression_20(PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  value)
	{
		___InstantiationPositionCompression_20 = value;
	}

	inline static int32_t get_offset_of_InstantiationRotationCompression_21() { return static_cast<int32_t>(offsetof(NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8, ___InstantiationRotationCompression_21)); }
	inline PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  get_InstantiationRotationCompression_21() const { return ___InstantiationRotationCompression_21; }
	inline PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27 * get_address_of_InstantiationRotationCompression_21() { return &___InstantiationRotationCompression_21; }
	inline void set_InstantiationRotationCompression_21(PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  value)
	{
		___InstantiationRotationCompression_21 = value;
	}
};


// TPCCommand_Meta
struct  TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE  : public Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E
{
public:
	// Bolt.ObjectPool`1<TPCCommand> TPCCommand_Meta::_pool
	ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * ____pool_23;

public:
	inline static int32_t get_offset_of__pool_23() { return static_cast<int32_t>(offsetof(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE, ____pool_23)); }
	inline ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * get__pool_23() const { return ____pool_23; }
	inline ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 ** get_address_of__pool_23() { return &____pool_23; }
	inline void set__pool_23(ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * value)
	{
		____pool_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_23), (void*)value);
	}
};

struct TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields
{
public:
	// TPCCommand_Meta TPCCommand_Meta::Instance
	TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * ___Instance_22;

public:
	inline static int32_t get_offset_of_Instance_22() { return static_cast<int32_t>(offsetof(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields, ___Instance_22)); }
	inline TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * get_Instance_22() const { return ___Instance_22; }
	inline TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE ** get_address_of_Instance_22() { return &___Instance_22; }
	inline void set_Instance_22(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * value)
	{
		___Instance_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_22), (void*)value);
	}
};


// RobotState_Meta
struct  RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823  : public NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8
{
public:
	// Bolt.ObjectPool`1<RobotState> RobotState_Meta::_pool
	ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * ____pool_23;

public:
	inline static int32_t get_offset_of__pool_23() { return static_cast<int32_t>(offsetof(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823, ____pool_23)); }
	inline ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * get__pool_23() const { return ____pool_23; }
	inline ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 ** get_address_of__pool_23() { return &____pool_23; }
	inline void set__pool_23(ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * value)
	{
		____pool_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_23), (void*)value);
	}
};

struct RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_StaticFields
{
public:
	// RobotState_Meta RobotState_Meta::Instance
	RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * ___Instance_22;

public:
	inline static int32_t get_offset_of_Instance_22() { return static_cast<int32_t>(offsetof(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_StaticFields, ___Instance_22)); }
	inline RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * get_Instance_22() const { return ___Instance_22; }
	inline RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 ** get_address_of_Instance_22() { return &___Instance_22; }
	inline void set_Instance_22(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * value)
	{
		___Instance_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_22), (void*)value);
	}
};


// TPCstate_Meta
struct  TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB  : public NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8
{
public:
	// Bolt.ObjectPool`1<TPCstate> TPCstate_Meta::_pool
	ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * ____pool_23;

public:
	inline static int32_t get_offset_of__pool_23() { return static_cast<int32_t>(offsetof(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB, ____pool_23)); }
	inline ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * get__pool_23() const { return ____pool_23; }
	inline ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 ** get_address_of__pool_23() { return &____pool_23; }
	inline void set__pool_23(ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * value)
	{
		____pool_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_23), (void*)value);
	}
};

struct TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_StaticFields
{
public:
	// TPCstate_Meta TPCstate_Meta::Instance
	TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * ___Instance_22;

public:
	inline static int32_t get_offset_of_Instance_22() { return static_cast<int32_t>(offsetof(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_StaticFields, ___Instance_22)); }
	inline TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * get_Instance_22() const { return ___Instance_22; }
	inline TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB ** get_address_of_Instance_22() { return &___Instance_22; }
	inline void set_Instance_22(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * value)
	{
		___Instance_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_22), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Bolt.NetworkValue[]
struct NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126  m_Items[1];

public:
	inline NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Object_19), (void*)NULL);
	}
	inline NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Object_19), (void*)NULL);
	}
};
// Bolt.NetworkPropertyInfo[]
struct NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9  m_Items[1];

public:
	inline NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Indices_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Paths_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Property_3), (void*)NULL);
		#endif
	}
	inline NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NetworkPropertyInfo_t970B4D4AA3D25FBB65F6EE718BDFBADD77C3B2C9  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Indices_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Paths_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Property_3), (void*)NULL);
		#endif
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


// System.Void Bolt.ObjectPool`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared (ObjectPool_1_t746D3F4174581DBC6509B8B16E30DCB143C9574C * __this, const RuntimeMethod* method);
// !0 Bolt.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared (ObjectPool_1_t746D3F4174581DBC6509B8B16E30DCB143C9574C * __this, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<System.Object>::Return(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared (ObjectPool_1_t746D3F4174581DBC6509B8B16E30DCB143C9574C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void Bolt.NetworkState::.ctor(Bolt.NetworkState_Meta)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkState__ctor_m5C8023410606A1249EA47BFE19529AC315FC8BF3 (NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * __this, NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 * ___meta0, const RuntimeMethod* method);
// Bolt.NetworkState Bolt.NetworkObj::get_RootState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94 (NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * __this, const RuntimeMethod* method);
// System.Boolean Bolt.Entity::get_HasControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entity_get_HasControl_m5407BA172AE692C8335E07AD0F4E94796A618546 (Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * __this, const RuntimeMethod* method);
// System.Void BoltLog::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Bolt.NetworkValue::Diff(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Bolt.NetworkStorage::PropertyChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5 (NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * __this, int32_t ___property0, const RuntimeMethod* method);
// System.Boolean Bolt.NetworkValue::Diff(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D (bool ___a0, bool ___b1, const RuntimeMethod* method);
// Bolt.NetworkTransform Bolt.NetworkValue::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * NetworkValue_get_Transform_m275BCC964916D1998F4EA8EED2B7031E199F5AEF (NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 * __this, const RuntimeMethod* method);
// System.Void RobotState_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta__ctor_m69DFFAA739A7E46D2249288C6C640BE428FE294E (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkState_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkState_Meta__ctor_m973C5DEB2D571B9A0A91159B169714D205CEBAFF (NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 * __this, const RuntimeMethod* method);
// System.Void Bolt.UniqueId::.ctor(System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C (UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819 * __this, uint8_t ___byte00, uint8_t ___byte11, uint8_t ___byte22, uint8_t ___byte33, uint8_t ___byte44, uint8_t ___byte55, uint8_t ___byte66, uint8_t ___byte77, uint8_t ___byte88, uint8_t ___byte99, uint8_t ___byte1010, uint8_t ___byte1111, uint8_t ___byte1212, uint8_t ___byte1313, uint8_t ___byte1414, uint8_t ___byte1515, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void Bolt.TypeId::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2 (TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// Bolt.PropertyFloatCompressionSettings Bolt.PropertyFloatCompressionSettings::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70 (const RuntimeMethod* method);
// Bolt.PropertyVectorCompressionSettings Bolt.PropertyVectorCompressionSettings::Create(Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  PropertyVectorCompressionSettings_Create_mA455EF4C5C3E239BEA70D64D9F2C270C809E33B2 (PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___x0, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___y1, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___z2, const RuntimeMethod* method);
// Bolt.PropertyQuaternionCompression Bolt.PropertyQuaternionCompression::Create(Bolt.PropertyFloatCompressionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  PropertyQuaternionCompression_Create_mE6CF1EE2F4F3AB03C2B505A919843FDE91F75C16 (PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___quaternion0, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Float::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072 (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty::Settings_Property(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524 (NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * __this, String_t* ___name0, int32_t ___priority1, int32_t ___filters2, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty::Settings_Offsets(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6 (NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * __this, int32_t ___properties0, int32_t ___storage1, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Mecanim::Settings_Mecanim(Bolt.MecanimMode,Bolt.MecanimDirection,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485 (NetworkProperty_Mecanim_t2B77F2C83D7ABF92A0B4ACB7CA7A1EAFD0C3BFD8 * __this, int32_t ___mode0, int32_t ___direction1, float ___damping2, int32_t ___layer3, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Float::Settings_Float(Bolt.PropertyFloatSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * __this, PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  ___settings0, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Float::Settings_Float(Bolt.PropertyFloatCompressionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358 (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * __this, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___compression0, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj_Meta::AddProperty(System.Int32,System.Int32,Bolt.NetworkProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD (NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * __this, int32_t ___offsetProperties0, int32_t ___offsetObjects1, NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * ___property2, int32_t ___arrayIndex3, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Bool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540 (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Transform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Transform__ctor_m724E97FF1D51B896CAA6CFBA51D7E42863F990B0 (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Transform::Settings_Space(Bolt.TransformSpaces)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Transform_Settings_Space_mFAB4EB588FE78FBAE5FE34CFF77BD005B2B1044D (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * __this, int32_t ___space0, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Transform::Settings_Vector(Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Transform_Settings_Vector_m09822B3C82953836EBCA80402261B868DCEA9378 (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * __this, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___x0, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___y1, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___z2, bool ___strict3, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Transform::Settings_Quaternion(Bolt.PropertyFloatCompressionSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Transform_Settings_Quaternion_mE65A99083EB8CF047C1304F81D8E071043ADBA31 (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * __this, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___compression0, bool ___strict1, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty::Settings_Interpolation(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Settings_Interpolation_mCEEA2597ED566292A564B51AB0CD30B62C004097 (NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A * __this, float ___snapMagnitude0, bool ___enabled1, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1 (NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * __this, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<RobotState>::.ctor()
inline void ObjectPool_1__ctor_m093FC4684971E97D7A668C068D5D9E7E6FFD828D (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<RobotState>::Get()
inline RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * ObjectPool_1_Get_mDE87106FFBB1EC0F30A2BE22EDF48B4678B013F8 (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * __this, const RuntimeMethod* method)
{
	return ((  RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * (*) (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<RobotState>::Return(!0)
inline void ObjectPool_1_Return_m7419DB22FD7E328D8A467CC2D8CBB1AEA6DF74BB (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * __this, RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 *, RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void Bolt.Command::.ctor(Bolt.Command_Meta)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_mDAD0580CD0F25CFCFF17870656CB18D803BC9478 (Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * __this, Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E * ___meta0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Bolt.NetworkObj> Bolt.NetworkObj::get_Objects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * NetworkObj_get_Objects_m07552B9C495FC6EFAA07FF749598E3B19A8B2699 (NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Bolt.NetworkObj>::get_Item(System.Int32)
inline NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_inline (List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * (*) (List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// Bolt.Command Bolt.Factory::NewCommand(Bolt.UniqueId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * Factory_NewCommand_mFCE2B8EE3C4DA860C190F37BA1BC369213210912 (UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  ___id0, const RuntimeMethod* method);
// ITPCCommandInput TPCCommand::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TPCCommand_get_Input_mF1C808081239E18ED1D22ADA10D898011BFBB989 (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkCommand_Data::.ctor(Bolt.NetworkObj_Meta)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCommand_Data__ctor_m24636B6016EBEC8409E06336A1F9A4E4BE29BEE3 (NetworkCommand_Data_tCB430B5D9A6C14686D998ABDA022D8FC9425A90E * __this, NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * ___meta0, const RuntimeMethod* method);
// System.Boolean Bolt.NetworkValue::Diff(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void TPCCommandInput_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta__ctor_m6F29421AD95D0D8DC8B4688E91EF49198C8526F3 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj_Meta__ctor_m637192148C114A72083066810E57407BA0B94CB8 (NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Vector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084 (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Vector::Settings_Vector(Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings,Bolt.PropertyFloatCompressionSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * __this, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___x0, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___y1, PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  ___z2, bool ___strict3, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<TPCCommandInput>::.ctor()
inline void ObjectPool_1__ctor_m1DDF2182B04295C77E97A9B6EA4F57CD9A34A17F (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<TPCCommandInput>::Get()
inline TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * ObjectPool_1_Get_m1056395BEB7B4225857C7A7C8CB327909B69C97E (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * __this, const RuntimeMethod* method)
{
	return ((  TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * (*) (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<TPCCommandInput>::Return(!0)
inline void ObjectPool_1_Return_m80C0B8F509EA9EF28A7FD80DA2B99B8A278D10E2 (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * __this, TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC *, TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Boolean Bolt.NetworkValue::Diff(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkValue_Diff_mD171886039611018F1F2F9A343EFA30EED17895C (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void TPCCommandLocalResult_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta__ctor_m784CF44AF588332847A2C1CD44396EE617E66053 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Integer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Integer__ctor_m7B1CEAD1138571C333BFABC729BAC4AE94D70129 (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * __this, const RuntimeMethod* method);
// Bolt.PropertyIntCompressionSettings Bolt.PropertyIntCompressionSettings::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  PropertyIntCompressionSettings_Create_m6169A4C82A7799C74A96A00F6516B9983F128C03 (const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Integer::Settings_Integer(Bolt.PropertyIntCompressionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Integer_Settings_Integer_mBD6B46CD0067F99E9B8362B43E35A590E8A3C56A (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * __this, PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  ___compression0, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<TPCCommandLocalResult>::.ctor()
inline void ObjectPool_1__ctor_m9B3EF320FA71D999086594BDFFB5D80930F907B8 (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<TPCCommandLocalResult>::Get()
inline TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * ObjectPool_1_Get_m17255C15DBDC6558D0E8AF012E73D481648C19FE (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * __this, const RuntimeMethod* method)
{
	return ((  TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * (*) (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<TPCCommandLocalResult>::Return(!0)
inline void ObjectPool_1_Return_m3581CDFF7D2332AA141D6B3F16219A62418EE15D (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * __this, TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 *, TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void TPCCommandResult_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta__ctor_m4ED70DF547E4BBFAED804C8680D640EF3D593973 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<TPCCommandResult>::.ctor()
inline void ObjectPool_1__ctor_mDBE7A0D535C7A0386BFCD3B525414BDEC5A5A407 (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<TPCCommandResult>::Get()
inline TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * ObjectPool_1_Get_m496AB4D7173A74C21C4B8FC01247C8ECA5CE6D5F (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * __this, const RuntimeMethod* method)
{
	return ((  TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * (*) (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<TPCCommandResult>::Return(!0)
inline void ObjectPool_1_Return_m90398A1E8A67E2E0CD4AC14ABA1D2EAB62E8A765 (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * __this, TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 *, TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void TPCCommand_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta__ctor_mEBB45FAA77EAF6C47DFA9E605B117ADBD9A37C87 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method);
// System.Void Bolt.Command_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command_Meta__ctor_mA9971D7A95941F0889052B75E277F13985A53543 (Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E * __this, const RuntimeMethod* method);
// System.Void TPCCommandInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput__ctor_m5FD434EA5EDA695D1FF08B9F94E1FB6B04455B67 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj_Meta/Offsets::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Offsets__ctor_mA0E287E75F4CE6E33825F721092B9DA0580E3627 (Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB * __this, int32_t ___properties0, int32_t ___storage1, int32_t ___objects2, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj::Init(System.String,Bolt.NetworkObj,Bolt.NetworkObj_Meta/Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj_Init_m4BF105B4E018A33DFCAC40853A045825ABC43166 (NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * __this, String_t* ___path0, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___parent1, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets2, const RuntimeMethod* method);
// System.Void TPCCommandResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult__ctor_m535B570878A547CB4D7748F78767D6586F7FE2AE (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method);
// System.Void TPCCommandLocalResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult__ctor_mC5A624E0454AC637BA82DA28F952408983D5E341 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method);
// System.Void Bolt.NetworkObj_Meta::CopyProperties(System.Int32,System.Int32,Bolt.NetworkObj_Meta,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj_Meta_CopyProperties_m8114D48A1E97F65B016EC3E068678484C59FF544 (NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * __this, int32_t ___offsetProperties0, int32_t ___offsetObjects1, NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * ___meta2, String_t* ___prefix3, int32_t ___arrayIndex4, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<TPCCommand>::.ctor()
inline void ObjectPool_1__ctor_m728FE251FA9B629617B876C75B80F470B1824398 (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<TPCCommand>::Get()
inline TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * ObjectPool_1_Get_m84A1C9E7091E0FE4D023E7EC70A971B1F47C9546 (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * __this, const RuntimeMethod* method)
{
	return ((  TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * (*) (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<TPCCommand>::Return(!0)
inline void ObjectPool_1_Return_mFCEE5826C615043FB496C37B43158969D8434A38 (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * __this, TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 *, TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void TPCstate_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta__ctor_m609ABB5AEA5B851401A1AB1CF4293ED1CA8AA936 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method);
// Bolt.PropertyExtrapolationSettings Bolt.PropertyExtrapolationSettings::Create(System.Int32,System.Single,System.Single,Bolt.ExtrapolationVelocityModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  PropertyExtrapolationSettings_Create_m9C6CCBC9315372ACE808F140C6CEB76FB52FA85A (int32_t ___maxFrames0, float ___errorTolerance1, float ___snapMagnitude2, int32_t ___velocityMode3, const RuntimeMethod* method);
// System.Void Bolt.NetworkProperty_Transform::Settings_Extrapolation(Bolt.PropertyExtrapolationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkProperty_Transform_Settings_Extrapolation_mF19BFA666095CB7CA18CE958BC0A842122D1C5AC (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * __this, PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  ___extrapolation0, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<TPCstate>::.ctor()
inline void ObjectPool_1__ctor_mF19EC2F380D46480361539ED1CBDE4A7BDE47703 (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<TPCstate>::Get()
inline TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * ObjectPool_1_Get_mE8FF551CC1F811BF9B1D4E714714497FE11EEFD0 (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * __this, const RuntimeMethod* method)
{
	return ((  TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * (*) (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<TPCstate>::Return(!0)
inline void ObjectPool_1_Return_mE9FF2FDB00D5EC0046264D70AA93E8C62CFDF4E5 (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * __this, TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 *, TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void Bolt.NetworkObj::.ctor(Bolt.NetworkObj_Meta)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObj__ctor_m84A48F08EDCBEE97A1A84808B9F95B18A2A546B5 (NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * __this, NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E * ___meta0, const RuntimeMethod* method);
// System.Void WeaponSlot_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta__ctor_m2D43F7F2EF62A584EAD5BF74D9144DB381438EED (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method);
// System.Void Bolt.ObjectPool`1<WeaponSlot>::.ctor()
inline void ObjectPool_1__ctor_m445E55DF6E338A1EF774B830B105594071E4CD9B (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 *, const RuntimeMethod*))ObjectPool_1__ctor_m72C8EFDA0DCBF231204B728A397A9493A61CF38B_gshared)(__this, method);
}
// !0 Bolt.ObjectPool`1<WeaponSlot>::Get()
inline WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * ObjectPool_1_Get_m31585F300B6DA37C309A7E5797A3DE1FE7F590F0 (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * __this, const RuntimeMethod* method)
{
	return ((  WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * (*) (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 *, const RuntimeMethod*))ObjectPool_1_Get_mFAA1A784323EFBEB33AD189734844132646B214B_gshared)(__this, method);
}
// System.Void Bolt.ObjectPool`1<WeaponSlot>::Return(!0)
inline void ObjectPool_1_Return_m8FAABCE79732D0D30B735409B826F45C7EE54EB4 (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * __this, WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 *, WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C *, const RuntimeMethod*))ObjectPool_1_Return_mDE816B5E7E6B3074059FF712A902B382DA578B57_gshared)(__this, ___obj0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RobotState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState__ctor_mC461C940D4BDC34E2D39D52DE63B8724F5A0E741 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState__ctor_mC461C940D4BDC34E2D39D52DE63B8724F5A0E741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var);
		RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * L_0 = ((RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_StaticFields*)il2cpp_codegen_static_fields_for(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var))->get_Instance_22();
		NetworkState__ctor_m5C8023410606A1249EA47BFE19529AC315FC8BF3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single RobotState::get_AngularSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotState_get_AngularSpeed_mFDAFCC9DCC5B71591F60D4E1FDDBB62522106966 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Float0_4();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void RobotState::set_AngularSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_set_AngularSpeed_m06441820E532C9DF627DFBB5463EAEE14A8514E6 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_set_AngularSpeed_m06441820E532C9DF627DFBB5463EAEE14A8514E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Entity_get_HasControl_m5407BA172AE692C8335E07AD0F4E94796A618546(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralAA080615B293428A562B433EE01BB4E584F0961A, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0033:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_6 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_6);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_7 = L_6->get_Values_21();
		int32_t L_8 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_Float0_4();
		V_1 = L_9;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_10 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_10);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_11 = L_10->get_Values_21();
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_11);
		float L_13 = ___value0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->set_Float0_4(L_13);
		float L_14 = V_1;
		float L_15 = ___value0;
		bool L_16 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_17 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_18 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_17);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_17, L_18, /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Single RobotState::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotState_get_Speed_mA084F3888E8F76CB67B8AD9549F5D254C57640D1 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void RobotState::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_set_Speed_mB252E9D5E9F6D8FAE3D474DD7B684897C7789669 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_set_Speed_mB252E9D5E9F6D8FAE3D474DD7B684897C7789669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Entity_get_HasControl_m5407BA172AE692C8335E07AD0F4E94796A618546(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral2AE30AB707A735B348859D20D4873E47A3C8FD44, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0033:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_6 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_6);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_7 = L_6->get_Values_21();
		int32_t L_8 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)))))->get_Float0_4();
		V_1 = L_9;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_10 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_10);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_11 = L_10->get_Values_21();
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_11);
		float L_13 = ___value0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)))))->set_Float0_4(L_13);
		float L_14 = V_1;
		float L_15 = ___value0;
		bool L_16 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_17 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_18 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_17);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Single RobotState::get_Shot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotState_get_Shot_m95A49849A249D341562A757C3810CAAB2F1A2570 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Boolean RobotState::get_PlayerInSight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RobotState_get_PlayerInSight_mF46EB2C2CA99FBCB3492C32C3A8A08A8B52554EB (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void RobotState::set_PlayerInSight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_set_PlayerInSight_m7DF33F026013B6F0A2E9DB9BEB9E498540C5B081 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_set_PlayerInSight_m7DF33F026013B6F0A2E9DB9BEB9E498540C5B081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	bool V_1 = false;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Entity_get_HasControl_m5407BA172AE692C8335E07AD0F4E94796A618546(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralB586E4F14C4E7A15F2965B5D1692D42E97DE116E, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0033:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_6 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_6);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_7 = L_6->get_Values_21();
		int32_t L_8 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_7);
		bool L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)3)))))->get_Bool_2();
		V_1 = L_9;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_10 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_10);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_11 = L_10->get_Values_21();
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_11);
		bool L_13 = ___value0;
		((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)))))->set_Bool_2(L_13);
		bool L_14 = V_1;
		bool L_15 = ___value0;
		bool L_16 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_17 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_18 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_17);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)3)), /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Single RobotState::get_AimWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RobotState_get_AimWeight_m7B836840E9DB953D32E9A573BE9A712900BCEDD5 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// Bolt.NetworkTransform RobotState::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * RobotState_get_Transform_mE5465225AD89A4419B6BC73DA96AF894E956E881 (RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * __this, const RuntimeMethod* method)
{
	NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * V_0 = NULL;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * L_3 = NetworkValue_get_Transform_m275BCC964916D1998F4EA8EED2B7031E199F5AEF((NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)5))))), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * L_4 = V_0;
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
// System.Void RobotState_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta__cctor_m4C8EA3A5D57B50128336DB947BEB4038750A8F99 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_Meta__cctor_m4C8EA3A5D57B50128336DB947BEB4038750A8F99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * L_0 = (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 *)il2cpp_codegen_object_new(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var);
		RobotState_Meta__ctor_m69DFFAA739A7E46D2249288C6C640BE428FE294E(L_0, /*hidden argument*/NULL);
		((RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_StaticFields*)il2cpp_codegen_static_fields_for(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var))->set_Instance_22(L_0);
		RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * L_1 = ((RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_StaticFields*)il2cpp_codegen_static_fields_for(RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823_il2cpp_TypeInfo_var))->get_Instance_22();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void RobotState_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta__ctor_m69DFFAA739A7E46D2249288C6C640BE428FE294E (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	{
		NetworkState_Meta__ctor_m973C5DEB2D571B9A0A91159B169714D205CEBAFF(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId RobotState_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  RobotState_Meta_Bolt_IFactory_get_TypeId_m788A2F1EA6FE61FF21CA9B908EFDEF0B01624EF4 (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId RobotState_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  RobotState_Meta_Bolt_IFactory_get_TypeKey_m1A8004F0311DBBD23029806747E5A039C95815EC (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)7, (uint8_t)((int32_t)188), (uint8_t)((int32_t)220), (uint8_t)((int32_t)125), (uint8_t)((int32_t)22), (uint8_t)((int32_t)224), (uint8_t)((int32_t)101), (uint8_t)((int32_t)70), (uint8_t)((int32_t)184), (uint8_t)((int32_t)41), (uint8_t)((int32_t)149), (uint8_t)((int32_t)85), (uint8_t)((int32_t)176), (uint8_t)((int32_t)150), (uint8_t)((int32_t)140), (uint8_t)((int32_t)131), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0046;
	}

IL_0046:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type RobotState_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * RobotState_Meta_Bolt_IFactory_get_TypeObject_m7AF2CBDF1EB2CDC527373089E0F466AE3E2A5E5E (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_Meta_Bolt_IFactory_get_TypeObject_m7AF2CBDF1EB2CDC527373089E0F466AE3E2A5E5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IRobotState_t7EADECEC03820317ED32A4A44F1D4CCF7060C4C2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void RobotState_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta_InitObject_m7C2C4B31F9EF8A35E5F2E2C1D93834F5D0E613E2 (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RobotState_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta_InitMeta_mD6FC87AC35604A456FFD50E095D2A7C9F3CEDFB8 (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_Meta_InitMeta_mD6FC87AC35604A456FFD50E095D2A7C9F3CEDFB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_0 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_2 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_4 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_6 = NULL;
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_7 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * V_9 = NULL;
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)16), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(8);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(6);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)6);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PropertyIdBits_16(3);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxBits_17(((int32_t)512));
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxProperties_18(((int32_t)16));
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxPropertiesBits_19(5);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_2 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_3 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_4 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  L_5 = PropertyVectorCompressionSettings_Create_mA455EF4C5C3E239BEA70D64D9F2C270C809E33B2(L_2, L_3, L_4, /*hidden argument*/NULL);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_InstantiationPositionCompression_20(L_5);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_6 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  L_7 = PropertyQuaternionCompression_Create_mE6CF1EE2F4F3AB03C2B505A919843FDE91F75C16(L_6, /*hidden argument*/NULL);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_InstantiationRotationCompression_21(L_7);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_8 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_9 = V_0;
		NullCheck(L_9);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_9)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_10 = V_0;
		NullCheck(L_10);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_10, _stringLiteral0CAB934D6888BE11DFF0F0D8409DECB7802C57E2, 1, ((int32_t)1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_11 = V_0;
		NullCheck(L_11);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_11, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_12 = V_0;
		NullCheck(L_12);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_12, 1, 1, (0.1f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_13 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_1)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_14 = V_1;
		NullCheck(L_13);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_13, L_14, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_15 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_16 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_15);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_15, L_16, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_17 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_17, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_18 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_18, /*hidden argument*/NULL);
		V_2 = L_18;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_19 = V_2;
		NullCheck(L_19);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_19)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_20 = V_2;
		NullCheck(L_20);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_20, _stringLiteral2D2CB022BC3D26BD1407C4AA787D5E46E1AD4C3B, 1, ((int32_t)1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_21 = V_2;
		NullCheck(L_21);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_21, 1, 1, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_22 = V_2;
		NullCheck(L_22);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_22, 1, 1, (0.1f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_23 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_3)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_24 = V_3;
		NullCheck(L_23);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_23, L_24, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_25 = V_2;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_26 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_25);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_25, L_26, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_27 = V_2;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_27, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_28 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_28, /*hidden argument*/NULL);
		V_4 = L_28;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_29 = V_4;
		NullCheck(L_29);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_29)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_30 = V_4;
		NullCheck(L_30);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_30, _stringLiteralBFE6177C462E94E91B71972117D451280F10944F, 1, 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_31 = V_4;
		NullCheck(L_31);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_31, 2, 2, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_32 = V_4;
		NullCheck(L_32);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_32, 1, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_33 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_5)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_34 = V_5;
		NullCheck(L_33);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_33, L_34, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_35 = V_4;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_36 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_35);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_35, L_36, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_37 = V_4;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 2, 0, L_37, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_38 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_38, /*hidden argument*/NULL);
		V_6 = L_38;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_39 = V_6;
		NullCheck(L_39);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_39)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_40 = V_6;
		NullCheck(L_40);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_40, _stringLiteralE90E5ED0B6645BDC866FB97576B5E0316154F2B2, 1, ((int32_t)1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_41 = V_6;
		NullCheck(L_41);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_41, 3, 3, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_42 = V_6;
		NullCheck(L_42);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_42, 1, 1, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_43 = V_6;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 3, 0, L_43, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_44 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_44, /*hidden argument*/NULL);
		V_7 = L_44;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_45 = V_7;
		NullCheck(L_45);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_45)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_46 = V_7;
		NullCheck(L_46);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_46, _stringLiteral755DD2B528D094DBE9CEBBC94F28562118438AA1, 1, 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_47 = V_7;
		NullCheck(L_47);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_47, 4, 4, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_48 = V_7;
		NullCheck(L_48);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_48, 1, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_49 = V_7;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_8)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_50 = V_8;
		NullCheck(L_49);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_49, L_50, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_51 = V_7;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_52 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_51);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_51, L_52, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_53 = V_7;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 4, 0, L_53, (-1), /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_54 = (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB *)il2cpp_codegen_object_new(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB_il2cpp_TypeInfo_var);
		NetworkProperty_Transform__ctor_m724E97FF1D51B896CAA6CFBA51D7E42863F990B0(L_54, /*hidden argument*/NULL);
		V_9 = L_54;
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_55 = V_9;
		NullCheck(L_55);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_55)->set_PropertyMeta_6(__this);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_56 = V_9;
		NullCheck(L_56);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_56, _stringLiteralDEA51BB13A4467C505EE6181171375F497334D54, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_57 = V_9;
		NullCheck(L_57);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_57, 5, 5, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_58 = V_9;
		NullCheck(L_58);
		NetworkProperty_Transform_Settings_Space_mFAB4EB588FE78FBAE5FE34CFF77BD005B2B1044D(L_58, 0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_59 = V_9;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_60 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_61 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_62 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_59);
		NetworkProperty_Transform_Settings_Vector_m09822B3C82953836EBCA80402261B868DCEA9378(L_59, L_60, L_61, L_62, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_63 = V_9;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_64 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_63);
		NetworkProperty_Transform_Settings_Quaternion_mE65A99083EB8CF047C1304F81D8E071043ADBA31(L_63, L_64, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_65 = V_9;
		NullCheck(L_65);
		NetworkProperty_Settings_Interpolation_mCEEA2597ED566292A564B51AB0CD30B62C004097(L_65, (10.0f), (bool)1, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_66 = V_9;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 5, 0, L_66, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * L_67 = (ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 *)il2cpp_codegen_object_new(ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m093FC4684971E97D7A668C068D5D9E7E6FFD828D(L_67, /*hidden argument*/ObjectPool_1__ctor_m093FC4684971E97D7A668C068D5D9E7E6FFD828D_RuntimeMethod_var);
		__this->set__pool_23(L_67);
		return;
	}
}
// System.Object RobotState_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RobotState_Meta_Bolt_IFactory_Create_mB6D637B53844B4FF232C6987B2A9A48E223C9A59 (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_Meta_Bolt_IFactory_Create_mB6D637B53844B4FF232C6987B2A9A48E223C9A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * L_0 = __this->get__pool_23();
		NullCheck(L_0);
		RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F * L_1 = ObjectPool_1_Get_mDE87106FFBB1EC0F30A2BE22EDF48B4678B013F8(L_0, /*hidden argument*/ObjectPool_1_Get_mDE87106FFBB1EC0F30A2BE22EDF48B4678B013F8_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void RobotState_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotState_Meta_Bolt_IFactory_Return_m468AAAA9C956E7A128EEB2DF700EADA4F4622B29 (RobotState_Meta_t2E5066895AA4A3E62691C5C82D5D64F071891823 * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RobotState_Meta_Bolt_IFactory_Return_m468AAAA9C956E7A128EEB2DF700EADA4F4622B29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t23C511D8954995DCF93FC051D98ECB194D9321B5 * L_0 = __this->get__pool_23();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_m7419DB22FD7E328D8A467CC2D8CBB1AEA6DF74BB(L_0, ((RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F *)IsInstClass((RuntimeObject*)L_1, RobotState_tBC7C3C980C86A2A56FAE2C0F9BC22BA074319C9F_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_m7419DB22FD7E328D8A467CC2D8CBB1AEA6DF74BB_RuntimeMethod_var);
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
// System.Void TPCCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand__ctor_m066EB9444D567BA4ED9991932724CBA8AA0C9560 (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand__ctor_m066EB9444D567BA4ED9991932724CBA8AA0C9560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var);
		TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * L_0 = ((TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var))->get_Instance_22();
		Command__ctor_mDAD0580CD0F25CFCFF17870656CB18D803BC9478(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// ITPCCommandInput TPCCommand::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TPCCommand_get_Input_mF1C808081239E18ED1D22ADA10D898011BFBB989 (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_get_Input_mF1C808081239E18ED1D22ADA10D898011BFBB989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * L_0 = NetworkObj_get_Objects_m07552B9C495FC6EFAA07FF749598E3B19A8B2699(__this, /*hidden argument*/NULL);
		int32_t L_1 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetObjects_4();
		NullCheck(L_0);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_2 = List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_inline(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_RuntimeMethod_var);
		V_0 = ((TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 *)CastclassClass((RuntimeObject*)L_2, TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81_il2cpp_TypeInfo_var));
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// ITPCCommandResult TPCCommand::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TPCCommand_get_Result_mB4E82B39BC96163B8CDA02083B8CB53EFBFD987F (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_get_Result_mB4E82B39BC96163B8CDA02083B8CB53EFBFD987F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * L_0 = NetworkObj_get_Objects_m07552B9C495FC6EFAA07FF749598E3B19A8B2699(__this, /*hidden argument*/NULL);
		int32_t L_1 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetObjects_4();
		NullCheck(L_0);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_2 = List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_inline(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)2)), /*hidden argument*/List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_RuntimeMethod_var);
		V_0 = ((TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B *)CastclassClass((RuntimeObject*)L_2, TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B_il2cpp_TypeInfo_var));
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// ITPCCommandLocalResult TPCCommand::get_LocalResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TPCCommand_get_LocalResult_mEF4FFFD5E85C3C0774B8E9835FCE7F6E44F7C228 (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_get_LocalResult_mEF4FFFD5E85C3C0774B8E9835FCE7F6E44F7C228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_t2671A9A88E49A7DAB077F10D601E012455D333EF * L_0 = NetworkObj_get_Objects_m07552B9C495FC6EFAA07FF749598E3B19A8B2699(__this, /*hidden argument*/NULL);
		int32_t L_1 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetObjects_4();
		NullCheck(L_0);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_2 = List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_inline(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)3)), /*hidden argument*/List_1_get_Item_mA0BD479218E66882037A26456C14CF1E0D50A5FB_RuntimeMethod_var);
		V_0 = ((TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A *)CastclassClass((RuntimeObject*)L_2, TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A_il2cpp_TypeInfo_var));
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// ITPCCommandInput TPCCommand::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TPCCommand_Create_m99B22506FCA05D167EF7708E385AC7FF6D383206 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Create_m99B22506FCA05D167EF7708E385AC7FF6D383206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var);
		TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * L_0 = ((TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var))->get_Instance_22();
		NullCheck(L_0);
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = InterfaceFuncInvoker0< UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  >::Invoke(2 /* Bolt.UniqueId Bolt.IFactory::get_TypeKey() */, IFactory_tF1AB765CB243AA521C368EA798373F1A24DB0BB1_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Factory_t9A1D0098B1D119A860841455306B525649AF6B82_il2cpp_TypeInfo_var);
		Command_t22FFBE284258C2781E9E43D6088A07808E8CACC6 * L_2 = Factory_NewCommand_mFCE2B8EE3C4DA860C190F37BA1BC369213210912(L_1, /*hidden argument*/NULL);
		NullCheck(((TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD *)IsInstClass((RuntimeObject*)L_2, TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3 = TPCCommand_get_Input_mF1C808081239E18ED1D22ADA10D898011BFBB989(((TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD *)IsInstClass((RuntimeObject*)L_2, TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_4 = V_0;
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
// System.Void TPCCommandInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput__ctor_m5FD434EA5EDA695D1FF08B9F94E1FB6B04455B67 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput__ctor_m5FD434EA5EDA695D1FF08B9F94E1FB6B04455B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var);
		TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * L_0 = ((TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkCommand_Data__ctor_m24636B6016EBEC8409E06336A1F9A4E4BE29BEE3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 TPCCommandInput::get_move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TPCCommandInput_get_move_m70B6FCF02FCCFE7405E26C66DB54245ED38F58A9 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandInput::set_move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_set_move_m71911E37CC31CEF07AE226DD918709FFF8F58AA0 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_Vector3_14(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Boolean TPCCommandInput::get_crouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCCommandInput_get_crouch_m07B7FA4448A39BAC338344BFF5EB15275303FAF9 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandInput::set_crouch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_set_crouch_m5CB881C613999E53680DB4B78F5AD62C7693C508 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Bool_2();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))))->set_Bool_2(L_7);
		bool L_8 = V_0;
		bool L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Single TPCCommandInput::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCCommandInput_get_forward_mC7588794C0CE23AA045B64FE01695C97C5A46542 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandInput::set_forward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_set_forward_mD31508E0854D9ED49E7ED94679827E71E66FAD57 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, float ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Float0_4();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2)))))->set_Float0_4(L_7);
		float L_8 = V_0;
		float L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Single TPCCommandInput::get_turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCCommandInput_get_turn_mD1A9F50202C23B1D8D6ECF091D387904294FF283 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandInput::set_turn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_set_turn_m7C6FA4F8D3B25EE51A00DA02E3CA90F72BE3ECA9 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, float ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Float0_4();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)))))->set_Float0_4(L_7);
		float L_8 = V_0;
		float L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean TPCCommandInput::get_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCCommandInput_get_jump_mB3EEC5CCDD2407C4D8026B4159E1476BA5EDAC55 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandInput::set_jump(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_set_jump_m6919C2C5D34CC745D8A2D2D7CCABD1D6C1007FC4 (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)4)))))->get_Bool_2();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4)))))->set_Bool_2(L_7);
		bool L_8 = V_0;
		bool L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_005e:
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
// System.Void TPCCommandInput_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta__cctor_m2F80736655EAE2E8F8A02147245250058B3812D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta__cctor_m2F80736655EAE2E8F8A02147245250058B3812D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * L_0 = (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F *)il2cpp_codegen_object_new(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var);
		TPCCommandInput_Meta__ctor_m6F29421AD95D0D8DC8B4688E91EF49198C8526F3(L_0, /*hidden argument*/NULL);
		((TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var))->set_Instance_16(L_0);
		TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * L_1 = ((TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var))->get_Instance_16();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void TPCCommandInput_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta__ctor_m6F29421AD95D0D8DC8B4688E91EF49198C8526F3 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta__ctor_m6F29421AD95D0D8DC8B4688E91EF49198C8526F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		NetworkObj_Meta__ctor_m637192148C114A72083066810E57407BA0B94CB8(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId TPCCommandInput_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  TPCCommandInput_Meta_Bolt_IFactory_get_TypeId_mA9BBF980A23EC9B4FBBB38E8AA92643AD1156C14 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId TPCCommandInput_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  TPCCommandInput_Meta_Bolt_IFactory_get_TypeKey_m64C228E8C55562B302325AE413C0BB437DB761F1 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)55), (uint8_t)((int32_t)250), (uint8_t)((int32_t)175), (uint8_t)((int32_t)13), (uint8_t)((int32_t)242), (uint8_t)((int32_t)143), (uint8_t)((int32_t)62), (uint8_t)((int32_t)67), (uint8_t)((int32_t)175), (uint8_t)((int32_t)253), (uint8_t)((int32_t)130), (uint8_t)((int32_t)146), (uint8_t)3, (uint8_t)((int32_t)255), (uint8_t)((int32_t)246), (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_004c;
	}

IL_004c:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type TPCCommandInput_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TPCCommandInput_Meta_Bolt_IFactory_get_TypeObject_mDC41C98C8638456E5B01E572DD748869D19F02BF (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta_Bolt_IFactory_get_TypeObject_mDC41C98C8638456E5B01E572DD748869D19F02BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ITPCCommandInput_tD30FE8F46CF0F537A775BE9C8D6D56D553CAFE4E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandInput_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta_InitObject_m31BBC4923236FBE4DB1A0D5D9EBE3CDFEF3CBCD2 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TPCCommandInput_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta_InitMeta_m63F550DADC5FF5E628BF4ABE28D4EC892AB94EE4 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta_InitMeta_m63F550DADC5FF5E628BF4ABE28D4EC892AB94EE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * V_0 = NULL;
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_1 = NULL;
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_2 = NULL;
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_3 = NULL;
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_4 = NULL;
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)30), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(5);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(5);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)5);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_2 = (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB *)il2cpp_codegen_object_new(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var);
		NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_3 = V_0;
		NullCheck(L_3);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_3)->set_PropertyMeta_6(__this);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_4 = V_0;
		NullCheck(L_4);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_4, _stringLiteral379D6CE99A8A95A7096AB579D454784C82A994D8, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_5 = V_0;
		NullCheck(L_5);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_5, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_6 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_7 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_8 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_9 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C(L_6, L_7, L_8, L_9, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_10 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_10, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_11 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_11, /*hidden argument*/NULL);
		V_1 = L_11;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_12 = V_1;
		NullCheck(L_12);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_12)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_13 = V_1;
		NullCheck(L_13);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_13, _stringLiteralC320CD729AD8BE4FFE22C3D888412160B311C0FE, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_14 = V_1;
		NullCheck(L_14);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_14, 1, 1, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_15 = V_1;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_15, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_16 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_16, /*hidden argument*/NULL);
		V_2 = L_16;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_17 = V_2;
		NullCheck(L_17);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_17)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_18 = V_2;
		NullCheck(L_18);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_18, _stringLiteralACE0C5E90AC07202E99D0186576979BACAC854C0, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_19 = V_2;
		NullCheck(L_19);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_19, 2, 2, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_20 = V_2;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_21 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_20);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_20, L_21, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_22 = V_2;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 2, 0, L_22, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_23 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_23, /*hidden argument*/NULL);
		V_3 = L_23;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_24 = V_3;
		NullCheck(L_24);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_24)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_25 = V_3;
		NullCheck(L_25);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_25, _stringLiteralB09C738B597622E82F63DE1194D044A3D23AC067, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_26 = V_3;
		NullCheck(L_26);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_26, 3, 3, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_27 = V_3;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_28 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_27);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_27, L_28, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_29 = V_3;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 3, 0, L_29, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_30 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_30, /*hidden argument*/NULL);
		V_4 = L_30;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_31 = V_4;
		NullCheck(L_31);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_31)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_32 = V_4;
		NullCheck(L_32);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_32, _stringLiteral271E9A568C0E9E562431CCB1F5DA3422162DE7B8, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_33 = V_4;
		NullCheck(L_33);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_33, 4, 4, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_34 = V_4;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 4, 0, L_34, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * L_35 = (ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC *)il2cpp_codegen_object_new(ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m1DDF2182B04295C77E97A9B6EA4F57CD9A34A17F(L_35, /*hidden argument*/ObjectPool_1__ctor_m1DDF2182B04295C77E97A9B6EA4F57CD9A34A17F_RuntimeMethod_var);
		__this->set__pool_17(L_35);
		return;
	}
}
// System.Object TPCCommandInput_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TPCCommandInput_Meta_Bolt_IFactory_Create_m9CBA40B2231817BD4E898256C36D8423C04A53BB (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta_Bolt_IFactory_Create_m9CBA40B2231817BD4E898256C36D8423C04A53BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * L_0 = __this->get__pool_17();
		NullCheck(L_0);
		TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * L_1 = ObjectPool_1_Get_m1056395BEB7B4225857C7A7C8CB327909B69C97E(L_0, /*hidden argument*/ObjectPool_1_Get_m1056395BEB7B4225857C7A7C8CB327909B69C97E_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandInput_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandInput_Meta_Bolt_IFactory_Return_mF26D6345AD975DBB95A8371926EE8B8234F82C92 (TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandInput_Meta_Bolt_IFactory_Return_mF26D6345AD975DBB95A8371926EE8B8234F82C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t646B34B881E030E62380AB7410D3EEDA6C4C64DC * L_0 = __this->get__pool_17();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_m80C0B8F509EA9EF28A7FD80DA2B99B8A278D10E2(L_0, ((TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 *)IsInstClass((RuntimeObject*)L_1, TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_m80C0B8F509EA9EF28A7FD80DA2B99B8A278D10E2_RuntimeMethod_var);
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
// System.Void TPCCommandLocalResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult__ctor_mC5A624E0454AC637BA82DA28F952408983D5E341 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult__ctor_mC5A624E0454AC637BA82DA28F952408983D5E341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var);
		TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * L_0 = ((TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkCommand_Data__ctor_m24636B6016EBEC8409E06336A1F9A4E4BE29BEE3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 TPCCommandLocalResult::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TPCCommandLocalResult_get_position_m599C513BA6EC5AA6EAA55896A590D4543123BBE3 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandLocalResult::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_set_position_m11D05A111AD57819AD2B75C99B04432445BDCDB3 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_Vector3_14(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// UnityEngine.Vector3 TPCCommandLocalResult::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TPCCommandLocalResult_get_velocity_m869F9952F509CCB5DB29BD2DA43C2733E396FD6B (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Vector3_14();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandLocalResult::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_set_velocity_m797F4B6C820E386EC9FDE9AD5525ABE6A0352CB1 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Vector3_14();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))))->set_Vector3_14(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean TPCCommandLocalResult::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCCommandLocalResult_get_isGrounded_m994370AB5C006944E9B119CECF8A758466DCAC77 (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandLocalResult::set_isGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_set_isGrounded_mEFD2CF34EA2A843DCF4457D851F55330AFF2ACFA (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Bool_2();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2)))))->set_Bool_2(L_7);
		bool L_8 = V_0;
		bool L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 TPCCommandLocalResult::get_jumpFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TPCCommandLocalResult_get_jumpFrames_m8147F518219581F920C57548DD0BAAFC82910BAE (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Int0_3();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandLocalResult::set_jumpFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_set_jumpFrames_m6BABE1151D8701415D9A53830127DF20DF0BC71B (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Int0_3();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		int32_t L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)))))->set_Int0_3(L_7);
		int32_t L_8 = V_0;
		int32_t L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mD171886039611018F1F2F9A343EFA30EED17895C(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)), /*hidden argument*/NULL);
	}

IL_005e:
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
// System.Void TPCCommandLocalResult_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta__cctor_m7A29D37471BF9FC16EACE42A6AC921DB94F9F554 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta__cctor_m7A29D37471BF9FC16EACE42A6AC921DB94F9F554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * L_0 = (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 *)il2cpp_codegen_object_new(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var);
		TPCCommandLocalResult_Meta__ctor_m784CF44AF588332847A2C1CD44396EE617E66053(L_0, /*hidden argument*/NULL);
		((TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var))->set_Instance_16(L_0);
		TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * L_1 = ((TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var))->get_Instance_16();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void TPCCommandLocalResult_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta__ctor_m784CF44AF588332847A2C1CD44396EE617E66053 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta__ctor_m784CF44AF588332847A2C1CD44396EE617E66053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		NetworkObj_Meta__ctor_m637192148C114A72083066810E57407BA0B94CB8(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId TPCCommandLocalResult_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  TPCCommandLocalResult_Meta_Bolt_IFactory_get_TypeId_m9001B8618B7826A2A8A774E8416ED75F24ACABE8 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId TPCCommandLocalResult_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  TPCCommandLocalResult_Meta_Bolt_IFactory_get_TypeKey_mD35688ED4EA2C793CFDDE2C70854C75A84C37503 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)45), (uint8_t)((int32_t)35), (uint8_t)((int32_t)253), (uint8_t)((int32_t)50), (uint8_t)((int32_t)73), (uint8_t)((int32_t)201), (uint8_t)((int32_t)195), (uint8_t)((int32_t)71), (uint8_t)((int32_t)180), (uint8_t)((int32_t)48), (uint8_t)((int32_t)130), (uint8_t)((int32_t)28), (uint8_t)((int32_t)158), (uint8_t)((int32_t)39), (uint8_t)6, (uint8_t)((int32_t)155), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0040;
	}

IL_0040:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type TPCCommandLocalResult_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TPCCommandLocalResult_Meta_Bolt_IFactory_get_TypeObject_m583F085FEC2F7565EA0F77B87392E7A371BE6D5C (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta_Bolt_IFactory_get_TypeObject_m583F085FEC2F7565EA0F77B87392E7A371BE6D5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ITPCCommandLocalResult_tB0862D83A20F9A3FBC625867B9C4A906A09A8E00_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandLocalResult_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta_InitObject_mBFFF8E61B0BCCE758FF49ED4DD338D9E0EC634A3 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TPCCommandLocalResult_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta_InitMeta_mDCF4C5F1256D0167DFEF562CBCC41F55263F35AA (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta_InitMeta_mDCF4C5F1256D0167DFEF562CBCC41F55263F35AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * V_0 = NULL;
	NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * V_1 = NULL;
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_2 = NULL;
	NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * V_3 = NULL;
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)32), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(4);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(4);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)4);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_2 = (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB *)il2cpp_codegen_object_new(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var);
		NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_3 = V_0;
		NullCheck(L_3);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_3)->set_PropertyMeta_6(__this);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_4 = V_0;
		NullCheck(L_4);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_4, _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_5 = V_0;
		NullCheck(L_5);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_5, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_6 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_7 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_8 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_9 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C(L_6, L_7, L_8, L_9, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_10 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_10, (-1), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_11 = (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB *)il2cpp_codegen_object_new(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var);
		NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084(L_11, /*hidden argument*/NULL);
		V_1 = L_11;
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_12 = V_1;
		NullCheck(L_12);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_12)->set_PropertyMeta_6(__this);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_13 = V_1;
		NullCheck(L_13);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_13, _stringLiteralCAF83E3E0DF47D3979B0C885CE75B6CD84C9FACD, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_14 = V_1;
		NullCheck(L_14);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_14, 1, 1, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_15 = V_1;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_16 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_17 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_18 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_15);
		NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C(L_15, L_16, L_17, L_18, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_19 = V_1;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_19, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_20 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_20, /*hidden argument*/NULL);
		V_2 = L_20;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_21 = V_2;
		NullCheck(L_21);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_21)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_22 = V_2;
		NullCheck(L_22);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_22, _stringLiteral2967083730BC8A2461A7EFE981484A2852587540, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_23 = V_2;
		NullCheck(L_23);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_23, 2, 2, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_24 = V_2;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 2, 0, L_24, (-1), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_25 = (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 *)il2cpp_codegen_object_new(NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095_il2cpp_TypeInfo_var);
		NetworkProperty_Integer__ctor_m7B1CEAD1138571C333BFABC729BAC4AE94D70129(L_25, /*hidden argument*/NULL);
		V_3 = L_25;
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_26 = V_3;
		NullCheck(L_26);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_26)->set_PropertyMeta_6(__this);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_27 = V_3;
		NullCheck(L_27);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_27, _stringLiteral74725C18DE45649BE3239474052A6B4EEDCD334F, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_28 = V_3;
		NullCheck(L_28);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_28, 3, 3, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_29 = V_3;
		PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  L_30 = PropertyIntCompressionSettings_Create_m6169A4C82A7799C74A96A00F6516B9983F128C03(/*hidden argument*/NULL);
		NullCheck(L_29);
		NetworkProperty_Integer_Settings_Integer_mBD6B46CD0067F99E9B8362B43E35A590E8A3C56A(L_29, L_30, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_31 = V_3;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 3, 0, L_31, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * L_32 = (ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 *)il2cpp_codegen_object_new(ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m9B3EF320FA71D999086594BDFFB5D80930F907B8(L_32, /*hidden argument*/ObjectPool_1__ctor_m9B3EF320FA71D999086594BDFFB5D80930F907B8_RuntimeMethod_var);
		__this->set__pool_17(L_32);
		return;
	}
}
// System.Object TPCCommandLocalResult_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TPCCommandLocalResult_Meta_Bolt_IFactory_Create_m6D9B3D3CFAC196FFC6656B7B2B36109A8D8E0F08 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta_Bolt_IFactory_Create_m6D9B3D3CFAC196FFC6656B7B2B36109A8D8E0F08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * L_0 = __this->get__pool_17();
		NullCheck(L_0);
		TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * L_1 = ObjectPool_1_Get_m17255C15DBDC6558D0E8AF012E73D481648C19FE(L_0, /*hidden argument*/ObjectPool_1_Get_m17255C15DBDC6558D0E8AF012E73D481648C19FE_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandLocalResult_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandLocalResult_Meta_Bolt_IFactory_Return_mA452E901976EEFBFD4D5CAB4B6A2B5428AF32549 (TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandLocalResult_Meta_Bolt_IFactory_Return_mA452E901976EEFBFD4D5CAB4B6A2B5428AF32549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t47B404AFC1FE0379BC13A788709054EBCB459A35 * L_0 = __this->get__pool_17();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_m3581CDFF7D2332AA141D6B3F16219A62418EE15D(L_0, ((TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A *)IsInstClass((RuntimeObject*)L_1, TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_m3581CDFF7D2332AA141D6B3F16219A62418EE15D_RuntimeMethod_var);
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
// System.Void TPCCommandResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult__ctor_m535B570878A547CB4D7748F78767D6586F7FE2AE (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult__ctor_m535B570878A547CB4D7748F78767D6586F7FE2AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var);
		TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * L_0 = ((TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkCommand_Data__ctor_m24636B6016EBEC8409E06336A1F9A4E4BE29BEE3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 TPCCommandResult::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TPCCommandResult_get_position_m4BF4533DB319FA281B8A8ED0F29FE05364CFDBF4 (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandResult::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_set_position_mD01782457719286460BEFC9B40E3777BE63777E9 (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Vector3_14();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_Vector3_14(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// UnityEngine.Vector3 TPCCommandResult::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TPCCommandResult_get_velocity_mE91B632631B8744A56AD376640AF52E9B5297578 (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Vector3_14();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandResult::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_set_velocity_m9770F207DC5FBCA621AB6D743054E3ECE86133A9 (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Vector3_14();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))))->set_Vector3_14(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mF4A0A420505666D1777DED28F1BF37907822353A(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Boolean TPCCommandResult::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCCommandResult_get_isGrounded_m3542D4206476E7AE0CD5CBB0C3DE50EE7A584BFE (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandResult::set_isGrounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_set_isGrounded_m517C12E94202ECF39A0BD45793FDE8FD0F34BB82 (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))->get_Bool_2();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)2)))))->set_Bool_2(L_7);
		bool L_8 = V_0;
		bool L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 TPCCommandResult::get_jumpFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TPCCommandResult_get_jumpFrames_m0E711EF9A61A29EB1CADC04BE9350E3D59B95C1B (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Int0_3();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCCommandResult::set_jumpFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_set_jumpFrames_mBAC6E9C7FA27CB25C2FF098B75D6B41AF3A1895F (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Int0_3();
		V_0 = L_3;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		int32_t L_7 = ___value0;
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)))))->set_Int0_3(L_7);
		int32_t L_8 = V_0;
		int32_t L_9 = ___value0;
		bool L_10 = NetworkValue_Diff_mD171886039611018F1F2F9A343EFA30EED17895C(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_11 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_12 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_11);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)3)), /*hidden argument*/NULL);
	}

IL_005e:
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
// System.Void TPCCommandResult_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta__cctor_m0BE577DD72AA97E7DF354BA7AD67672573CBF5A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta__cctor_m0BE577DD72AA97E7DF354BA7AD67672573CBF5A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * L_0 = (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE *)il2cpp_codegen_object_new(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var);
		TPCCommandResult_Meta__ctor_m4ED70DF547E4BBFAED804C8680D640EF3D593973(L_0, /*hidden argument*/NULL);
		((TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var))->set_Instance_16(L_0);
		TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * L_1 = ((TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var))->get_Instance_16();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void TPCCommandResult_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta__ctor_m4ED70DF547E4BBFAED804C8680D640EF3D593973 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta__ctor_m4ED70DF547E4BBFAED804C8680D640EF3D593973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		NetworkObj_Meta__ctor_m637192148C114A72083066810E57407BA0B94CB8(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId TPCCommandResult_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  TPCCommandResult_Meta_Bolt_IFactory_get_TypeId_mF1493B7018E850CC044D04695B98EF079DF0C401 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId TPCCommandResult_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  TPCCommandResult_Meta_Bolt_IFactory_get_TypeKey_m13A29DD63E34D59F10144D0ED2A09050DE71F043 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)149), (uint8_t)((int32_t)193), (uint8_t)((int32_t)152), (uint8_t)((int32_t)226), (uint8_t)((int32_t)215), (uint8_t)((int32_t)212), (uint8_t)((int32_t)83), (uint8_t)((int32_t)70), (uint8_t)((int32_t)150), (uint8_t)((int32_t)46), (uint8_t)((int32_t)223), (uint8_t)((int32_t)50), (uint8_t)((int32_t)66), (uint8_t)((int32_t)55), (uint8_t)((int32_t)249), (uint8_t)((int32_t)99), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0047;
	}

IL_0047:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type TPCCommandResult_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TPCCommandResult_Meta_Bolt_IFactory_get_TypeObject_mAE8B14E1B49D921B243F6F9CB159EB7E017CAE51 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta_Bolt_IFactory_get_TypeObject_mAE8B14E1B49D921B243F6F9CB159EB7E017CAE51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ITPCCommandResult_t4E878A3DCA8CF8DF81FEBEF9C5E173E15DDC4ECD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandResult_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta_InitObject_mBB324F1CED0A818BDAA0E6AF65B55898D381B4B9 (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TPCCommandResult_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta_InitMeta_mD40DE2B760CDD8A5477FEC99C4DF5C28E2BD285D (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta_InitMeta_mD40DE2B760CDD8A5477FEC99C4DF5C28E2BD285D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * V_0 = NULL;
	NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * V_1 = NULL;
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_2 = NULL;
	NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * V_3 = NULL;
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)31), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(4);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(4);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)4);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_2 = (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB *)il2cpp_codegen_object_new(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var);
		NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_3 = V_0;
		NullCheck(L_3);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_3)->set_PropertyMeta_6(__this);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_4 = V_0;
		NullCheck(L_4);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_4, _stringLiteral90BE16585DA21A822A011B262DB668A8CCF504D0, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_5 = V_0;
		NullCheck(L_5);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_5, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_6 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_7 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_8 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_9 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C(L_6, L_7, L_8, L_9, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_10 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_10, (-1), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_11 = (NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB *)il2cpp_codegen_object_new(NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB_il2cpp_TypeInfo_var);
		NetworkProperty_Vector__ctor_m532D5C0289B6E45ACFF8C9CF781E6282016C0084(L_11, /*hidden argument*/NULL);
		V_1 = L_11;
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_12 = V_1;
		NullCheck(L_12);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_12)->set_PropertyMeta_6(__this);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_13 = V_1;
		NullCheck(L_13);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_13, _stringLiteralCAF83E3E0DF47D3979B0C885CE75B6CD84C9FACD, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_14 = V_1;
		NullCheck(L_14);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_14, 1, 1, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_15 = V_1;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_16 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_17 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_18 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_15);
		NetworkProperty_Vector_Settings_Vector_mAC641F3F7E5484EAC51C66FDC24A1FB8E8D7328C(L_15, L_16, L_17, L_18, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Vector_t37FC9EEE43053819710438460742E0D5A9DFDADB * L_19 = V_1;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_19, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_20 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_20, /*hidden argument*/NULL);
		V_2 = L_20;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_21 = V_2;
		NullCheck(L_21);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_21)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_22 = V_2;
		NullCheck(L_22);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_22, _stringLiteral2967083730BC8A2461A7EFE981484A2852587540, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_23 = V_2;
		NullCheck(L_23);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_23, 2, 2, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_24 = V_2;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 2, 0, L_24, (-1), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_25 = (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 *)il2cpp_codegen_object_new(NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095_il2cpp_TypeInfo_var);
		NetworkProperty_Integer__ctor_m7B1CEAD1138571C333BFABC729BAC4AE94D70129(L_25, /*hidden argument*/NULL);
		V_3 = L_25;
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_26 = V_3;
		NullCheck(L_26);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_26)->set_PropertyMeta_6(__this);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_27 = V_3;
		NullCheck(L_27);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_27, _stringLiteral74725C18DE45649BE3239474052A6B4EEDCD334F, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_28 = V_3;
		NullCheck(L_28);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_28, 3, 3, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_29 = V_3;
		PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  L_30 = PropertyIntCompressionSettings_Create_m6169A4C82A7799C74A96A00F6516B9983F128C03(/*hidden argument*/NULL);
		NullCheck(L_29);
		NetworkProperty_Integer_Settings_Integer_mBD6B46CD0067F99E9B8362B43E35A590E8A3C56A(L_29, L_30, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_31 = V_3;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 3, 0, L_31, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * L_32 = (ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 *)il2cpp_codegen_object_new(ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_mDBE7A0D535C7A0386BFCD3B525414BDEC5A5A407(L_32, /*hidden argument*/ObjectPool_1__ctor_mDBE7A0D535C7A0386BFCD3B525414BDEC5A5A407_RuntimeMethod_var);
		__this->set__pool_17(L_32);
		return;
	}
}
// System.Object TPCCommandResult_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TPCCommandResult_Meta_Bolt_IFactory_Create_m9EC05F7A0D8C817DEC8C228FA88554637395D5CD (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta_Bolt_IFactory_Create_m9EC05F7A0D8C817DEC8C228FA88554637395D5CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * L_0 = __this->get__pool_17();
		NullCheck(L_0);
		TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * L_1 = ObjectPool_1_Get_m496AB4D7173A74C21C4B8FC01247C8ECA5CE6D5F(L_0, /*hidden argument*/ObjectPool_1_Get_m496AB4D7173A74C21C4B8FC01247C8ECA5CE6D5F_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommandResult_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommandResult_Meta_Bolt_IFactory_Return_m722ABAA15E6BA694492750EFCC64081D3AF9AE5F (TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommandResult_Meta_Bolt_IFactory_Return_m722ABAA15E6BA694492750EFCC64081D3AF9AE5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t953943F0FF351D976A9B059916F9DDA563EEE3D6 * L_0 = __this->get__pool_17();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_m90398A1E8A67E2E0CD4AC14ABA1D2EAB62E8A765(L_0, ((TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B *)IsInstClass((RuntimeObject*)L_1, TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_m90398A1E8A67E2E0CD4AC14ABA1D2EAB62E8A765_RuntimeMethod_var);
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
// System.Void TPCCommand_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta__cctor_mC50763B5A0F8728173FD7D09CD45033AD885D5BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta__cctor_mC50763B5A0F8728173FD7D09CD45033AD885D5BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * L_0 = (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE *)il2cpp_codegen_object_new(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var);
		TPCCommand_Meta__ctor_mEBB45FAA77EAF6C47DFA9E605B117ADBD9A37C87(L_0, /*hidden argument*/NULL);
		((TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var))->set_Instance_22(L_0);
		TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * L_1 = ((TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE_il2cpp_TypeInfo_var))->get_Instance_22();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void TPCCommand_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta__ctor_mEBB45FAA77EAF6C47DFA9E605B117ADBD9A37C87 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	{
		Command_Meta__ctor_mA9971D7A95941F0889052B75E277F13985A53543(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId TPCCommand_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  TPCCommand_Meta_Bolt_IFactory_get_TypeId_m18996956F94942EAB34E42FC12281607AF862362 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId TPCCommand_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  TPCCommand_Meta_Bolt_IFactory_get_TypeKey_m3602113BD5F341B7CCB60D28419AA9C11C397744 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)166), (uint8_t)((int32_t)171), (uint8_t)((int32_t)134), (uint8_t)((int32_t)231), (uint8_t)((int32_t)156), (uint8_t)((int32_t)48), (uint8_t)((int32_t)184), (uint8_t)((int32_t)68), (uint8_t)((int32_t)176), (uint8_t)((int32_t)241), (uint8_t)((int32_t)120), (uint8_t)((int32_t)170), (uint8_t)((int32_t)141), (uint8_t)((int32_t)62), (uint8_t)((int32_t)191), (uint8_t)((int32_t)98), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_004d;
	}

IL_004d:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type TPCCommand_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TPCCommand_Meta_Bolt_IFactory_get_TypeObject_m1DD665FABA5F2307B05990920A941CB991B6C863 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta_Bolt_IFactory_get_TypeObject_m1DD665FABA5F2307B05990920A941CB991B6C863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommand_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta_InitObject_m694510EFC3FA23AFAC1563EA429AE4158C8E19AF (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta_InitObject_m694510EFC3FA23AFAC1563EA429AE4158C8E19AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * V_0 = NULL;
	TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * V_1 = NULL;
	TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * V_2 = NULL;
	{
		TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * L_0 = (TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 *)il2cpp_codegen_object_new(TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81_il2cpp_TypeInfo_var);
		TPCCommandInput__ctor_m5FD434EA5EDA695D1FF08B9F94E1FB6B04455B67(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TPCCommandInput_t0D60EAC7ADA805D8FAB761627DB1CFCAF2C30B81 * L_1 = V_0;
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_2 = ___obj0;
		NullCheck(L_2);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_3 = L_2->get_Root_1();
		int32_t L_4 = (&___offsets1)->get_OffsetProperties_2();
		int32_t L_5 = (&___offsets1)->get_OffsetStorage_0();
		int32_t L_6 = (&___offsets1)->get_OffsetObjects_1();
		Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Offsets__ctor_mA0E287E75F4CE6E33825F721092B9DA0580E3627((&L_7), L_4, L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_1);
		NetworkObj_Init_m4BF105B4E018A33DFCAC40853A045825ABC43166(L_1, _stringLiteralB568D47F2E244743B1FD7472DB836EF9769C21F8, L_3, L_7, /*hidden argument*/NULL);
		TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * L_8 = (TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B *)il2cpp_codegen_object_new(TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B_il2cpp_TypeInfo_var);
		TPCCommandResult__ctor_m535B570878A547CB4D7748F78767D6586F7FE2AE(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		TPCCommandResult_t8D3A8C2C7E692F9E1E88CC29BC9188030B2B867B * L_9 = V_1;
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_10 = ___obj0;
		NullCheck(L_10);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_11 = L_10->get_Root_1();
		int32_t L_12 = (&___offsets1)->get_OffsetProperties_2();
		int32_t L_13 = (&___offsets1)->get_OffsetStorage_0();
		int32_t L_14 = (&___offsets1)->get_OffsetObjects_1();
		Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Offsets__ctor_mA0E287E75F4CE6E33825F721092B9DA0580E3627((&L_15), ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)5)), ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)5)), ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2)), /*hidden argument*/NULL);
		NullCheck(L_9);
		NetworkObj_Init_m4BF105B4E018A33DFCAC40853A045825ABC43166(L_9, _stringLiteral5FAA59D4BC3756040B8CE9E673C09F929E6EE9BA, L_11, L_15, /*hidden argument*/NULL);
		TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * L_16 = (TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A *)il2cpp_codegen_object_new(TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A_il2cpp_TypeInfo_var);
		TPCCommandLocalResult__ctor_mC5A624E0454AC637BA82DA28F952408983D5E341(L_16, /*hidden argument*/NULL);
		V_2 = L_16;
		TPCCommandLocalResult_t6CB2522889EC8F2D2945D9D4F29329B3CE226F7A * L_17 = V_2;
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_18 = ___obj0;
		NullCheck(L_18);
		NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * L_19 = L_18->get_Root_1();
		int32_t L_20 = (&___offsets1)->get_OffsetProperties_2();
		int32_t L_21 = (&___offsets1)->get_OffsetStorage_0();
		int32_t L_22 = (&___offsets1)->get_OffsetObjects_1();
		Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Offsets__ctor_mA0E287E75F4CE6E33825F721092B9DA0580E3627((&L_23), ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)9))), ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)9))), ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)3)), /*hidden argument*/NULL);
		NullCheck(L_17);
		NetworkObj_Init_m4BF105B4E018A33DFCAC40853A045825ABC43166(L_17, _stringLiteral2F4EF44A648CC43A2273E34FD28D0DDA191AB7F9, L_19, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TPCCommand_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta_InitMeta_mC3DB55862FECB7311910A28E59C0B0C2A45EEEA2 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta_InitMeta_mC3DB55862FECB7311910A28E59C0B0C2A45EEEA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), 2, /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(((int32_t)13));
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(4);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(((int32_t)13));
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_IsInstant_16((bool)0);
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_LimitOnePerFrame_17((bool)0);
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_SmoothFrames_18(((int32_t)30));
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_CompressZeroValues_19((bool)0);
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_EnableInputDeltaCompression_20((bool)0);
		((Command_Meta_tDAF3A2F47A04371F1A896776A53CC0401811D59E *)__this)->set_EnableResultDeltaCompression_21((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var);
		TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F * L_2 = ((TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandInput_Meta_t9B984829B559E54547BCF3DD15D084661058AC6F_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkObj_Meta_CopyProperties_m8114D48A1E97F65B016EC3E068678484C59FF544(__this, 0, 1, L_2, _stringLiteralB568D47F2E244743B1FD7472DB836EF9769C21F8, (-1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var);
		TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE * L_3 = ((TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandResult_Meta_t0030158241D619C6457080789771245822820EDE_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkObj_Meta_CopyProperties_m8114D48A1E97F65B016EC3E068678484C59FF544(__this, 5, 2, L_3, _stringLiteral5FAA59D4BC3756040B8CE9E673C09F929E6EE9BA, (-1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var);
		TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94 * L_4 = ((TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_StaticFields*)il2cpp_codegen_static_fields_for(TPCCommandLocalResult_Meta_t795240587CF355645730567FAA13528FB0E52A94_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkObj_Meta_CopyProperties_m8114D48A1E97F65B016EC3E068678484C59FF544(__this, ((int32_t)9), 3, L_4, _stringLiteral2F4EF44A648CC43A2273E34FD28D0DDA191AB7F9, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * L_5 = (ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 *)il2cpp_codegen_object_new(ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m728FE251FA9B629617B876C75B80F470B1824398(L_5, /*hidden argument*/ObjectPool_1__ctor_m728FE251FA9B629617B876C75B80F470B1824398_RuntimeMethod_var);
		__this->set__pool_23(L_5);
		return;
	}
}
// System.Object TPCCommand_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TPCCommand_Meta_Bolt_IFactory_Create_m119EB729741CDE6033757306B18BE6F38D1E07D6 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta_Bolt_IFactory_Create_m119EB729741CDE6033757306B18BE6F38D1E07D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * L_0 = __this->get__pool_23();
		NullCheck(L_0);
		TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD * L_1 = ObjectPool_1_Get_m84A1C9E7091E0FE4D023E7EC70A971B1F47C9546(L_0, /*hidden argument*/ObjectPool_1_Get_m84A1C9E7091E0FE4D023E7EC70A971B1F47C9546_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCCommand_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCCommand_Meta_Bolt_IFactory_Return_mE28768D8149720F50BFC4C3BAB50CA4DEB4B53E0 (TPCCommand_Meta_tBD5F76F1F1CEEA1988A1A11B4814BE3F7AA8B1DE * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCCommand_Meta_Bolt_IFactory_Return_mE28768D8149720F50BFC4C3BAB50CA4DEB4B53E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_tC2E4205211B6DA8E5F0D72067B984C9EE008B546 * L_0 = __this->get__pool_23();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_mFCEE5826C615043FB496C37B43158969D8434A38(L_0, ((TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD *)IsInstClass((RuntimeObject*)L_1, TPCCommand_t6EFF59499E80FDFE7D219B5647BB15A24C08BDFD_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_mFCEE5826C615043FB496C37B43158969D8434A38_RuntimeMethod_var);
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
// System.Void TPCstate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate__ctor_m95025E633B551539D1567995D4F05D0215D7A2A0 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate__ctor_m95025E633B551539D1567995D4F05D0215D7A2A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var);
		TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * L_0 = ((TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_StaticFields*)il2cpp_codegen_static_fields_for(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var))->get_Instance_22();
		NetworkState__ctor_m5C8023410606A1249EA47BFE19529AC315FC8BF3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.NetworkTransform TPCstate::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * TPCstate_get_transform_m0ACB98F29F5CECD42CACF2BA0F3FB5B2EC3A5936 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * V_0 = NULL;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * L_3 = NetworkValue_get_Transform_m275BCC964916D1998F4EA8EED2B7031E199F5AEF((NetworkValue_t9209C457078E924B3A8C86944E1CEB32E9F68126 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		NetworkTransform_t74293FFD4F48CA317A4C775B51CD35149E059DBF * L_4 = V_0;
		return L_4;
	}
}
// System.Single TPCstate::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCstate_get_forward_mC6E1E551167818A0F387E82F9C85CDF504EDD2E5 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)3)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_forward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_forward_m7002CE6727BC8A4374E934AE40CFE4197EF4FE45 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_forward_m7002CE6727BC8A4374E934AE40CFE4197EF4FE45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralE148376A7394E1DF288977776580E23427AF2951, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)))))->get_Float0_4();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		float L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3)))))->set_Float0_4(L_11);
		float L_12 = V_1;
		float L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Single TPCstate::get_turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCstate_get_turn_mD679A5D59070D29A28CC39A4EE6A7C4F41F6EFD6 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)5)))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_turn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_turn_m81EB747040131161E82A7CA6475898A2C7FC1D79 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_turn_m81EB747040131161E82A7CA6475898A2C7FC1D79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral07322967F564EBF1343606C49663C09D5FC3EBB9, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)5)))))->get_Float0_4();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		float L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)5)))))->set_Float0_4(L_11);
		float L_12 = V_1;
		float L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)2)), /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Boolean TPCstate::get_crouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCstate_get_crouch_m8B0DA2FEA2F40ECD7B5B3A2332A59E76BCE98147 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)7)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_crouch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_crouch_m1A33E584C72E8B0F58444A2D1D7F7B26629E01E8 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_crouch_m1A33E584C72E8B0F58444A2D1D7F7B26629E01E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	bool V_1 = false;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral1BFE9EC1A633EAB83C02E52400A5A8296CD0B968, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7)))))->get_Bool_2();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		bool L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)7)))))->set_Bool_2(L_11);
		bool L_12 = V_1;
		bool L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)3)), /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Boolean TPCstate::get_grounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TPCstate_get_grounded_m8B16A208EBE61702825709F9CAAC34389A4872D0 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		bool L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)8)))))->get_Bool_2();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_grounded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_grounded_m370CCBB53124358BD09F564CC59D5DAA3B977660 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_grounded_m370CCBB53124358BD09F564CC59D5DAA3B977660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	bool V_1 = false;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralD5EA2A4AED734D796C3C7F821D4405C53E64D7F6, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		bool L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)8)))))->get_Bool_2();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		bool L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)8)))))->set_Bool_2(L_11);
		bool L_12 = V_1;
		bool L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m4FADA16216B6CC69924FE60B9ACF60C4629BFB8D(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)4)), /*hidden argument*/NULL);
	}

IL_0085:
	{
		return;
	}
}
// System.Single TPCstate::get_jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCstate_get_jump_m29F5D132677F550CD6DC8E4ED31B73A2346C7065 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)9))))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_jump(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_jump_m7A3EAABD859C55425440BEAC753551EC76F27708 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_jump_m7A3EAABD859C55425440BEAC753551EC76F27708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteralEDBB139EEB46857EB0792CB5456F48C753A05C5F, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)9))))))->get_Float0_4();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		float L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)9))))))->set_Float0_4(L_11);
		float L_12 = V_1;
		float L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)5)), /*hidden argument*/NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Single TPCstate::get_jumpleg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TPCstate_get_jumpleg_mFD3FD2D29D2610F8418AA1744F25EAADD9E71D2A (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)10))))))->get_Float0_4();
		V_0 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Void TPCstate::set_jumpleg(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_set_jumpleg_mCC6FF54FEF83FD83EF4BB6F1A5FB9A96356CD788 (TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_set_jumpleg_mCC6FF54FEF83FD83EF4BB6F1A5FB9A96356CD788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	float V_1 = 0.0f;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral27DD9A30CFC55FDC5754C7237CF964938D7EFFF3, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)10))))))->get_Float0_4();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		float L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)10))))))->set_Float0_4(L_11);
		float L_12 = V_1;
		float L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_m3093100E2620B535DEDDF88407BFC29CF62AC1A2(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)6)), /*hidden argument*/NULL);
	}

IL_0087:
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
// System.Void TPCstate_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta__cctor_mAC084E5D1AB96128300D7FD95DDFB3A3A7AE2468 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_Meta__cctor_mAC084E5D1AB96128300D7FD95DDFB3A3A7AE2468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * L_0 = (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB *)il2cpp_codegen_object_new(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var);
		TPCstate_Meta__ctor_m609ABB5AEA5B851401A1AB1CF4293ED1CA8AA936(L_0, /*hidden argument*/NULL);
		((TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_StaticFields*)il2cpp_codegen_static_fields_for(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var))->set_Instance_22(L_0);
		TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * L_1 = ((TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_StaticFields*)il2cpp_codegen_static_fields_for(TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB_il2cpp_TypeInfo_var))->get_Instance_22();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void TPCstate_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta__ctor_m609ABB5AEA5B851401A1AB1CF4293ED1CA8AA936 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	{
		NetworkState_Meta__ctor_m973C5DEB2D571B9A0A91159B169714D205CEBAFF(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId TPCstate_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  TPCstate_Meta_Bolt_IFactory_get_TypeId_m1E13BB11E8213E575C18A9CF7FCCBCBB7B4D6641 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId TPCstate_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  TPCstate_Meta_Bolt_IFactory_get_TypeKey_mD22047A2CC0A0E936E35713B464B75C629270B67 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)77), (uint8_t)((int32_t)230), (uint8_t)((int32_t)127), (uint8_t)((int32_t)73), (uint8_t)((int32_t)74), (uint8_t)5, (uint8_t)((int32_t)125), (uint8_t)((int32_t)78), (uint8_t)((int32_t)130), (uint8_t)((int32_t)127), (uint8_t)((int32_t)79), (uint8_t)((int32_t)22), (uint8_t)((int32_t)204), (uint8_t)((int32_t)128), (uint8_t)((int32_t)189), (uint8_t)((int32_t)167), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_003d;
	}

IL_003d:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type TPCstate_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TPCstate_Meta_Bolt_IFactory_get_TypeObject_mB282D3B2AA3A576443D173C95B3EEB49909C16D8 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_Meta_Bolt_IFactory_get_TypeObject_mB282D3B2AA3A576443D173C95B3EEB49909C16D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ITPCstate_t47C5F46C47FEC810973AD2F876E14AB0A335476F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCstate_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta_InitObject_m86BDF045D09DD848F1604F613F694C4B6D31BFC9 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TPCstate_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta_InitMeta_m943F5110D78B5384FADC2606391588312A28FF77 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_Meta_InitMeta_m943F5110D78B5384FADC2606391588312A28FF77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * V_0 = NULL;
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_1 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_3 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_5 = NULL;
	NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * V_6 = NULL;
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_7 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * V_9 = NULL;
	PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)13), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(((int32_t)12));
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(7);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)7);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PropertyIdBits_16(3);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxBits_17(((int32_t)512));
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxProperties_18(((int32_t)16));
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_PacketMaxPropertiesBits_19(5);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_2 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_3 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_4 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyVectorCompressionSettings_t92FEAF1F52DE38B233384257258A01F9E585B01C  L_5 = PropertyVectorCompressionSettings_Create_mA455EF4C5C3E239BEA70D64D9F2C270C809E33B2(L_2, L_3, L_4, /*hidden argument*/NULL);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_InstantiationPositionCompression_20(L_5);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_6 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyQuaternionCompression_t03765B9A9BA53956ED355D426A82ECB65FFDFE27  L_7 = PropertyQuaternionCompression_Create_mE6CF1EE2F4F3AB03C2B505A919843FDE91F75C16(L_6, /*hidden argument*/NULL);
		((NetworkState_Meta_t595CAFF30E1479FD278AB2AD78AC5AFFDA5FB2B8 *)__this)->set_InstantiationRotationCompression_21(L_7);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_8 = (NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB *)il2cpp_codegen_object_new(NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB_il2cpp_TypeInfo_var);
		NetworkProperty_Transform__ctor_m724E97FF1D51B896CAA6CFBA51D7E42863F990B0(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_9 = V_0;
		NullCheck(L_9);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_9)->set_PropertyMeta_6(__this);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_10 = V_0;
		NullCheck(L_10);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_10, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, 1, ((int32_t)1073741824), /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_11 = V_0;
		NullCheck(L_11);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_11, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_12 = V_0;
		NullCheck(L_12);
		NetworkProperty_Transform_Settings_Space_mFAB4EB588FE78FBAE5FE34CFF77BD005B2B1044D(L_12, 0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_13 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_14 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_15 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_16 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_13);
		NetworkProperty_Transform_Settings_Vector_m09822B3C82953836EBCA80402261B868DCEA9378(L_13, L_14, L_15, L_16, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_17 = V_0;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_18 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_17);
		NetworkProperty_Transform_Settings_Quaternion_mE65A99083EB8CF047C1304F81D8E071043ADBA31(L_17, L_18, (bool)0, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_19 = V_0;
		PropertyExtrapolationSettings_t2F0AED2810BC502EB136CE36D0B92E2243E8A615  L_20 = PropertyExtrapolationSettings_Create_m9C6CCBC9315372ACE808F140C6CEB76FB52FA85A(((int32_t)9), (0.25f), (10.0f), 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		NetworkProperty_Transform_Settings_Extrapolation_mF19BFA666095CB7CA18CE958BC0A842122D1C5AC(L_19, L_20, /*hidden argument*/NULL);
		NetworkProperty_Transform_tFC381203793C9BB37BC4CC33D43E235E7D8902DB * L_21 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_21, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_22 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_22, /*hidden argument*/NULL);
		V_1 = L_22;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_23 = V_1;
		NullCheck(L_23);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_23)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_24 = V_1;
		NullCheck(L_24);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_24, _stringLiteralACE0C5E90AC07202E99D0186576979BACAC854C0, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_25 = V_1;
		NullCheck(L_25);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_25, 1, 3, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_26 = V_1;
		NullCheck(L_26);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_26, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_27 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_2)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_28 = V_2;
		NullCheck(L_27);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_27, L_28, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_29 = V_1;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_30 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_29);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_29, L_30, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_31 = V_1;
		NullCheck(L_31);
		NetworkProperty_Settings_Interpolation_mCEEA2597ED566292A564B51AB0CD30B62C004097(L_31, (10.0f), (bool)1, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_32 = V_1;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_32, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_33 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_33, /*hidden argument*/NULL);
		V_3 = L_33;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_34 = V_3;
		NullCheck(L_34);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_34)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_35 = V_3;
		NullCheck(L_35);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_35, _stringLiteralB09C738B597622E82F63DE1194D044A3D23AC067, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_36 = V_3;
		NullCheck(L_36);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_36, 2, 5, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_37 = V_3;
		NullCheck(L_37);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_37, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_38 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_4)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_39 = V_4;
		NullCheck(L_38);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_38, L_39, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_40 = V_3;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_41 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_40);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_40, L_41, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_42 = V_3;
		NullCheck(L_42);
		NetworkProperty_Settings_Interpolation_mCEEA2597ED566292A564B51AB0CD30B62C004097(L_42, (10.0f), (bool)1, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_43 = V_3;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 2, 0, L_43, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_44 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_44, /*hidden argument*/NULL);
		V_5 = L_44;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_45 = V_5;
		NullCheck(L_45);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_45)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_46 = V_5;
		NullCheck(L_46);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_46, _stringLiteralC320CD729AD8BE4FFE22C3D888412160B311C0FE, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_47 = V_5;
		NullCheck(L_47);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_47, 3, 7, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_48 = V_5;
		NullCheck(L_48);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_48, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_49 = V_5;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 3, 0, L_49, (-1), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_50 = (NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E *)il2cpp_codegen_object_new(NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E_il2cpp_TypeInfo_var);
		NetworkProperty_Bool__ctor_mD634EEAF94ADE8355D6F76314AE0B2EE6FA69540(L_50, /*hidden argument*/NULL);
		V_6 = L_50;
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_51 = V_6;
		NullCheck(L_51);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_51)->set_PropertyMeta_6(__this);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_52 = V_6;
		NullCheck(L_52);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_52, _stringLiteral767A3311C18C9E7D1C083DFA6EFD9C0556E3645F, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_53 = V_6;
		NullCheck(L_53);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_53, 4, 8, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_54 = V_6;
		NullCheck(L_54);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_54, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Bool_tC6624EBBF5DE41684F36782B68D10BB19805366E * L_55 = V_6;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 4, 0, L_55, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_56 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_56, /*hidden argument*/NULL);
		V_7 = L_56;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_57 = V_7;
		NullCheck(L_57);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_57)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_58 = V_7;
		NullCheck(L_58);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_58, _stringLiteral271E9A568C0E9E562431CCB1F5DA3422162DE7B8, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_59 = V_7;
		NullCheck(L_59);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_59, 5, ((int32_t)9), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_60 = V_7;
		NullCheck(L_60);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_60, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_61 = V_7;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_8)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_62 = V_8;
		NullCheck(L_61);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_61, L_62, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_63 = V_7;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_64 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_63);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_63, L_64, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_65 = V_7;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 5, 0, L_65, (-1), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_66 = (NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 *)il2cpp_codegen_object_new(NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214_il2cpp_TypeInfo_var);
		NetworkProperty_Float__ctor_m2BE54708842AD43673F85C47873395B45A224072(L_66, /*hidden argument*/NULL);
		V_9 = L_66;
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_67 = V_9;
		NullCheck(L_67);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_67)->set_PropertyMeta_6(__this);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_68 = V_9;
		NullCheck(L_68);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_68, _stringLiteralE9CDD127DC893BBA460DDF9A9062FA849679C3EF, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_69 = V_9;
		NullCheck(L_69);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_69, 6, ((int32_t)10), /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_70 = V_9;
		NullCheck(L_70);
		NetworkProperty_Mecanim_Settings_Mecanim_m074ABD6B491109CB60B4A96E403C477B8FC82485(L_70, 0, 0, (0.0f), 0, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_71 = V_9;
		il2cpp_codegen_initobj((&V_10), sizeof(PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E ));
		(&V_10)->set_IsAngle_0((bool)0);
		PropertyFloatSettings_t6C8DE584515D0142F2D906645DB658A676DEBB8E  L_72 = V_10;
		NullCheck(L_71);
		NetworkProperty_Float_Settings_Float_m846F9C2D27AC5A610DCACD4A92AAC7DA081749EA(L_71, L_72, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_73 = V_9;
		PropertyFloatCompressionSettings_t39DABCCECD4E48D7EDCF3C43E81683A540F37B96  L_74 = PropertyFloatCompressionSettings_Create_mE65ADBCD5F0A72F49A435835EB0B739A0EAF0A70(/*hidden argument*/NULL);
		NullCheck(L_73);
		NetworkProperty_Float_Settings_Float_m7821FC0E799E4950862F646D21F57EE2ED90F358(L_73, L_74, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_75 = V_9;
		NullCheck(L_75);
		NetworkProperty_Settings_Interpolation_mCEEA2597ED566292A564B51AB0CD30B62C004097(L_75, (10.0f), (bool)1, /*hidden argument*/NULL);
		NetworkProperty_Float_t6E7BD672E3149722ADFA26A5CE2304F0552EE214 * L_76 = V_9;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 6, 0, L_76, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * L_77 = (ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 *)il2cpp_codegen_object_new(ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_mF19EC2F380D46480361539ED1CBDE4A7BDE47703(L_77, /*hidden argument*/ObjectPool_1__ctor_mF19EC2F380D46480361539ED1CBDE4A7BDE47703_RuntimeMethod_var);
		__this->set__pool_23(L_77);
		return;
	}
}
// System.Object TPCstate_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TPCstate_Meta_Bolt_IFactory_Create_m8702CE8D04166EBF8009657A0FC5F107721A556D (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_Meta_Bolt_IFactory_Create_m8702CE8D04166EBF8009657A0FC5F107721A556D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * L_0 = __this->get__pool_23();
		NullCheck(L_0);
		TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 * L_1 = ObjectPool_1_Get_mE8FF551CC1F811BF9B1D4E714714497FE11EEFD0(L_0, /*hidden argument*/ObjectPool_1_Get_mE8FF551CC1F811BF9B1D4E714714497FE11EEFD0_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void TPCstate_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TPCstate_Meta_Bolt_IFactory_Return_m891F22F9708F33DEAA1360F6A66BFDD096C4A175 (TPCstate_Meta_tB3AA2FCBBC9C67F783A33B385FED21B855CF8CEB * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TPCstate_Meta_Bolt_IFactory_Return_m891F22F9708F33DEAA1360F6A66BFDD096C4A175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t4DD97C25929AA373AA2479BD583BCE55700959F3 * L_0 = __this->get__pool_23();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_mE9FF2FDB00D5EC0046264D70AA93E8C62CFDF4E5(L_0, ((TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50 *)IsInstClass((RuntimeObject*)L_1, TPCstate_tDAC0918BAF0616457F4BB9763A5F80F5CA7C0C50_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_mE9FF2FDB00D5EC0046264D70AA93E8C62CFDF4E5_RuntimeMethod_var);
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
// System.Void WeaponSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot__ctor_m9B132855ACE20993FC6358BC175326192CFCEB8E (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot__ctor_m9B132855ACE20993FC6358BC175326192CFCEB8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var);
		WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * L_0 = ((WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_StaticFields*)il2cpp_codegen_static_fields_for(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var))->get_Instance_16();
		NetworkObj__ctor_m84A48F08EDCBEE97A1A84808B9F95B18A2A546B5(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WeaponSlot::get_WeaponId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeaponSlot_get_WeaponId_m2CA49847011CCE6FC789461BCDABE7AFD20E1C7C (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_Int0_3();
		V_0 = L_3;
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void WeaponSlot::set_WeaponId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_set_WeaponId_m117E53AF8DF38068D0B7F291898FFB6C67DB43FC (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_set_WeaponId_m117E53AF8DF38068D0B7F291898FFB6C67DB43FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral9FB768895BD2715066C010F04F2E5836421FAFD6, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_Int0_3();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		int32_t L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_Int0_3(L_11);
		int32_t L_12 = V_1;
		int32_t L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_mD171886039611018F1F2F9A343EFA30EED17895C(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, L_16, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// System.Int32 WeaponSlot::get_WeaponAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeaponSlot_get_WeaponAmmo_m605DFE7C4035178F32940940FB9A1052445FCAB1 (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_0 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_0);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_1 = L_0->get_Values_21();
		int32_t L_2 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)))))->get_Int0_3();
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void WeaponSlot::set_WeaponAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_set_WeaponAmmo_mF76445DE95DF24B8463AC043F21A4D9AF83784E4 (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_set_WeaponAmmo_mF76445DE95DF24B8463AC043F21A4D9AF83784E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		NetworkState_t16862E0A5C22FAD4245246E3257264197DB04481 * L_0 = NetworkObj_get_RootState_mB96EDB43A53E0F66633D08FEAAA3C4C98A0D8D94(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_1 = L_0->get_Entity_8();
		V_0 = L_1;
		Entity_t70972DDA554A77FC2D2F4076C95BB4DA63D57085 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_IsOwner_21();
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltLog_tABE6BFD0D36F599A00B5800BECE57936CDB41B43_il2cpp_TypeInfo_var);
		BoltLog_Error_m00709913BAEE329B537FB5E3EA420E41768B5307(_stringLiteral8F2A033EB104AC5BF44EAD0FF7B4BC39C336E17D, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_0028:
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_4 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_4);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_5 = L_4->get_Values_21();
		int32_t L_6 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))))->get_Int0_3();
		V_1 = L_7;
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_8 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		NullCheck(L_8);
		NetworkValueU5BU5D_tC1B573A807780626300E5C433EB107D04AE1DA7D* L_9 = L_8->get_Values_21();
		int32_t L_10 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetStorage_5();
		NullCheck(L_9);
		int32_t L_11 = ___value0;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)))))->set_Int0_3(L_11);
		int32_t L_12 = V_1;
		int32_t L_13 = ___value0;
		bool L_14 = NetworkValue_Diff_mD171886039611018F1F2F9A343EFA30EED17895C(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0085;
		}
	}
	{
		NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * L_15 = VirtFuncInvoker0< NetworkStorage_t0B542FC1BD01689BAC5A7434CF1A381318C355A4 * >::Invoke(4 /* Bolt.NetworkStorage Bolt.NetworkObj::get_Storage() */, __this);
		int32_t L_16 = ((NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF *)__this)->get_OffsetProperties_6();
		NullCheck(L_15);
		NetworkStorage_PropertyChanged_m3DC65EC01003E86FBEF868938A5CAB6A7FD185E5(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0085:
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
// System.Void WeaponSlot_Meta::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta__cctor_m064A627D303D113567AE8013FD3FE93C42D0E24C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta__cctor_m064A627D303D113567AE8013FD3FE93C42D0E24C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * L_0 = (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 *)il2cpp_codegen_object_new(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var);
		WeaponSlot_Meta__ctor_m2D43F7F2EF62A584EAD5BF74D9144DB381438EED(L_0, /*hidden argument*/NULL);
		((WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_StaticFields*)il2cpp_codegen_static_fields_for(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var))->set_Instance_16(L_0);
		WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * L_1 = ((WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_StaticFields*)il2cpp_codegen_static_fields_for(WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8_il2cpp_TypeInfo_var))->get_Instance_16();
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		VirtActionInvoker0::Invoke(5 /* System.Void Bolt.NetworkObj_Meta::InitMeta() */, L_1);
		return;
	}
}
// System.Void WeaponSlot_Meta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta__ctor_m2D43F7F2EF62A584EAD5BF74D9144DB381438EED (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta__ctor_m2D43F7F2EF62A584EAD5BF74D9144DB381438EED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E_il2cpp_TypeInfo_var);
		NetworkObj_Meta__ctor_m637192148C114A72083066810E57407BA0B94CB8(__this, /*hidden argument*/NULL);
		return;
	}
}
// Bolt.TypeId WeaponSlot_Meta::Bolt.IFactory.get_TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  WeaponSlot_Meta_Bolt_IFactory_get_TypeId_mC94A98F159AFF62AFFACC81EF875CE91D40E627A (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0 = ((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->get_TypeId_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_1 = V_0;
		return L_1;
	}
}
// Bolt.UniqueId WeaponSlot_Meta::Bolt.IFactory.get_TypeKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  WeaponSlot_Meta_Bolt_IFactory_get_TypeKey_m5DAAE4DD70FBB079FD28CC5BA8851133778251AF (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_0;
		memset((&L_0), 0, sizeof(L_0));
		UniqueId__ctor_mEF6EA50F16A2CB942D7887D4A1A36FA88084D12C((&L_0), (uint8_t)((int32_t)102), (uint8_t)((int32_t)22), (uint8_t)((int32_t)182), (uint8_t)((int32_t)176), (uint8_t)((int32_t)29), (uint8_t)((int32_t)56), (uint8_t)((int32_t)203), (uint8_t)((int32_t)71), (uint8_t)((int32_t)190), (uint8_t)((int32_t)150), (uint8_t)((int32_t)98), (uint8_t)((int32_t)238), (uint8_t)((int32_t)47), (uint8_t)((int32_t)137), (uint8_t)((int32_t)88), (uint8_t)((int32_t)82), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0041;
	}

IL_0041:
	{
		UniqueId_t86981A3C5BCF7B5BAD45E7DC14358159729AB819  L_1 = V_0;
		return L_1;
	}
}
// System.Type WeaponSlot_Meta::Bolt.IFactory.get_TypeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WeaponSlot_Meta_Bolt_IFactory_get_TypeObject_m0D89673978263C55E1DFE92C3C419F8C04E43924 (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta_Bolt_IFactory_get_TypeObject_m0D89673978263C55E1DFE92C3C419F8C04E43924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		Type_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void WeaponSlot_Meta::InitObject(Bolt.NetworkObj,Bolt.NetworkObj_Meta_Offsets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta_InitObject_mC0A9C5D1C421FB52FF96A43EFF5AF4AB778E7953 (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, NetworkObj_tA0995283B38AA1260661B19FFEE3A37FDBEC58AF * ___obj0, Offsets_tB22C25984DE5D27B8757375896ADE8BC5670F6CB  ___offsets1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WeaponSlot_Meta::InitMeta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta_InitMeta_m7E73CB669B7AA20CD969C21B3F8C5C842DCA4317 (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta_InitMeta_m7E73CB669B7AA20CD969C21B3F8C5C842DCA4317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * V_0 = NULL;
	NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * V_1 = NULL;
	{
		TypeId_t14E4E4A993A41DCD06CFCAFC26CA7BD107FA4DA2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TypeId__ctor_m5350593C8EF9AF972F414D556EB8C62106B7C1F2((&L_0), ((int32_t)26), /*hidden argument*/NULL);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_TypeId_2(L_0);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountStorage_14(2);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountObjects_13(1);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_CountProperties_15(2);
		NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2* L_1 = (NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2*)SZArrayNew(NetworkPropertyInfoU5BU5D_t036DC65E84142A294B3DFFC6EB81110E0EB48BC2_il2cpp_TypeInfo_var, (uint32_t)2);
		((NetworkObj_Meta_t0EF549858C5D14C68364AC6B980F305273FF9A7E *)__this)->set_Properties_5(L_1);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_2 = (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 *)il2cpp_codegen_object_new(NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095_il2cpp_TypeInfo_var);
		NetworkProperty_Integer__ctor_m7B1CEAD1138571C333BFABC729BAC4AE94D70129(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_3 = V_0;
		NullCheck(L_3);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_3)->set_PropertyMeta_6(__this);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_4 = V_0;
		NullCheck(L_4);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_4, _stringLiteralB5E70A93FFB28A4E665D29C8896F86B38E51AC09, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_5 = V_0;
		NullCheck(L_5);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_5, 0, 0, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_6 = V_0;
		PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  L_7 = PropertyIntCompressionSettings_Create_m6169A4C82A7799C74A96A00F6516B9983F128C03(/*hidden argument*/NULL);
		NullCheck(L_6);
		NetworkProperty_Integer_Settings_Integer_mBD6B46CD0067F99E9B8362B43E35A590E8A3C56A(L_6, L_7, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_8 = V_0;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 0, 0, L_8, (-1), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_9 = (NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 *)il2cpp_codegen_object_new(NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095_il2cpp_TypeInfo_var);
		NetworkProperty_Integer__ctor_m7B1CEAD1138571C333BFABC729BAC4AE94D70129(L_9, /*hidden argument*/NULL);
		V_1 = L_9;
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_10 = V_1;
		NullCheck(L_10);
		((NetworkProperty_tFC999FD4B9990AAA9745679B0210370D0344335A *)L_10)->set_PropertyMeta_6(__this);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_11 = V_1;
		NullCheck(L_11);
		NetworkProperty_Settings_Property_mE305C38A297B90F27F7B080B6B82831337132524(L_11, _stringLiteralCB5349600C1431CCC4CABDF88C8D303306884476, 1, ((int32_t)-1073741824), /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_12 = V_1;
		NullCheck(L_12);
		NetworkProperty_Settings_Offsets_m4D644CBE3CDCC584C1D50F4DB54E740A2E6F92D6(L_12, 1, 1, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_13 = V_1;
		PropertyIntCompressionSettings_t28E43C97452D423FAC796F63375EE8814B9A0481  L_14 = PropertyIntCompressionSettings_Create_m6169A4C82A7799C74A96A00F6516B9983F128C03(/*hidden argument*/NULL);
		NullCheck(L_13);
		NetworkProperty_Integer_Settings_Integer_mBD6B46CD0067F99E9B8362B43E35A590E8A3C56A(L_13, L_14, /*hidden argument*/NULL);
		NetworkProperty_Integer_t65C3C79AF0C950F5373CDAFE7EE7ACA2C1742095 * L_15 = V_1;
		NetworkObj_Meta_AddProperty_m5596A29385BA64CFFCDD1D60E6043B7B9CAB42AD(__this, 1, 0, L_15, (-1), /*hidden argument*/NULL);
		NetworkObj_Meta_InitMeta_m12EA639D0D538F1D10B434EC28A3FBCDBE937ED1(__this, /*hidden argument*/NULL);
		ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * L_16 = (ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 *)il2cpp_codegen_object_new(ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m445E55DF6E338A1EF774B830B105594071E4CD9B(L_16, /*hidden argument*/ObjectPool_1__ctor_m445E55DF6E338A1EF774B830B105594071E4CD9B_RuntimeMethod_var);
		__this->set__pool_17(L_16);
		return;
	}
}
// System.Object WeaponSlot_Meta::Bolt.IFactory.Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeaponSlot_Meta_Bolt_IFactory_Create_m1BC4E809B97837BDB0714C5F4EF2957B3B8B2C41 (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta_Bolt_IFactory_Create_m1BC4E809B97837BDB0714C5F4EF2957B3B8B2C41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * L_0 = __this->get__pool_17();
		NullCheck(L_0);
		WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C * L_1 = ObjectPool_1_Get_m31585F300B6DA37C309A7E5797A3DE1FE7F590F0(L_0, /*hidden argument*/ObjectPool_1_Get_m31585F300B6DA37C309A7E5797A3DE1FE7F590F0_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		RuntimeObject * L_2 = V_0;
		return L_2;
	}
}
// System.Void WeaponSlot_Meta::Bolt.IFactory.Return(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponSlot_Meta_Bolt_IFactory_Return_m65AEB751B45F985139994FC2FF8F7804D2216C9C (WeaponSlot_Meta_t6DB402E601D3EA06E73CDB9D9EE2BC3DC3F663E8 * __this, RuntimeObject * ___objToReturn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeaponSlot_Meta_Bolt_IFactory_Return_m65AEB751B45F985139994FC2FF8F7804D2216C9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectPool_1_t40853548F367F175EAAC11FB0266CF6424D1BDF4 * L_0 = __this->get__pool_17();
		RuntimeObject * L_1 = ___objToReturn0;
		NullCheck(L_0);
		ObjectPool_1_Return_m8FAABCE79732D0D30B735409B826F45C7EE54EB4(L_0, ((WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C *)IsInstClass((RuntimeObject*)L_1, WeaponSlot_t67CCB0C1E72EECFEE93FA8D2215C37C1B2CA4B4C_il2cpp_TypeInfo_var)), /*hidden argument*/ObjectPool_1_Return_m8FAABCE79732D0D30B735409B826F45C7EE54EB4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
