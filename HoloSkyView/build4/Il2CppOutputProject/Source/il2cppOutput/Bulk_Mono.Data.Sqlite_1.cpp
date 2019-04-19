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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_tF0345A6CC0ED80CD73C244F342C8073DFEF5B1EA;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_tC8863ACD0138A60A1B1A654C78BCE668A3C5CF6B;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F;
// Mono.Data.Sqlite.SQLiteTypeNames[]
struct SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109;
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_tA348186E7B98A3A3379C15070E31F9BBF7B41AFE;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t351926E1F7DAF754332D630F6FB9BFEB5E45C405;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93;
// Mono.Data.Sqlite.SqliteCommandBuilder
struct SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A;
// Mono.Data.Sqlite.SqliteConvert
struct SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3;
// Mono.Data.Sqlite.SqliteException
struct SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61;
// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103;
// Mono.Data.Sqlite.SqliteFunction
struct SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B;
// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73;
// Mono.Data.Sqlite.SqliteFunctionAttribute
struct SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA;
// Mono.Data.Sqlite.SqliteFunctionAttribute[]
struct SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C;
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A;
// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D;
// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141;
// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496;
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B;
// Mono.Data.Sqlite.SqliteStatement[]
struct SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71;
// Mono.Data.Sqlite.TypeAffinity[]
struct TypeAffinityU5BU5D_t5C437BAC505CE323B743DB662774FB72AEACB3D5;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>[]
struct EntryU5BU5D_t81734FE365077CCFCDD132DFA0D58C5E34C3CC11;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct KeyCollection_t3CDB50F12E9A05A6D3926B530F4AA45EB2783283;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t666396E67E50284D48938851873CE562083D67F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct ValueCollection_tC894C5100A681B2311AAEF27EE08AC84A29C404A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tA111E8E29826F4195DBA282CAAD4CFD77A11D250;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct List_1_t8899912E5352046EE5CC00DE08B819A818A19722;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_tD1B5F34388A81AAF9D4852CF01BC58DE514E9923;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_t41A1BDF6D46B03A5A4E8DFA8599CF36ABBDAC92F;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_t95FCFC0BAB0C4065B0833DB174801263567B9593;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_t8415C90D93A08F8923C868A018FA3AA887866712;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0;
// System.ComponentModel.Component
struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4;
// System.ComponentModel.ISite
struct ISite_t6804B48BC23ABB5F4141903F878589BCEF6097A2;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2;
// System.Data.Common.DbCommand
struct DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964;
// System.Data.Common.DbCommandBuilder/ParameterNames
struct ParameterNames_t9ED8909C3FC5F6738042B9D3EB697355DFE4E430;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_tEFA1E8BC56DD7B4E924AEB678FDA1DE7901FF1FF;
// System.Data.Common.DbDataReader
struct DbDataReader_t0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A;
// System.Data.Common.DbException
struct DbException_t3952313B217CD117688BFFC5E864809BC13EF326;
// System.Data.Common.DbParameter
struct DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_tBF8CFA8C17FF889800A919255D31DD448EF44E25;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_tD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00;
// System.Data.Common.DbSchemaRow[]
struct DbSchemaRowU5BU5D_t4107DC799F3233CD5ECA6B1FAA559EA26FC43B6A;
// System.Data.Common.DbTransaction
struct DbTransaction_t52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1;
// System.Data.ConstraintCollection
struct ConstraintCollection_tFACF84726F8B5E3FC3043BE2C79C889A1F88FEBF;
// System.Data.DataColumn
struct DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A;
// System.Data.DataColumnCollection
struct DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t92A9C5FA1660AD2618AF9BA2DF3A0AEBB749C24E;
// System.Data.DataError
struct DataError_t61C72AD6D529E5DEE5EA0F59F355D65E6DB2235E;
// System.Data.DataExpression
struct DataExpression_tC6C3E3658B417CC79EF6A5AFD5B882D9E1413EFB;
// System.Data.DataRelationCollection
struct DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t49D05A0A9C63B3BE96378F29A0F234799E930794;
// System.Data.DataRow
struct DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665;
// System.Data.DataRowBuilder
struct DataRowBuilder_tBDF082891A1D28ECB024897D7FB3511A6629BA6F;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48;
// System.Data.DataRowCollection
struct DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07;
// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_t5DBBBA9F345CFF6235BD0697D2504289FCB3E982;
// System.Data.DataRow[]
struct DataRowU5BU5D_t8CE09DCB1CAEFB0E90D5C16386CE0CC9EC56BE4D;
// System.Data.DataSet
struct DataSet_tB08A130C5A697E1B4AE9D4083A8D99606A830DEB;
// System.Data.DataTable
struct DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_tB40B0B8E6DFA791EE6F07A87445DAD1D361959EC;
// System.Data.DataView
struct DataView_t07D49E3E81E9724EB434896059C0D5BB61AA5280;
// System.Data.DbType[]
struct DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E;
// System.Data.Index
struct Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_tC8BB27FADC6F7F73FFB55F65EEF284B984FCB5B3;
// System.Data.PropertyCollection
struct PropertyCollection_t527B1A720505690413C7193B6C655865AB01426C;
// System.Data.RecordManager
struct RecordManager_t116E784253DF47D34867982F632C539D091CB1CE;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_tE075BA1D6F382866F969106BE55EDB1451290CC1;
// System.Data.UniqueConstraint
struct UniqueConstraint_t1D0BBDFAE4BC34BBBE4B56A1CADB3503DEBE085B;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Exception[]
struct ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
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
// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

extern RuntimeClass* AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
extern RuntimeClass* DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var;
extern RuntimeClass* DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
extern RuntimeClass* DbType_tBDB358FC5FD20074462C900ED3B7339BF0F08B6D_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t8899912E5352046EE5CC00DE08B819A818A19722_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_il2cpp_TypeInfo_var;
extern RuntimeClass* SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_il2cpp_TypeInfo_var;
extern RuntimeClass* SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F_il2cpp_TypeInfo_var;
extern RuntimeClass* SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460_il2cpp_TypeInfo_var;
extern RuntimeClass* SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var;
extern RuntimeClass* SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteFunctionEx_t748735355014BE51BB6F6AE9A8DB91D2A38D55AB_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var;
extern RuntimeClass* SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019____U24U24fieldU2D1_1_FieldInfo_var;
extern String_t* _stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D;
extern String_t* _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781;
extern String_t* _stringLiteral17E4D773881595E83EED7274990576CB3C33D081;
extern String_t* _stringLiteral193DAF137ED8B89DE36D47C3DF5FD8F66C0E1D14;
extern String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
extern String_t* _stringLiteral2301A3AED57BDF6FA84FA74B2553B52161EE1A1B;
extern String_t* _stringLiteral246AFB2A711D8CCEC2D90C6953074DABA1E3FF7E;
extern String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
extern String_t* _stringLiteral2ADF0A0954741E1AF5766479C5643CD51B0B69B5;
extern String_t* _stringLiteral2CE42E824F2163751D62C49D3226C338EFA1179D;
extern String_t* _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312;
extern String_t* _stringLiteral3598517C826F1480A241800CE73F781AE2B1CD6A;
extern String_t* _stringLiteral40EA9041285003E004A8F6FE2DD14EBB07961AF2;
extern String_t* _stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058;
extern String_t* _stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138;
extern String_t* _stringLiteral4821EDEB87E72FFADC6BC2DD7758D1AF495E515F;
extern String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
extern String_t* _stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7;
extern String_t* _stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F;
extern String_t* _stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC;
extern String_t* _stringLiteral58F69C9012CFB997F9D3FFE4F607D66F6E932A1F;
extern String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
extern String_t* _stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E;
extern String_t* _stringLiteral5F97F8775628E86310829AB9E8C465258AB92A5E;
extern String_t* _stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84;
extern String_t* _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D;
extern String_t* _stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473;
extern String_t* _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C;
extern String_t* _stringLiteral660C1D424389A5FB82204BA7BB89B07419AAC1C0;
extern String_t* _stringLiteral66D2C601FBFA7B406B77381952D6A78FC0BD2564;
extern String_t* _stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564;
extern String_t* _stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD;
extern String_t* _stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE;
extern String_t* _stringLiteral7E15BB5C01E7DD56499E37C634CF791D3A519AEE;
extern String_t* _stringLiteral7F97480B11C2DFEFA56814087360C69E4B05A84D;
extern String_t* _stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C;
extern String_t* _stringLiteral84B715DD42CB515250F3406C66517DD9D7115450;
extern String_t* _stringLiteral89865DF2AE553E13CE078A7680590FE066489642;
extern String_t* _stringLiteral89F89C02CF47E091E726A4E07B88AF0966806897;
extern String_t* _stringLiteral96B270E30E3C5C4FDE9E03F6B30D4F2F1657F16C;
extern String_t* _stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614;
extern String_t* _stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25;
extern String_t* _stringLiteral9BF86E4634BA8C788A847BD10019CC0D59BCC00C;
extern String_t* _stringLiteralA7362D38845D769AB9292607291056855E2183B1;
extern String_t* _stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBA7B74E6880085D4646D2D47931AD9243932EB41;
extern String_t* _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27;
extern String_t* _stringLiteralBB4B470AC8E8BC7DB9A08102DEBACDD14B1D6379;
extern String_t* _stringLiteralC039B00BFF507642D69C98D494E70774AA200821;
extern String_t* _stringLiteralC41E97B906298C39611A796CAB1539411C1CF874;
extern String_t* _stringLiteralC9E6A29D14F3F27CD2EE75B65407552AD50A3078;
extern String_t* _stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F;
extern String_t* _stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88;
extern String_t* _stringLiteralD1D50AF319576CA6C6CBA296631E193D490A5370;
extern String_t* _stringLiteralD87C8562414047004383CEFAB06DDE994AB29260;
extern String_t* _stringLiteralD99C226D02CB06DF9C4F96D0E0140B91C9B8F41F;
extern String_t* _stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC;
extern String_t* _stringLiteralDD64AB817AB410403092565BB65F18EDEE243B7F;
extern String_t* _stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C;
extern String_t* _stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45;
extern String_t* _stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A;
extern String_t* _stringLiteralF642EE196088372EA886186C6C617515599AFD3F;
extern String_t* _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58;
extern String_t* _stringLiteralFF736B7140FADCCC4ABF6A7A3CAA5B49362CE730;
extern const RuntimeMethod* Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_mA5CF0060EC4F6FECC76E18CC752CD7AF3150C2EC_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m33D34AC73E57F20B852BC9A6B3934F75FA828C4B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_mE457CE3E5E26286210AB4ABB32B42E14171E3605_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m31BD7948C87354AD5E605AFCFE3B1E5BE0004BC1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m90C1DFC565486245FC87239E40EF6DD3B0F812C1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1FDB23E2E0DB6D1161026DE015E96A4AEB14ACDA_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m746802E1B5DC4EAD1D7893BEF90ADDBAFF2C9826_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4226B46D2CA33FDA0A745377388A7396D83ECD42_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mDB3651C83114E493B47483FD2EA53DB9A6D4E05D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mE5B765F86BE6C428D2DA532F0330FFE72C3545B7_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m056950DAF73943D18CF809E43EAC9941F9A3392D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mBD222ED4102072B70ECC2FA400DA8C6D07CBCDCF_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mEE0752217911092E0E2798AA2D9BE9F69499D10B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m5C593A83F3C9AEF2ADE640DB555BDAC26201A7B2_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m602DD7AD0BC51BB85FB05C7DC8E6FB8C0A36BE40_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m76002F2243745A75C82BD71D1F9EC4455E2AF842_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_RuntimeMethod_var;
extern const RuntimeMethod* KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m70973CA44C136B9D699B3D9E8697CCA64A66A3F8_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m43E6B4B43DC8C960F6C1C596323B435EE190D518_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m7295651A0327E83F10DBC7536FA234DC8DF096B7_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m9849C6624ECEF724FA4265F5C9EFAF50C9E01DBB_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m4A7019407D157423E20E7A6752BF6B867B7FFC88_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m25CFC152F09821F762F94CD8770D25297AEBD358_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m1E9C8D6C3C6DDA9045BA4455C0AD9682986AE06C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m0662904D9347277ACC8194F4891ACBCD48E988B1_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m45DB29E25FE0C6FD22CEB35CA947F643D08D0B58_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m2D7197245FE3F2274C0EA5A7A3138D8D51A67935_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m296891A9A1BFD3418A3D7B052A11E78C6BFB1411_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_mB67152924646D9D64A118B7096F004E73EB0F8C2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m90C515B5EAB7A8E854702789F94ECF1F1688252C_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mD692E4407A350882151EB3CC63AC49D4ACF144A6_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mF9BBAFA2DD37A9B7ECE1C717FEEAB0650B23FDF7_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m09B8347E2D1D666868A6FAC36EBBA81A097AFB0C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mFCEB6CCD7A34FE91033D0BFE574B58DE0F40F41A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m212C3517F24A4740785945298C16A93821613831_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1D81B9584635381912B4FD24E756C455A92BFED0_RuntimeMethod_var;
extern const RuntimeMethod* SqliteFunction_CompareCallback16_mC2D07A15F43AF0085F129BB4A61F0428E3D20174_RuntimeMethod_var;
extern const RuntimeMethod* SqliteFunction_CompareCallback_m54D26B5A7CFF285AA6227591E2484ACF5DEB66D1_RuntimeMethod_var;
extern const RuntimeMethod* SqliteFunction_FinalCallback_m5B886B4AA4B84556F664D8937F4DA9314E63E0B5_RuntimeMethod_var;
extern const RuntimeMethod* SqliteFunction_ScalarCallback_m126C2982DF3212030DAB73E3D488909C226AD681_RuntimeMethod_var;
extern const RuntimeMethod* SqliteFunction_StepCallback_mADB6A6DF1DE29D8DE5C36C4FBC958FDDA4E6C778_RuntimeMethod_var;
extern const RuntimeMethod* SqliteKeyReader_GetBoolean_m36F022043B8184F1CB2FBA478B2A77BBA5BF0BD3_RuntimeMethod_var;
extern const RuntimeMethod* SqliteKeyReader_GetInt32_mF8CE477B08B36777131612D5E83EF968E8A5A052_RuntimeMethod_var;
extern const RuntimeMethod* SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E_RuntimeMethod_var;
extern const RuntimeMethod* SqliteKeyReader_GetString_m8CF7F45A03440A9BFC4BF32A6D07B7301D9ABA3C_RuntimeMethod_var;
extern const RuntimeMethod* SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2_RuntimeMethod_var;
extern const RuntimeMethod* SqliteParameterCollection_CopyTo_m966875B97720BE945421544B35A5BD75EE4717E8_RuntimeMethod_var;
extern const RuntimeMethod* SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B_RuntimeMethod_var;
extern const RuntimeMethod* SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6_RuntimeMethod_var;
extern const RuntimeMethod* SqliteStatement_SetTypes_m467589073CC01BA286723D8DE3542F521FE0DFC2_RuntimeMethod_var;
extern const RuntimeMethod* SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_RuntimeMethod_var;
extern const RuntimeMethod* SqliteTransaction__ctor_m4B1582F2AE8DE773D105C744D5649B797BAC5812_RuntimeMethod_var;
extern const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
extern const RuntimeType* ISQLiteSchemaExtensions_tC1D0C2452CDDE025E2DC15D61C6CA061879441D7_0_0_0_var;
extern const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
extern const RuntimeType* SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_0_0_0_var;
extern const uint32_t KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069_MetadataUsageId;
extern const uint32_t KeyQuery__ctor_mFC968766FE129954A29948E1E13174E7A7C771E9_MetadataUsageId;
extern const uint32_t KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7_MetadataUsageId;
extern const uint32_t SqliteException_GetStockErrorMessage_m92A9E92B63C8832539C2AE3188AA7E2BE4F9EE48_MetadataUsageId;
extern const uint32_t SqliteException__cctor_mA26653BB670E78848371F715F8B22D352DE52E3C_MetadataUsageId;
extern const uint32_t SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF_MetadataUsageId;
extern const uint32_t SqliteFactory_GetSQLiteProviderServicesInstance_mC918A27517ECA3B759D72CECCE1E5EB04A7A98B8_MetadataUsageId;
extern const uint32_t SqliteFactory_System_IServiceProvider_GetService_m47D940F96D3A03AA4D54B3D98F2D47BC2D72DBD8_MetadataUsageId;
extern const uint32_t SqliteFactory__cctor_mE7DAD9EA3540B45324FDECD81997AFCFC8131983_MetadataUsageId;
extern const uint32_t SqliteFunction_BindFunctions_m08B353766159483173D99813391A1A3DEC64E70A_MetadataUsageId;
extern const uint32_t SqliteFunction_CompareCallback_m54D26B5A7CFF285AA6227591E2484ACF5DEB66D1_MetadataUsageId;
extern const uint32_t SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B_MetadataUsageId;
extern const uint32_t SqliteFunction_Dispose_mA5CEE0D5FEA2A306822221BFFF0AE7A5D084E0C0_MetadataUsageId;
extern const uint32_t SqliteFunction_FinalCallback_m5B886B4AA4B84556F664D8937F4DA9314E63E0B5_MetadataUsageId;
extern const uint32_t SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901_MetadataUsageId;
extern const uint32_t SqliteFunction_StepCallback_mADB6A6DF1DE29D8DE5C36C4FBC958FDDA4E6C778_MetadataUsageId;
extern const uint32_t SqliteFunction__cctor_m5991F910BEF1E66870F70F08702502DCFBA635FF_MetadataUsageId;
extern const uint32_t SqliteKeyReader_AppendSchemaTable_m87438EF2BE254CE056A208BEA66B32B69730719D_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetBoolean_m36F022043B8184F1CB2FBA478B2A77BBA5BF0BD3_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetDataTypeName_mBD4E57BBF3F0EF8E6D2B2958A8F9B712445F21D5_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetFieldType_m96F7F75FD2600D814EA6F89B9DBB3BD5E55A55A7_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetInt32_mF8CE477B08B36777131612D5E83EF968E8A5A052_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetString_m8CF7F45A03440A9BFC4BF32A6D07B7301D9ABA3C_MetadataUsageId;
extern const uint32_t SqliteKeyReader_GetValue_m533660C272B39FE2BECC5D51CA8983CD4C83242B_MetadataUsageId;
extern const uint32_t SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2_MetadataUsageId;
extern const uint32_t SqliteKeyReader__ctor_m323C4D35AC9EFFF162A7F11F471EA5CD7E374595_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_AddWithValue_m1798A60330D3841D566943DB251E2E20A8CB5C2A_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Add_mFCA125B36B91E9B1C3EED733EB0AC6D23D09ACC7_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Clear_mDB08729BB14D2683A08FC778EC24D48986B1878A_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Contains_m809EE521F1C60EE782AA093803E5D1ECB4BE8CCC_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_CopyTo_m966875B97720BE945421544B35A5BD75EE4717E8_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_GetEnumerator_m4142572E49E4F6E43A8EB1F74366D93A8503DF64_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_GetParameter_m015CD377BC23086613E16A605BB3DB46A63956B8_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_IndexOf_m0C427F1439A7DC77B03B871A45BAB98F5AD55E04_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_IndexOf_mC7F704145E8B3584A64AB1AC0866CFAC98DA0693_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Insert_m1468AC518F24282A8DCC6501E10498EA0B1DA8E4_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_MapParameters_mDBFB99E007C27CF538B578B29E5BF99D1E1CCC4D_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_RemoveAt_mEDDAFE1AF3E554069F3847ACE371C1C8587EFCA7_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_Remove_mC7B6ECD9CA903303D93DE53C045AF814469113B3_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_SetParameter_m1287A19B7D8BF14AF45149E8C8AB431CB13A2CC3_MetadataUsageId;
extern const uint32_t SqliteParameterCollection__ctor_mBC1D047E1C8F88A1FF6F8214F7E8E536DE4CC126_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_get_Count_mE39B32D861A0F17573CB5CD0AC8B83B0EC47D55A_MetadataUsageId;
extern const uint32_t SqliteParameterCollection_get_Item_m93B04004F3D8EE64B3E1AA82B03DF0E8F15F7C0C_MetadataUsageId;
extern const uint32_t SqliteParameter_Clone_m2F3E1B6AC30078B566F43B918F9A10A61627425D_MetadataUsageId;
extern const uint32_t SqliteParameter_get_DbType_mB89D51F642A72646BF1B1DEB831B289DEEF780BE_MetadataUsageId;
extern const uint32_t SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B_MetadataUsageId;
extern const uint32_t SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_ReleaseHandle_mB1F807DD008B390FAD65536E50C8C9A729971F32_MetadataUsageId;
extern const uint32_t SqliteStatementHandle__ctor_m152074FB4DE5C4E2AD2A63A3CF29AF4F5A841DF6_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_get_IsInvalid_m8C147649D2CF28F32620861C75EE7FF7D10260C1_MetadataUsageId;
extern const uint32_t SqliteStatementHandle_op_Implicit_mAAF58A66FB73A0F59D024C91F3DDB6727719EE46_MetadataUsageId;
extern const uint32_t SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6_MetadataUsageId;
extern const uint32_t SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27_MetadataUsageId;
extern const uint32_t SqliteStatement_SetTypes_m467589073CC01BA286723D8DE3542F521FE0DFC2_MetadataUsageId;
extern const uint32_t SqliteStatement__ctor_mD2AC92D979E7DBAE320AADEAD7B0FA9FACDEF470_MetadataUsageId;
extern const uint32_t SqliteTransaction_Commit_mA753E05C4DA4855EBB55B569B63C580403CC4F02_MetadataUsageId;
extern const uint32_t SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_MetadataUsageId;
extern const uint32_t SqliteTransaction_IssueRollback_m9D3603391C4A072270DC28972DAE292C6D70E04C_MetadataUsageId;
extern const uint32_t SqliteTransaction__ctor_m4B1582F2AE8DE773D105C744D5649B797BAC5812_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A;
struct KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141;
struct SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B;
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;


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
#ifndef AGGREGATEDATA_T2862CF5502703680B4D5748E456D6D2B49F0FF73_H
#define AGGREGATEDATA_T2862CF5502703680B4D5748E456D6D2B49F0FF73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct  AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73  : public RuntimeObject
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteFunction/AggregateData::_count
	int32_t ____count_0;
	// System.Object Mono.Data.Sqlite.SqliteFunction/AggregateData::_data
	RuntimeObject * ____data_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73, ____data_1)); }
	inline RuntimeObject * get__data_1() const { return ____data_1; }
	inline RuntimeObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(RuntimeObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((&____data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEDATA_T2862CF5502703680B4D5748E456D6D2B49F0FF73_H
#ifndef SQLITEKEYREADER_T1C2E53976CDC11FF645C62DECA46D85D850FA76D_H
#define SQLITEKEYREADER_T1C2E53976CDC11FF645C62DECA46D85D850FA76D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader
struct  SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[] Mono.Data.Sqlite.SqliteKeyReader::_keyInfo
	KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* ____keyInfo_0;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteKeyReader::_stmt
	SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * ____stmt_1;
	// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::_isValid
	bool ____isValid_2;

public:
	inline static int32_t get_offset_of__keyInfo_0() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D, ____keyInfo_0)); }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* get__keyInfo_0() const { return ____keyInfo_0; }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141** get_address_of__keyInfo_0() { return &____keyInfo_0; }
	inline void set__keyInfo_0(KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* value)
	{
		____keyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&____keyInfo_0), value);
	}

	inline static int32_t get_offset_of__stmt_1() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D, ____stmt_1)); }
	inline SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * get__stmt_1() const { return ____stmt_1; }
	inline SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 ** get_address_of__stmt_1() { return &____stmt_1; }
	inline void set__stmt_1(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * value)
	{
		____stmt_1 = value;
		Il2CppCodeGenWriteBarrier((&____stmt_1), value);
	}

	inline static int32_t get_offset_of__isValid_2() { return static_cast<int32_t>(offsetof(SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D, ____isValid_2)); }
	inline bool get__isValid_2() const { return ____isValid_2; }
	inline bool* get_address_of__isValid_2() { return &____isValid_2; }
	inline void set__isValid_2(bool value)
	{
		____isValid_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEKEYREADER_T1C2E53976CDC11FF645C62DECA46D85D850FA76D_H
#ifndef KEYQUERY_T57AE791E094C97DA51F625AFC575B65C8161B58C_H
#define KEYQUERY_T57AE791E094C97DA51F625AFC575B65C8161B58C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct  KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_command
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * ____command_0;
	// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::_reader
	SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * ____reader_1;

public:
	inline static int32_t get_offset_of__command_0() { return static_cast<int32_t>(offsetof(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C, ____command_0)); }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * get__command_0() const { return ____command_0; }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 ** get_address_of__command_0() { return &____command_0; }
	inline void set__command_0(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * value)
	{
		____command_0 = value;
		Il2CppCodeGenWriteBarrier((&____command_0), value);
	}

	inline static int32_t get_offset_of__reader_1() { return static_cast<int32_t>(offsetof(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C, ____reader_1)); }
	inline SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * get__reader_1() const { return ____reader_1; }
	inline SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 ** get_address_of__reader_1() { return &____reader_1; }
	inline void set__reader_1(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * value)
	{
		____reader_1 = value;
		Il2CppCodeGenWriteBarrier((&____reader_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYQUERY_T57AE791E094C97DA51F625AFC575B65C8161B58C_H
#ifndef SQLITESTATEMENT_T5BF584E424790B713141F554C54CCB15AB9F9979_H
#define SQLITESTATEMENT_T5BF584E424790B713141F554C54CCB15AB9F9979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteStatement
struct  SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteStatement::_sql
	SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * ____sql_0;
	// System.String Mono.Data.Sqlite.SqliteStatement::_sqlStatement
	String_t* ____sqlStatement_1;
	// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatement::_sqlite_stmt
	SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * ____sqlite_stmt_2;
	// System.Int32 Mono.Data.Sqlite.SqliteStatement::_unnamedParameters
	int32_t ____unnamedParameters_3;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_paramNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____paramNames_4;
	// Mono.Data.Sqlite.SqliteParameter[] Mono.Data.Sqlite.SqliteStatement::_paramValues
	SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* ____paramValues_5;
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteStatement::_command
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * ____command_6;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_types
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____types_7;

public:
	inline static int32_t get_offset_of__sql_0() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____sql_0)); }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * get__sql_0() const { return ____sql_0; }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 ** get_address_of__sql_0() { return &____sql_0; }
	inline void set__sql_0(SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * value)
	{
		____sql_0 = value;
		Il2CppCodeGenWriteBarrier((&____sql_0), value);
	}

	inline static int32_t get_offset_of__sqlStatement_1() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____sqlStatement_1)); }
	inline String_t* get__sqlStatement_1() const { return ____sqlStatement_1; }
	inline String_t** get_address_of__sqlStatement_1() { return &____sqlStatement_1; }
	inline void set__sqlStatement_1(String_t* value)
	{
		____sqlStatement_1 = value;
		Il2CppCodeGenWriteBarrier((&____sqlStatement_1), value);
	}

	inline static int32_t get_offset_of__sqlite_stmt_2() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____sqlite_stmt_2)); }
	inline SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * get__sqlite_stmt_2() const { return ____sqlite_stmt_2; }
	inline SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B ** get_address_of__sqlite_stmt_2() { return &____sqlite_stmt_2; }
	inline void set__sqlite_stmt_2(SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * value)
	{
		____sqlite_stmt_2 = value;
		Il2CppCodeGenWriteBarrier((&____sqlite_stmt_2), value);
	}

	inline static int32_t get_offset_of__unnamedParameters_3() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____unnamedParameters_3)); }
	inline int32_t get__unnamedParameters_3() const { return ____unnamedParameters_3; }
	inline int32_t* get_address_of__unnamedParameters_3() { return &____unnamedParameters_3; }
	inline void set__unnamedParameters_3(int32_t value)
	{
		____unnamedParameters_3 = value;
	}

	inline static int32_t get_offset_of__paramNames_4() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____paramNames_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__paramNames_4() const { return ____paramNames_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__paramNames_4() { return &____paramNames_4; }
	inline void set__paramNames_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____paramNames_4 = value;
		Il2CppCodeGenWriteBarrier((&____paramNames_4), value);
	}

	inline static int32_t get_offset_of__paramValues_5() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____paramValues_5)); }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* get__paramValues_5() const { return ____paramValues_5; }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3** get_address_of__paramValues_5() { return &____paramValues_5; }
	inline void set__paramValues_5(SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* value)
	{
		____paramValues_5 = value;
		Il2CppCodeGenWriteBarrier((&____paramValues_5), value);
	}

	inline static int32_t get_offset_of__command_6() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____command_6)); }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * get__command_6() const { return ____command_6; }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 ** get_address_of__command_6() { return &____command_6; }
	inline void set__command_6(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * value)
	{
		____command_6 = value;
		Il2CppCodeGenWriteBarrier((&____command_6), value);
	}

	inline static int32_t get_offset_of__types_7() { return static_cast<int32_t>(offsetof(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979, ____types_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__types_7() const { return ____types_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__types_7() { return &____types_7; }
	inline void set__types_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____types_7 = value;
		Il2CppCodeGenWriteBarrier((&____types_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITESTATEMENT_T5BF584E424790B713141F554C54CCB15AB9F9979_H
#ifndef UNSAFENATIVEMETHODS_TC9FAF6D54389BC4501A79FE149F0C05069CB5442_H
#define UNSAFENATIVEMETHODS_TC9FAF6D54389BC4501A79FE149F0C05069CB5442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.UnsafeNativeMethods
struct  UnsafeNativeMethods_tC9FAF6D54389BC4501A79FE149F0C05069CB5442  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_TC9FAF6D54389BC4501A79FE149F0C05069CB5442_H
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
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef DICTIONARY_2_T7D0815C9A97DA0F997F113AB886786424D99F865_H
#define DICTIONARY_2_T7D0815C9A97DA0F997F113AB886786424D99F865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct  Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t81734FE365077CCFCDD132DFA0D58C5E34C3CC11* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3CDB50F12E9A05A6D3926B530F4AA45EB2783283 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC894C5100A681B2311AAEF27EE08AC84A29C404A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___entries_1)); }
	inline EntryU5BU5D_t81734FE365077CCFCDD132DFA0D58C5E34C3CC11* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t81734FE365077CCFCDD132DFA0D58C5E34C3CC11** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t81734FE365077CCFCDD132DFA0D58C5E34C3CC11* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___keys_7)); }
	inline KeyCollection_t3CDB50F12E9A05A6D3926B530F4AA45EB2783283 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3CDB50F12E9A05A6D3926B530F4AA45EB2783283 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3CDB50F12E9A05A6D3926B530F4AA45EB2783283 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ___values_8)); }
	inline ValueCollection_tC894C5100A681B2311AAEF27EE08AC84A29C404A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC894C5100A681B2311AAEF27EE08AC84A29C404A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC894C5100A681B2311AAEF27EE08AC84A29C404A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T7D0815C9A97DA0F997F113AB886786424D99F865_H
#ifndef DICTIONARY_2_T5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_H
#define DICTIONARY_2_T5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct  Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___entries_1)); }
	inline EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___keys_7)); }
	inline KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___values_8)); }
	inline ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_H
#ifndef DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#define DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___entries_1)); }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___keys_7)); }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___values_8)); }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_H
#ifndef LIST_1_T443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_H
#define LIST_1_T443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct  List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0, ____items_1)); }
	inline SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* get__items_1() const { return ____items_1; }
	inline SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_StaticFields, ____emptyArray_5)); }
	inline SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_H
#ifndef LIST_1_T8899912E5352046EE5CC00DE08B819A818A19722_H
#define LIST_1_T8899912E5352046EE5CC00DE08B819A818A19722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct  List_1_t8899912E5352046EE5CC00DE08B819A818A19722  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8899912E5352046EE5CC00DE08B819A818A19722, ____items_1)); }
	inline SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* get__items_1() const { return ____items_1; }
	inline SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8899912E5352046EE5CC00DE08B819A818A19722, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8899912E5352046EE5CC00DE08B819A818A19722, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8899912E5352046EE5CC00DE08B819A818A19722, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t8899912E5352046EE5CC00DE08B819A818A19722_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8899912E5352046EE5CC00DE08B819A818A19722_StaticFields, ____emptyArray_5)); }
	inline SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteFunctionAttributeU5BU5D_t5A98834F148E239BB979A6473D5C2C6B15F1ED8C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T8899912E5352046EE5CC00DE08B819A818A19722_H
#ifndef LIST_1_TD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_H
#define LIST_1_TD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct  List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E, ____items_1)); }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* get__items_1() const { return ____items_1; }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_StaticFields, ____emptyArray_5)); }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_H
#ifndef LIST_1_TC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_H
#define LIST_1_TC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct  List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC, ____items_1)); }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* get__items_1() const { return ____items_1; }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_StaticFields, ____emptyArray_5)); }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_H
#ifndef LIST_1_T11BD2CCC920F7063960F15F69AFE62B7DBE4DB72_H
#define LIST_1_T11BD2CCC920F7063960F15F69AFE62B7DBE4DB72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct  List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72, ____items_1)); }
	inline SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* get__items_1() const { return ____items_1; }
	inline SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72_StaticFields, ____emptyArray_5)); }
	inline SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteStatementU5BU5D_t68EC9ED47474A835C44735DD3C125F0E969ED0D4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T11BD2CCC920F7063960F15F69AFE62B7DBE4DB72_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifndef MARSHALBYVALUECOMPONENT_TADC0E481D4D19F965AB659F9038A1D7D47FA636B_H
#define MARSHALBYVALUECOMPONENT_TADC0E481D4D19F965AB659F9038A1D7D47FA636B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((&___site_1), value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B, ___events_2)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((&___events_2), value);
	}
};

struct MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_TADC0E481D4D19F965AB659F9038A1D7D47FA636B_H
#ifndef DBNULL_T7400E04939C2C29699B389B106997892BF53A8E5_H
#define DBNULL_T7400E04939C2C29699B389B106997892BF53A8E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t7400E04939C2C29699B389B106997892BF53A8E5  : public RuntimeObject
{
public:

public:
};

struct DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields, ___Value_0)); }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T7400E04939C2C29699B389B106997892BF53A8E5_H
#ifndef DBPROVIDERFACTORY_TD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00_H
#define DBPROVIDERFACTORY_TD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_tD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_TD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00_H
#ifndef SCHEMATABLECOLUMN_T7322D05A6816D93DEFD501739791B2ABB1EC6F52_H
#define SCHEMATABLECOLUMN_T7322D05A6816D93DEFD501739791B2ABB1EC6F52_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SchemaTableColumn
struct  SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52  : public RuntimeObject
{
public:

public:
};

struct SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields
{
public:
	// System.String System.Data.Common.SchemaTableColumn::ColumnName
	String_t* ___ColumnName_0;
	// System.String System.Data.Common.SchemaTableColumn::ColumnOrdinal
	String_t* ___ColumnOrdinal_1;
	// System.String System.Data.Common.SchemaTableColumn::ColumnSize
	String_t* ___ColumnSize_2;
	// System.String System.Data.Common.SchemaTableColumn::NumericPrecision
	String_t* ___NumericPrecision_3;
	// System.String System.Data.Common.SchemaTableColumn::NumericScale
	String_t* ___NumericScale_4;
	// System.String System.Data.Common.SchemaTableColumn::DataType
	String_t* ___DataType_5;
	// System.String System.Data.Common.SchemaTableColumn::ProviderType
	String_t* ___ProviderType_6;
	// System.String System.Data.Common.SchemaTableColumn::NonVersionedProviderType
	String_t* ___NonVersionedProviderType_7;
	// System.String System.Data.Common.SchemaTableColumn::IsLong
	String_t* ___IsLong_8;
	// System.String System.Data.Common.SchemaTableColumn::AllowDBNull
	String_t* ___AllowDBNull_9;
	// System.String System.Data.Common.SchemaTableColumn::IsAliased
	String_t* ___IsAliased_10;
	// System.String System.Data.Common.SchemaTableColumn::IsExpression
	String_t* ___IsExpression_11;
	// System.String System.Data.Common.SchemaTableColumn::IsKey
	String_t* ___IsKey_12;
	// System.String System.Data.Common.SchemaTableColumn::IsUnique
	String_t* ___IsUnique_13;
	// System.String System.Data.Common.SchemaTableColumn::BaseSchemaName
	String_t* ___BaseSchemaName_14;
	// System.String System.Data.Common.SchemaTableColumn::BaseTableName
	String_t* ___BaseTableName_15;
	// System.String System.Data.Common.SchemaTableColumn::BaseColumnName
	String_t* ___BaseColumnName_16;

public:
	inline static int32_t get_offset_of_ColumnName_0() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___ColumnName_0)); }
	inline String_t* get_ColumnName_0() const { return ___ColumnName_0; }
	inline String_t** get_address_of_ColumnName_0() { return &___ColumnName_0; }
	inline void set_ColumnName_0(String_t* value)
	{
		___ColumnName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnName_0), value);
	}

	inline static int32_t get_offset_of_ColumnOrdinal_1() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___ColumnOrdinal_1)); }
	inline String_t* get_ColumnOrdinal_1() const { return ___ColumnOrdinal_1; }
	inline String_t** get_address_of_ColumnOrdinal_1() { return &___ColumnOrdinal_1; }
	inline void set_ColumnOrdinal_1(String_t* value)
	{
		___ColumnOrdinal_1 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnOrdinal_1), value);
	}

	inline static int32_t get_offset_of_ColumnSize_2() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___ColumnSize_2)); }
	inline String_t* get_ColumnSize_2() const { return ___ColumnSize_2; }
	inline String_t** get_address_of_ColumnSize_2() { return &___ColumnSize_2; }
	inline void set_ColumnSize_2(String_t* value)
	{
		___ColumnSize_2 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnSize_2), value);
	}

	inline static int32_t get_offset_of_NumericPrecision_3() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___NumericPrecision_3)); }
	inline String_t* get_NumericPrecision_3() const { return ___NumericPrecision_3; }
	inline String_t** get_address_of_NumericPrecision_3() { return &___NumericPrecision_3; }
	inline void set_NumericPrecision_3(String_t* value)
	{
		___NumericPrecision_3 = value;
		Il2CppCodeGenWriteBarrier((&___NumericPrecision_3), value);
	}

	inline static int32_t get_offset_of_NumericScale_4() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___NumericScale_4)); }
	inline String_t* get_NumericScale_4() const { return ___NumericScale_4; }
	inline String_t** get_address_of_NumericScale_4() { return &___NumericScale_4; }
	inline void set_NumericScale_4(String_t* value)
	{
		___NumericScale_4 = value;
		Il2CppCodeGenWriteBarrier((&___NumericScale_4), value);
	}

	inline static int32_t get_offset_of_DataType_5() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___DataType_5)); }
	inline String_t* get_DataType_5() const { return ___DataType_5; }
	inline String_t** get_address_of_DataType_5() { return &___DataType_5; }
	inline void set_DataType_5(String_t* value)
	{
		___DataType_5 = value;
		Il2CppCodeGenWriteBarrier((&___DataType_5), value);
	}

	inline static int32_t get_offset_of_ProviderType_6() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___ProviderType_6)); }
	inline String_t* get_ProviderType_6() const { return ___ProviderType_6; }
	inline String_t** get_address_of_ProviderType_6() { return &___ProviderType_6; }
	inline void set_ProviderType_6(String_t* value)
	{
		___ProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderType_6), value);
	}

	inline static int32_t get_offset_of_NonVersionedProviderType_7() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___NonVersionedProviderType_7)); }
	inline String_t* get_NonVersionedProviderType_7() const { return ___NonVersionedProviderType_7; }
	inline String_t** get_address_of_NonVersionedProviderType_7() { return &___NonVersionedProviderType_7; }
	inline void set_NonVersionedProviderType_7(String_t* value)
	{
		___NonVersionedProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((&___NonVersionedProviderType_7), value);
	}

	inline static int32_t get_offset_of_IsLong_8() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___IsLong_8)); }
	inline String_t* get_IsLong_8() const { return ___IsLong_8; }
	inline String_t** get_address_of_IsLong_8() { return &___IsLong_8; }
	inline void set_IsLong_8(String_t* value)
	{
		___IsLong_8 = value;
		Il2CppCodeGenWriteBarrier((&___IsLong_8), value);
	}

	inline static int32_t get_offset_of_AllowDBNull_9() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___AllowDBNull_9)); }
	inline String_t* get_AllowDBNull_9() const { return ___AllowDBNull_9; }
	inline String_t** get_address_of_AllowDBNull_9() { return &___AllowDBNull_9; }
	inline void set_AllowDBNull_9(String_t* value)
	{
		___AllowDBNull_9 = value;
		Il2CppCodeGenWriteBarrier((&___AllowDBNull_9), value);
	}

	inline static int32_t get_offset_of_IsAliased_10() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___IsAliased_10)); }
	inline String_t* get_IsAliased_10() const { return ___IsAliased_10; }
	inline String_t** get_address_of_IsAliased_10() { return &___IsAliased_10; }
	inline void set_IsAliased_10(String_t* value)
	{
		___IsAliased_10 = value;
		Il2CppCodeGenWriteBarrier((&___IsAliased_10), value);
	}

	inline static int32_t get_offset_of_IsExpression_11() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___IsExpression_11)); }
	inline String_t* get_IsExpression_11() const { return ___IsExpression_11; }
	inline String_t** get_address_of_IsExpression_11() { return &___IsExpression_11; }
	inline void set_IsExpression_11(String_t* value)
	{
		___IsExpression_11 = value;
		Il2CppCodeGenWriteBarrier((&___IsExpression_11), value);
	}

	inline static int32_t get_offset_of_IsKey_12() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___IsKey_12)); }
	inline String_t* get_IsKey_12() const { return ___IsKey_12; }
	inline String_t** get_address_of_IsKey_12() { return &___IsKey_12; }
	inline void set_IsKey_12(String_t* value)
	{
		___IsKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___IsKey_12), value);
	}

	inline static int32_t get_offset_of_IsUnique_13() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___IsUnique_13)); }
	inline String_t* get_IsUnique_13() const { return ___IsUnique_13; }
	inline String_t** get_address_of_IsUnique_13() { return &___IsUnique_13; }
	inline void set_IsUnique_13(String_t* value)
	{
		___IsUnique_13 = value;
		Il2CppCodeGenWriteBarrier((&___IsUnique_13), value);
	}

	inline static int32_t get_offset_of_BaseSchemaName_14() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___BaseSchemaName_14)); }
	inline String_t* get_BaseSchemaName_14() const { return ___BaseSchemaName_14; }
	inline String_t** get_address_of_BaseSchemaName_14() { return &___BaseSchemaName_14; }
	inline void set_BaseSchemaName_14(String_t* value)
	{
		___BaseSchemaName_14 = value;
		Il2CppCodeGenWriteBarrier((&___BaseSchemaName_14), value);
	}

	inline static int32_t get_offset_of_BaseTableName_15() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___BaseTableName_15)); }
	inline String_t* get_BaseTableName_15() const { return ___BaseTableName_15; }
	inline String_t** get_address_of_BaseTableName_15() { return &___BaseTableName_15; }
	inline void set_BaseTableName_15(String_t* value)
	{
		___BaseTableName_15 = value;
		Il2CppCodeGenWriteBarrier((&___BaseTableName_15), value);
	}

	inline static int32_t get_offset_of_BaseColumnName_16() { return static_cast<int32_t>(offsetof(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields, ___BaseColumnName_16)); }
	inline String_t* get_BaseColumnName_16() const { return ___BaseColumnName_16; }
	inline String_t** get_address_of_BaseColumnName_16() { return &___BaseColumnName_16; }
	inline void set_BaseColumnName_16(String_t* value)
	{
		___BaseColumnName_16 = value;
		Il2CppCodeGenWriteBarrier((&___BaseColumnName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMATABLECOLUMN_T7322D05A6816D93DEFD501739791B2ABB1EC6F52_H
#ifndef SCHEMATABLEOPTIONALCOLUMN_TE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_H
#define SCHEMATABLEOPTIONALCOLUMN_TE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SchemaTableOptionalColumn
struct  SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA  : public RuntimeObject
{
public:

public:
};

struct SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields
{
public:
	// System.String System.Data.Common.SchemaTableOptionalColumn::ProviderSpecificDataType
	String_t* ___ProviderSpecificDataType_0;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsAutoIncrement
	String_t* ___IsAutoIncrement_1;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsHidden
	String_t* ___IsHidden_2;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsReadOnly
	String_t* ___IsReadOnly_3;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsRowVersion
	String_t* ___IsRowVersion_4;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseServerName
	String_t* ___BaseServerName_5;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseCatalogName
	String_t* ___BaseCatalogName_6;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementSeed
	String_t* ___AutoIncrementSeed_7;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementStep
	String_t* ___AutoIncrementStep_8;
	// System.String System.Data.Common.SchemaTableOptionalColumn::DefaultValue
	String_t* ___DefaultValue_9;
	// System.String System.Data.Common.SchemaTableOptionalColumn::Expression
	String_t* ___Expression_10;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseTableNamespace
	String_t* ___BaseTableNamespace_11;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseColumnNamespace
	String_t* ___BaseColumnNamespace_12;
	// System.String System.Data.Common.SchemaTableOptionalColumn::ColumnMapping
	String_t* ___ColumnMapping_13;

public:
	inline static int32_t get_offset_of_ProviderSpecificDataType_0() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___ProviderSpecificDataType_0)); }
	inline String_t* get_ProviderSpecificDataType_0() const { return ___ProviderSpecificDataType_0; }
	inline String_t** get_address_of_ProviderSpecificDataType_0() { return &___ProviderSpecificDataType_0; }
	inline void set_ProviderSpecificDataType_0(String_t* value)
	{
		___ProviderSpecificDataType_0 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderSpecificDataType_0), value);
	}

	inline static int32_t get_offset_of_IsAutoIncrement_1() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___IsAutoIncrement_1)); }
	inline String_t* get_IsAutoIncrement_1() const { return ___IsAutoIncrement_1; }
	inline String_t** get_address_of_IsAutoIncrement_1() { return &___IsAutoIncrement_1; }
	inline void set_IsAutoIncrement_1(String_t* value)
	{
		___IsAutoIncrement_1 = value;
		Il2CppCodeGenWriteBarrier((&___IsAutoIncrement_1), value);
	}

	inline static int32_t get_offset_of_IsHidden_2() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___IsHidden_2)); }
	inline String_t* get_IsHidden_2() const { return ___IsHidden_2; }
	inline String_t** get_address_of_IsHidden_2() { return &___IsHidden_2; }
	inline void set_IsHidden_2(String_t* value)
	{
		___IsHidden_2 = value;
		Il2CppCodeGenWriteBarrier((&___IsHidden_2), value);
	}

	inline static int32_t get_offset_of_IsReadOnly_3() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___IsReadOnly_3)); }
	inline String_t* get_IsReadOnly_3() const { return ___IsReadOnly_3; }
	inline String_t** get_address_of_IsReadOnly_3() { return &___IsReadOnly_3; }
	inline void set_IsReadOnly_3(String_t* value)
	{
		___IsReadOnly_3 = value;
		Il2CppCodeGenWriteBarrier((&___IsReadOnly_3), value);
	}

	inline static int32_t get_offset_of_IsRowVersion_4() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___IsRowVersion_4)); }
	inline String_t* get_IsRowVersion_4() const { return ___IsRowVersion_4; }
	inline String_t** get_address_of_IsRowVersion_4() { return &___IsRowVersion_4; }
	inline void set_IsRowVersion_4(String_t* value)
	{
		___IsRowVersion_4 = value;
		Il2CppCodeGenWriteBarrier((&___IsRowVersion_4), value);
	}

	inline static int32_t get_offset_of_BaseServerName_5() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___BaseServerName_5)); }
	inline String_t* get_BaseServerName_5() const { return ___BaseServerName_5; }
	inline String_t** get_address_of_BaseServerName_5() { return &___BaseServerName_5; }
	inline void set_BaseServerName_5(String_t* value)
	{
		___BaseServerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___BaseServerName_5), value);
	}

	inline static int32_t get_offset_of_BaseCatalogName_6() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___BaseCatalogName_6)); }
	inline String_t* get_BaseCatalogName_6() const { return ___BaseCatalogName_6; }
	inline String_t** get_address_of_BaseCatalogName_6() { return &___BaseCatalogName_6; }
	inline void set_BaseCatalogName_6(String_t* value)
	{
		___BaseCatalogName_6 = value;
		Il2CppCodeGenWriteBarrier((&___BaseCatalogName_6), value);
	}

	inline static int32_t get_offset_of_AutoIncrementSeed_7() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___AutoIncrementSeed_7)); }
	inline String_t* get_AutoIncrementSeed_7() const { return ___AutoIncrementSeed_7; }
	inline String_t** get_address_of_AutoIncrementSeed_7() { return &___AutoIncrementSeed_7; }
	inline void set_AutoIncrementSeed_7(String_t* value)
	{
		___AutoIncrementSeed_7 = value;
		Il2CppCodeGenWriteBarrier((&___AutoIncrementSeed_7), value);
	}

	inline static int32_t get_offset_of_AutoIncrementStep_8() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___AutoIncrementStep_8)); }
	inline String_t* get_AutoIncrementStep_8() const { return ___AutoIncrementStep_8; }
	inline String_t** get_address_of_AutoIncrementStep_8() { return &___AutoIncrementStep_8; }
	inline void set_AutoIncrementStep_8(String_t* value)
	{
		___AutoIncrementStep_8 = value;
		Il2CppCodeGenWriteBarrier((&___AutoIncrementStep_8), value);
	}

	inline static int32_t get_offset_of_DefaultValue_9() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___DefaultValue_9)); }
	inline String_t* get_DefaultValue_9() const { return ___DefaultValue_9; }
	inline String_t** get_address_of_DefaultValue_9() { return &___DefaultValue_9; }
	inline void set_DefaultValue_9(String_t* value)
	{
		___DefaultValue_9 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_9), value);
	}

	inline static int32_t get_offset_of_Expression_10() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___Expression_10)); }
	inline String_t* get_Expression_10() const { return ___Expression_10; }
	inline String_t** get_address_of_Expression_10() { return &___Expression_10; }
	inline void set_Expression_10(String_t* value)
	{
		___Expression_10 = value;
		Il2CppCodeGenWriteBarrier((&___Expression_10), value);
	}

	inline static int32_t get_offset_of_BaseTableNamespace_11() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___BaseTableNamespace_11)); }
	inline String_t* get_BaseTableNamespace_11() const { return ___BaseTableNamespace_11; }
	inline String_t** get_address_of_BaseTableNamespace_11() { return &___BaseTableNamespace_11; }
	inline void set_BaseTableNamespace_11(String_t* value)
	{
		___BaseTableNamespace_11 = value;
		Il2CppCodeGenWriteBarrier((&___BaseTableNamespace_11), value);
	}

	inline static int32_t get_offset_of_BaseColumnNamespace_12() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___BaseColumnNamespace_12)); }
	inline String_t* get_BaseColumnNamespace_12() const { return ___BaseColumnNamespace_12; }
	inline String_t** get_address_of_BaseColumnNamespace_12() { return &___BaseColumnNamespace_12; }
	inline void set_BaseColumnNamespace_12(String_t* value)
	{
		___BaseColumnNamespace_12 = value;
		Il2CppCodeGenWriteBarrier((&___BaseColumnNamespace_12), value);
	}

	inline static int32_t get_offset_of_ColumnMapping_13() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields, ___ColumnMapping_13)); }
	inline String_t* get_ColumnMapping_13() const { return ___ColumnMapping_13; }
	inline String_t** get_address_of_ColumnMapping_13() { return &___ColumnMapping_13; }
	inline void set_ColumnMapping_13(String_t* value)
	{
		___ColumnMapping_13 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnMapping_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMATABLEOPTIONALCOLUMN_TE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_H
#ifndef INTERNALDATACOLLECTIONBASE_TD9C1326321D262DA19039288A1FF5A0BC2BE5504_H
#define INTERNALDATACOLLECTIONBASE_TD9C1326321D262DA19039288A1FF5A0BC2BE5504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_tD9C1326321D262DA19039288A1FF5A0BC2BE5504  : public RuntimeObject
{
public:

public:
};

struct InternalDataCollectionBase_tD9C1326321D262DA19039288A1FF5A0BC2BE5504_StaticFields
{
public:
	// System.ComponentModel.CollectionChangeEventArgs System.Data.InternalDataCollectionBase::s_refreshEventArgs
	CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * ___s_refreshEventArgs_0;

public:
	inline static int32_t get_offset_of_s_refreshEventArgs_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_tD9C1326321D262DA19039288A1FF5A0BC2BE5504_StaticFields, ___s_refreshEventArgs_0)); }
	inline CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * get_s_refreshEventArgs_0() const { return ___s_refreshEventArgs_0; }
	inline CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 ** get_address_of_s_refreshEventArgs_0() { return &___s_refreshEventArgs_0; }
	inline void set_s_refreshEventArgs_0(CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * value)
	{
		___s_refreshEventArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_refreshEventArgs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATACOLLECTIONBASE_TD9C1326321D262DA19039288A1FF5A0BC2BE5504_H
#ifndef EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#define EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T8E6CA180BE0E56674C6407011A94BAF7C757352E_H
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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#define CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
#define CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T8B006E1DEE084E781F5C0F3283E9226E28894DD9_H
#ifndef SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#define SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_6;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_7;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_8;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_9;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_10;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_11;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_0), value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_1), value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_2)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_2), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_3)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_3), value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_5), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_6), value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_7), value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_8), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T1BB80E9C9DEA52DBF464487234B045E2930ADA26_H
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
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef U24ARRAYTYPEU24104_T4D8FCF0062166557DD576A93F84122379EBE5D26_H
#define U24ARRAYTYPEU24104_T4D8FCF0062166557DD576A93F84122379EBE5D26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$104
struct  U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26 
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
		uint8_t U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26__padding[104];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24104_T4D8FCF0062166557DD576A93F84122379EBE5D26_H
#ifndef U24ARRAYTYPEU248_T7D4BDDEB71F81834118F991BE343B0B213690C39_H
#define U24ARRAYTYPEU248_T7D4BDDEB71F81834118F991BE343B0B213690C39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39 
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
		uint8_t U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T7D4BDDEB71F81834118F991BE343B0B213690C39_H
#ifndef SQLITEFACTORY_TAFE65A71218234F02026C1831C033AD8AA8B1103_H
#define SQLITEFACTORY_TAFE65A71218234F02026C1831C033AD8AA8B1103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFactory
struct  SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103  : public DbProviderFactory_tD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00
{
public:

public:
};

struct SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields
{
public:
	// Mono.Data.Sqlite.SqliteFactory Mono.Data.Sqlite.SqliteFactory::Instance
	SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * ___Instance_0;
	// System.Type Mono.Data.Sqlite.SqliteFactory::_dbProviderServicesType
	Type_t * ____dbProviderServicesType_1;
	// System.Object Mono.Data.Sqlite.SqliteFactory::_sqliteServices
	RuntimeObject * ____sqliteServices_2;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields, ___Instance_0)); }
	inline SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * get_Instance_0() const { return ___Instance_0; }
	inline SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}

	inline static int32_t get_offset_of__dbProviderServicesType_1() { return static_cast<int32_t>(offsetof(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields, ____dbProviderServicesType_1)); }
	inline Type_t * get__dbProviderServicesType_1() const { return ____dbProviderServicesType_1; }
	inline Type_t ** get_address_of__dbProviderServicesType_1() { return &____dbProviderServicesType_1; }
	inline void set__dbProviderServicesType_1(Type_t * value)
	{
		____dbProviderServicesType_1 = value;
		Il2CppCodeGenWriteBarrier((&____dbProviderServicesType_1), value);
	}

	inline static int32_t get_offset_of__sqliteServices_2() { return static_cast<int32_t>(offsetof(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields, ____sqliteServices_2)); }
	inline RuntimeObject * get__sqliteServices_2() const { return ____sqliteServices_2; }
	inline RuntimeObject ** get_address_of__sqliteServices_2() { return &____sqliteServices_2; }
	inline void set__sqliteServices_2(RuntimeObject * value)
	{
		____sqliteServices_2 = value;
		Il2CppCodeGenWriteBarrier((&____sqliteServices_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFACTORY_TAFE65A71218234F02026C1831C033AD8AA8B1103_H
#ifndef KEYINFO_TFB27F6364284236F653E61480F11552B2145541B_H
#define KEYINFO_TFB27F6364284236F653E61480F11552B2145541B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct  KeyInfo_tFB27F6364284236F653E61480F11552B2145541B 
{
public:
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::databaseName
	String_t* ___databaseName_0;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::tableName
	String_t* ___tableName_1;
	// System.String Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::columnName
	String_t* ___columnName_2;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::database
	int32_t ___database_3;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::rootPage
	int32_t ___rootPage_4;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::cursor
	int32_t ___cursor_5;
	// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::query
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * ___query_6;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader/KeyInfo::column
	int32_t ___column_7;

public:
	inline static int32_t get_offset_of_databaseName_0() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___databaseName_0)); }
	inline String_t* get_databaseName_0() const { return ___databaseName_0; }
	inline String_t** get_address_of_databaseName_0() { return &___databaseName_0; }
	inline void set_databaseName_0(String_t* value)
	{
		___databaseName_0 = value;
		Il2CppCodeGenWriteBarrier((&___databaseName_0), value);
	}

	inline static int32_t get_offset_of_tableName_1() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___tableName_1)); }
	inline String_t* get_tableName_1() const { return ___tableName_1; }
	inline String_t** get_address_of_tableName_1() { return &___tableName_1; }
	inline void set_tableName_1(String_t* value)
	{
		___tableName_1 = value;
		Il2CppCodeGenWriteBarrier((&___tableName_1), value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnName_2), value);
	}

	inline static int32_t get_offset_of_database_3() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___database_3)); }
	inline int32_t get_database_3() const { return ___database_3; }
	inline int32_t* get_address_of_database_3() { return &___database_3; }
	inline void set_database_3(int32_t value)
	{
		___database_3 = value;
	}

	inline static int32_t get_offset_of_rootPage_4() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___rootPage_4)); }
	inline int32_t get_rootPage_4() const { return ___rootPage_4; }
	inline int32_t* get_address_of_rootPage_4() { return &___rootPage_4; }
	inline void set_rootPage_4(int32_t value)
	{
		___rootPage_4 = value;
	}

	inline static int32_t get_offset_of_cursor_5() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___cursor_5)); }
	inline int32_t get_cursor_5() const { return ___cursor_5; }
	inline int32_t* get_address_of_cursor_5() { return &___cursor_5; }
	inline void set_cursor_5(int32_t value)
	{
		___cursor_5 = value;
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___query_6)); }
	inline KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * get_query_6() const { return ___query_6; }
	inline KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C ** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_column_7() { return static_cast<int32_t>(offsetof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B, ___column_7)); }
	inline int32_t get_column_7() const { return ___column_7; }
	inline int32_t* get_address_of_column_7() { return &___column_7; }
	inline void set_column_7(int32_t value)
	{
		___column_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_pinvoke
{
	char* ___databaseName_0;
	char* ___tableName_1;
	char* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * ___query_6;
	int32_t ___column_7;
};
// Native definition for COM marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_com
{
	Il2CppChar* ___databaseName_0;
	Il2CppChar* ___tableName_1;
	Il2CppChar* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * ___query_6;
	int32_t ___column_7;
};
#endif // KEYINFO_TFB27F6364284236F653E61480F11552B2145541B_H
#ifndef UPDATEEVENTARGS_T2FED46CCE17C8D47F89733182045CCD8CEF88CDA_H
#define UPDATEEVENTARGS_T2FED46CCE17C8D47F89733182045CCD8CEF88CDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.UpdateEventArgs
struct  UpdateEventArgs_t2FED46CCE17C8D47F89733182045CCD8CEF88CDA  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEEVENTARGS_T2FED46CCE17C8D47F89733182045CCD8CEF88CDA_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef KEYVALUEPAIR_2_T33C7877E5E94406D1321B8B3C889C715DF948740_H
#define KEYVALUEPAIR_2_T33C7877E5E94406D1321B8B3C889C715DF948740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct  KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740, ___value_1)); }
	inline AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * get_value_1() const { return ___value_1; }
	inline AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T33C7877E5E94406D1321B8B3C889C715DF948740_H
#ifndef KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#define KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct  KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#ifndef KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#define KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifndef KEYVALUEPAIR_2_TA83092D80FEE400876EC29D0A8958810BDF87751_H
#define KEYVALUEPAIR_2_TA83092D80FEE400876EC29D0A8958810BDF87751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct  KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751, ___value_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_value_1() const { return ___value_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TA83092D80FEE400876EC29D0A8958810BDF87751_H
#ifndef ENUMERATOR_TB521B540C6873A3681AAE946C347C5440A5D78E3_H
#define ENUMERATOR_TB521B540C6873A3681AAE946C347C5440A5D78E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct  Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3, ___list_0)); }
	inline List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * get_list_0() const { return ___list_0; }
	inline List_1_t8899912E5352046EE5CC00DE08B819A818A19722 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3, ___current_3)); }
	inline SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * get_current_3() const { return ___current_3; }
	inline SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TB521B540C6873A3681AAE946C347C5440A5D78E3_H
#ifndef ENUMERATOR_TDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_H
#define ENUMERATOR_TDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>
struct  Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A, ___list_0)); }
	inline List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * get_list_0() const { return ___list_0; }
	inline List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A, ___current_3)); }
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * get_current_3() const { return ___current_3; }
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
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
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef COMPONENT_T7AEFE153F6778CF52E1981BC3E811A9604B29473_H
#define COMPONENT_T7AEFE153F6778CF52E1981BC3E811A9604B29473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___events_3)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
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
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T7AEFE153F6778CF52E1981BC3E811A9604B29473_H
#ifndef DBDATAREADER_T0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A_H
#define DBDATAREADER_T0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataReader
struct  DbDataReader_t0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATAREADER_T0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A_H
#ifndef DBPARAMETER_T5E4041B20FA875B04370E212A2D1238CC275F6CB_H
#define DBPARAMETER_T5E4041B20FA875B04370E212A2D1238CC275F6CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T5E4041B20FA875B04370E212A2D1238CC275F6CB_H
#ifndef DBPARAMETERCOLLECTION_TBF8CFA8C17FF889800A919255D31DD448EF44E25_H
#define DBPARAMETERCOLLECTION_TBF8CFA8C17FF889800A919255D31DD448EF44E25_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_tBF8CFA8C17FF889800A919255D31DD448EF44E25  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_TBF8CFA8C17FF889800A919255D31DD448EF44E25_H
#ifndef DBTRANSACTION_T52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1_H
#define DBTRANSACTION_T52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTransaction
struct  DbTransaction_t52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBTRANSACTION_T52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1_H
#ifndef DATAROWCOLLECTION_T1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07_H
#define DATAROWCOLLECTION_T1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07  : public InternalDataCollectionBase_tD9C1326321D262DA19039288A1FF5A0BC2BE5504
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::_table
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * ____table_1;
	// System.Data.DataRowCollection/DataRowTree System.Data.DataRowCollection::_list
	DataRowTree_t5DBBBA9F345CFF6235BD0697D2504289FCB3E982 * ____list_2;
	// System.Int32 System.Data.DataRowCollection::_nullInList
	int32_t ____nullInList_3;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07, ____table_1)); }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * get__table_1() const { return ____table_1; }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((&____table_1), value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07, ____list_2)); }
	inline DataRowTree_t5DBBBA9F345CFF6235BD0697D2504289FCB3E982 * get__list_2() const { return ____list_2; }
	inline DataRowTree_t5DBBBA9F345CFF6235BD0697D2504289FCB3E982 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(DataRowTree_t5DBBBA9F345CFF6235BD0697D2504289FCB3E982 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}

	inline static int32_t get_offset_of__nullInList_3() { return static_cast<int32_t>(offsetof(DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07, ____nullInList_3)); }
	inline int32_t get__nullInList_3() const { return ____nullInList_3; }
	inline int32_t* get_address_of__nullInList_3() { return &____nullInList_3; }
	inline void set__nullInList_3(int32_t value)
	{
		____nullInList_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TFAA4CB92A229A446CF29CEF72154145A06208019_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TFAA4CB92A229A446CF29CEF72154145A06208019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$104 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39  ___U24U24fieldU2D1_1;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24104_t4D8FCF0062166557DD576A93F84122379EBE5D26  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU248_t7D4BDDEB71F81834118F991BE343B0B213690C39  value)
	{
		___U24U24fieldU2D1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TFAA4CB92A229A446CF29CEF72154145A06208019_H
#ifndef FUNCTIONTYPE_TF36293E9612FABF9FBC42CB1D2372FE3091A8679_H
#define FUNCTIONTYPE_TF36293E9612FABF9FBC42CB1D2372FE3091A8679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.FunctionType
struct  FunctionType_tF36293E9612FABF9FBC42CB1D2372FE3091A8679 
{
public:
	// System.Int32 Mono.Data.Sqlite.FunctionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FunctionType_tF36293E9612FABF9FBC42CB1D2372FE3091A8679, ___value___2)); }
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
#endif // FUNCTIONTYPE_TF36293E9612FABF9FBC42CB1D2372FE3091A8679_H
#ifndef SQLITEDATEFORMATS_TA9E6B64992D9F7209D9BDF89B87F046277054BCF_H
#define SQLITEDATEFORMATS_TA9E6B64992D9F7209D9BDF89B87F046277054BCF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteDateFormats
struct  SQLiteDateFormats_tA9E6B64992D9F7209D9BDF89B87F046277054BCF 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteDateFormats::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SQLiteDateFormats_tA9E6B64992D9F7209D9BDF89B87F046277054BCF, ___value___2)); }
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
#endif // SQLITEDATEFORMATS_TA9E6B64992D9F7209D9BDF89B87F046277054BCF_H
#ifndef SQLITEERRORCODE_T757C1B985DE49C78C1EECD575DC073ED4613A64C_H
#define SQLITEERRORCODE_T757C1B985DE49C78C1EECD575DC073ED4613A64C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteErrorCode
struct  SQLiteErrorCode_t757C1B985DE49C78C1EECD575DC073ED4613A64C 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SQLiteErrorCode_t757C1B985DE49C78C1EECD575DC073ED4613A64C, ___value___2)); }
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
#endif // SQLITEERRORCODE_T757C1B985DE49C78C1EECD575DC073ED4613A64C_H
#ifndef SQLITEFUNCTION_TA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_H
#define SQLITEFUNCTION_TA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunction
struct  SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteFunction::_base
	SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * ____base_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData> Mono.Data.Sqlite.SqliteFunction::_contextDataList
	Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * ____contextDataList_1;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_InvokeFunc
	SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * ____InvokeFunc_2;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_StepFunc
	SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * ____StepFunc_3;
	// Mono.Data.Sqlite.SQLiteFinalCallback Mono.Data.Sqlite.SqliteFunction::_FinalFunc
	SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * ____FinalFunc_4;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc
	SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * ____CompareFunc_5;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc16
	SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * ____CompareFunc16_6;
	// System.IntPtr Mono.Data.Sqlite.SqliteFunction::_context
	intptr_t ____context_7;

public:
	inline static int32_t get_offset_of__base_0() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____base_0)); }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * get__base_0() const { return ____base_0; }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 ** get_address_of__base_0() { return &____base_0; }
	inline void set__base_0(SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * value)
	{
		____base_0 = value;
		Il2CppCodeGenWriteBarrier((&____base_0), value);
	}

	inline static int32_t get_offset_of__contextDataList_1() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____contextDataList_1)); }
	inline Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * get__contextDataList_1() const { return ____contextDataList_1; }
	inline Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 ** get_address_of__contextDataList_1() { return &____contextDataList_1; }
	inline void set__contextDataList_1(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * value)
	{
		____contextDataList_1 = value;
		Il2CppCodeGenWriteBarrier((&____contextDataList_1), value);
	}

	inline static int32_t get_offset_of__InvokeFunc_2() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____InvokeFunc_2)); }
	inline SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * get__InvokeFunc_2() const { return ____InvokeFunc_2; }
	inline SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 ** get_address_of__InvokeFunc_2() { return &____InvokeFunc_2; }
	inline void set__InvokeFunc_2(SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * value)
	{
		____InvokeFunc_2 = value;
		Il2CppCodeGenWriteBarrier((&____InvokeFunc_2), value);
	}

	inline static int32_t get_offset_of__StepFunc_3() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____StepFunc_3)); }
	inline SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * get__StepFunc_3() const { return ____StepFunc_3; }
	inline SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 ** get_address_of__StepFunc_3() { return &____StepFunc_3; }
	inline void set__StepFunc_3(SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * value)
	{
		____StepFunc_3 = value;
		Il2CppCodeGenWriteBarrier((&____StepFunc_3), value);
	}

	inline static int32_t get_offset_of__FinalFunc_4() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____FinalFunc_4)); }
	inline SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * get__FinalFunc_4() const { return ____FinalFunc_4; }
	inline SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 ** get_address_of__FinalFunc_4() { return &____FinalFunc_4; }
	inline void set__FinalFunc_4(SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * value)
	{
		____FinalFunc_4 = value;
		Il2CppCodeGenWriteBarrier((&____FinalFunc_4), value);
	}

	inline static int32_t get_offset_of__CompareFunc_5() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____CompareFunc_5)); }
	inline SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * get__CompareFunc_5() const { return ____CompareFunc_5; }
	inline SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F ** get_address_of__CompareFunc_5() { return &____CompareFunc_5; }
	inline void set__CompareFunc_5(SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * value)
	{
		____CompareFunc_5 = value;
		Il2CppCodeGenWriteBarrier((&____CompareFunc_5), value);
	}

	inline static int32_t get_offset_of__CompareFunc16_6() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____CompareFunc16_6)); }
	inline SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * get__CompareFunc16_6() const { return ____CompareFunc16_6; }
	inline SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F ** get_address_of__CompareFunc16_6() { return &____CompareFunc16_6; }
	inline void set__CompareFunc16_6(SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * value)
	{
		____CompareFunc16_6 = value;
		Il2CppCodeGenWriteBarrier((&____CompareFunc16_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B, ____context_7)); }
	inline intptr_t get__context_7() const { return ____context_7; }
	inline intptr_t* get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(intptr_t value)
	{
		____context_7 = value;
	}
};

struct SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_StaticFields
{
public:
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute> Mono.Data.Sqlite.SqliteFunction::_registeredFunctions
	List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * ____registeredFunctions_8;

public:
	inline static int32_t get_offset_of__registeredFunctions_8() { return static_cast<int32_t>(offsetof(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_StaticFields, ____registeredFunctions_8)); }
	inline List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * get__registeredFunctions_8() const { return ____registeredFunctions_8; }
	inline List_1_t8899912E5352046EE5CC00DE08B819A818A19722 ** get_address_of__registeredFunctions_8() { return &____registeredFunctions_8; }
	inline void set__registeredFunctions_8(List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * value)
	{
		____registeredFunctions_8 = value;
		Il2CppCodeGenWriteBarrier((&____registeredFunctions_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFUNCTION_TA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_H
#ifndef SQLITEPARAMETERCOLLECTION_T3E31CB31126825C8E3B3E2B361275C8DDDCEC496_H
#define SQLITEPARAMETERCOLLECTION_T3E31CB31126825C8E3B3E2B361275C8DDDCEC496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteParameterCollection
struct  SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496  : public DbParameterCollection_tBF8CFA8C17FF889800A919255D31DD448EF44E25
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteParameterCollection::_command
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * ____command_1;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter> Mono.Data.Sqlite.SqliteParameterCollection::_parameterList
	List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * ____parameterList_2;
	// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::_unboundFlag
	bool ____unboundFlag_3;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496, ____command_1)); }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * get__command_1() const { return ____command_1; }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((&____command_1), value);
	}

	inline static int32_t get_offset_of__parameterList_2() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496, ____parameterList_2)); }
	inline List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * get__parameterList_2() const { return ____parameterList_2; }
	inline List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC ** get_address_of__parameterList_2() { return &____parameterList_2; }
	inline void set__parameterList_2(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * value)
	{
		____parameterList_2 = value;
		Il2CppCodeGenWriteBarrier((&____parameterList_2), value);
	}

	inline static int32_t get_offset_of__unboundFlag_3() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496, ____unboundFlag_3)); }
	inline bool get__unboundFlag_3() const { return ____unboundFlag_3; }
	inline bool* get_address_of__unboundFlag_3() { return &____unboundFlag_3; }
	inline void set__unboundFlag_3(bool value)
	{
		____unboundFlag_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEPARAMETERCOLLECTION_T3E31CB31126825C8E3B3E2B361275C8DDDCEC496_H
#ifndef TYPEAFFINITY_T41A7492FE4199A806773F0E605B50599B5B919EF_H
#define TYPEAFFINITY_T41A7492FE4199A806773F0E605B50599B5B919EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.TypeAffinity
struct  TypeAffinity_t41A7492FE4199A806773F0E605B50599B5B919EF 
{
public:
	// System.Int32 Mono.Data.Sqlite.TypeAffinity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeAffinity_t41A7492FE4199A806773F0E605B50599B5B919EF, ___value___2)); }
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
#endif // TYPEAFFINITY_T41A7492FE4199A806773F0E605B50599B5B919EF_H
#ifndef APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#define APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
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
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_11), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_12), value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_13), value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_14), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_15), value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_16), value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_17), value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((&___FirstChanceException_18), value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_19), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_20), value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((&____activation_21), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_22), value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((&___compatibility_switch_23), value);
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
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
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
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // APPDOMAIN_T1B59572328F60585904DF52A59FE47CF5B5FFFF8_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef ENUMERATOR_TA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_H
#define ENUMERATOR_TA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct  Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1, ___dictionary_0)); }
	inline Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1, ___current_3)); }
	inline KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_H
#ifndef ENUMERATOR_T1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363_H
#define ENUMERATOR_T1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>
struct  Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363, ___dictionary_0)); }
	inline Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363, ___current_3)); }
	inline KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363_H
#ifndef ENUMERATOR_TED23DFBF3911229086C71CCE7A54D56F5FFB34CB_H
#define ENUMERATOR_TED23DFBF3911229086C71CCE7A54D56F5FFB34CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TED23DFBF3911229086C71CCE7A54D56F5FFB34CB_H
#ifndef ENUMERATOR_T9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_H
#define ENUMERATOR_T9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct  Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___dictionary_0)); }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___current_3)); }
	inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_H
#ifndef ASSEMBLYHASHALGORITHM_T31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9_H
#define ASSEMBLYHASHALGORITHM_T31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_TEA062AB37A9A750B33F6CA2898EEF03A4EEA496C_H
#define ASSEMBLYVERSIONCOMPATIBILITY_TEA062AB37A9A750B33F6CA2898EEF03A4EEA496C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_TEA062AB37A9A750B33F6CA2898EEF03A4EEA496C_H
#ifndef COMMANDBEHAVIOR_T905CC3BB7066489D32FF1A3178794336DFF4AB0E_H
#define COMMANDBEHAVIOR_T905CC3BB7066489D32FF1A3178794336DFF4AB0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandBehavior
struct  CommandBehavior_t905CC3BB7066489D32FF1A3178794336DFF4AB0E 
{
public:
	// System.Int32 System.Data.CommandBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommandBehavior_t905CC3BB7066489D32FF1A3178794336DFF4AB0E, ___value___2)); }
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
#endif // COMMANDBEHAVIOR_T905CC3BB7066489D32FF1A3178794336DFF4AB0E_H
#ifndef CATALOGLOCATION_T714D5B99DA3627036B48508A7AD5A200D0F98105_H
#define CATALOGLOCATION_T714D5B99DA3627036B48508A7AD5A200D0F98105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.CatalogLocation
struct  CatalogLocation_t714D5B99DA3627036B48508A7AD5A200D0F98105 
{
public:
	// System.Int32 System.Data.Common.CatalogLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CatalogLocation_t714D5B99DA3627036B48508A7AD5A200D0F98105, ___value___2)); }
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
#endif // CATALOGLOCATION_T714D5B99DA3627036B48508A7AD5A200D0F98105_H
#ifndef DBCOMMAND_T3DC95E27E1476C2F688CC9DD26FAB9647C262964_H
#define DBCOMMAND_T3DC95E27E1476C2F688CC9DD26FAB9647C262964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T3DC95E27E1476C2F688CC9DD26FAB9647C262964_H
#ifndef DBCONNECTION_TD3C71920EC5D5414DE041BE6DEAC30B3F01DA3B4_H
#define DBCONNECTION_TD3C71920EC5D5414DE041BE6DEAC30B3F01DA3B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_tD3C71920EC5D5414DE041BE6DEAC30B3F01DA3B4  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_TD3C71920EC5D5414DE041BE6DEAC30B3F01DA3B4_H
#ifndef CONFLICTOPTION_T32D7D48FAE800A532DAA69CD03A30501EDEF5F3A_H
#define CONFLICTOPTION_T32D7D48FAE800A532DAA69CD03A30501EDEF5F3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConflictOption
struct  ConflictOption_t32D7D48FAE800A532DAA69CD03A30501EDEF5F3A 
{
public:
	// System.Int32 System.Data.ConflictOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConflictOption_t32D7D48FAE800A532DAA69CD03A30501EDEF5F3A, ___value___2)); }
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
#endif // CONFLICTOPTION_T32D7D48FAE800A532DAA69CD03A30501EDEF5F3A_H
#ifndef CONNECTIONSTATE_TCB61DC01177D9025366B4D5AD026595750E57E80_H
#define CONNECTIONSTATE_TCB61DC01177D9025366B4D5AD026595750E57E80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConnectionState
struct  ConnectionState_tCB61DC01177D9025366B4D5AD026595750E57E80 
{
public:
	// System.Int32 System.Data.ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tCB61DC01177D9025366B4D5AD026595750E57E80, ___value___2)); }
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
#endif // CONNECTIONSTATE_TCB61DC01177D9025366B4D5AD026595750E57E80_H
#ifndef DATAROWACTION_TB99DBC47A85619559836FF0C047979E154FCB9EF_H
#define DATAROWACTION_TB99DBC47A85619559836FF0C047979E154FCB9EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_tB99DBC47A85619559836FF0C047979E154FCB9EF 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowAction_tB99DBC47A85619559836FF0C047979E154FCB9EF, ___value___2)); }
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
#endif // DATAROWACTION_TB99DBC47A85619559836FF0C047979E154FCB9EF_H
#ifndef DATAROWVERSION_TEE07ED05E52719A08E963B1AE89BC07FAB4A62E2_H
#define DATAROWVERSION_TEE07ED05E52719A08E963B1AE89BC07FAB4A62E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_tEE07ED05E52719A08E963B1AE89BC07FAB4A62E2 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowVersion_tEE07ED05E52719A08E963B1AE89BC07FAB4A62E2, ___value___2)); }
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
#endif // DATAROWVERSION_TEE07ED05E52719A08E963B1AE89BC07FAB4A62E2_H
#ifndef DBTYPE_TBDB358FC5FD20074462C900ED3B7339BF0F08B6D_H
#define DBTYPE_TBDB358FC5FD20074462C900ED3B7339BF0F08B6D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbType
struct  DbType_tBDB358FC5FD20074462C900ED3B7339BF0F08B6D 
{
public:
	// System.Int32 System.Data.DbType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DbType_tBDB358FC5FD20074462C900ED3B7339BF0F08B6D, ___value___2)); }
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
#endif // DBTYPE_TBDB358FC5FD20074462C900ED3B7339BF0F08B6D_H
#ifndef ISOLATIONLEVEL_TE33C80C8B37CF217B60392E817CFAC6B167D4D3F_H
#define ISOLATIONLEVEL_TE33C80C8B37CF217B60392E817CFAC6B167D4D3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.IsolationLevel
struct  IsolationLevel_tE33C80C8B37CF217B60392E817CFAC6B167D4D3F 
{
public:
	// System.Int32 System.Data.IsolationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolationLevel_tE33C80C8B37CF217B60392E817CFAC6B167D4D3F, ___value___2)); }
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
#endif // ISOLATIONLEVEL_TE33C80C8B37CF217B60392E817CFAC6B167D4D3F_H
#ifndef MISSINGMAPPINGACTION_T490BBA47AC656D6D836C6E6CF6549B7D2ED3D598_H
#define MISSINGMAPPINGACTION_T490BBA47AC656D6D836C6E6CF6549B7D2ED3D598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingMappingAction
struct  MissingMappingAction_t490BBA47AC656D6D836C6E6CF6549B7D2ED3D598 
{
public:
	// System.Int32 System.Data.MissingMappingAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMappingAction_t490BBA47AC656D6D836C6E6CF6549B7D2ED3D598, ___value___2)); }
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
#endif // MISSINGMAPPINGACTION_T490BBA47AC656D6D836C6E6CF6549B7D2ED3D598_H
#ifndef PARAMETERDIRECTION_T4FDABB94C0230A8A4B5D7815DF502FC4EFDEE9C6_H
#define PARAMETERDIRECTION_T4FDABB94C0230A8A4B5D7815DF502FC4EFDEE9C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t4FDABB94C0230A8A4B5D7815DF502FC4EFDEE9C6 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterDirection_t4FDABB94C0230A8A4B5D7815DF502FC4EFDEE9C6, ___value___2)); }
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
#endif // PARAMETERDIRECTION_T4FDABB94C0230A8A4B5D7815DF502FC4EFDEE9C6_H
#ifndef SERIALIZATIONFORMAT_T7D5E563660A26C3C2744ADE6833F8B3967BC4C8A_H
#define SERIALIZATIONFORMAT_T7D5E563660A26C3C2744ADE6833F8B3967BC4C8A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t7D5E563660A26C3C2744ADE6833F8B3967BC4C8A 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFormat_t7D5E563660A26C3C2744ADE6833F8B3967BC4C8A, ___value___2)); }
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
#endif // SERIALIZATIONFORMAT_T7D5E563660A26C3C2744ADE6833F8B3967BC4C8A_H
#ifndef UPDATEROWSOURCE_TFA2D2F5C220F5079CD168D725269453B36E392CF_H
#define UPDATEROWSOURCE_TFA2D2F5C220F5079CD168D725269453B36E392CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UpdateRowSource
struct  UpdateRowSource_tFA2D2F5C220F5079CD168D725269453B36E392CF 
{
public:
	// System.Int32 System.Data.UpdateRowSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateRowSource_tFA2D2F5C220F5079CD168D725269453B36E392CF, ___value___2)); }
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
#endif // UPDATEROWSOURCE_TFA2D2F5C220F5079CD168D725269453B36E392CF_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
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
#endif // DELEGATE_T_H
#ifndef COMPAREOPTIONS_T163DCEA9A0972750294CC1A8348E5CA69E943939_H
#define COMPAREOPTIONS_T163DCEA9A0972750294CC1A8348E5CA69E943939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939, ___value___2)); }
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
#endif // COMPAREOPTIONS_T163DCEA9A0972750294CC1A8348E5CA69E943939_H
#ifndef INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#define INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#define NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
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
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
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
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // ASSEMBLY_T_H
#ifndef ASSEMBLYCONTENTTYPE_T9869DE40B7B1976B389F3B6A5A5D18B09E623401_H
#define ASSEMBLYCONTENTTYPE_T9869DE40B7B1976B389F3B6A5A5D18B09E623401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONTENTTYPE_T9869DE40B7B1976B389F3B6A5A5D18B09E623401_H
#ifndef ASSEMBLYNAMEFLAGS_T7834EDF078E7ECA985AA434A1EA0D95C2A44F256_H
#define ASSEMBLYNAMEFLAGS_T7834EDF078E7ECA985AA434A1EA0D95C2A44F256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T7834EDF078E7ECA985AA434A1EA0D95C2A44F256_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef PROCESSORARCHITECTURE_T0CFB73A83469D6AC222B9FE46E81EAC73C2627C7_H
#define PROCESSORARCHITECTURE_T0CFB73A83469D6AC222B9FE46E81EAC73C2627C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T0CFB73A83469D6AC222B9FE46E81EAC73C2627C7_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T1306B3A246E2959E8F23575AAAB9D59945314115_H
#define REFLECTIONTYPELOADEXCEPTION_T1306B3A246E2959E8F23575AAAB9D59945314115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.Type[] System.Reflection.ReflectionTypeLoadException::_classes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____classes_17;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::_exceptions
	ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* ____exceptions_18;

public:
	inline static int32_t get_offset_of__classes_17() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115, ____classes_17)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__classes_17() const { return ____classes_17; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__classes_17() { return &____classes_17; }
	inline void set__classes_17(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____classes_17 = value;
		Il2CppCodeGenWriteBarrier((&____classes_17), value);
	}

	inline static int32_t get_offset_of__exceptions_18() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115, ____exceptions_18)); }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* get__exceptions_18() const { return ____exceptions_18; }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209** get_address_of__exceptions_18() { return &____exceptions_18; }
	inline void set__exceptions_18(ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* value)
	{
		____exceptions_18 = value;
		Il2CppCodeGenWriteBarrier((&____exceptions_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T1306B3A246E2959E8F23575AAAB9D59945314115_H
#ifndef CRITICALHANDLE_TDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9_H
#define CRITICALHANDLE_TDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CriticalHandle
struct  CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.IntPtr System.Runtime.InteropServices.CriticalHandle::handle
	intptr_t ___handle_0;
	// System.Boolean System.Runtime.InteropServices.CriticalHandle::_isClosed
	bool ____isClosed_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__isClosed_1() { return static_cast<int32_t>(offsetof(CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9, ____isClosed_1)); }
	inline bool get__isClosed_1() const { return ____isClosed_1; }
	inline bool* get_address_of__isClosed_1() { return &____isClosed_1; }
	inline void set__isClosed_1(bool value)
	{
		____isClosed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALHANDLE_TDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9_H
#ifndef EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#define EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T68841FD169C0CB00CC950EDA7E2A59540D65B1CE_H
#ifndef STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#define STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F_H
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef STRINGCOMPARISON_T02BAA95468CE9E91115C604577611FDF58FEDCF0_H
#define STRINGCOMPARISON_T02BAA95468CE9E91115C604577611FDF58FEDCF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
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
#endif // STRINGCOMPARISON_T02BAA95468CE9E91115C604577611FDF58FEDCF0_H
#ifndef SQLITECOMMAND_TA5D54D5A850262339A021FEB6B7F78846438ED93_H
#define SQLITECOMMAND_TA5D54D5A850262339A021FEB6B7F78846438ED93_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteCommand
struct  SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93  : public DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964
{
public:
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * ____transaction_14;

public:
	inline static int32_t get_offset_of__commandText_4() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____commandText_4)); }
	inline String_t* get__commandText_4() const { return ____commandText_4; }
	inline String_t** get_address_of__commandText_4() { return &____commandText_4; }
	inline void set__commandText_4(String_t* value)
	{
		____commandText_4 = value;
		Il2CppCodeGenWriteBarrier((&____commandText_4), value);
	}

	inline static int32_t get_offset_of__cnn_5() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____cnn_5)); }
	inline SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * get__cnn_5() const { return ____cnn_5; }
	inline SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A ** get_address_of__cnn_5() { return &____cnn_5; }
	inline void set__cnn_5(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * value)
	{
		____cnn_5 = value;
		Il2CppCodeGenWriteBarrier((&____cnn_5), value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____version_6)); }
	inline int64_t get__version_6() const { return ____version_6; }
	inline int64_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int64_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__activeReader_7() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____activeReader_7)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get__activeReader_7() const { return ____activeReader_7; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of__activeReader_7() { return &____activeReader_7; }
	inline void set__activeReader_7(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		____activeReader_7 = value;
		Il2CppCodeGenWriteBarrier((&____activeReader_7), value);
	}

	inline static int32_t get_offset_of__commandTimeout_8() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____commandTimeout_8)); }
	inline int32_t get__commandTimeout_8() const { return ____commandTimeout_8; }
	inline int32_t* get_address_of__commandTimeout_8() { return &____commandTimeout_8; }
	inline void set__commandTimeout_8(int32_t value)
	{
		____commandTimeout_8 = value;
	}

	inline static int32_t get_offset_of__designTimeVisible_9() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____designTimeVisible_9)); }
	inline bool get__designTimeVisible_9() const { return ____designTimeVisible_9; }
	inline bool* get_address_of__designTimeVisible_9() { return &____designTimeVisible_9; }
	inline void set__designTimeVisible_9(bool value)
	{
		____designTimeVisible_9 = value;
	}

	inline static int32_t get_offset_of__updateRowSource_10() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____updateRowSource_10)); }
	inline int32_t get__updateRowSource_10() const { return ____updateRowSource_10; }
	inline int32_t* get_address_of__updateRowSource_10() { return &____updateRowSource_10; }
	inline void set__updateRowSource_10(int32_t value)
	{
		____updateRowSource_10 = value;
	}

	inline static int32_t get_offset_of__parameterCollection_11() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____parameterCollection_11)); }
	inline SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * get__parameterCollection_11() const { return ____parameterCollection_11; }
	inline SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 ** get_address_of__parameterCollection_11() { return &____parameterCollection_11; }
	inline void set__parameterCollection_11(SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * value)
	{
		____parameterCollection_11 = value;
		Il2CppCodeGenWriteBarrier((&____parameterCollection_11), value);
	}

	inline static int32_t get_offset_of__statementList_12() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____statementList_12)); }
	inline List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * get__statementList_12() const { return ____statementList_12; }
	inline List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 ** get_address_of__statementList_12() { return &____statementList_12; }
	inline void set__statementList_12(List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * value)
	{
		____statementList_12 = value;
		Il2CppCodeGenWriteBarrier((&____statementList_12), value);
	}

	inline static int32_t get_offset_of__remainingText_13() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____remainingText_13)); }
	inline String_t* get__remainingText_13() const { return ____remainingText_13; }
	inline String_t** get_address_of__remainingText_13() { return &____remainingText_13; }
	inline void set__remainingText_13(String_t* value)
	{
		____remainingText_13 = value;
		Il2CppCodeGenWriteBarrier((&____remainingText_13), value);
	}

	inline static int32_t get_offset_of__transaction_14() { return static_cast<int32_t>(offsetof(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93, ____transaction_14)); }
	inline SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * get__transaction_14() const { return ____transaction_14; }
	inline SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 ** get_address_of__transaction_14() { return &____transaction_14; }
	inline void set__transaction_14(SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * value)
	{
		____transaction_14 = value;
		Il2CppCodeGenWriteBarrier((&____transaction_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMAND_TA5D54D5A850262339A021FEB6B7F78846438ED93_H
#ifndef SQLITECONNECTION_TE862F4AA6910C1D28334A076D51190739826039A_H
#define SQLITECONNECTION_TE862F4AA6910C1D28334A076D51190739826039A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConnection
struct  SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A  : public DbConnection_tD3C71920EC5D5414DE041BE6DEAC30B3F01DA3B4
{
public:
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_4;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_5;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_6;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_7;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_tC8863ACD0138A60A1B1A654C78BCE668A3C5CF6B * ____enlistment_8;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * ____sql_9;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_10;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____password_11;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_12;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_13;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_14;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E * ____updateCallback_15;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34 * ____commitCallback_16;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F * ____rollbackCallback_17;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t351926E1F7DAF754332D630F6FB9BFEB5E45C405 * ____updateHandler_18;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_tF0345A6CC0ED80CD73C244F342C8073DFEF5B1EA * ____commitHandler_19;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ____rollbackHandler_20;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_tE075BA1D6F382866F969106BE55EDB1451290CC1 * ___StateChange_21;

public:
	inline static int32_t get_offset_of__connectionState_4() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____connectionState_4)); }
	inline int32_t get__connectionState_4() const { return ____connectionState_4; }
	inline int32_t* get_address_of__connectionState_4() { return &____connectionState_4; }
	inline void set__connectionState_4(int32_t value)
	{
		____connectionState_4 = value;
	}

	inline static int32_t get_offset_of__connectionString_5() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____connectionString_5)); }
	inline String_t* get__connectionString_5() const { return ____connectionString_5; }
	inline String_t** get_address_of__connectionString_5() { return &____connectionString_5; }
	inline void set__connectionString_5(String_t* value)
	{
		____connectionString_5 = value;
		Il2CppCodeGenWriteBarrier((&____connectionString_5), value);
	}

	inline static int32_t get_offset_of__transactionLevel_6() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____transactionLevel_6)); }
	inline int32_t get__transactionLevel_6() const { return ____transactionLevel_6; }
	inline int32_t* get_address_of__transactionLevel_6() { return &____transactionLevel_6; }
	inline void set__transactionLevel_6(int32_t value)
	{
		____transactionLevel_6 = value;
	}

	inline static int32_t get_offset_of__defaultIsolation_7() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____defaultIsolation_7)); }
	inline int32_t get__defaultIsolation_7() const { return ____defaultIsolation_7; }
	inline int32_t* get_address_of__defaultIsolation_7() { return &____defaultIsolation_7; }
	inline void set__defaultIsolation_7(int32_t value)
	{
		____defaultIsolation_7 = value;
	}

	inline static int32_t get_offset_of__enlistment_8() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____enlistment_8)); }
	inline SQLiteEnlistment_tC8863ACD0138A60A1B1A654C78BCE668A3C5CF6B * get__enlistment_8() const { return ____enlistment_8; }
	inline SQLiteEnlistment_tC8863ACD0138A60A1B1A654C78BCE668A3C5CF6B ** get_address_of__enlistment_8() { return &____enlistment_8; }
	inline void set__enlistment_8(SQLiteEnlistment_tC8863ACD0138A60A1B1A654C78BCE668A3C5CF6B * value)
	{
		____enlistment_8 = value;
		Il2CppCodeGenWriteBarrier((&____enlistment_8), value);
	}

	inline static int32_t get_offset_of__sql_9() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____sql_9)); }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * get__sql_9() const { return ____sql_9; }
	inline SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 ** get_address_of__sql_9() { return &____sql_9; }
	inline void set__sql_9(SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * value)
	{
		____sql_9 = value;
		Il2CppCodeGenWriteBarrier((&____sql_9), value);
	}

	inline static int32_t get_offset_of__dataSource_10() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____dataSource_10)); }
	inline String_t* get__dataSource_10() const { return ____dataSource_10; }
	inline String_t** get_address_of__dataSource_10() { return &____dataSource_10; }
	inline void set__dataSource_10(String_t* value)
	{
		____dataSource_10 = value;
		Il2CppCodeGenWriteBarrier((&____dataSource_10), value);
	}

	inline static int32_t get_offset_of__password_11() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____password_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__password_11() const { return ____password_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__password_11() { return &____password_11; }
	inline void set__password_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____password_11 = value;
		Il2CppCodeGenWriteBarrier((&____password_11), value);
	}

	inline static int32_t get_offset_of__defaultTimeout_12() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____defaultTimeout_12)); }
	inline int32_t get__defaultTimeout_12() const { return ____defaultTimeout_12; }
	inline int32_t* get_address_of__defaultTimeout_12() { return &____defaultTimeout_12; }
	inline void set__defaultTimeout_12(int32_t value)
	{
		____defaultTimeout_12 = value;
	}

	inline static int32_t get_offset_of__binaryGuid_13() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____binaryGuid_13)); }
	inline bool get__binaryGuid_13() const { return ____binaryGuid_13; }
	inline bool* get_address_of__binaryGuid_13() { return &____binaryGuid_13; }
	inline void set__binaryGuid_13(bool value)
	{
		____binaryGuid_13 = value;
	}

	inline static int32_t get_offset_of__version_14() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____version_14)); }
	inline int64_t get__version_14() const { return ____version_14; }
	inline int64_t* get_address_of__version_14() { return &____version_14; }
	inline void set__version_14(int64_t value)
	{
		____version_14 = value;
	}

	inline static int32_t get_offset_of__updateCallback_15() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____updateCallback_15)); }
	inline SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E * get__updateCallback_15() const { return ____updateCallback_15; }
	inline SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E ** get_address_of__updateCallback_15() { return &____updateCallback_15; }
	inline void set__updateCallback_15(SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E * value)
	{
		____updateCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&____updateCallback_15), value);
	}

	inline static int32_t get_offset_of__commitCallback_16() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____commitCallback_16)); }
	inline SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34 * get__commitCallback_16() const { return ____commitCallback_16; }
	inline SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34 ** get_address_of__commitCallback_16() { return &____commitCallback_16; }
	inline void set__commitCallback_16(SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34 * value)
	{
		____commitCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&____commitCallback_16), value);
	}

	inline static int32_t get_offset_of__rollbackCallback_17() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____rollbackCallback_17)); }
	inline SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F * get__rollbackCallback_17() const { return ____rollbackCallback_17; }
	inline SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F ** get_address_of__rollbackCallback_17() { return &____rollbackCallback_17; }
	inline void set__rollbackCallback_17(SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F * value)
	{
		____rollbackCallback_17 = value;
		Il2CppCodeGenWriteBarrier((&____rollbackCallback_17), value);
	}

	inline static int32_t get_offset_of__updateHandler_18() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____updateHandler_18)); }
	inline SQLiteUpdateEventHandler_t351926E1F7DAF754332D630F6FB9BFEB5E45C405 * get__updateHandler_18() const { return ____updateHandler_18; }
	inline SQLiteUpdateEventHandler_t351926E1F7DAF754332D630F6FB9BFEB5E45C405 ** get_address_of__updateHandler_18() { return &____updateHandler_18; }
	inline void set__updateHandler_18(SQLiteUpdateEventHandler_t351926E1F7DAF754332D630F6FB9BFEB5E45C405 * value)
	{
		____updateHandler_18 = value;
		Il2CppCodeGenWriteBarrier((&____updateHandler_18), value);
	}

	inline static int32_t get_offset_of__commitHandler_19() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____commitHandler_19)); }
	inline SQLiteCommitHandler_tF0345A6CC0ED80CD73C244F342C8073DFEF5B1EA * get__commitHandler_19() const { return ____commitHandler_19; }
	inline SQLiteCommitHandler_tF0345A6CC0ED80CD73C244F342C8073DFEF5B1EA ** get_address_of__commitHandler_19() { return &____commitHandler_19; }
	inline void set__commitHandler_19(SQLiteCommitHandler_tF0345A6CC0ED80CD73C244F342C8073DFEF5B1EA * value)
	{
		____commitHandler_19 = value;
		Il2CppCodeGenWriteBarrier((&____commitHandler_19), value);
	}

	inline static int32_t get_offset_of__rollbackHandler_20() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ____rollbackHandler_20)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get__rollbackHandler_20() const { return ____rollbackHandler_20; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of__rollbackHandler_20() { return &____rollbackHandler_20; }
	inline void set__rollbackHandler_20(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		____rollbackHandler_20 = value;
		Il2CppCodeGenWriteBarrier((&____rollbackHandler_20), value);
	}

	inline static int32_t get_offset_of_StateChange_21() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A, ___StateChange_21)); }
	inline StateChangeEventHandler_tE075BA1D6F382866F969106BE55EDB1451290CC1 * get_StateChange_21() const { return ___StateChange_21; }
	inline StateChangeEventHandler_tE075BA1D6F382866F969106BE55EDB1451290CC1 ** get_address_of_StateChange_21() { return &___StateChange_21; }
	inline void set_StateChange_21(StateChangeEventHandler_tE075BA1D6F382866F969106BE55EDB1451290CC1 * value)
	{
		___StateChange_21 = value;
		Il2CppCodeGenWriteBarrier((&___StateChange_21), value);
	}
};

struct SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U3CU3Ef__switchU24map1_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U3CU3Ef__switchU24map2_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_22() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A_StaticFields, ___U3CU3Ef__switchU24map1_22)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U3CU3Ef__switchU24map1_22() const { return ___U3CU3Ef__switchU24map1_22; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U3CU3Ef__switchU24map1_22() { return &___U3CU3Ef__switchU24map1_22; }
	inline void set_U3CU3Ef__switchU24map1_22(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U3CU3Ef__switchU24map1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_23() { return static_cast<int32_t>(offsetof(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A_StaticFields, ___U3CU3Ef__switchU24map2_23)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U3CU3Ef__switchU24map2_23() const { return ___U3CU3Ef__switchU24map2_23; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U3CU3Ef__switchU24map2_23() { return &___U3CU3Ef__switchU24map2_23; }
	inline void set_U3CU3Ef__switchU24map2_23(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U3CU3Ef__switchU24map2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONNECTION_TE862F4AA6910C1D28334A076D51190739826039A_H
#ifndef SQLITECONVERT_TA7C50ED8BBD20691464DEBAD5348E203530B1BFC_H
#define SQLITECONVERT_TA7C50ED8BBD20691464DEBAD5348E203530B1BFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConvert
struct  SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteDateFormats Mono.Data.Sqlite.SqliteConvert::_datetimeFormat
	int32_t ____datetimeFormat_2;

public:
	inline static int32_t get_offset_of__datetimeFormat_2() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC, ____datetimeFormat_2)); }
	inline int32_t get__datetimeFormat_2() const { return ____datetimeFormat_2; }
	inline int32_t* get_address_of__datetimeFormat_2() { return &____datetimeFormat_2; }
	inline void set__datetimeFormat_2(int32_t value)
	{
		____datetimeFormat_2 = value;
	}
};

struct SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteConvert::_datetimeFormats
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____datetimeFormats_0;
	// System.Text.Encoding Mono.Data.Sqlite.SqliteConvert::_utf8
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____utf8_1;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_affinitytotype
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____affinitytotype_3;
	// System.Data.DbType[] Mono.Data.Sqlite.SqliteConvert::_typetodbtype
	DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* ____typetodbtype_4;
	// System.Int32[] Mono.Data.Sqlite.SqliteConvert::_dbtypetocolumnsize
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____dbtypetocolumnsize_5;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericprecision
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____dbtypetonumericprecision_6;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericscale
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____dbtypetonumericscale_7;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_dbtypeNames
	SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* ____dbtypeNames_8;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_dbtypeToType
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____dbtypeToType_9;
	// Mono.Data.Sqlite.TypeAffinity[] Mono.Data.Sqlite.SqliteConvert::_typecodeAffinities
	TypeAffinityU5BU5D_t5C437BAC505CE323B743DB662774FB72AEACB3D5* ____typecodeAffinities_10;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_typeNames
	SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* ____typeNames_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConvert::<>f__switch$map0
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U3CU3Ef__switchU24map0_12;

public:
	inline static int32_t get_offset_of__datetimeFormats_0() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____datetimeFormats_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__datetimeFormats_0() const { return ____datetimeFormats_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__datetimeFormats_0() { return &____datetimeFormats_0; }
	inline void set__datetimeFormats_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____datetimeFormats_0 = value;
		Il2CppCodeGenWriteBarrier((&____datetimeFormats_0), value);
	}

	inline static int32_t get_offset_of__utf8_1() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____utf8_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__utf8_1() const { return ____utf8_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__utf8_1() { return &____utf8_1; }
	inline void set__utf8_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____utf8_1 = value;
		Il2CppCodeGenWriteBarrier((&____utf8_1), value);
	}

	inline static int32_t get_offset_of__affinitytotype_3() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____affinitytotype_3)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__affinitytotype_3() const { return ____affinitytotype_3; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__affinitytotype_3() { return &____affinitytotype_3; }
	inline void set__affinitytotype_3(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____affinitytotype_3 = value;
		Il2CppCodeGenWriteBarrier((&____affinitytotype_3), value);
	}

	inline static int32_t get_offset_of__typetodbtype_4() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____typetodbtype_4)); }
	inline DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* get__typetodbtype_4() const { return ____typetodbtype_4; }
	inline DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E** get_address_of__typetodbtype_4() { return &____typetodbtype_4; }
	inline void set__typetodbtype_4(DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* value)
	{
		____typetodbtype_4 = value;
		Il2CppCodeGenWriteBarrier((&____typetodbtype_4), value);
	}

	inline static int32_t get_offset_of__dbtypetocolumnsize_5() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____dbtypetocolumnsize_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__dbtypetocolumnsize_5() const { return ____dbtypetocolumnsize_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__dbtypetocolumnsize_5() { return &____dbtypetocolumnsize_5; }
	inline void set__dbtypetocolumnsize_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____dbtypetocolumnsize_5 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetocolumnsize_5), value);
	}

	inline static int32_t get_offset_of__dbtypetonumericprecision_6() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____dbtypetonumericprecision_6)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__dbtypetonumericprecision_6() const { return ____dbtypetonumericprecision_6; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__dbtypetonumericprecision_6() { return &____dbtypetonumericprecision_6; }
	inline void set__dbtypetonumericprecision_6(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____dbtypetonumericprecision_6 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetonumericprecision_6), value);
	}

	inline static int32_t get_offset_of__dbtypetonumericscale_7() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____dbtypetonumericscale_7)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__dbtypetonumericscale_7() const { return ____dbtypetonumericscale_7; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__dbtypetonumericscale_7() { return &____dbtypetonumericscale_7; }
	inline void set__dbtypetonumericscale_7(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____dbtypetonumericscale_7 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypetonumericscale_7), value);
	}

	inline static int32_t get_offset_of__dbtypeNames_8() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____dbtypeNames_8)); }
	inline SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* get__dbtypeNames_8() const { return ____dbtypeNames_8; }
	inline SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109** get_address_of__dbtypeNames_8() { return &____dbtypeNames_8; }
	inline void set__dbtypeNames_8(SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* value)
	{
		____dbtypeNames_8 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypeNames_8), value);
	}

	inline static int32_t get_offset_of__dbtypeToType_9() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____dbtypeToType_9)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__dbtypeToType_9() const { return ____dbtypeToType_9; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__dbtypeToType_9() { return &____dbtypeToType_9; }
	inline void set__dbtypeToType_9(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____dbtypeToType_9 = value;
		Il2CppCodeGenWriteBarrier((&____dbtypeToType_9), value);
	}

	inline static int32_t get_offset_of__typecodeAffinities_10() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____typecodeAffinities_10)); }
	inline TypeAffinityU5BU5D_t5C437BAC505CE323B743DB662774FB72AEACB3D5* get__typecodeAffinities_10() const { return ____typecodeAffinities_10; }
	inline TypeAffinityU5BU5D_t5C437BAC505CE323B743DB662774FB72AEACB3D5** get_address_of__typecodeAffinities_10() { return &____typecodeAffinities_10; }
	inline void set__typecodeAffinities_10(TypeAffinityU5BU5D_t5C437BAC505CE323B743DB662774FB72AEACB3D5* value)
	{
		____typecodeAffinities_10 = value;
		Il2CppCodeGenWriteBarrier((&____typecodeAffinities_10), value);
	}

	inline static int32_t get_offset_of__typeNames_11() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ____typeNames_11)); }
	inline SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* get__typeNames_11() const { return ____typeNames_11; }
	inline SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109** get_address_of__typeNames_11() { return &____typeNames_11; }
	inline void set__typeNames_11(SQLiteTypeNamesU5BU5D_tF74072AF413EE586835330B207AA19500F6DE109* value)
	{
		____typeNames_11 = value;
		Il2CppCodeGenWriteBarrier((&____typeNames_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_12() { return static_cast<int32_t>(offsetof(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_StaticFields, ___U3CU3Ef__switchU24map0_12)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U3CU3Ef__switchU24map0_12() const { return ___U3CU3Ef__switchU24map0_12; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U3CU3Ef__switchU24map0_12() { return &___U3CU3Ef__switchU24map0_12; }
	inline void set_U3CU3Ef__switchU24map0_12(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U3CU3Ef__switchU24map0_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONVERT_TA7C50ED8BBD20691464DEBAD5348E203530B1BFC_H
#ifndef SQLITEDATAREADER_T50F15CFA4E4891A4609014E3890046C7140A25A3_H
#define SQLITEDATAREADER_T50F15CFA4E4891A4609014E3890046C7140A25A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteDataReader
struct  SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3  : public DbDataReader_t0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteDataReader::_command
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * ____command_1;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_activeStatementIndex
	int32_t ____activeStatementIndex_2;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteDataReader::_activeStatement
	SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * ____activeStatement_3;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_readingState
	int32_t ____readingState_4;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_rowsAffected
	int32_t ____rowsAffected_5;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_fieldCount
	int32_t ____fieldCount_6;
	// Mono.Data.Sqlite.SQLiteType[] Mono.Data.Sqlite.SqliteDataReader::_fieldTypeArray
	SQLiteTypeU5BU5D_tA348186E7B98A3A3379C15070E31F9BBF7B41AFE* ____fieldTypeArray_7;
	// System.Data.CommandBehavior Mono.Data.Sqlite.SqliteDataReader::_commandBehavior
	int32_t ____commandBehavior_8;
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::_disposeCommand
	bool ____disposeCommand_9;
	// Mono.Data.Sqlite.SqliteKeyReader Mono.Data.Sqlite.SqliteDataReader::_keyInfo
	SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * ____keyInfo_10;
	// System.Int64 Mono.Data.Sqlite.SqliteDataReader::_version
	int64_t ____version_11;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____command_1)); }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * get__command_1() const { return ____command_1; }
	inline SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((&____command_1), value);
	}

	inline static int32_t get_offset_of__activeStatementIndex_2() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____activeStatementIndex_2)); }
	inline int32_t get__activeStatementIndex_2() const { return ____activeStatementIndex_2; }
	inline int32_t* get_address_of__activeStatementIndex_2() { return &____activeStatementIndex_2; }
	inline void set__activeStatementIndex_2(int32_t value)
	{
		____activeStatementIndex_2 = value;
	}

	inline static int32_t get_offset_of__activeStatement_3() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____activeStatement_3)); }
	inline SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * get__activeStatement_3() const { return ____activeStatement_3; }
	inline SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 ** get_address_of__activeStatement_3() { return &____activeStatement_3; }
	inline void set__activeStatement_3(SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * value)
	{
		____activeStatement_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeStatement_3), value);
	}

	inline static int32_t get_offset_of__readingState_4() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____readingState_4)); }
	inline int32_t get__readingState_4() const { return ____readingState_4; }
	inline int32_t* get_address_of__readingState_4() { return &____readingState_4; }
	inline void set__readingState_4(int32_t value)
	{
		____readingState_4 = value;
	}

	inline static int32_t get_offset_of__rowsAffected_5() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____rowsAffected_5)); }
	inline int32_t get__rowsAffected_5() const { return ____rowsAffected_5; }
	inline int32_t* get_address_of__rowsAffected_5() { return &____rowsAffected_5; }
	inline void set__rowsAffected_5(int32_t value)
	{
		____rowsAffected_5 = value;
	}

	inline static int32_t get_offset_of__fieldCount_6() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____fieldCount_6)); }
	inline int32_t get__fieldCount_6() const { return ____fieldCount_6; }
	inline int32_t* get_address_of__fieldCount_6() { return &____fieldCount_6; }
	inline void set__fieldCount_6(int32_t value)
	{
		____fieldCount_6 = value;
	}

	inline static int32_t get_offset_of__fieldTypeArray_7() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____fieldTypeArray_7)); }
	inline SQLiteTypeU5BU5D_tA348186E7B98A3A3379C15070E31F9BBF7B41AFE* get__fieldTypeArray_7() const { return ____fieldTypeArray_7; }
	inline SQLiteTypeU5BU5D_tA348186E7B98A3A3379C15070E31F9BBF7B41AFE** get_address_of__fieldTypeArray_7() { return &____fieldTypeArray_7; }
	inline void set__fieldTypeArray_7(SQLiteTypeU5BU5D_tA348186E7B98A3A3379C15070E31F9BBF7B41AFE* value)
	{
		____fieldTypeArray_7 = value;
		Il2CppCodeGenWriteBarrier((&____fieldTypeArray_7), value);
	}

	inline static int32_t get_offset_of__commandBehavior_8() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____commandBehavior_8)); }
	inline int32_t get__commandBehavior_8() const { return ____commandBehavior_8; }
	inline int32_t* get_address_of__commandBehavior_8() { return &____commandBehavior_8; }
	inline void set__commandBehavior_8(int32_t value)
	{
		____commandBehavior_8 = value;
	}

	inline static int32_t get_offset_of__disposeCommand_9() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____disposeCommand_9)); }
	inline bool get__disposeCommand_9() const { return ____disposeCommand_9; }
	inline bool* get_address_of__disposeCommand_9() { return &____disposeCommand_9; }
	inline void set__disposeCommand_9(bool value)
	{
		____disposeCommand_9 = value;
	}

	inline static int32_t get_offset_of__keyInfo_10() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____keyInfo_10)); }
	inline SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * get__keyInfo_10() const { return ____keyInfo_10; }
	inline SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D ** get_address_of__keyInfo_10() { return &____keyInfo_10; }
	inline void set__keyInfo_10(SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * value)
	{
		____keyInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&____keyInfo_10), value);
	}

	inline static int32_t get_offset_of__version_11() { return static_cast<int32_t>(offsetof(SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3, ____version_11)); }
	inline int64_t get__version_11() const { return ____version_11; }
	inline int64_t* get_address_of__version_11() { return &____version_11; }
	inline void set__version_11(int64_t value)
	{
		____version_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEDATAREADER_T50F15CFA4E4891A4609014E3890046C7140A25A3_H
#ifndef SQLITEFUNCTIONATTRIBUTE_TEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_H
#define SQLITEFUNCTIONATTRIBUTE_TEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunctionAttribute
struct  SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::_name
	String_t* ____name_0;
	// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::_arguments
	int32_t ____arguments_1;
	// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::_functionType
	int32_t ____functionType_2;
	// System.Type Mono.Data.Sqlite.SqliteFunctionAttribute::_instanceType
	Type_t * ____instanceType_3;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__arguments_1() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA, ____arguments_1)); }
	inline int32_t get__arguments_1() const { return ____arguments_1; }
	inline int32_t* get_address_of__arguments_1() { return &____arguments_1; }
	inline void set__arguments_1(int32_t value)
	{
		____arguments_1 = value;
	}

	inline static int32_t get_offset_of__functionType_2() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA, ____functionType_2)); }
	inline int32_t get__functionType_2() const { return ____functionType_2; }
	inline int32_t* get_address_of__functionType_2() { return &____functionType_2; }
	inline void set__functionType_2(int32_t value)
	{
		____functionType_2 = value;
	}

	inline static int32_t get_offset_of__instanceType_3() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA, ____instanceType_3)); }
	inline Type_t * get__instanceType_3() const { return ____instanceType_3; }
	inline Type_t ** get_address_of__instanceType_3() { return &____instanceType_3; }
	inline void set__instanceType_3(Type_t * value)
	{
		____instanceType_3 = value;
		Il2CppCodeGenWriteBarrier((&____instanceType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFUNCTIONATTRIBUTE_TEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_H
#ifndef SQLITEFUNCTIONEX_T748735355014BE51BB6F6AE9A8DB91D2A38D55AB_H
#define SQLITEFUNCTIONEX_T748735355014BE51BB6F6AE9A8DB91D2A38D55AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunctionEx
struct  SqliteFunctionEx_t748735355014BE51BB6F6AE9A8DB91D2A38D55AB  : public SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFUNCTIONEX_T748735355014BE51BB6F6AE9A8DB91D2A38D55AB_H
#ifndef SQLITEPARAMETER_TD1B7F7081E410519C86AC464A137D0EFDFC13C29_H
#define SQLITEPARAMETER_TD1B7F7081E410519C86AC464A137D0EFDFC13C29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteParameter
struct  SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29  : public DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dbType
	int32_t ____dbType_1;
	// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::_rowVersion
	int32_t ____rowVersion_2;
	// System.Object Mono.Data.Sqlite.SqliteParameter::_objValue
	RuntimeObject * ____objValue_3;
	// System.String Mono.Data.Sqlite.SqliteParameter::_sourceColumn
	String_t* ____sourceColumn_4;
	// System.String Mono.Data.Sqlite.SqliteParameter::_parameterName
	String_t* ____parameterName_5;
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dataSize
	int32_t ____dataSize_6;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullable
	bool ____nullable_7;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullMapping
	bool ____nullMapping_8;

public:
	inline static int32_t get_offset_of__dbType_1() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____dbType_1)); }
	inline int32_t get__dbType_1() const { return ____dbType_1; }
	inline int32_t* get_address_of__dbType_1() { return &____dbType_1; }
	inline void set__dbType_1(int32_t value)
	{
		____dbType_1 = value;
	}

	inline static int32_t get_offset_of__rowVersion_2() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____rowVersion_2)); }
	inline int32_t get__rowVersion_2() const { return ____rowVersion_2; }
	inline int32_t* get_address_of__rowVersion_2() { return &____rowVersion_2; }
	inline void set__rowVersion_2(int32_t value)
	{
		____rowVersion_2 = value;
	}

	inline static int32_t get_offset_of__objValue_3() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____objValue_3)); }
	inline RuntimeObject * get__objValue_3() const { return ____objValue_3; }
	inline RuntimeObject ** get_address_of__objValue_3() { return &____objValue_3; }
	inline void set__objValue_3(RuntimeObject * value)
	{
		____objValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____objValue_3), value);
	}

	inline static int32_t get_offset_of__sourceColumn_4() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____sourceColumn_4)); }
	inline String_t* get__sourceColumn_4() const { return ____sourceColumn_4; }
	inline String_t** get_address_of__sourceColumn_4() { return &____sourceColumn_4; }
	inline void set__sourceColumn_4(String_t* value)
	{
		____sourceColumn_4 = value;
		Il2CppCodeGenWriteBarrier((&____sourceColumn_4), value);
	}

	inline static int32_t get_offset_of__parameterName_5() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____parameterName_5)); }
	inline String_t* get__parameterName_5() const { return ____parameterName_5; }
	inline String_t** get_address_of__parameterName_5() { return &____parameterName_5; }
	inline void set__parameterName_5(String_t* value)
	{
		____parameterName_5 = value;
		Il2CppCodeGenWriteBarrier((&____parameterName_5), value);
	}

	inline static int32_t get_offset_of__dataSize_6() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____dataSize_6)); }
	inline int32_t get__dataSize_6() const { return ____dataSize_6; }
	inline int32_t* get_address_of__dataSize_6() { return &____dataSize_6; }
	inline void set__dataSize_6(int32_t value)
	{
		____dataSize_6 = value;
	}

	inline static int32_t get_offset_of__nullable_7() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____nullable_7)); }
	inline bool get__nullable_7() const { return ____nullable_7; }
	inline bool* get_address_of__nullable_7() { return &____nullable_7; }
	inline void set__nullable_7(bool value)
	{
		____nullable_7 = value;
	}

	inline static int32_t get_offset_of__nullMapping_8() { return static_cast<int32_t>(offsetof(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29, ____nullMapping_8)); }
	inline bool get__nullMapping_8() const { return ____nullMapping_8; }
	inline bool* get_address_of__nullMapping_8() { return &____nullMapping_8; }
	inline void set__nullMapping_8(bool value)
	{
		____nullMapping_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEPARAMETER_TD1B7F7081E410519C86AC464A137D0EFDFC13C29_H
#ifndef SQLITESTATEMENTHANDLE_T97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B_H
#define SQLITESTATEMENTHANDLE_T97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteStatementHandle
struct  SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B  : public CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITESTATEMENTHANDLE_T97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B_H
#ifndef SQLITETRANSACTION_T5805E985F957DFA9FC4C72C8F46A83CC2C35CB71_H
#define SQLITETRANSACTION_T5805E985F957DFA9FC4C72C8F46A83CC2C35CB71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteTransaction
struct  SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71  : public DbTransaction_t52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1
{
public:
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::_cnn
	SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ____cnn_1;
	// System.Int64 Mono.Data.Sqlite.SqliteTransaction::_version
	int64_t ____version_2;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteTransaction::_level
	int32_t ____level_3;

public:
	inline static int32_t get_offset_of__cnn_1() { return static_cast<int32_t>(offsetof(SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71, ____cnn_1)); }
	inline SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * get__cnn_1() const { return ____cnn_1; }
	inline SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A ** get_address_of__cnn_1() { return &____cnn_1; }
	inline void set__cnn_1(SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * value)
	{
		____cnn_1 = value;
		Il2CppCodeGenWriteBarrier((&____cnn_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71, ____version_2)); }
	inline int64_t get__version_2() const { return ____version_2; }
	inline int64_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int64_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__level_3() { return static_cast<int32_t>(offsetof(SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71, ____level_3)); }
	inline int32_t get__level_3() const { return ____level_3; }
	inline int32_t* get_address_of__level_3() { return &____level_3; }
	inline void set__level_3(int32_t value)
	{
		____level_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITETRANSACTION_T5805E985F957DFA9FC4C72C8F46A83CC2C35CB71_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifndef DBCOMMANDBUILDER_TB69598DFF5DCEE7BC323176594BA75E1128C73F7_H
#define DBCOMMANDBUILDER_TB69598DFF5DCEE7BC323176594BA75E1128C73F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommandBuilder
struct  DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:
	// System.Data.Common.DbDataAdapter System.Data.Common.DbCommandBuilder::_dataAdapter
	DbDataAdapter_tEFA1E8BC56DD7B4E924AEB678FDA1DE7901FF1FF * ____dataAdapter_4;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_insertCommand
	DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * ____insertCommand_5;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_updateCommand
	DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * ____updateCommand_6;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_deleteCommand
	DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * ____deleteCommand_7;
	// System.Data.MissingMappingAction System.Data.Common.DbCommandBuilder::_missingMappingAction
	int32_t ____missingMappingAction_8;
	// System.Data.ConflictOption System.Data.Common.DbCommandBuilder::_conflictDetection
	int32_t ____conflictDetection_9;
	// System.Boolean System.Data.Common.DbCommandBuilder::_setAllValues
	bool ____setAllValues_10;
	// System.Boolean System.Data.Common.DbCommandBuilder::_hasPartialPrimaryKey
	bool ____hasPartialPrimaryKey_11;
	// System.Data.DataTable System.Data.Common.DbCommandBuilder::_dbSchemaTable
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * ____dbSchemaTable_12;
	// System.Data.Common.DbSchemaRow[] System.Data.Common.DbCommandBuilder::_dbSchemaRows
	DbSchemaRowU5BU5D_t4107DC799F3233CD5ECA6B1FAA559EA26FC43B6A* ____dbSchemaRows_13;
	// System.String[] System.Data.Common.DbCommandBuilder::_sourceColumnNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____sourceColumnNames_14;
	// System.Data.Common.DbCommandBuilder/ParameterNames System.Data.Common.DbCommandBuilder::_parameterNames
	ParameterNames_t9ED8909C3FC5F6738042B9D3EB697355DFE4E430 * ____parameterNames_15;
	// System.String System.Data.Common.DbCommandBuilder::_quotedBaseTableName
	String_t* ____quotedBaseTableName_16;
	// System.Data.Common.CatalogLocation System.Data.Common.DbCommandBuilder::_catalogLocation
	int32_t ____catalogLocation_17;
	// System.String System.Data.Common.DbCommandBuilder::_catalogSeparator
	String_t* ____catalogSeparator_18;
	// System.String System.Data.Common.DbCommandBuilder::_schemaSeparator
	String_t* ____schemaSeparator_19;
	// System.String System.Data.Common.DbCommandBuilder::_quotePrefix
	String_t* ____quotePrefix_20;
	// System.String System.Data.Common.DbCommandBuilder::_quoteSuffix
	String_t* ____quoteSuffix_21;
	// System.String System.Data.Common.DbCommandBuilder::_parameterNamePattern
	String_t* ____parameterNamePattern_22;
	// System.String System.Data.Common.DbCommandBuilder::_parameterMarkerFormat
	String_t* ____parameterMarkerFormat_23;
	// System.Int32 System.Data.Common.DbCommandBuilder::_parameterNameMaxLength
	int32_t ____parameterNameMaxLength_24;

public:
	inline static int32_t get_offset_of__dataAdapter_4() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____dataAdapter_4)); }
	inline DbDataAdapter_tEFA1E8BC56DD7B4E924AEB678FDA1DE7901FF1FF * get__dataAdapter_4() const { return ____dataAdapter_4; }
	inline DbDataAdapter_tEFA1E8BC56DD7B4E924AEB678FDA1DE7901FF1FF ** get_address_of__dataAdapter_4() { return &____dataAdapter_4; }
	inline void set__dataAdapter_4(DbDataAdapter_tEFA1E8BC56DD7B4E924AEB678FDA1DE7901FF1FF * value)
	{
		____dataAdapter_4 = value;
		Il2CppCodeGenWriteBarrier((&____dataAdapter_4), value);
	}

	inline static int32_t get_offset_of__insertCommand_5() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____insertCommand_5)); }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * get__insertCommand_5() const { return ____insertCommand_5; }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 ** get_address_of__insertCommand_5() { return &____insertCommand_5; }
	inline void set__insertCommand_5(DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * value)
	{
		____insertCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____updateCommand_6)); }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * get__updateCommand_6() const { return ____updateCommand_6; }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 ** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____deleteCommand_7)); }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 ** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(DbCommand_t3DC95E27E1476C2F688CC9DD26FAB9647C262964 * value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__missingMappingAction_8() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____missingMappingAction_8)); }
	inline int32_t get__missingMappingAction_8() const { return ____missingMappingAction_8; }
	inline int32_t* get_address_of__missingMappingAction_8() { return &____missingMappingAction_8; }
	inline void set__missingMappingAction_8(int32_t value)
	{
		____missingMappingAction_8 = value;
	}

	inline static int32_t get_offset_of__conflictDetection_9() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____conflictDetection_9)); }
	inline int32_t get__conflictDetection_9() const { return ____conflictDetection_9; }
	inline int32_t* get_address_of__conflictDetection_9() { return &____conflictDetection_9; }
	inline void set__conflictDetection_9(int32_t value)
	{
		____conflictDetection_9 = value;
	}

	inline static int32_t get_offset_of__setAllValues_10() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____setAllValues_10)); }
	inline bool get__setAllValues_10() const { return ____setAllValues_10; }
	inline bool* get_address_of__setAllValues_10() { return &____setAllValues_10; }
	inline void set__setAllValues_10(bool value)
	{
		____setAllValues_10 = value;
	}

	inline static int32_t get_offset_of__hasPartialPrimaryKey_11() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____hasPartialPrimaryKey_11)); }
	inline bool get__hasPartialPrimaryKey_11() const { return ____hasPartialPrimaryKey_11; }
	inline bool* get_address_of__hasPartialPrimaryKey_11() { return &____hasPartialPrimaryKey_11; }
	inline void set__hasPartialPrimaryKey_11(bool value)
	{
		____hasPartialPrimaryKey_11 = value;
	}

	inline static int32_t get_offset_of__dbSchemaTable_12() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____dbSchemaTable_12)); }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * get__dbSchemaTable_12() const { return ____dbSchemaTable_12; }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 ** get_address_of__dbSchemaTable_12() { return &____dbSchemaTable_12; }
	inline void set__dbSchemaTable_12(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * value)
	{
		____dbSchemaTable_12 = value;
		Il2CppCodeGenWriteBarrier((&____dbSchemaTable_12), value);
	}

	inline static int32_t get_offset_of__dbSchemaRows_13() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____dbSchemaRows_13)); }
	inline DbSchemaRowU5BU5D_t4107DC799F3233CD5ECA6B1FAA559EA26FC43B6A* get__dbSchemaRows_13() const { return ____dbSchemaRows_13; }
	inline DbSchemaRowU5BU5D_t4107DC799F3233CD5ECA6B1FAA559EA26FC43B6A** get_address_of__dbSchemaRows_13() { return &____dbSchemaRows_13; }
	inline void set__dbSchemaRows_13(DbSchemaRowU5BU5D_t4107DC799F3233CD5ECA6B1FAA559EA26FC43B6A* value)
	{
		____dbSchemaRows_13 = value;
		Il2CppCodeGenWriteBarrier((&____dbSchemaRows_13), value);
	}

	inline static int32_t get_offset_of__sourceColumnNames_14() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____sourceColumnNames_14)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__sourceColumnNames_14() const { return ____sourceColumnNames_14; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__sourceColumnNames_14() { return &____sourceColumnNames_14; }
	inline void set__sourceColumnNames_14(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____sourceColumnNames_14 = value;
		Il2CppCodeGenWriteBarrier((&____sourceColumnNames_14), value);
	}

	inline static int32_t get_offset_of__parameterNames_15() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____parameterNames_15)); }
	inline ParameterNames_t9ED8909C3FC5F6738042B9D3EB697355DFE4E430 * get__parameterNames_15() const { return ____parameterNames_15; }
	inline ParameterNames_t9ED8909C3FC5F6738042B9D3EB697355DFE4E430 ** get_address_of__parameterNames_15() { return &____parameterNames_15; }
	inline void set__parameterNames_15(ParameterNames_t9ED8909C3FC5F6738042B9D3EB697355DFE4E430 * value)
	{
		____parameterNames_15 = value;
		Il2CppCodeGenWriteBarrier((&____parameterNames_15), value);
	}

	inline static int32_t get_offset_of__quotedBaseTableName_16() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____quotedBaseTableName_16)); }
	inline String_t* get__quotedBaseTableName_16() const { return ____quotedBaseTableName_16; }
	inline String_t** get_address_of__quotedBaseTableName_16() { return &____quotedBaseTableName_16; }
	inline void set__quotedBaseTableName_16(String_t* value)
	{
		____quotedBaseTableName_16 = value;
		Il2CppCodeGenWriteBarrier((&____quotedBaseTableName_16), value);
	}

	inline static int32_t get_offset_of__catalogLocation_17() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____catalogLocation_17)); }
	inline int32_t get__catalogLocation_17() const { return ____catalogLocation_17; }
	inline int32_t* get_address_of__catalogLocation_17() { return &____catalogLocation_17; }
	inline void set__catalogLocation_17(int32_t value)
	{
		____catalogLocation_17 = value;
	}

	inline static int32_t get_offset_of__catalogSeparator_18() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____catalogSeparator_18)); }
	inline String_t* get__catalogSeparator_18() const { return ____catalogSeparator_18; }
	inline String_t** get_address_of__catalogSeparator_18() { return &____catalogSeparator_18; }
	inline void set__catalogSeparator_18(String_t* value)
	{
		____catalogSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&____catalogSeparator_18), value);
	}

	inline static int32_t get_offset_of__schemaSeparator_19() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____schemaSeparator_19)); }
	inline String_t* get__schemaSeparator_19() const { return ____schemaSeparator_19; }
	inline String_t** get_address_of__schemaSeparator_19() { return &____schemaSeparator_19; }
	inline void set__schemaSeparator_19(String_t* value)
	{
		____schemaSeparator_19 = value;
		Il2CppCodeGenWriteBarrier((&____schemaSeparator_19), value);
	}

	inline static int32_t get_offset_of__quotePrefix_20() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____quotePrefix_20)); }
	inline String_t* get__quotePrefix_20() const { return ____quotePrefix_20; }
	inline String_t** get_address_of__quotePrefix_20() { return &____quotePrefix_20; }
	inline void set__quotePrefix_20(String_t* value)
	{
		____quotePrefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____quotePrefix_20), value);
	}

	inline static int32_t get_offset_of__quoteSuffix_21() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____quoteSuffix_21)); }
	inline String_t* get__quoteSuffix_21() const { return ____quoteSuffix_21; }
	inline String_t** get_address_of__quoteSuffix_21() { return &____quoteSuffix_21; }
	inline void set__quoteSuffix_21(String_t* value)
	{
		____quoteSuffix_21 = value;
		Il2CppCodeGenWriteBarrier((&____quoteSuffix_21), value);
	}

	inline static int32_t get_offset_of__parameterNamePattern_22() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____parameterNamePattern_22)); }
	inline String_t* get__parameterNamePattern_22() const { return ____parameterNamePattern_22; }
	inline String_t** get_address_of__parameterNamePattern_22() { return &____parameterNamePattern_22; }
	inline void set__parameterNamePattern_22(String_t* value)
	{
		____parameterNamePattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____parameterNamePattern_22), value);
	}

	inline static int32_t get_offset_of__parameterMarkerFormat_23() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____parameterMarkerFormat_23)); }
	inline String_t* get__parameterMarkerFormat_23() const { return ____parameterMarkerFormat_23; }
	inline String_t** get_address_of__parameterMarkerFormat_23() { return &____parameterMarkerFormat_23; }
	inline void set__parameterMarkerFormat_23(String_t* value)
	{
		____parameterMarkerFormat_23 = value;
		Il2CppCodeGenWriteBarrier((&____parameterMarkerFormat_23), value);
	}

	inline static int32_t get_offset_of__parameterNameMaxLength_24() { return static_cast<int32_t>(offsetof(DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7, ____parameterNameMaxLength_24)); }
	inline int32_t get__parameterNameMaxLength_24() const { return ____parameterNameMaxLength_24; }
	inline int32_t* get_address_of__parameterNameMaxLength_24() { return &____parameterNameMaxLength_24; }
	inline void set__parameterNameMaxLength_24(int32_t value)
	{
		____parameterNameMaxLength_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMANDBUILDER_TB69598DFF5DCEE7BC323176594BA75E1128C73F7_H
#ifndef DBEXCEPTION_T3952313B217CD117688BFFC5E864809BC13EF326_H
#define DBEXCEPTION_T3952313B217CD117688BFFC5E864809BC13EF326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbException
struct  DbException_t3952313B217CD117688BFFC5E864809BC13EF326  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBEXCEPTION_T3952313B217CD117688BFFC5E864809BC13EF326_H
#ifndef DATAROW_T3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_H
#define DATAROW_T3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * ____table_0;
	// System.Data.DataColumnCollection System.Data.DataRow::_columns
	DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * ____columns_1;
	// System.Int32 System.Data.DataRow::_oldRecord
	int32_t ____oldRecord_2;
	// System.Int32 System.Data.DataRow::_newRecord
	int32_t ____newRecord_3;
	// System.Int32 System.Data.DataRow::_tempRecord
	int32_t ____tempRecord_4;
	// System.Int64 System.Data.DataRow::_rowID
	int64_t ____rowID_5;
	// System.Data.DataRowAction System.Data.DataRow::_action
	int32_t ____action_6;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_7;
	// System.Boolean System.Data.DataRow::_inDeletingEvent
	bool ____inDeletingEvent_8;
	// System.Boolean System.Data.DataRow::_inCascade
	bool ____inCascade_9;
	// System.Data.DataColumn System.Data.DataRow::_lastChangedColumn
	DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * ____lastChangedColumn_10;
	// System.Int32 System.Data.DataRow::_countColumnChange
	int32_t ____countColumnChange_11;
	// System.Data.DataError System.Data.DataRow::_error
	DataError_t61C72AD6D529E5DEE5EA0F59F355D65E6DB2235E * ____error_12;
	// System.Int32 System.Data.DataRow::_rbTreeNodeId
	int32_t ____rbTreeNodeId_13;
	// System.Int32 System.Data.DataRow::_objectID
	int32_t ____objectID_15;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____table_0)); }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * get__table_0() const { return ____table_0; }
	inline DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____columns_1)); }
	inline DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * get__columns_1() const { return ____columns_1; }
	inline DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 ** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__oldRecord_2() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____oldRecord_2)); }
	inline int32_t get__oldRecord_2() const { return ____oldRecord_2; }
	inline int32_t* get_address_of__oldRecord_2() { return &____oldRecord_2; }
	inline void set__oldRecord_2(int32_t value)
	{
		____oldRecord_2 = value;
	}

	inline static int32_t get_offset_of__newRecord_3() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____newRecord_3)); }
	inline int32_t get__newRecord_3() const { return ____newRecord_3; }
	inline int32_t* get_address_of__newRecord_3() { return &____newRecord_3; }
	inline void set__newRecord_3(int32_t value)
	{
		____newRecord_3 = value;
	}

	inline static int32_t get_offset_of__tempRecord_4() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____tempRecord_4)); }
	inline int32_t get__tempRecord_4() const { return ____tempRecord_4; }
	inline int32_t* get_address_of__tempRecord_4() { return &____tempRecord_4; }
	inline void set__tempRecord_4(int32_t value)
	{
		____tempRecord_4 = value;
	}

	inline static int32_t get_offset_of__rowID_5() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____rowID_5)); }
	inline int64_t get__rowID_5() const { return ____rowID_5; }
	inline int64_t* get_address_of__rowID_5() { return &____rowID_5; }
	inline void set__rowID_5(int64_t value)
	{
		____rowID_5 = value;
	}

	inline static int32_t get_offset_of__action_6() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____action_6)); }
	inline int32_t get__action_6() const { return ____action_6; }
	inline int32_t* get_address_of__action_6() { return &____action_6; }
	inline void set__action_6(int32_t value)
	{
		____action_6 = value;
	}

	inline static int32_t get_offset_of__inChangingEvent_7() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____inChangingEvent_7)); }
	inline bool get__inChangingEvent_7() const { return ____inChangingEvent_7; }
	inline bool* get_address_of__inChangingEvent_7() { return &____inChangingEvent_7; }
	inline void set__inChangingEvent_7(bool value)
	{
		____inChangingEvent_7 = value;
	}

	inline static int32_t get_offset_of__inDeletingEvent_8() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____inDeletingEvent_8)); }
	inline bool get__inDeletingEvent_8() const { return ____inDeletingEvent_8; }
	inline bool* get_address_of__inDeletingEvent_8() { return &____inDeletingEvent_8; }
	inline void set__inDeletingEvent_8(bool value)
	{
		____inDeletingEvent_8 = value;
	}

	inline static int32_t get_offset_of__inCascade_9() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____inCascade_9)); }
	inline bool get__inCascade_9() const { return ____inCascade_9; }
	inline bool* get_address_of__inCascade_9() { return &____inCascade_9; }
	inline void set__inCascade_9(bool value)
	{
		____inCascade_9 = value;
	}

	inline static int32_t get_offset_of__lastChangedColumn_10() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____lastChangedColumn_10)); }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * get__lastChangedColumn_10() const { return ____lastChangedColumn_10; }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 ** get_address_of__lastChangedColumn_10() { return &____lastChangedColumn_10; }
	inline void set__lastChangedColumn_10(DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * value)
	{
		____lastChangedColumn_10 = value;
		Il2CppCodeGenWriteBarrier((&____lastChangedColumn_10), value);
	}

	inline static int32_t get_offset_of__countColumnChange_11() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____countColumnChange_11)); }
	inline int32_t get__countColumnChange_11() const { return ____countColumnChange_11; }
	inline int32_t* get_address_of__countColumnChange_11() { return &____countColumnChange_11; }
	inline void set__countColumnChange_11(int32_t value)
	{
		____countColumnChange_11 = value;
	}

	inline static int32_t get_offset_of__error_12() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____error_12)); }
	inline DataError_t61C72AD6D529E5DEE5EA0F59F355D65E6DB2235E * get__error_12() const { return ____error_12; }
	inline DataError_t61C72AD6D529E5DEE5EA0F59F355D65E6DB2235E ** get_address_of__error_12() { return &____error_12; }
	inline void set__error_12(DataError_t61C72AD6D529E5DEE5EA0F59F355D65E6DB2235E * value)
	{
		____error_12 = value;
		Il2CppCodeGenWriteBarrier((&____error_12), value);
	}

	inline static int32_t get_offset_of__rbTreeNodeId_13() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____rbTreeNodeId_13)); }
	inline int32_t get__rbTreeNodeId_13() const { return ____rbTreeNodeId_13; }
	inline int32_t* get_address_of__rbTreeNodeId_13() { return &____rbTreeNodeId_13; }
	inline void set__rbTreeNodeId_13(int32_t value)
	{
		____rbTreeNodeId_13 = value;
	}

	inline static int32_t get_offset_of__objectID_15() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665, ____objectID_15)); }
	inline int32_t get__objectID_15() const { return ____objectID_15; }
	inline int32_t* get_address_of__objectID_15() { return &____objectID_15; }
	inline void set__objectID_15(int32_t value)
	{
		____objectID_15 = value;
	}
};

struct DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_StaticFields
{
public:
	// System.Int32 System.Data.DataRow::s_objectTypeCount
	int32_t ___s_objectTypeCount_14;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_14() { return static_cast<int32_t>(offsetof(DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_StaticFields, ___s_objectTypeCount_14)); }
	inline int32_t get_s_objectTypeCount_14() const { return ___s_objectTypeCount_14; }
	inline int32_t* get_address_of_s_objectTypeCount_14() { return &___s_objectTypeCount_14; }
	inline void set_s_objectTypeCount_14(int32_t value)
	{
		___s_objectTypeCount_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROW_T3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_H
#ifndef DATATABLE_TC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5_H
#define DATATABLE_TC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5  : public MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B
{
public:
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_tB08A130C5A697E1B4AE9D4083A8D99606A830DEB * ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t07D49E3E81E9724EB434896059C0D5BB61AA5280 * ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_tFACF84726F8B5E3FC3043BE2C79C889A1F88FEBF * ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t116E784253DF47D34867982F632C539D091CB1CE * ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t527B1A720505690413C7193B6C655865AB01426C * ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_tC6C3E3658B417CC79EF6A5AFD5B882D9E1413EFB * ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject * ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_t1D0BBDFAE4BC34BBBE4B56A1CADB3503DEBE085B * ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_tC8BB27FADC6F7F73FFB55F65EEF284B984FCB5B3* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t92A9C5FA1660AD2618AF9BA2DF3A0AEBB749C24E* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_savedEnforceConstraints
	bool ____savedEnforceConstraints_44;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_45;
	// System.Boolean System.Data.DataTable::_initialLoad
	bool ____initialLoad_46;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_47;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_48;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_49;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_50;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_51;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_52;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_53;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t8CE09DCB1CAEFB0E90D5C16386CE0CC9EC56BE4D* ____emptyDataRowArray_54;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * ____propertyDescriptorCollectionCache_55;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_t49D05A0A9C63B3BE96378F29A0F234799E930794* ____nestedParentRelations_56;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_tD1B5F34388A81AAF9D4852CF01BC58DE514E9923 * ____dependentColumns_57;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * ____onRowChangedDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * ____onRowChangingDelegate_60;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * ____onRowDeletingDelegate_61;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * ____onRowDeletedDelegate_62;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * ____onColumnChangedDelegate_63;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * ____onColumnChangingDelegate_64;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * ____onTableClearingDelegate_65;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * ____onTableClearedDelegate_66;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_tB40B0B8E6DFA791EE6F07A87445DAD1D361959EC * ____onTableNewRowDelegate_67;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ____onPropertyChangingDelegate_68;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_tBDF082891A1D28ECB024897D7FB3511A6629BA6F * ____rowBuilder_69;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_t41A1BDF6D46B03A5A4E8DFA8599CF36ABBDAC92F * ____delayedViews_70;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_t95FCFC0BAB0C4065B0833DB174801263567B9593 * ____dataViewListeners_71;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____rowDiffId_72;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * ____indexesLock_73;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_74;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_75;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_77;

public:
	inline static int32_t get_offset_of__dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____dataSet_3)); }
	inline DataSet_tB08A130C5A697E1B4AE9D4083A8D99606A830DEB * get__dataSet_3() const { return ____dataSet_3; }
	inline DataSet_tB08A130C5A697E1B4AE9D4083A8D99606A830DEB ** get_address_of__dataSet_3() { return &____dataSet_3; }
	inline void set__dataSet_3(DataSet_tB08A130C5A697E1B4AE9D4083A8D99606A830DEB * value)
	{
		____dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&____dataSet_3), value);
	}

	inline static int32_t get_offset_of__defaultView_4() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____defaultView_4)); }
	inline DataView_t07D49E3E81E9724EB434896059C0D5BB61AA5280 * get__defaultView_4() const { return ____defaultView_4; }
	inline DataView_t07D49E3E81E9724EB434896059C0D5BB61AA5280 ** get_address_of__defaultView_4() { return &____defaultView_4; }
	inline void set__defaultView_4(DataView_t07D49E3E81E9724EB434896059C0D5BB61AA5280 * value)
	{
		____defaultView_4 = value;
		Il2CppCodeGenWriteBarrier((&____defaultView_4), value);
	}

	inline static int32_t get_offset_of__nextRowID_5() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____nextRowID_5)); }
	inline int64_t get__nextRowID_5() const { return ____nextRowID_5; }
	inline int64_t* get_address_of__nextRowID_5() { return &____nextRowID_5; }
	inline void set__nextRowID_5(int64_t value)
	{
		____nextRowID_5 = value;
	}

	inline static int32_t get_offset_of__rowCollection_6() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____rowCollection_6)); }
	inline DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * get__rowCollection_6() const { return ____rowCollection_6; }
	inline DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 ** get_address_of__rowCollection_6() { return &____rowCollection_6; }
	inline void set__rowCollection_6(DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * value)
	{
		____rowCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&____rowCollection_6), value);
	}

	inline static int32_t get_offset_of__columnCollection_7() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____columnCollection_7)); }
	inline DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * get__columnCollection_7() const { return ____columnCollection_7; }
	inline DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 ** get_address_of__columnCollection_7() { return &____columnCollection_7; }
	inline void set__columnCollection_7(DataColumnCollection_tE6EA8A974094C9ACC698E3B05727843CB57E6346 * value)
	{
		____columnCollection_7 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_7), value);
	}

	inline static int32_t get_offset_of__constraintCollection_8() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____constraintCollection_8)); }
	inline ConstraintCollection_tFACF84726F8B5E3FC3043BE2C79C889A1F88FEBF * get__constraintCollection_8() const { return ____constraintCollection_8; }
	inline ConstraintCollection_tFACF84726F8B5E3FC3043BE2C79C889A1F88FEBF ** get_address_of__constraintCollection_8() { return &____constraintCollection_8; }
	inline void set__constraintCollection_8(ConstraintCollection_tFACF84726F8B5E3FC3043BE2C79C889A1F88FEBF * value)
	{
		____constraintCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_8), value);
	}

	inline static int32_t get_offset_of__elementColumnCount_9() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____elementColumnCount_9)); }
	inline int32_t get__elementColumnCount_9() const { return ____elementColumnCount_9; }
	inline int32_t* get_address_of__elementColumnCount_9() { return &____elementColumnCount_9; }
	inline void set__elementColumnCount_9(int32_t value)
	{
		____elementColumnCount_9 = value;
	}

	inline static int32_t get_offset_of__parentRelationsCollection_10() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____parentRelationsCollection_10)); }
	inline DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * get__parentRelationsCollection_10() const { return ____parentRelationsCollection_10; }
	inline DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 ** get_address_of__parentRelationsCollection_10() { return &____parentRelationsCollection_10; }
	inline void set__parentRelationsCollection_10(DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * value)
	{
		____parentRelationsCollection_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelationsCollection_10), value);
	}

	inline static int32_t get_offset_of__childRelationsCollection_11() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____childRelationsCollection_11)); }
	inline DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * get__childRelationsCollection_11() const { return ____childRelationsCollection_11; }
	inline DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 ** get_address_of__childRelationsCollection_11() { return &____childRelationsCollection_11; }
	inline void set__childRelationsCollection_11(DataRelationCollection_tFCD3A0302B211CB65F1B55AE94601726FEBA5EF1 * value)
	{
		____childRelationsCollection_11 = value;
		Il2CppCodeGenWriteBarrier((&____childRelationsCollection_11), value);
	}

	inline static int32_t get_offset_of__recordManager_12() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____recordManager_12)); }
	inline RecordManager_t116E784253DF47D34867982F632C539D091CB1CE * get__recordManager_12() const { return ____recordManager_12; }
	inline RecordManager_t116E784253DF47D34867982F632C539D091CB1CE ** get_address_of__recordManager_12() { return &____recordManager_12; }
	inline void set__recordManager_12(RecordManager_t116E784253DF47D34867982F632C539D091CB1CE * value)
	{
		____recordManager_12 = value;
		Il2CppCodeGenWriteBarrier((&____recordManager_12), value);
	}

	inline static int32_t get_offset_of__indexes_13() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____indexes_13)); }
	inline List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * get__indexes_13() const { return ____indexes_13; }
	inline List_1_t8415C90D93A08F8923C868A018FA3AA887866712 ** get_address_of__indexes_13() { return &____indexes_13; }
	inline void set__indexes_13(List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * value)
	{
		____indexes_13 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_13), value);
	}

	inline static int32_t get_offset_of__shadowIndexes_14() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____shadowIndexes_14)); }
	inline List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * get__shadowIndexes_14() const { return ____shadowIndexes_14; }
	inline List_1_t8415C90D93A08F8923C868A018FA3AA887866712 ** get_address_of__shadowIndexes_14() { return &____shadowIndexes_14; }
	inline void set__shadowIndexes_14(List_1_t8415C90D93A08F8923C868A018FA3AA887866712 * value)
	{
		____shadowIndexes_14 = value;
		Il2CppCodeGenWriteBarrier((&____shadowIndexes_14), value);
	}

	inline static int32_t get_offset_of__shadowCount_15() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____shadowCount_15)); }
	inline int32_t get__shadowCount_15() const { return ____shadowCount_15; }
	inline int32_t* get_address_of__shadowCount_15() { return &____shadowCount_15; }
	inline void set__shadowCount_15(int32_t value)
	{
		____shadowCount_15 = value;
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____extendedProperties_16)); }
	inline PropertyCollection_t527B1A720505690413C7193B6C655865AB01426C * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t527B1A720505690413C7193B6C655865AB01426C ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t527B1A720505690413C7193B6C655865AB01426C * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_17), value);
	}

	inline static int32_t get_offset_of__tableNamespace_18() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____tableNamespace_18)); }
	inline String_t* get__tableNamespace_18() const { return ____tableNamespace_18; }
	inline String_t** get_address_of__tableNamespace_18() { return &____tableNamespace_18; }
	inline void set__tableNamespace_18(String_t* value)
	{
		____tableNamespace_18 = value;
		Il2CppCodeGenWriteBarrier((&____tableNamespace_18), value);
	}

	inline static int32_t get_offset_of__tablePrefix_19() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____tablePrefix_19)); }
	inline String_t* get__tablePrefix_19() const { return ____tablePrefix_19; }
	inline String_t** get_address_of__tablePrefix_19() { return &____tablePrefix_19; }
	inline void set__tablePrefix_19(String_t* value)
	{
		____tablePrefix_19 = value;
		Il2CppCodeGenWriteBarrier((&____tablePrefix_19), value);
	}

	inline static int32_t get_offset_of__displayExpression_20() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____displayExpression_20)); }
	inline DataExpression_tC6C3E3658B417CC79EF6A5AFD5B882D9E1413EFB * get__displayExpression_20() const { return ____displayExpression_20; }
	inline DataExpression_tC6C3E3658B417CC79EF6A5AFD5B882D9E1413EFB ** get_address_of__displayExpression_20() { return &____displayExpression_20; }
	inline void set__displayExpression_20(DataExpression_tC6C3E3658B417CC79EF6A5AFD5B882D9E1413EFB * value)
	{
		____displayExpression_20 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_20), value);
	}

	inline static int32_t get_offset_of__fNestedInDataset_21() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____fNestedInDataset_21)); }
	inline bool get__fNestedInDataset_21() const { return ____fNestedInDataset_21; }
	inline bool* get_address_of__fNestedInDataset_21() { return &____fNestedInDataset_21; }
	inline void set__fNestedInDataset_21(bool value)
	{
		____fNestedInDataset_21 = value;
	}

	inline static int32_t get_offset_of__culture_22() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____culture_22)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_22() const { return ____culture_22; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_22() { return &____culture_22; }
	inline void set__culture_22(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_22 = value;
		Il2CppCodeGenWriteBarrier((&____culture_22), value);
	}

	inline static int32_t get_offset_of__cultureUserSet_23() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____cultureUserSet_23)); }
	inline bool get__cultureUserSet_23() const { return ____cultureUserSet_23; }
	inline bool* get_address_of__cultureUserSet_23() { return &____cultureUserSet_23; }
	inline void set__cultureUserSet_23(bool value)
	{
		____cultureUserSet_23 = value;
	}

	inline static int32_t get_offset_of__compareInfo_24() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____compareInfo_24)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get__compareInfo_24() const { return ____compareInfo_24; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of__compareInfo_24() { return &____compareInfo_24; }
	inline void set__compareInfo_24(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		____compareInfo_24 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_24), value);
	}

	inline static int32_t get_offset_of__compareFlags_25() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____compareFlags_25)); }
	inline int32_t get__compareFlags_25() const { return ____compareFlags_25; }
	inline int32_t* get_address_of__compareFlags_25() { return &____compareFlags_25; }
	inline void set__compareFlags_25(int32_t value)
	{
		____compareFlags_25 = value;
	}

	inline static int32_t get_offset_of__formatProvider_26() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____formatProvider_26)); }
	inline RuntimeObject* get__formatProvider_26() const { return ____formatProvider_26; }
	inline RuntimeObject** get_address_of__formatProvider_26() { return &____formatProvider_26; }
	inline void set__formatProvider_26(RuntimeObject* value)
	{
		____formatProvider_26 = value;
		Il2CppCodeGenWriteBarrier((&____formatProvider_26), value);
	}

	inline static int32_t get_offset_of__hashCodeProvider_27() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____hashCodeProvider_27)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__hashCodeProvider_27() const { return ____hashCodeProvider_27; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__hashCodeProvider_27() { return &____hashCodeProvider_27; }
	inline void set__hashCodeProvider_27(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____hashCodeProvider_27 = value;
		Il2CppCodeGenWriteBarrier((&____hashCodeProvider_27), value);
	}

	inline static int32_t get_offset_of__caseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____caseSensitive_28)); }
	inline bool get__caseSensitive_28() const { return ____caseSensitive_28; }
	inline bool* get_address_of__caseSensitive_28() { return &____caseSensitive_28; }
	inline void set__caseSensitive_28(bool value)
	{
		____caseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__caseSensitiveUserSet_29() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____caseSensitiveUserSet_29)); }
	inline bool get__caseSensitiveUserSet_29() const { return ____caseSensitiveUserSet_29; }
	inline bool* get_address_of__caseSensitiveUserSet_29() { return &____caseSensitiveUserSet_29; }
	inline void set__caseSensitiveUserSet_29(bool value)
	{
		____caseSensitiveUserSet_29 = value;
	}

	inline static int32_t get_offset_of__encodedTableName_30() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____encodedTableName_30)); }
	inline String_t* get__encodedTableName_30() const { return ____encodedTableName_30; }
	inline String_t** get_address_of__encodedTableName_30() { return &____encodedTableName_30; }
	inline void set__encodedTableName_30(String_t* value)
	{
		____encodedTableName_30 = value;
		Il2CppCodeGenWriteBarrier((&____encodedTableName_30), value);
	}

	inline static int32_t get_offset_of__xmlText_31() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____xmlText_31)); }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * get__xmlText_31() const { return ____xmlText_31; }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 ** get_address_of__xmlText_31() { return &____xmlText_31; }
	inline void set__xmlText_31(DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * value)
	{
		____xmlText_31 = value;
		Il2CppCodeGenWriteBarrier((&____xmlText_31), value);
	}

	inline static int32_t get_offset_of__colUnique_32() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____colUnique_32)); }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * get__colUnique_32() const { return ____colUnique_32; }
	inline DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 ** get_address_of__colUnique_32() { return &____colUnique_32; }
	inline void set__colUnique_32(DataColumn_t0C19D49DF81104072A92865F5E11BAC3FF59C9C1 * value)
	{
		____colUnique_32 = value;
		Il2CppCodeGenWriteBarrier((&____colUnique_32), value);
	}

	inline static int32_t get_offset_of__minOccurs_33() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____minOccurs_33)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get__minOccurs_33() const { return ____minOccurs_33; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of__minOccurs_33() { return &____minOccurs_33; }
	inline void set__minOccurs_33(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		____minOccurs_33 = value;
	}

	inline static int32_t get_offset_of__maxOccurs_34() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____maxOccurs_34)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get__maxOccurs_34() const { return ____maxOccurs_34; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of__maxOccurs_34() { return &____maxOccurs_34; }
	inline void set__maxOccurs_34(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		____maxOccurs_34 = value;
	}

	inline static int32_t get_offset_of__repeatableElement_35() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____repeatableElement_35)); }
	inline bool get__repeatableElement_35() const { return ____repeatableElement_35; }
	inline bool* get_address_of__repeatableElement_35() { return &____repeatableElement_35; }
	inline void set__repeatableElement_35(bool value)
	{
		____repeatableElement_35 = value;
	}

	inline static int32_t get_offset_of__typeName_36() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____typeName_36)); }
	inline RuntimeObject * get__typeName_36() const { return ____typeName_36; }
	inline RuntimeObject ** get_address_of__typeName_36() { return &____typeName_36; }
	inline void set__typeName_36(RuntimeObject * value)
	{
		____typeName_36 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_36), value);
	}

	inline static int32_t get_offset_of__primaryKey_37() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____primaryKey_37)); }
	inline UniqueConstraint_t1D0BBDFAE4BC34BBBE4B56A1CADB3503DEBE085B * get__primaryKey_37() const { return ____primaryKey_37; }
	inline UniqueConstraint_t1D0BBDFAE4BC34BBBE4B56A1CADB3503DEBE085B ** get_address_of__primaryKey_37() { return &____primaryKey_37; }
	inline void set__primaryKey_37(UniqueConstraint_t1D0BBDFAE4BC34BBBE4B56A1CADB3503DEBE085B * value)
	{
		____primaryKey_37 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKey_37), value);
	}

	inline static int32_t get_offset_of__primaryIndex_38() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____primaryIndex_38)); }
	inline IndexFieldU5BU5D_tC8BB27FADC6F7F73FFB55F65EEF284B984FCB5B3* get__primaryIndex_38() const { return ____primaryIndex_38; }
	inline IndexFieldU5BU5D_tC8BB27FADC6F7F73FFB55F65EEF284B984FCB5B3** get_address_of__primaryIndex_38() { return &____primaryIndex_38; }
	inline void set__primaryIndex_38(IndexFieldU5BU5D_tC8BB27FADC6F7F73FFB55F65EEF284B984FCB5B3* value)
	{
		____primaryIndex_38 = value;
		Il2CppCodeGenWriteBarrier((&____primaryIndex_38), value);
	}

	inline static int32_t get_offset_of__delayedSetPrimaryKey_39() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____delayedSetPrimaryKey_39)); }
	inline DataColumnU5BU5D_t92A9C5FA1660AD2618AF9BA2DF3A0AEBB749C24E* get__delayedSetPrimaryKey_39() const { return ____delayedSetPrimaryKey_39; }
	inline DataColumnU5BU5D_t92A9C5FA1660AD2618AF9BA2DF3A0AEBB749C24E** get_address_of__delayedSetPrimaryKey_39() { return &____delayedSetPrimaryKey_39; }
	inline void set__delayedSetPrimaryKey_39(DataColumnU5BU5D_t92A9C5FA1660AD2618AF9BA2DF3A0AEBB749C24E* value)
	{
		____delayedSetPrimaryKey_39 = value;
		Il2CppCodeGenWriteBarrier((&____delayedSetPrimaryKey_39), value);
	}

	inline static int32_t get_offset_of__loadIndex_40() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____loadIndex_40)); }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * get__loadIndex_40() const { return ____loadIndex_40; }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C ** get_address_of__loadIndex_40() { return &____loadIndex_40; }
	inline void set__loadIndex_40(Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * value)
	{
		____loadIndex_40 = value;
		Il2CppCodeGenWriteBarrier((&____loadIndex_40), value);
	}

	inline static int32_t get_offset_of__loadIndexwithOriginalAdded_41() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____loadIndexwithOriginalAdded_41)); }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * get__loadIndexwithOriginalAdded_41() const { return ____loadIndexwithOriginalAdded_41; }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C ** get_address_of__loadIndexwithOriginalAdded_41() { return &____loadIndexwithOriginalAdded_41; }
	inline void set__loadIndexwithOriginalAdded_41(Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * value)
	{
		____loadIndexwithOriginalAdded_41 = value;
		Il2CppCodeGenWriteBarrier((&____loadIndexwithOriginalAdded_41), value);
	}

	inline static int32_t get_offset_of__loadIndexwithCurrentDeleted_42() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____loadIndexwithCurrentDeleted_42)); }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * get__loadIndexwithCurrentDeleted_42() const { return ____loadIndexwithCurrentDeleted_42; }
	inline Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C ** get_address_of__loadIndexwithCurrentDeleted_42() { return &____loadIndexwithCurrentDeleted_42; }
	inline void set__loadIndexwithCurrentDeleted_42(Index_t483B71D24BEA6600EDFDBA3CE165509D5DFF2D1C * value)
	{
		____loadIndexwithCurrentDeleted_42 = value;
		Il2CppCodeGenWriteBarrier((&____loadIndexwithCurrentDeleted_42), value);
	}

	inline static int32_t get_offset_of__suspendIndexEvents_43() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____suspendIndexEvents_43)); }
	inline int32_t get__suspendIndexEvents_43() const { return ____suspendIndexEvents_43; }
	inline int32_t* get_address_of__suspendIndexEvents_43() { return &____suspendIndexEvents_43; }
	inline void set__suspendIndexEvents_43(int32_t value)
	{
		____suspendIndexEvents_43 = value;
	}

	inline static int32_t get_offset_of__savedEnforceConstraints_44() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____savedEnforceConstraints_44)); }
	inline bool get__savedEnforceConstraints_44() const { return ____savedEnforceConstraints_44; }
	inline bool* get_address_of__savedEnforceConstraints_44() { return &____savedEnforceConstraints_44; }
	inline void set__savedEnforceConstraints_44(bool value)
	{
		____savedEnforceConstraints_44 = value;
	}

	inline static int32_t get_offset_of__inDataLoad_45() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____inDataLoad_45)); }
	inline bool get__inDataLoad_45() const { return ____inDataLoad_45; }
	inline bool* get_address_of__inDataLoad_45() { return &____inDataLoad_45; }
	inline void set__inDataLoad_45(bool value)
	{
		____inDataLoad_45 = value;
	}

	inline static int32_t get_offset_of__initialLoad_46() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____initialLoad_46)); }
	inline bool get__initialLoad_46() const { return ____initialLoad_46; }
	inline bool* get_address_of__initialLoad_46() { return &____initialLoad_46; }
	inline void set__initialLoad_46(bool value)
	{
		____initialLoad_46 = value;
	}

	inline static int32_t get_offset_of__schemaLoading_47() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____schemaLoading_47)); }
	inline bool get__schemaLoading_47() const { return ____schemaLoading_47; }
	inline bool* get_address_of__schemaLoading_47() { return &____schemaLoading_47; }
	inline void set__schemaLoading_47(bool value)
	{
		____schemaLoading_47 = value;
	}

	inline static int32_t get_offset_of__enforceConstraints_48() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____enforceConstraints_48)); }
	inline bool get__enforceConstraints_48() const { return ____enforceConstraints_48; }
	inline bool* get_address_of__enforceConstraints_48() { return &____enforceConstraints_48; }
	inline void set__enforceConstraints_48(bool value)
	{
		____enforceConstraints_48 = value;
	}

	inline static int32_t get_offset_of__suspendEnforceConstraints_49() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____suspendEnforceConstraints_49)); }
	inline bool get__suspendEnforceConstraints_49() const { return ____suspendEnforceConstraints_49; }
	inline bool* get_address_of__suspendEnforceConstraints_49() { return &____suspendEnforceConstraints_49; }
	inline void set__suspendEnforceConstraints_49(bool value)
	{
		____suspendEnforceConstraints_49 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_50() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ___fInitInProgress_50)); }
	inline bool get_fInitInProgress_50() const { return ___fInitInProgress_50; }
	inline bool* get_address_of_fInitInProgress_50() { return &___fInitInProgress_50; }
	inline void set_fInitInProgress_50(bool value)
	{
		___fInitInProgress_50 = value;
	}

	inline static int32_t get_offset_of__inLoad_51() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____inLoad_51)); }
	inline bool get__inLoad_51() const { return ____inLoad_51; }
	inline bool* get_address_of__inLoad_51() { return &____inLoad_51; }
	inline void set__inLoad_51(bool value)
	{
		____inLoad_51 = value;
	}

	inline static int32_t get_offset_of__fInLoadDiffgram_52() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____fInLoadDiffgram_52)); }
	inline bool get__fInLoadDiffgram_52() const { return ____fInLoadDiffgram_52; }
	inline bool* get_address_of__fInLoadDiffgram_52() { return &____fInLoadDiffgram_52; }
	inline void set__fInLoadDiffgram_52(bool value)
	{
		____fInLoadDiffgram_52 = value;
	}

	inline static int32_t get_offset_of__isTypedDataTable_53() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____isTypedDataTable_53)); }
	inline uint8_t get__isTypedDataTable_53() const { return ____isTypedDataTable_53; }
	inline uint8_t* get_address_of__isTypedDataTable_53() { return &____isTypedDataTable_53; }
	inline void set__isTypedDataTable_53(uint8_t value)
	{
		____isTypedDataTable_53 = value;
	}

	inline static int32_t get_offset_of__emptyDataRowArray_54() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____emptyDataRowArray_54)); }
	inline DataRowU5BU5D_t8CE09DCB1CAEFB0E90D5C16386CE0CC9EC56BE4D* get__emptyDataRowArray_54() const { return ____emptyDataRowArray_54; }
	inline DataRowU5BU5D_t8CE09DCB1CAEFB0E90D5C16386CE0CC9EC56BE4D** get_address_of__emptyDataRowArray_54() { return &____emptyDataRowArray_54; }
	inline void set__emptyDataRowArray_54(DataRowU5BU5D_t8CE09DCB1CAEFB0E90D5C16386CE0CC9EC56BE4D* value)
	{
		____emptyDataRowArray_54 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDataRowArray_54), value);
	}

	inline static int32_t get_offset_of__propertyDescriptorCollectionCache_55() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____propertyDescriptorCollectionCache_55)); }
	inline PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * get__propertyDescriptorCollectionCache_55() const { return ____propertyDescriptorCollectionCache_55; }
	inline PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 ** get_address_of__propertyDescriptorCollectionCache_55() { return &____propertyDescriptorCollectionCache_55; }
	inline void set__propertyDescriptorCollectionCache_55(PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * value)
	{
		____propertyDescriptorCollectionCache_55 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorCollectionCache_55), value);
	}

	inline static int32_t get_offset_of__nestedParentRelations_56() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____nestedParentRelations_56)); }
	inline DataRelationU5BU5D_t49D05A0A9C63B3BE96378F29A0F234799E930794* get__nestedParentRelations_56() const { return ____nestedParentRelations_56; }
	inline DataRelationU5BU5D_t49D05A0A9C63B3BE96378F29A0F234799E930794** get_address_of__nestedParentRelations_56() { return &____nestedParentRelations_56; }
	inline void set__nestedParentRelations_56(DataRelationU5BU5D_t49D05A0A9C63B3BE96378F29A0F234799E930794* value)
	{
		____nestedParentRelations_56 = value;
		Il2CppCodeGenWriteBarrier((&____nestedParentRelations_56), value);
	}

	inline static int32_t get_offset_of__dependentColumns_57() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____dependentColumns_57)); }
	inline List_1_tD1B5F34388A81AAF9D4852CF01BC58DE514E9923 * get__dependentColumns_57() const { return ____dependentColumns_57; }
	inline List_1_tD1B5F34388A81AAF9D4852CF01BC58DE514E9923 ** get_address_of__dependentColumns_57() { return &____dependentColumns_57; }
	inline void set__dependentColumns_57(List_1_tD1B5F34388A81AAF9D4852CF01BC58DE514E9923 * value)
	{
		____dependentColumns_57 = value;
		Il2CppCodeGenWriteBarrier((&____dependentColumns_57), value);
	}

	inline static int32_t get_offset_of__mergingData_58() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____mergingData_58)); }
	inline bool get__mergingData_58() const { return ____mergingData_58; }
	inline bool* get_address_of__mergingData_58() { return &____mergingData_58; }
	inline void set__mergingData_58(bool value)
	{
		____mergingData_58 = value;
	}

	inline static int32_t get_offset_of__onRowChangedDelegate_59() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onRowChangedDelegate_59)); }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * get__onRowChangedDelegate_59() const { return ____onRowChangedDelegate_59; }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 ** get_address_of__onRowChangedDelegate_59() { return &____onRowChangedDelegate_59; }
	inline void set__onRowChangedDelegate_59(DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * value)
	{
		____onRowChangedDelegate_59 = value;
		Il2CppCodeGenWriteBarrier((&____onRowChangedDelegate_59), value);
	}

	inline static int32_t get_offset_of__onRowChangingDelegate_60() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onRowChangingDelegate_60)); }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * get__onRowChangingDelegate_60() const { return ____onRowChangingDelegate_60; }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 ** get_address_of__onRowChangingDelegate_60() { return &____onRowChangingDelegate_60; }
	inline void set__onRowChangingDelegate_60(DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * value)
	{
		____onRowChangingDelegate_60 = value;
		Il2CppCodeGenWriteBarrier((&____onRowChangingDelegate_60), value);
	}

	inline static int32_t get_offset_of__onRowDeletingDelegate_61() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onRowDeletingDelegate_61)); }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * get__onRowDeletingDelegate_61() const { return ____onRowDeletingDelegate_61; }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 ** get_address_of__onRowDeletingDelegate_61() { return &____onRowDeletingDelegate_61; }
	inline void set__onRowDeletingDelegate_61(DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * value)
	{
		____onRowDeletingDelegate_61 = value;
		Il2CppCodeGenWriteBarrier((&____onRowDeletingDelegate_61), value);
	}

	inline static int32_t get_offset_of__onRowDeletedDelegate_62() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onRowDeletedDelegate_62)); }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * get__onRowDeletedDelegate_62() const { return ____onRowDeletedDelegate_62; }
	inline DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 ** get_address_of__onRowDeletedDelegate_62() { return &____onRowDeletedDelegate_62; }
	inline void set__onRowDeletedDelegate_62(DataRowChangeEventHandler_t221F3EE31CE4869B154388E225FB27115630BF48 * value)
	{
		____onRowDeletedDelegate_62 = value;
		Il2CppCodeGenWriteBarrier((&____onRowDeletedDelegate_62), value);
	}

	inline static int32_t get_offset_of__onColumnChangedDelegate_63() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onColumnChangedDelegate_63)); }
	inline DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * get__onColumnChangedDelegate_63() const { return ____onColumnChangedDelegate_63; }
	inline DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A ** get_address_of__onColumnChangedDelegate_63() { return &____onColumnChangedDelegate_63; }
	inline void set__onColumnChangedDelegate_63(DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * value)
	{
		____onColumnChangedDelegate_63 = value;
		Il2CppCodeGenWriteBarrier((&____onColumnChangedDelegate_63), value);
	}

	inline static int32_t get_offset_of__onColumnChangingDelegate_64() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onColumnChangingDelegate_64)); }
	inline DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * get__onColumnChangingDelegate_64() const { return ____onColumnChangingDelegate_64; }
	inline DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A ** get_address_of__onColumnChangingDelegate_64() { return &____onColumnChangingDelegate_64; }
	inline void set__onColumnChangingDelegate_64(DataColumnChangeEventHandler_t1DCD65C52BB90E58670CED726568A1077361F06A * value)
	{
		____onColumnChangingDelegate_64 = value;
		Il2CppCodeGenWriteBarrier((&____onColumnChangingDelegate_64), value);
	}

	inline static int32_t get_offset_of__onTableClearingDelegate_65() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onTableClearingDelegate_65)); }
	inline DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * get__onTableClearingDelegate_65() const { return ____onTableClearingDelegate_65; }
	inline DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF ** get_address_of__onTableClearingDelegate_65() { return &____onTableClearingDelegate_65; }
	inline void set__onTableClearingDelegate_65(DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * value)
	{
		____onTableClearingDelegate_65 = value;
		Il2CppCodeGenWriteBarrier((&____onTableClearingDelegate_65), value);
	}

	inline static int32_t get_offset_of__onTableClearedDelegate_66() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onTableClearedDelegate_66)); }
	inline DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * get__onTableClearedDelegate_66() const { return ____onTableClearedDelegate_66; }
	inline DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF ** get_address_of__onTableClearedDelegate_66() { return &____onTableClearedDelegate_66; }
	inline void set__onTableClearedDelegate_66(DataTableClearEventHandler_t2C19780E31638DFA0A59475A1A83CFC923381AEF * value)
	{
		____onTableClearedDelegate_66 = value;
		Il2CppCodeGenWriteBarrier((&____onTableClearedDelegate_66), value);
	}

	inline static int32_t get_offset_of__onTableNewRowDelegate_67() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onTableNewRowDelegate_67)); }
	inline DataTableNewRowEventHandler_tB40B0B8E6DFA791EE6F07A87445DAD1D361959EC * get__onTableNewRowDelegate_67() const { return ____onTableNewRowDelegate_67; }
	inline DataTableNewRowEventHandler_tB40B0B8E6DFA791EE6F07A87445DAD1D361959EC ** get_address_of__onTableNewRowDelegate_67() { return &____onTableNewRowDelegate_67; }
	inline void set__onTableNewRowDelegate_67(DataTableNewRowEventHandler_tB40B0B8E6DFA791EE6F07A87445DAD1D361959EC * value)
	{
		____onTableNewRowDelegate_67 = value;
		Il2CppCodeGenWriteBarrier((&____onTableNewRowDelegate_67), value);
	}

	inline static int32_t get_offset_of__onPropertyChangingDelegate_68() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____onPropertyChangingDelegate_68)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get__onPropertyChangingDelegate_68() const { return ____onPropertyChangingDelegate_68; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of__onPropertyChangingDelegate_68() { return &____onPropertyChangingDelegate_68; }
	inline void set__onPropertyChangingDelegate_68(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		____onPropertyChangingDelegate_68 = value;
		Il2CppCodeGenWriteBarrier((&____onPropertyChangingDelegate_68), value);
	}

	inline static int32_t get_offset_of__rowBuilder_69() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____rowBuilder_69)); }
	inline DataRowBuilder_tBDF082891A1D28ECB024897D7FB3511A6629BA6F * get__rowBuilder_69() const { return ____rowBuilder_69; }
	inline DataRowBuilder_tBDF082891A1D28ECB024897D7FB3511A6629BA6F ** get_address_of__rowBuilder_69() { return &____rowBuilder_69; }
	inline void set__rowBuilder_69(DataRowBuilder_tBDF082891A1D28ECB024897D7FB3511A6629BA6F * value)
	{
		____rowBuilder_69 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_69), value);
	}

	inline static int32_t get_offset_of__delayedViews_70() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____delayedViews_70)); }
	inline List_1_t41A1BDF6D46B03A5A4E8DFA8599CF36ABBDAC92F * get__delayedViews_70() const { return ____delayedViews_70; }
	inline List_1_t41A1BDF6D46B03A5A4E8DFA8599CF36ABBDAC92F ** get_address_of__delayedViews_70() { return &____delayedViews_70; }
	inline void set__delayedViews_70(List_1_t41A1BDF6D46B03A5A4E8DFA8599CF36ABBDAC92F * value)
	{
		____delayedViews_70 = value;
		Il2CppCodeGenWriteBarrier((&____delayedViews_70), value);
	}

	inline static int32_t get_offset_of__dataViewListeners_71() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____dataViewListeners_71)); }
	inline List_1_t95FCFC0BAB0C4065B0833DB174801263567B9593 * get__dataViewListeners_71() const { return ____dataViewListeners_71; }
	inline List_1_t95FCFC0BAB0C4065B0833DB174801263567B9593 ** get_address_of__dataViewListeners_71() { return &____dataViewListeners_71; }
	inline void set__dataViewListeners_71(List_1_t95FCFC0BAB0C4065B0833DB174801263567B9593 * value)
	{
		____dataViewListeners_71 = value;
		Il2CppCodeGenWriteBarrier((&____dataViewListeners_71), value);
	}

	inline static int32_t get_offset_of__rowDiffId_72() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____rowDiffId_72)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__rowDiffId_72() const { return ____rowDiffId_72; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__rowDiffId_72() { return &____rowDiffId_72; }
	inline void set__rowDiffId_72(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____rowDiffId_72 = value;
		Il2CppCodeGenWriteBarrier((&____rowDiffId_72), value);
	}

	inline static int32_t get_offset_of__indexesLock_73() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____indexesLock_73)); }
	inline ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * get__indexesLock_73() const { return ____indexesLock_73; }
	inline ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 ** get_address_of__indexesLock_73() { return &____indexesLock_73; }
	inline void set__indexesLock_73(ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * value)
	{
		____indexesLock_73 = value;
		Il2CppCodeGenWriteBarrier((&____indexesLock_73), value);
	}

	inline static int32_t get_offset_of__ukColumnPositionForInference_74() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____ukColumnPositionForInference_74)); }
	inline int32_t get__ukColumnPositionForInference_74() const { return ____ukColumnPositionForInference_74; }
	inline int32_t* get_address_of__ukColumnPositionForInference_74() { return &____ukColumnPositionForInference_74; }
	inline void set__ukColumnPositionForInference_74(int32_t value)
	{
		____ukColumnPositionForInference_74 = value;
	}

	inline static int32_t get_offset_of__remotingFormat_75() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____remotingFormat_75)); }
	inline int32_t get__remotingFormat_75() const { return ____remotingFormat_75; }
	inline int32_t* get_address_of__remotingFormat_75() { return &____remotingFormat_75; }
	inline void set__remotingFormat_75(int32_t value)
	{
		____remotingFormat_75 = value;
	}

	inline static int32_t get_offset_of__objectID_77() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5, ____objectID_77)); }
	inline int32_t get__objectID_77() const { return ____objectID_77; }
	inline int32_t* get_address_of__objectID_77() { return &____objectID_77; }
	inline void set__objectID_77(int32_t value)
	{
		____objectID_77 = value;
	}
};

struct DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5_StaticFields
{
public:
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_76;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_76() { return static_cast<int32_t>(offsetof(DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5_StaticFields, ___s_objectTypeCount_76)); }
	inline int32_t get_s_objectTypeCount_76() const { return ___s_objectTypeCount_76; }
	inline int32_t* get_address_of_s_objectTypeCount_76() { return &___s_objectTypeCount_76; }
	inline void set_s_objectTypeCount_76(int32_t value)
	{
		___s_objectTypeCount_76 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_TC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ASSEMBLYNAME_T6F3EC58113268060348EE894DCB46F6EF6BBBB82_H
#define ASSEMBLYNAME_T6F3EC58113268060348EE894DCB46F6EF6BBBB82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
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
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
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
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___publicKey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keyToken_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
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
		Il2CppCodeGenWriteBarrier((&___version_13), value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
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
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T6F3EC58113268060348EE894DCB46F6EF6BBBB82_H
#ifndef STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#define STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T2CCDC54E0E8D078AF4A50E3A8B921B828A900034_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
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
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef SQLITEBASE_TD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_H
#define SQLITEBASE_TD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteBase
struct  SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22  : public SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC
{
public:

public:
};

struct SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_StaticFields
{
public:
	// System.Object Mono.Data.Sqlite.SQLiteBase::_lock
	RuntimeObject * ____lock_13;

public:
	inline static int32_t get_offset_of__lock_13() { return static_cast<int32_t>(offsetof(SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_StaticFields, ____lock_13)); }
	inline RuntimeObject * get__lock_13() const { return ____lock_13; }
	inline RuntimeObject ** get_address_of__lock_13() { return &____lock_13; }
	inline void set__lock_13(RuntimeObject * value)
	{
		____lock_13 = value;
		Il2CppCodeGenWriteBarrier((&____lock_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEBASE_TD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_H
#ifndef SQLITECALLBACK_T8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_H
#define SQLITECALLBACK_T8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCallback
struct  SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECALLBACK_T8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_H
#ifndef SQLITECOLLATION_T63134149A650D2790E73B5DEC0786482DEB8532F_H
#define SQLITECOLLATION_T63134149A650D2790E73B5DEC0786482DEB8532F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCollation
struct  SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOLLATION_T63134149A650D2790E73B5DEC0786482DEB8532F_H
#ifndef SQLITECOMMITCALLBACK_T67CC23E166824AAC082542C3EC4D8A23529FAF34_H
#define SQLITECOMMITCALLBACK_T67CC23E166824AAC082542C3EC4D8A23529FAF34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteCommitCallback
struct  SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMITCALLBACK_T67CC23E166824AAC082542C3EC4D8A23529FAF34_H
#ifndef SQLITEFINALCALLBACK_T09F966D4DABDA99023795ADF1B6D3F073F34E460_H
#define SQLITEFINALCALLBACK_T09F966D4DABDA99023795ADF1B6D3F073F34E460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteFinalCallback
struct  SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEFINALCALLBACK_T09F966D4DABDA99023795ADF1B6D3F073F34E460_H
#ifndef SQLITEROLLBACKCALLBACK_T1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F_H
#define SQLITEROLLBACKCALLBACK_T1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteRollbackCallback
struct  SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEROLLBACKCALLBACK_T1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F_H
#ifndef SQLITEUPDATECALLBACK_T59B68B9561895B098E7338EDBE7924A775347D1E_H
#define SQLITEUPDATECALLBACK_T59B68B9561895B098E7338EDBE7924A775347D1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteUpdateCallback
struct  SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEUPDATECALLBACK_T59B68B9561895B098E7338EDBE7924A775347D1E_H
#ifndef SQLITECOMMANDBUILDER_T508571DD399302A16741DEFCD4F69F1EA6DFE010_H
#define SQLITECOMMANDBUILDER_T508571DD399302A16741DEFCD4F69F1EA6DFE010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteCommandBuilder
struct  SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010  : public DbCommandBuilder_tB69598DFF5DCEE7BC323176594BA75E1128C73F7
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMANDBUILDER_T508571DD399302A16741DEFCD4F69F1EA6DFE010_H
#ifndef SQLITEEXCEPTION_T61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_H
#define SQLITEEXCEPTION_T61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteException
struct  SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61  : public DbException_t3952313B217CD117688BFFC5E864809BC13EF326
{
public:
	// Mono.Data.Sqlite.SQLiteErrorCode Mono.Data.Sqlite.SqliteException::_errorCode
	int32_t ____errorCode_17;

public:
	inline static int32_t get_offset_of__errorCode_17() { return static_cast<int32_t>(offsetof(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61, ____errorCode_17)); }
	inline int32_t get__errorCode_17() const { return ____errorCode_17; }
	inline int32_t* get_address_of__errorCode_17() { return &____errorCode_17; }
	inline void set__errorCode_17(int32_t value)
	{
		____errorCode_17 = value;
	}
};

struct SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteException::_errorMessages
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____errorMessages_18;

public:
	inline static int32_t get_offset_of__errorMessages_18() { return static_cast<int32_t>(offsetof(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_StaticFields, ____errorMessages_18)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__errorMessages_18() const { return ____errorMessages_18; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__errorMessages_18() { return &____errorMessages_18; }
	inline void set__errorMessages_18(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____errorMessages_18 = value;
		Il2CppCodeGenWriteBarrier((&____errorMessages_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEEXCEPTION_T61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_H
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.AssemblyName[]
struct AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * m_Items[1];

public:
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
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
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * m_Items[1];

public:
	inline SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  m_Items[1];

public:
	inline KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyInfo_tFB27F6364284236F653E61480F11552B2145541B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyInfo_tFB27F6364284236F653E61480F11552B2145541B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  value)
	{
		m_Items[index] = value;
	}
};
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * m_Items[1];

public:
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5501914E7BE497D24880C023C56B05EC5C2F9167_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m88386525B48C63BBEA4D45818CC1FD77D32347BC_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m303D4CB83E8551A1DD98E748A02F796DA08D84AE_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0B4BDFC69B7CED643AE1DAA4F9DDA3AA099DDFAB_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363  Dictionary_2_GetEnumerator_mF1C0D99F1D74161B52E54DFA0FAB1B2B938E2A8C_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA  Enumerator_get_Current_m0061A28BF5E798CAECEBC2A2DE893C3CBE6A326F_gshared (Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_gshared (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDE1F75EA7C681FE72A84AF54AD7E18054AAE6708_gshared (Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m527C751C50435A4D1DBF1AE4970C6A619AB0C03A_gshared (Enumerator_t1B6B9D67DCC2658E4249AC2BCEBE1A852ACC5363 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m11BB5317022F3432141FEEF1F93F7C4DF8E31559_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_CopyTo_mBC8DEE264FD7E346D098E28FB1D5096B0F9132FB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2_gshared (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m786A1D72D4E499C0776742D3B2921F47E3A54545_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m6F2BB7FC61476D210FA060962086B5B21FB1B6CA_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
extern "C" IL2CPP_METHOD_ATTR void List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4_gshared (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72_gshared (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(!0[])
extern "C" IL2CPP_METHOD_ATTR void List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62_gshared (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void System.Data.Common.DbException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void DbException__ctor_m5E3CA117E3633FD421F46CB9A3D42F6BECC6A0E6 (DbException_t3952313B217CD117688BFFC5E864809BC13EF326 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * p0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  p1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_m92A9E92B63C8832539C2AE3188AA7E2BE4F9EE48 (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method);
// System.Void System.Data.Common.DbException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void DbException__ctor_m692DA1770ECAC18D87B1CB7A17CEC57F9A1B4668 (DbException_t3952313B217CD117688BFFC5E864809BC13EF326 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbException__ctor_m3DF76C1DA407D3CFC6A77A159944325910409691 (DbException_t3952313B217CD117688BFFC5E864809BC13EF326 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Data.Common.DbProviderFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbProviderFactory__ctor_m4C9694B12B32C78FB5D6D3C8F1494678C1960032 (DbProviderFactory_tD73B41C9B22A4F92ADBD30FCED1C823DD48BAD00 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteFactory__ctor_m2E8A74EF837452B1ADFBBDBDF12BB1062953D9EE (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A (String_t* p0, bool p1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_GetSQLiteProviderServicesInstance_mC918A27517ECA3B759D72CECCE1E5EB04A7A98B8 (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::.ctor()
inline void List_1__ctor_m90C515B5EAB7A8E854702789F94ECF1F1688252C (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C" IL2CPP_METHOD_ATTR AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
extern "C" IL2CPP_METHOD_ATTR Assembly_t * Assembly_GetCallingAssembly_m0DB9F5D2B9770113FF2E239A9EB0DB0EC3A6E384 (const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Type[] System.Reflection.ReflectionTypeLoadException::get_Types()
extern "C" IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ReflectionTypeLoadException_get_Types_mF7DBBFDB3486667189D72A2A0B95DF42D463E3DE (ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::Add(!0)
inline void List_1_Add_m9849C6624ECEF724FA4265F5C9EFAF50C9E01DBB (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * __this, SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 *, SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.IntPtr[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1E0083CB21F1FE2109590AF0916893C349871CED (intptr_t p0, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.String)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  SqliteConvert_ToDateTime_mD11E43AC7D53666E1B3358885351F72C869073AE (SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC * __this, String_t* ___dateText0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteConvert::ToString(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteConvert_ToString_m117573497B52CDB27050EB4DF0E0990319083911 (SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___dateValue0, const RuntimeMethod* method);
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteConvert::TypeToAffinity(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToAffinity_m8D4F6A6593569E194FF8C546C51EE53D5D95F51E (Type_t * ___typ0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831 (const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29 (RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651 (RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___context0, RuntimeObject * ___returnValue1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteConvert::UTF8ToString(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteConvert_UTF8ToString_mE401D2C13A7A3D02FFE893F0194904DE7E9BDE81 (intptr_t ___nativestring0, int32_t ___nativestringlen1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SQLite3_UTF16::UTF16ToString(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SQLite3_UTF16_UTF16ToString_m4F22CBC5D94FA8C9E9559123E7EF90E3CC78A172 (intptr_t ___b0, int32_t ___nbytelen1, const RuntimeMethod* method);
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172 (intptr_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m90C1DFC565486245FC87239E40EF6DD3B0F812C1 (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, int64_t p0, AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, int64_t, AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared)(__this, p0, p1, method);
}
// System.Void Mono.Data.Sqlite.SqliteFunction/AggregateData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AggregateData__ctor_m7883B8DC63881FB721E5C7E4B2CFDDCE83B2E015 (AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m746802E1B5DC4EAD1D7893BEF90ADDBAFF2C9826 (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, int64_t p0, AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, int64_t, AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 *, const RuntimeMethod*))Dictionary_2_set_Item_m5501914E7BE497D24880C023C56B05EC5C2F9167_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m33D34AC73E57F20B852BC9A6B3934F75FA828C4B (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, int64_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, int64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m88386525B48C63BBEA4D45818CC1FD77D32347BC_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::get_Item(!0)
inline AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * Dictionary_2_get_Item_m1FDB23E2E0DB6D1161026DE015E96A4AEB14ACDA (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, int64_t p0, const RuntimeMethod* method)
{
	return ((  AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, int64_t, const RuntimeMethod*))Dictionary_2_get_Item_m303D4CB83E8551A1DD98E748A02F796DA08D84AE_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Remove(!0)
inline bool Dictionary_2_Remove_m31BD7948C87354AD5E605AFCFE3B1E5BE0004BC1 (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, int64_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, int64_t, const RuntimeMethod*))Dictionary_2_Remove_m0B4BDFC69B7CED643AE1DAA4F9DDA3AA099DDFAB_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::GetEnumerator()
inline Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  Dictionary_2_GetEnumerator_mE457CE3E5E26286210AB4ABB32B42E14171E3605 (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1C0D99F1D74161B52E54DFA0FAB1B2B938E2A8C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::get_Current()
inline KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  Enumerator_get_Current_m5C593A83F3C9AEF2ADE640DB555BDAC26201A7B2 (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  (*) (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *, const RuntimeMethod*))Enumerator_get_Current_m0061A28BF5E798CAECEBC2A2DE893C3CBE6A326F_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::get_Value()
inline AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * KeyValuePair_2_get_Value_m70973CA44C136B9D699B3D9E8697CCA64A66A3F8 (KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740 * __this, const RuntimeMethod* method)
{
	return ((  AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * (*) (KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::MoveNext()
inline bool Enumerator_MoveNext_mEE0752217911092E0E2798AA2D9BE9F69499D10B (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *, const RuntimeMethod*))Enumerator_MoveNext_mDE1F75EA7C681FE72A84AF54AD7E18054AAE6708_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Dispose()
inline void Enumerator_Dispose_mE5B765F86BE6C428D2DA532F0330FFE72C3545B7 (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *, const RuntimeMethod*))Enumerator_Dispose_m527C751C50435A4D1DBF1AE4970C6A619AB0C03A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Clear()
inline void Dictionary_2_Clear_mA5CF0060EC4F6FECC76E18CC752CD7AF3150C2EC (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *, const RuntimeMethod*))Dictionary_2_Clear_m11BB5317022F3432141FEEF1F93F7C4DF8E31559_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::.ctor()
inline void List_1__ctor_mF9BBAFA2DD37A9B7ECE1C717FEEAB0650B23FDF7 (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::GetEnumerator()
inline Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  List_1_GetEnumerator_m0662904D9347277ACC8194F4891ACBCD48E988B1 (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  (*) (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::get_Current()
inline SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * Enumerator_get_Current_m602DD7AD0BC51BB85FB05C7DC8E6FB8C0A36BE40 (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 * __this, const RuntimeMethod* method)
{
	return ((  SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * (*) (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * p0, const RuntimeMethod* method);
// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::get_FuncType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SQLiteCallback__ctor_m79B4107AE27B512637179F6E87AE6460A49CFDA7 (SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SQLiteFinalCallback__ctor_m338F77EFA86202332072673BE9F22FD98C7C12FD (SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteCollation::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SQLiteCollation__ctor_m8A2AE3B47E84B4C8AF59F1EF72F8D1E9AA79A98D (SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteFunctionAttribute_get_Name_mBD862035BEA7E62D28AA8F79E1DC78BFD845EC26 (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_Arguments_mBF2AA03977EB0BB4A880F9DF5B748E65529EBB69 (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::Add(!0)
inline void List_1_Add_m7295651A0327E83F10DBC7536FA234DC8DF096B7 (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * __this, SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 *, SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::MoveNext()
inline bool Enumerator_MoveNext_m056950DAF73943D18CF809E43EAC9941F9A3392D (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::Dispose()
inline void Enumerator_Dispose_m4226B46D2CA33FDA0A745377388A7396D83ECD42 (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::get_Count()
inline int32_t List_1_get_Count_mFCEB6CCD7A34FE91033D0BFE574B58DE0F40F41A (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::CopyTo(!0[],System.Int32)
inline void List_1_CopyTo_m1E9C8D6C3C6DDA9045BA4455C0AD9682986AE06C (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * __this, SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 *, SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A*, int32_t, const RuntimeMethod*))List_1_CopyTo_mBC8DEE264FD7E346D098E28FB1D5096B0F9132FB_gshared)(__this, p0, p1, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
inline void List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2 (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E *, const RuntimeMethod*))List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2_gshared)(__this, method);
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String)
extern "C" IL2CPP_METHOD_ATTR DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * SqliteConnection_GetSchema_m2FEDD3C7EE4C27711A9650B4BECEC009CD6278C4 (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * __this, String_t* ___collectionName0, const RuntimeMethod* method);
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
extern "C" IL2CPP_METHOD_ATTR DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4 (DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * __this, const RuntimeMethod* method);
// System.Object System.Data.DataRow::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626 (DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m786A1D72D4E499C0776742D3B2921F47E3A54545_gshared)(__this, p0, p1, method);
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * SqliteDataReader_GetSchemaTable_m8F543DEB176937A9B0F127F11B5AE27D4CAEB3EF (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, bool ___wantUniqueInfo0, bool ___wantDefaultValue1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* p0, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Item(!0)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8 (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6 (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared)(__this, method);
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteConnection::GetSchema(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * SqliteConnection_GetSchema_m3B8F4B17DB20CB210CBD75DA8DCEA0EA6CE1C10F (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * __this, String_t* ___collectionName0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___restrictionValues1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6F2BB7FC61476D210FA060962086B5B21FB1B6CA_gshared)(__this, p0, method);
}
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * DataRowCollection_get_Item_m88B2E81D23A9D603F3EE9C03DAF5757B012F9051 (DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Data.DataRow::IsNull(System.String)
extern "C" IL2CPP_METHOD_ATTR bool DataRow_IsNull_m61FDDD6F6E1C1EA72CECAAEF5083A1A7A399F721 (DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Data.DataRowCollection::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DataRowCollection_RemoveAt_mEEE3700F1C5AD46598364390F8F42D58486670DA (DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Data.DataRowCollection::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t DataRowCollection_get_Count_m03CEE5E176D7DDED6DCE870CB21963EB4EEB2E6F (DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(!0[])
inline void List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*))List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared)(__this, p0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR void KeyQuery__ctor_mFC968766FE129954A29948E1E13174E7A7C771E9 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___columns3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(!0)
inline void List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4 (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E *, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B , const RuntimeMethod*))List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0 (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::get_Count()
inline int32_t List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72 (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E *, const RuntimeMethod*))List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(!0[])
inline void List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62 (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * __this, KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E *, KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141*, const RuntimeMethod*))List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62_gshared)(__this, p0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mAB6F41EC7E96AC96E43673C83095434691CA4C1E (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, int64_t ___rowid0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m116E81717A9A10398C60853EB9C84F8E9F9188A0 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteDataReader::GetDataTypeName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetDataTypeName_mE2024AFA722B8C88186C3229857DE5056C31E9DA (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Type Mono.Data.Sqlite.SqliteDataReader::GetFieldType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Type_t * SqliteDataReader_GetFieldType_m15C5D2559DF33A6766361D339BBF43E2FF6BD9FB (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442 (String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::GetBoolean(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SqliteDataReader_GetBoolean_m40AA22E1A765F4EA7B10CC89D95B5902F53CF181 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteDataReader::GetInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteDataReader_GetInt32_m5259C8F7F00DB32E77D9F0BAD6FAE7080FA92E27 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int64)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5CE30569A0A5B70CBD85954BEEF436F57D6FAE6B (int64_t p0, const RuntimeMethod* method);
// System.Int64 Mono.Data.Sqlite.SqliteDataReader::GetInt64(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t SqliteDataReader_GetInt64_m818A91671C0C37D2D247A40142EC1E9912DC7F31 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mA01BFA4EFA523B93F48D03811D44AE225059E0AD (int64_t p0, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteDataReader::GetString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteDataReader_GetString_m3E6C5D0772CD549F2B57C81B8041FAC7A5BAC034 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Object Mono.Data.Sqlite.SqliteDataReader::GetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteDataReader_GetValue_m04D01639C26B6C6922C5479D95D515AE6C47F42B (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_m833574F472252C0A6502AA6B971DB41F94874CFB (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::IsDBNull(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SqliteDataReader_IsDBNull_mBF7099DD07A4E5877280B788B39B4761B85DF1B0 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataTable::NewRow()
extern "C" IL2CPP_METHOD_ATTR DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * DataTable_NewRow_m2DFCF2FC5396D75DEDFF448292CD5DD27CB397EC (DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36 (DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
extern "C" IL2CPP_METHOD_ATTR void DataRowCollection_Add_mF002AD423E345821199C0F824F6A0F9717F7C934 (DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * __this, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * p0, const RuntimeMethod* method);
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable()
extern "C" IL2CPP_METHOD_ATTR DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * SqliteDataReader_GetSchemaTable_m7A50851907FE25CEE8F115AEBD45A41F38B51096 (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, const RuntimeMethod* method);
// System.Object[] System.Data.DataRow::get_ItemArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* DataRow_get_ItemArray_mD1A60F62F448D9EB6304797EA59E5215D34A8121 (DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * __this, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
extern "C" IL2CPP_METHOD_ATTR DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * DataRowCollection_Add_mDBC8A4205FCF0BA2CFB674F29C145BBDA4150418 (DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteCommandBuilder__ctor_m28BF584D0A21B934D3FE505C3FE40D0B992E6F69 (SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
extern "C" IL2CPP_METHOD_ATTR SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * SqliteConnection_CreateCommand_m77C6EFD385CBFFDFD99BB55304314FA249541D61 (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteCommandBuilder::QuoteIdentifier(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteCommandBuilder_QuoteIdentifier_mB324DE23BC43AE64B54D38679EE05A5A65AD6376 (SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * __this, String_t* ___unquotedIdentifier0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* p0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteCommand::set_CommandText(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8 (SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * __this, String_t* ___value0, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::get_Parameters()
extern "C" IL2CPP_METHOD_ATTR SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * SqliteCommand_get_Parameters_mBB384AD9AFDE93E94816FF4173E50AE553FC9E6E (SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * SqliteParameterCollection_AddWithValue_m1798A60330D3841D566943DB251E2E20A8CB5C2A (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m77591C20EDA3ADEE2FAF1987321D686E249326C5 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.DbDataReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DbDataReader_Dispose_m9B59B5128500E3105F7809F16555A4A5BC7DD4F8 (DbDataReader_t0ED965C6F824B838CEB2FE8BFB7F3F7441AA6E6A * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * SqliteParameterCollection_get_Item_m93B04004F3D8EE64B3E1AA82B03DF0E8F15F7C0C (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
extern "C" IL2CPP_METHOD_ATTR SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * SqliteCommand_ExecuteReader_m516C5AF0977CDC6B2D443D8DB27D6C5BB3B89FAA (SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteDataReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool SqliteDataReader_Read_mF595279478885DDBEF96AB1870834A04082F3C3C (SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.Component::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98 (Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m66E9B79FC1FB82517EE1AE0219893BEEBCD87A03 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbParameter__ctor_m094E9C9609738D521F11501B74EB23F97605EBFB (DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_Direction_m0B906222F158F93D8CCB1A28276A5F976AC014CD (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameter_get_IsNullable_mBF67EAEED87E87A551EB2B481D5C5AE07174D649 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_SourceColumn_m69CB9189127A09DC44988F825ABC6D153583EF00 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_SourceVersion_m74FBED6730C7063253306ED79CA79C4AE40ADCB9 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_get_Value_m9ADD7EB447CA0AE8D73B4DB6A3B83C1999E56C02 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m9016A7F80D5915FAC0B89D98FAB52FCB712EA6A9 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_IsNullable_m56C2BFBE4AA6496BAFB1A4D604D2C9078B98035E (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeToDbType(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToDbType_m57BC19FB64696CB3FB49A29D85D5782F5F77C854 (Type_t * ___typ0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mB29AB05EB0CA112F57CD266F660BAA25D81BCBD8 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___source0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameterCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbParameterCollection__ctor_mC2A9237E171278F28FA9B4ABA6AF40DF52D0C2D1 (DbParameterCollection_tBF8CFA8C17FF889800A919255D31DD448EF44E25 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::.ctor()
inline void List_1__ctor_mD692E4407A350882151EB3CC63AC49D4ACF144A6 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::GetEnumerator()
inline Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_mC7F704145E8B3584A64AB1AC0866CFAC98DA0693 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, String_t* ___parameterName0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Count()
inline int32_t List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Add(!0)
inline void List_1_Add_m43E6B4B43DC8C960F6C1C596323B435EE190D518 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_m1287A19B7D8BF14AF45149E8C8AB431CB13A2CC3 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * ___value1, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___parameter0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m9DDE3FF98F6BFEA5CCAAE992D171FE515826D94D (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Clear()
inline void List_1_Clear_m4A7019407D157423E20E7A6752BF6B867B7FFC88 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Contains(!0)
inline bool List_1_Contains_m25CFC152F09821F762F94CD8770D25297AEBD358 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * SqliteParameterCollection_GetParameter_m015CD377BC23086613E16A605BB3DB46A63956B8 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Item(System.Int32)
inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_mA1D43767F882FE677F238637A8785FCCEE7173D9 (String_t* p0, String_t* p1, bool p2, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * p3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::IndexOf(!0)
inline int32_t List_1_IndexOf_m45DB29E25FE0C6FD22CEB35CA947F643D08D0B58 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Insert(System.Int32,!0)
inline void List_1_Insert_m2D7197245FE3F2274C0EA5A7A3138D8D51A67935 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, int32_t p0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, int32_t, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Remove(!0)
inline bool List_1_Remove_mB67152924646D9D64A118B7096F004E73EB0F8C2 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m296891A9A1BFD3418A3D7B052A11E78C6BFB1411 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m1D81B9584635381912B4FD24E756C455A92BFED0 (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * __this, int32_t p0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *, int32_t, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *, const RuntimeMethod*))List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::get_Current()
inline SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * Enumerator_get_Current_m76002F2243745A75C82BD71D1F9EC4455E2AF842 (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A * __this, const RuntimeMethod* method)
{
	return ((  SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * (*) (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Count()
inline int32_t List_1_get_Count_m09B8347E2D1D666868A6FAC36EBBA81A097AFB0C (List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Item(System.Int32)
inline SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * List_1_get_Item_m212C3517F24A4740785945298C16A93821613831 (List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * (*) (List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, String_t* ___s0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::MoveNext()
inline bool Enumerator_MoveNext_mBD222ED4102072B70ECC2FA400DA8C6D07CBCDCF (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::Dispose()
inline void Enumerator_Dispose_mDB3651C83114E493B47483FD2EA53DB9A6D4E05D (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C" IL2CPP_METHOD_ATTR int32_t String_Compare_m759578081B55965D2CE733DF538FA20554F2F874 (String_t* p0, int32_t p1, String_t* p2, int32_t p3, int32_t p4, bool p5, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * p6, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle_Dispose_mDBA1677ABB0EE5E4AB408B301A6FC58E2E75EBBF (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, int32_t ___index0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___param1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method);
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_mB89D51F642A72646BF1B1DEB831B289DEEF780BE (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method);
// System.Boolean System.Convert::IsDBNull(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Convert_IsDBNull_m5523BC521CD361615CE6846388C7BD5BA1EDDCE5 (RuntimeObject * p0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Convert_ToDateTime_m246003CF3103F7DF9D6E817DCEFAE2CF8068862D (RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5D40340597602FB6C20BAB933E8B29617232757A (RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::get_Connection()
extern "C" IL2CPP_METHOD_ATTR SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * SqliteCommand_get_Connection_mB35E89C4DD93FE72169950AC39570612B9B8E7C1 (SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * __this, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223 (Guid_t * __this, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mD8F65E8B251DBE61789CAD032172D089375D1E5B (RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01 (String_t* __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m152074FB4DE5C4E2AD2A63A3CF29AF4F5A841DF6 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::SetHandle(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle_SetHandle_m4EE9D69A73EF79440558738F688DA93682B8A955 (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CriticalHandle__ctor_m63298C852798FD29EC96265E0D6F5B3E72398349 (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C" IL2CPP_METHOD_ATTR void SQLiteBase_FinalizeStatement_mA499964E3E9E97268087C04D657580CFAEFFA0A8 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * ___stmt0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m127A0778D9512F1AC26FB2F6547F79DFF1605E5E (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, intptr_t ___stmt0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DbTransaction__ctor_m02B1310E3417F328B6142990E91F88A3F963490C (DbTransaction_t52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteCommand::ExecuteNonQuery()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteCommand_ExecuteNonQuery_m46ECDF991307A735E976587EB18128F5C7E393E0 (SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763 (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, bool ___throwError0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m6BF933A7C999B14412A2C360978152C6CE8A66DF (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DbTransaction_Dispose_m2DB28F0B9D36D863918A2BA6A0A46ADD52811B67 (DbTransaction_t52F1CAD60711C813FF0A2E53ACEDB7FA4D9D78C1 * __this, bool p0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m9D3603391C4A072270DC28972DAE292C6D70E04C (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___cnn0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteConnection_get_State_mD2E7BFA6BE93E66DA01D0C003FE3D1B223671C2F (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void SqliteException__ctor_m00E03BF10E5C2BBBD9C039A5F86DB5A7C8556E25 (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		DbException__ctor_m5E3CA117E3633FD421F46CB9A3D42F6BECC6A0E6(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___extendedInformation1;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		String_t* L_2 = SqliteException_GetStockErrorMessage_m92A9E92B63C8832539C2AE3188AA7E2BE4F9EE48(L_0, L_1, /*hidden argument*/NULL);
		DbException__ctor_m692DA1770ECAC18D87B1CB7A17CEC57F9A1B4668(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___errorCode0;
		__this->set__errorCode_17(L_3);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteException__ctor_m232EE374B2BF1B237EDF50DA7B2ADAE74288E287 (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * __this, const RuntimeMethod* method)
{
	{
		DbException__ctor_m3DF76C1DA407D3CFC6A77A159944325910409691(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteException__cctor_mA26653BB670E78848371F715F8B22D352DE52E3C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException__cctor_mA26653BB670E78848371F715F8B22D352DE52E3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC41E97B906298C39611A796CAB1539411C1CF874);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC41E97B906298C39611A796CAB1539411C1CF874);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral84B715DD42CB515250F3406C66517DD9D7115450);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral84B715DD42CB515250F3406C66517DD9D7115450);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralA7362D38845D769AB9292607291056855E2183B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralA7362D38845D769AB9292607291056855E2183B1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralD87C8562414047004383CEFAB06DDE994AB29260);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralD87C8562414047004383CEFAB06DDE994AB29260);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral89865DF2AE553E13CE078A7680590FE066489642);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral89865DF2AE553E13CE078A7680590FE066489642);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralC039B00BFF507642D69C98D494E70774AA200821);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralC039B00BFF507642D69C98D494E70774AA200821);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064);
		((SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var))->set__errorMessages_18(L_27);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_m92A9E92B63C8832539C2AE3188AA7E2BE4F9EE48 (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException_GetStockErrorMessage_m92A9E92B63C8832539C2AE3188AA7E2BE4F9EE48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___errorMessage1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		___errorMessage1 = L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___errorMessage1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = ___errorMessage1;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, L_4, /*hidden argument*/NULL);
		___errorMessage1 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = ___errorCode0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = ___errorCode0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = ((SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var))->get__errorMessages_18();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_003d;
		}
	}

IL_003a:
	{
		___errorCode0 = 1;
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = ((SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var))->get__errorMessages_18();
		int32_t L_10 = ___errorCode0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		String_t* L_13 = ___errorMessage1;
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
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
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteFactory__ctor_m2E8A74EF837452B1ADFBBDBDF12BB1062953D9EE (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * __this, const RuntimeMethod* method)
{
	{
		DbProviderFactory__ctor_m4C9694B12B32C78FB5D6D3C8F1494678C1960032(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFactory::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteFactory__cctor_mE7DAD9EA3540B45324FDECD81997AFCFC8131983 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory__cctor_mE7DAD9EA3540B45324FDECD81997AFCFC8131983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * L_0 = (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 *)il2cpp_codegen_object_new(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		SqliteFactory__ctor_m2E8A74EF837452B1ADFBBDBDF12BB1062953D9EE(L_0, /*hidden argument*/NULL);
		((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteralBA7B74E6880085D4646D2D47931AD9243932EB41, (bool)0, "Mono.Data.Sqlite, Version=2.0.0.0, Culture=neutral, PublicKeyToken=null");
		((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->set__dbProviderServicesType_1(L_1);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::System.IServiceProvider.GetService(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_System_IServiceProvider_GetService_m47D940F96D3A03AA4D54B3D98F2D47BC2D72DBD8 (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * __this, Type_t * ___serviceType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory_System_IServiceProvider_GetService_m47D940F96D3A03AA4D54B3D98F2D47BC2D72DBD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (ISQLiteSchemaExtensions_tC1D0C2452CDDE025E2DC15D61C6CA061879441D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		Type_t * L_3 = ((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->get__dbProviderServicesType_1();
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_4 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		Type_t * L_5 = ((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->get__dbProviderServicesType_1();
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_002c;
		}
	}

IL_0025:
	{
		RuntimeObject * L_6 = SqliteFactory_GetSQLiteProviderServicesInstance_mC918A27517ECA3B759D72CECCE1E5EB04A7A98B8(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_002c:
	{
		return NULL;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_GetSQLiteProviderServicesInstance_mC918A27517ECA3B759D72CECCE1E5EB04A7A98B8 (SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory_GetSQLiteProviderServicesInstance_mC918A27517ECA3B759D72CECCE1E5EB04A7A98B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->get__sqliteServices_2();
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral246AFB2A711D8CCEC2D90C6953074DABA1E3FF7E, (bool)0, "Mono.Data.Sqlite, Version=2.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_1;
		Type_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t * L_4 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5F97F8775628E86310829AB9E8C465258AB92A5E, ((int32_t)44));
		V_1 = L_4;
		FieldInfo_t * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->set__sqliteServices_2(L_6);
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = ((SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_tAFE65A71218234F02026C1831C033AD8AA8B1103_il2cpp_TypeInfo_var))->get__sqliteServices_2();
		return L_7;
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
// System.Void Mono.Data.Sqlite.SqliteFunction::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction__cctor_m5991F910BEF1E66870F70F08702502DCFBA635FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction__cctor_m5991F910BEF1E66870F70F08702502DCFBA635FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * V_0 = NULL;
	AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* V_1 = NULL;
	int32_t V_2 = 0;
	AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * V_3 = NULL;
	int32_t V_4 = 0;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_5 = NULL;
	bool V_6 = false;
	AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * L_0 = (List_1_t8899912E5352046EE5CC00DE08B819A818A19722 *)il2cpp_codegen_object_new(List_1_t8899912E5352046EE5CC00DE08B819A818A19722_il2cpp_TypeInfo_var);
		List_1__ctor_m90C515B5EAB7A8E854702789F94ECF1F1688252C(L_0, /*hidden argument*/List_1__ctor_m90C515B5EAB7A8E854702789F94ECF1F1688252C_RuntimeMethod_var);
		((SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var))->set__registeredFunctions_8(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_1 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
			NullCheck(L_1);
			AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_2 = AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23(L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_3 = V_1;
			NullCheck(L_3);
			V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))));
			Assembly_t * L_4 = Assembly_GetCallingAssembly_m0DB9F5D2B9770113FF2E239A9EB0DB0EC3A6E384(/*hidden argument*/NULL);
			NullCheck(L_4);
			AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_5 = VirtFuncInvoker0< AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * >::Invoke(22 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_4);
			V_3 = L_5;
			V_4 = 0;
			goto IL_0132;
		}

IL_002c:
		{
			V_6 = (bool)0;
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_6 = V_1;
				int32_t L_7 = V_4;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Assembly_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				NullCheck(L_9);
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_10 = VirtFuncInvoker0< AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* >::Invoke(29 /* System.Reflection.AssemblyName[] System.Reflection.Assembly::GetReferencedAssemblies() */, L_9);
				V_7 = L_10;
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_11 = V_7;
				NullCheck(L_11);
				V_8 = (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))));
				V_9 = 0;
				goto IL_0070;
			}

IL_0048:
			{
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_12 = V_7;
				int32_t L_13 = V_9;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				NullCheck(L_15);
				String_t* L_16 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B(L_15, /*hidden argument*/NULL);
				AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_17 = V_3;
				NullCheck(L_17);
				String_t* L_18 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B(L_17, /*hidden argument*/NULL);
				bool L_19 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, L_18, /*hidden argument*/NULL);
				if (!L_19)
				{
					goto IL_006a;
				}
			}

IL_0062:
			{
				V_6 = (bool)1;
				goto IL_0079;
			}

IL_006a:
			{
				int32_t L_20 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
			}

IL_0070:
			{
				int32_t L_21 = V_9;
				int32_t L_22 = V_8;
				if ((((int32_t)L_21) < ((int32_t)L_22)))
				{
					goto IL_0048;
				}
			}

IL_0079:
			{
				bool L_23 = V_6;
				if (L_23)
				{
					goto IL_0085;
				}
			}

IL_0080:
			{
				goto IL_012c;
			}

IL_0085:
			{
				AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_24 = V_1;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				Assembly_t * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				NullCheck(L_27);
				TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_28 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_27);
				V_5 = L_28;
				goto IL_00a5;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0095;
			throw e;
		}

CATCH_0095:
		{ // begin catch(System.Reflection.ReflectionTypeLoadException)
			V_10 = ((ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 *)__exception_local);
			ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 * L_29 = V_10;
			NullCheck(L_29);
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_30 = ReflectionTypeLoadException_get_Types_mF7DBBFDB3486667189D72A2A0B95DF42D463E3DE(L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			goto IL_00a5;
		} // end catch (depth: 2)

IL_00a5:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_31 = V_5;
			NullCheck(L_31);
			V_11 = (((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length))));
			V_12 = 0;
			goto IL_0123;
		}

IL_00b3:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_32 = V_5;
			int32_t L_33 = V_12;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			Type_t * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			if (L_35)
			{
				goto IL_00c2;
			}
		}

IL_00bd:
		{
			goto IL_011d;
		}

IL_00c2:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_36 = V_5;
			int32_t L_37 = V_12;
			NullCheck(L_36);
			int32_t L_38 = L_37;
			Type_t * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
			NullCheck(L_39);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_39, L_41, (bool)0);
			V_13 = L_42;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = V_13;
			NullCheck(L_43);
			V_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length))));
			V_15 = 0;
			goto IL_0114;
		}

IL_00e7:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = V_13;
			int32_t L_45 = V_15;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			RuntimeObject * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_0 = ((SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA *)IsInstSealed((RuntimeObject*)L_47, SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA_il2cpp_TypeInfo_var));
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_48 = V_0;
			if (!L_48)
			{
				goto IL_010e;
			}
		}

IL_00f8:
		{
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_49 = V_0;
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_50 = V_5;
			int32_t L_51 = V_12;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			Type_t * L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
			NullCheck(L_49);
			L_49->set__instanceType_3(L_53);
			List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * L_54 = ((SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var))->get__registeredFunctions_8();
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_55 = V_0;
			NullCheck(L_54);
			List_1_Add_m9849C6624ECEF724FA4265F5C9EFAF50C9E01DBB(L_54, L_55, /*hidden argument*/List_1_Add_m9849C6624ECEF724FA4265F5C9EFAF50C9E01DBB_RuntimeMethod_var);
		}

IL_010e:
		{
			int32_t L_56 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		}

IL_0114:
		{
			int32_t L_57 = V_15;
			int32_t L_58 = V_14;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00e7;
			}
		}

IL_011d:
		{
			int32_t L_59 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_0123:
		{
			int32_t L_60 = V_12;
			int32_t L_61 = V_11;
			if ((((int32_t)L_60) < ((int32_t)L_61)))
			{
				goto IL_00b3;
			}
		}

IL_012c:
		{
			int32_t L_62 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		}

IL_0132:
		{
			int32_t L_63 = V_4;
			int32_t L_64 = V_2;
			if ((((int32_t)L_63) < ((int32_t)L_64)))
			{
				goto IL_002c;
			}
		}

IL_013a:
		{
			goto IL_0145;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_013f;
		throw e;
	}

CATCH_013f:
	{ // begin catch(System.Object)
		goto IL_0145;
	} // end catch (depth: 1)

IL_0145:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteFunction_Invoke_m14D4866255F4A411DCC318178CC00919780E0FF6 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_Step_mBD24B6B0C9CF2CE0AFDC0B47146B7D1399BCFD09 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, int32_t ___stepNumber1, RuntimeObject ** ___contextData2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteFunction_Final_m9316C09C28F538A6DB401C44EE03EF7341751775 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, RuntimeObject * ___contextData0, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunction_Compare_m88B67FCD6EA8E145F7383CDAFBF6285A063A2E1C (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, String_t* ___param10, String_t* ___param21, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___nArgs0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___nArgs0;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_3 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		intptr_t L_4 = ___argsptr1;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_5 = V_1;
		int32_t L_6 = ___nArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m1E0083CB21F1FE2109590AF0916893C349871CED((intptr_t)L_4, L_5, 0, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0121;
	}

IL_001e:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_7 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		intptr_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(48 /* Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteBase::GetParamValueType(System.IntPtr) */, L_7, (intptr_t)L_11);
		V_5 = L_12;
		int32_t L_13 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00bd;
			}
			case 4:
			{
				goto IL_0064;
			}
			case 5:
			{
				goto IL_011d;
			}
			case 6:
			{
				goto IL_011d;
			}
			case 7:
			{
				goto IL_011d;
			}
			case 8:
			{
				goto IL_011d;
			}
			case 9:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_011d;
	}

IL_0064:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		int32_t L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_16 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
		goto IL_011d;
	}

IL_0071:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
		int32_t L_18 = V_2;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_19 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		intptr_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		int64_t L_24 = VirtFuncInvoker1< int64_t, intptr_t >::Invoke(46 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueInt64(System.IntPtr) */, L_19, (intptr_t)L_23);
		int64_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_26);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject *)L_26);
		goto IL_011d;
	}

IL_008c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = V_0;
		int32_t L_28 = V_2;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_29 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		intptr_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		double L_34 = VirtFuncInvoker1< double, intptr_t >::Invoke(45 /* System.Double Mono.Data.Sqlite.SQLiteBase::GetParamValueDouble(System.IntPtr) */, L_29, (intptr_t)L_33);
		double L_35 = L_34;
		RuntimeObject * L_36 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_36);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject *)L_36);
		goto IL_011d;
	}

IL_00a7:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = V_0;
		int32_t L_38 = V_2;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_39 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_40 = V_1;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		intptr_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		String_t* L_44 = VirtFuncInvoker1< String_t*, intptr_t >::Invoke(47 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_39, (intptr_t)L_43);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_44);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_44);
		goto IL_011d;
	}

IL_00bd:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_45 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_46 = V_1;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		intptr_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int64_t L_50 = VirtFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(44 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_45, (intptr_t)L_49, 0, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, 0, 0);
		V_3 = (((int32_t)((int32_t)L_50)));
		int32_t L_51 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_51);
		V_4 = L_52;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_53 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_54 = V_1;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		intptr_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_58 = V_4;
		int32_t L_59 = V_3;
		NullCheck(L_53);
		VirtFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(44 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_53, (intptr_t)L_57, 0, L_58, 0, L_59);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_60 = V_0;
		int32_t L_61 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_4;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (RuntimeObject *)L_62);
		goto IL_011d;
	}

IL_00f7:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = V_0;
		int32_t L_64 = V_2;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_65 = __this->get__base_0();
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_66 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		intptr_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		String_t* L_71 = VirtFuncInvoker1< String_t*, intptr_t >::Invoke(47 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_66, (intptr_t)L_70);
		NullCheck(L_65);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_72 = SqliteConvert_ToDateTime_mD11E43AC7D53666E1B3358885351F72C869073AE(L_65, L_71, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_73 = L_72;
		RuntimeObject * L_74 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_74);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (RuntimeObject *)L_74);
		goto IL_011d;
	}

IL_011d:
	{
		int32_t L_75 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0121:
	{
		int32_t L_76 = V_2;
		int32_t L_77 = ___nArgs0;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = V_0;
		return L_78;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___context0, RuntimeObject * ___returnValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___returnValue1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject * L_1 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_2 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0011:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_3 = __this->get__base_0();
		intptr_t L_4 = ___context0;
		NullCheck(L_3);
		VirtActionInvoker1< intptr_t >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_3, (intptr_t)L_4);
		return;
	}

IL_001e:
	{
		RuntimeObject * L_5 = ___returnValue1;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Type_t * L_7 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_7) == ((RuntimeObject*)(Type_t *)L_9))))
		{
			goto IL_0053;
		}
	}
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_10 = __this->get__base_0();
		intptr_t L_11 = ___context0;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_12 = __this->get__base_0();
		RuntimeObject * L_13 = ___returnValue1;
		NullCheck(L_12);
		String_t* L_14 = SqliteConvert_ToString_m117573497B52CDB27050EB4DF0E0990319083911(L_12, ((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_13, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(54 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_10, (intptr_t)L_11, L_14);
		return;
	}

IL_0053:
	{
		RuntimeObject * L_15 = ___returnValue1;
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_15, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_16 = V_1;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_17 = __this->get__base_0();
		intptr_t L_18 = ___context0;
		Exception_t * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		NullCheck(L_17);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(51 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnError(System.IntPtr,System.String) */, L_17, (intptr_t)L_18, L_20);
		return;
	}

IL_0073:
	{
		Type_t * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var);
		int32_t L_22 = SqliteConvert_TypeToAffinity_m8D4F6A6593569E194FF8C546C51EE53D5D95F51E(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		int32_t L_23 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00a8;
			}
			case 1:
			{
				goto IL_00c0;
			}
			case 2:
			{
				goto IL_00d8;
			}
			case 3:
			{
				goto IL_00eb;
			}
			case 4:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00fe;
	}

IL_009b:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_24 = __this->get__base_0();
		intptr_t L_25 = ___context0;
		NullCheck(L_24);
		VirtActionInvoker1< intptr_t >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_24, (intptr_t)L_25);
		return;
	}

IL_00a8:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_26 = __this->get__base_0();
		intptr_t L_27 = ___context0;
		RuntimeObject * L_28 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_29 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_30 = Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker2< intptr_t, int64_t >::Invoke(52 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnInt64(System.IntPtr,System.Int64) */, L_26, (intptr_t)L_27, L_30);
		return;
	}

IL_00c0:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_31 = __this->get__base_0();
		intptr_t L_32 = ___context0;
		RuntimeObject * L_33 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_34 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_35 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker2< intptr_t, double >::Invoke(50 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnDouble(System.IntPtr,System.Double) */, L_31, (intptr_t)L_32, L_35);
		return;
	}

IL_00d8:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_36 = __this->get__base_0();
		intptr_t L_37 = ___context0;
		RuntimeObject * L_38 = ___returnValue1;
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		NullCheck(L_36);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(54 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_36, (intptr_t)L_37, L_39);
		return;
	}

IL_00eb:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_40 = __this->get__base_0();
		intptr_t L_41 = ___context0;
		RuntimeObject * L_42 = ___returnValue1;
		NullCheck(L_40);
		VirtActionInvoker2< intptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(49 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnBlob(System.IntPtr,System.Byte[]) */, L_40, (intptr_t)L_41, ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_42, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
		return;
	}

IL_00fe:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::ScalarCallback(System.IntPtr,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_ScalarCallback_m126C2982DF3212030DAB73E3D488909C226AD681 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___context0;
		__this->set__context_7((intptr_t)L_0);
		intptr_t L_1 = ___context0;
		int32_t L_2 = ___nArgs1;
		intptr_t L_3 = ___argsptr2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B(__this, L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(5 /* System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[]) */, __this, L_4);
		SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901(__this, (intptr_t)L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback_m54D26B5A7CFF285AA6227591E2484ACF5DEB66D1 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_CompareCallback_m54D26B5A7CFF285AA6227591E2484ACF5DEB66D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var);
		String_t* L_2 = SqliteConvert_UTF8ToString_mE401D2C13A7A3D02FFE893F0194904DE7E9BDE81((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5 = SqliteConvert_UTF8ToString_mE401D2C13A7A3D02FFE893F0194904DE7E9BDE81((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(8 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback16(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback16_mC2D07A15F43AF0085F129BB4A61F0428E3D20174 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		String_t* L_2 = SQLite3_UTF16_UTF16ToString_m4F22CBC5D94FA8C9E9559123E7EF90E3CC78A172((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5 = SQLite3_UTF16_UTF16ToString_m4F22CBC5D94FA8C9E9559123E7EF90E3CC78A172((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(8 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::StepCallback(System.IntPtr,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_StepCallback_mADB6A6DF1DE29D8DE5C36C4FBC958FDDA4E6C778 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_StepCallback_mADB6A6DF1DE29D8DE5C36C4FBC958FDDA4E6C778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_0 = __this->get__base_0();
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2 = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(43 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, (intptr_t)L_1);
		int64_t L_3 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_4 = __this->get__contextDataList_1();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_TryGetValue_m90C1DFC565486245FC87239E40EF6DD3B0F812C1(L_4, L_5, (AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m90C1DFC565486245FC87239E40EF6DD3B0F812C1_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_7 = (AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 *)il2cpp_codegen_object_new(AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73_il2cpp_TypeInfo_var);
		AggregateData__ctor_m7883B8DC63881FB721E5C7E4B2CFDDCE83B2E015(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_8 = __this->get__contextDataList_1();
		int64_t L_9 = V_0;
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_10 = V_1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m746802E1B5DC4EAD1D7893BEF90ADDBAFF2C9826(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m746802E1B5DC4EAD1D7893BEF90ADDBAFF2C9826_RuntimeMethod_var);
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		intptr_t L_11 = ___context0;
		__this->set__context_7((intptr_t)L_11);
		int32_t L_12 = ___nArgs1;
		intptr_t L_13 = ___argsptr2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = SqliteFunction_ConvertParams_m1FFAF6003B8DC39643D688CE3E5CC33A4272F91B(__this, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__count_0();
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject ** L_18 = L_17->get_address_of__data_1();
		VirtActionInvoker3< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, RuntimeObject ** >::Invoke(6 /* System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&) */, __this, L_14, L_16, (RuntimeObject **)L_18);
		IL2CPP_LEAVE(0x6D, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_19 = V_1;
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get__count_0();
		NullCheck(L_20);
		L_20->set__count_0(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006d:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::FinalCallback(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_FinalCallback_m5B886B4AA4B84556F664D8937F4DA9314E63E0B5 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, intptr_t ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_FinalCallback_m5B886B4AA4B84556F664D8937F4DA9314E63E0B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_0 = __this->get__base_0();
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2 = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(43 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, (intptr_t)L_1);
		int64_t L_3 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = NULL;
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_4 = __this->get__contextDataList_1();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m33D34AC73E57F20B852BC9A6B3934F75FA828C4B(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m33D34AC73E57F20B852BC9A6B3934F75FA828C4B_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_7 = __this->get__contextDataList_1();
		int64_t L_8 = V_0;
		NullCheck(L_7);
		AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_9 = Dictionary_2_get_Item_m1FDB23E2E0DB6D1161026DE015E96A4AEB14ACDA(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m1FDB23E2E0DB6D1161026DE015E96A4AEB14ACDA_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject * L_10 = L_9->get__data_1();
		V_1 = L_10;
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_11 = __this->get__contextDataList_1();
		int64_t L_12 = V_0;
		NullCheck(L_11);
		Dictionary_2_Remove_m31BD7948C87354AD5E605AFCFE3B1E5BE0004BC1(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m31BD7948C87354AD5E605AFCFE3B1E5BE0004BC1_RuntimeMethod_var);
	}

IL_0044:
	{
		intptr_t L_13 = ___context0;
		__this->set__context_7((intptr_t)L_13);
		intptr_t L_14 = ___context0;
		RuntimeObject * L_15 = V_1;
		RuntimeObject * L_16 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(7 /* System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object) */, __this, L_15);
		SqliteFunction_SetReturnValue_m99F0B264E4E5E78C38B326AF078A867E26D9C901(__this, (intptr_t)L_14, L_16, /*hidden argument*/NULL);
		RuntimeObject * L_17 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_2;
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_19 = V_2;
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_19);
	}

IL_006c:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_Dispose_mA5CEE0D5FEA2A306822221BFFF0AE7A5D084E0C0 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_Dispose_mA5CEE0D5FEA2A306822221BFFF0AE7A5D084E0C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_008f;
		}
	}
	{
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_1 = __this->get__contextDataList_1();
		NullCheck(L_1);
		Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  L_2 = Dictionary_2_GetEnumerator_mE457CE3E5E26286210AB4ABB32B42E14171E3605(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mE457CE3E5E26286210AB4ABB32B42E14171E3605_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_0017:
		{
			KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740  L_3 = Enumerator_get_Current_m5C593A83F3C9AEF2ADE640DB555BDAC26201A7B2((Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m5C593A83F3C9AEF2ADE640DB555BDAC26201A7B2_RuntimeMethod_var);
			V_1 = L_3;
			AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * L_4 = KeyValuePair_2_get_Value_m70973CA44C136B9D699B3D9E8697CCA64A66A3F8((KeyValuePair_2_t33C7877E5E94406D1321B8B3C889C715DF948740 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m70973CA44C136B9D699B3D9E8697CCA64A66A3F8_RuntimeMethod_var);
			NullCheck(L_4);
			RuntimeObject * L_5 = L_4->get__data_1();
			V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_6 = V_0;
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
		}

IL_003d:
		{
			bool L_8 = Enumerator_MoveNext_mEE0752217911092E0E2798AA2D9BE9F69499D10B((Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mEE0752217911092E0E2798AA2D9BE9F69499D10B_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0017;
			}
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  L_9 = V_2;
		Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1  L_10 = L_9;
		RuntimeObject * L_11 = Box(Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_il2cpp_TypeInfo_var, &L_10);
		Enumerator_Dispose_mE5B765F86BE6C428D2DA532F0330FFE72C3545B7((Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1 *)UnBox(L_11, Enumerator_tA97FC24EC3A776BDB98BB1DD3EA9CE27FAE433A1_il2cpp_TypeInfo_var), /*hidden argument*/Enumerator_Dispose_mE5B765F86BE6C428D2DA532F0330FFE72C3545B7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 * L_12 = __this->get__contextDataList_1();
		NullCheck(L_12);
		Dictionary_2_Clear_mA5CF0060EC4F6FECC76E18CC752CD7AF3150C2EC(L_12, /*hidden argument*/Dictionary_2_Clear_mA5CF0060EC4F6FECC76E18CC752CD7AF3150C2EC_RuntimeMethod_var);
		__this->set__InvokeFunc_2((SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)NULL);
		__this->set__StepFunc_3((SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)NULL);
		__this->set__FinalFunc_4((SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 *)NULL);
		__this->set__CompareFunc_5((SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *)NULL);
		__this->set__base_0((SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 *)NULL);
		__this->set__contextDataList_1((Dictionary_2_t7D0815C9A97DA0F997F113AB886786424D99F865 *)NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SqliteFunction_Dispose_m7054673CDB3E5494AC2C2EE7CA905EB08EC1FB46 (SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Mono.Data.Sqlite.SqliteFunction::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// Mono.Data.Sqlite.SqliteFunction[] Mono.Data.Sqlite.SqliteFunction::BindFunctions(Mono.Data.Sqlite.SQLiteBase)
extern "C" IL2CPP_METHOD_ATTR SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* SqliteFunction_BindFunctions_m08B353766159483173D99813391A1A3DEC64E70A (SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * ___sqlbase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_BindFunctions_m08B353766159483173D99813391A1A3DEC64E70A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * V_0 = NULL;
	List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * V_1 = NULL;
	SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * V_2 = NULL;
	Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  V_3;
	memset(&V_3, 0, sizeof(V_3));
	SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B4_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B3_0 = NULL;
	SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * G_B5_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B5_1 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B7_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B6_0 = NULL;
	SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * G_B8_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B8_1 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B10_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B9_0 = NULL;
	SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * G_B11_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B11_1 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B13_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B12_0 = NULL;
	SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * G_B14_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B14_1 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B16_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B15_0 = NULL;
	SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * G_B17_0 = NULL;
	SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * G_B17_1 = NULL;
	{
		List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * L_0 = (List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 *)il2cpp_codegen_object_new(List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0_il2cpp_TypeInfo_var);
		List_1__ctor_mF9BBAFA2DD37A9B7ECE1C717FEEAB0650B23FDF7(L_0, /*hidden argument*/List_1__ctor_mF9BBAFA2DD37A9B7ECE1C717FEEAB0650B23FDF7_RuntimeMethod_var);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var);
		List_1_t8899912E5352046EE5CC00DE08B819A818A19722 * L_1 = ((SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var))->get__registeredFunctions_8();
		NullCheck(L_1);
		Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  L_2 = List_1_GetEnumerator_m0662904D9347277ACC8194F4891ACBCD48E988B1(L_1, /*hidden argument*/List_1_GetEnumerator_m0662904D9347277ACC8194F4891ACBCD48E988B1_RuntimeMethod_var);
		V_3 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0146;
		}

IL_0016:
		{
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_3 = Enumerator_get_Current_m602DD7AD0BC51BB85FB05C7DC8E6FB8C0A36BE40((Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m602DD7AD0BC51BB85FB05C7DC8E6FB8C0A36BE40_RuntimeMethod_var);
			V_2 = L_3;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_4 = V_2;
			NullCheck(L_4);
			Type_t * L_5 = L_4->get__instanceType_3();
			RuntimeObject * L_6 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_5, /*hidden argument*/NULL);
			V_0 = ((SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B *)CastclassClass((RuntimeObject*)L_6, SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B_il2cpp_TypeInfo_var));
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_7 = V_0;
			SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_8 = ___sqlbase0;
			NullCheck(L_7);
			L_7->set__base_0(L_8);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_9 = V_0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_10, /*hidden argument*/NULL);
			G_B3_0 = L_9;
			if (L_11)
			{
				G_B4_0 = L_9;
				goto IL_0053;
			}
		}

IL_0042:
		{
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_12 = V_0;
			SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * L_13 = (SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)il2cpp_codegen_object_new(SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_il2cpp_TypeInfo_var);
			SQLiteCallback__ctor_m79B4107AE27B512637179F6E87AE6460A49CFDA7(L_13, L_12, (intptr_t)((intptr_t)SqliteFunction_ScalarCallback_m126C2982DF3212030DAB73E3D488909C226AD681_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B5_0 = L_13;
			G_B5_1 = G_B3_0;
			goto IL_0054;
		}

IL_0053:
		{
			G_B5_0 = ((SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)(NULL));
			G_B5_1 = G_B4_0;
		}

IL_0054:
		{
			NullCheck(G_B5_1);
			G_B5_1->set__InvokeFunc_2(G_B5_0);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_14 = V_0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_15 = V_2;
			NullCheck(L_15);
			int32_t L_16 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_15, /*hidden argument*/NULL);
			G_B6_0 = L_14;
			if ((!(((uint32_t)L_16) == ((uint32_t)1))))
			{
				G_B7_0 = L_14;
				goto IL_0077;
			}
		}

IL_0066:
		{
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_17 = V_0;
			SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * L_18 = (SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)il2cpp_codegen_object_new(SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7_il2cpp_TypeInfo_var);
			SQLiteCallback__ctor_m79B4107AE27B512637179F6E87AE6460A49CFDA7(L_18, L_17, (intptr_t)((intptr_t)SqliteFunction_StepCallback_mADB6A6DF1DE29D8DE5C36C4FBC958FDDA4E6C778_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B8_0 = L_18;
			G_B8_1 = G_B6_0;
			goto IL_0078;
		}

IL_0077:
		{
			G_B8_0 = ((SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *)(NULL));
			G_B8_1 = G_B7_0;
		}

IL_0078:
		{
			NullCheck(G_B8_1);
			G_B8_1->set__StepFunc_3(G_B8_0);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_19 = V_0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_20 = V_2;
			NullCheck(L_20);
			int32_t L_21 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_20, /*hidden argument*/NULL);
			G_B9_0 = L_19;
			if ((!(((uint32_t)L_21) == ((uint32_t)1))))
			{
				G_B10_0 = L_19;
				goto IL_009b;
			}
		}

IL_008a:
		{
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_22 = V_0;
			SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * L_23 = (SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 *)il2cpp_codegen_object_new(SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460_il2cpp_TypeInfo_var);
			SQLiteFinalCallback__ctor_m338F77EFA86202332072673BE9F22FD98C7C12FD(L_23, L_22, (intptr_t)((intptr_t)SqliteFunction_FinalCallback_m5B886B4AA4B84556F664D8937F4DA9314E63E0B5_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B11_0 = L_23;
			G_B11_1 = G_B9_0;
			goto IL_009c;
		}

IL_009b:
		{
			G_B11_0 = ((SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 *)(NULL));
			G_B11_1 = G_B10_0;
		}

IL_009c:
		{
			NullCheck(G_B11_1);
			G_B11_1->set__FinalFunc_4(G_B11_0);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_24 = V_0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_25 = V_2;
			NullCheck(L_25);
			int32_t L_26 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_25, /*hidden argument*/NULL);
			G_B12_0 = L_24;
			if ((!(((uint32_t)L_26) == ((uint32_t)2))))
			{
				G_B13_0 = L_24;
				goto IL_00bf;
			}
		}

IL_00ae:
		{
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_27 = V_0;
			SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * L_28 = (SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *)il2cpp_codegen_object_new(SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F_il2cpp_TypeInfo_var);
			SQLiteCollation__ctor_m8A2AE3B47E84B4C8AF59F1EF72F8D1E9AA79A98D(L_28, L_27, (intptr_t)((intptr_t)SqliteFunction_CompareCallback_m54D26B5A7CFF285AA6227591E2484ACF5DEB66D1_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B14_0 = L_28;
			G_B14_1 = G_B12_0;
			goto IL_00c0;
		}

IL_00bf:
		{
			G_B14_0 = ((SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *)(NULL));
			G_B14_1 = G_B13_0;
		}

IL_00c0:
		{
			NullCheck(G_B14_1);
			G_B14_1->set__CompareFunc_5(G_B14_0);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_29 = V_0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_30 = V_2;
			NullCheck(L_30);
			int32_t L_31 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_30, /*hidden argument*/NULL);
			G_B15_0 = L_29;
			if ((!(((uint32_t)L_31) == ((uint32_t)2))))
			{
				G_B16_0 = L_29;
				goto IL_00e3;
			}
		}

IL_00d2:
		{
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_32 = V_0;
			SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * L_33 = (SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *)il2cpp_codegen_object_new(SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F_il2cpp_TypeInfo_var);
			SQLiteCollation__ctor_m8A2AE3B47E84B4C8AF59F1EF72F8D1E9AA79A98D(L_33, L_32, (intptr_t)((intptr_t)SqliteFunction_CompareCallback16_mC2D07A15F43AF0085F129BB4A61F0428E3D20174_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B17_0 = L_33;
			G_B17_1 = G_B15_0;
			goto IL_00e4;
		}

IL_00e3:
		{
			G_B17_0 = ((SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *)(NULL));
			G_B17_1 = G_B16_0;
		}

IL_00e4:
		{
			NullCheck(G_B17_1);
			G_B17_1->set__CompareFunc16_6(G_B17_0);
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_34 = V_2;
			NullCheck(L_34);
			int32_t L_35 = SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E(L_34, /*hidden argument*/NULL);
			if ((((int32_t)L_35) == ((int32_t)2)))
			{
				goto IL_0127;
			}
		}

IL_00f5:
		{
			SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_36 = ___sqlbase0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_37 = V_2;
			NullCheck(L_37);
			String_t* L_38 = SqliteFunctionAttribute_get_Name_mBD862035BEA7E62D28AA8F79E1DC78BFD845EC26(L_37, /*hidden argument*/NULL);
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_39 = V_2;
			NullCheck(L_39);
			int32_t L_40 = SqliteFunctionAttribute_get_Arguments_mBF2AA03977EB0BB4A880F9DF5B748E65529EBB69(L_39, /*hidden argument*/NULL);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_41 = V_0;
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_42 = V_0;
			NullCheck(L_42);
			SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * L_43 = L_42->get__InvokeFunc_2();
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_44 = V_0;
			NullCheck(L_44);
			SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * L_45 = L_44->get__StepFunc_3();
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_46 = V_0;
			NullCheck(L_46);
			SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * L_47 = L_46->get__FinalFunc_4();
			NullCheck(L_36);
			VirtActionInvoker6< String_t*, int32_t, bool, SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *, SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 *, SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * >::Invoke(42 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateFunction(System.String,System.Int32,System.Boolean,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback) */, L_36, L_38, L_40, (bool)((!(((RuntimeObject*)(SqliteFunctionEx_t748735355014BE51BB6F6AE9A8DB91D2A38D55AB *)((SqliteFunctionEx_t748735355014BE51BB6F6AE9A8DB91D2A38D55AB *)IsInstClass((RuntimeObject*)L_41, SqliteFunctionEx_t748735355014BE51BB6F6AE9A8DB91D2A38D55AB_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), L_43, L_45, L_47);
			goto IL_013f;
		}

IL_0127:
		{
			SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_48 = ___sqlbase0;
			SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * L_49 = V_2;
			NullCheck(L_49);
			String_t* L_50 = SqliteFunctionAttribute_get_Name_mBD862035BEA7E62D28AA8F79E1DC78BFD845EC26(L_49, /*hidden argument*/NULL);
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_51 = V_0;
			NullCheck(L_51);
			SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * L_52 = L_51->get__CompareFunc_5();
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_53 = V_0;
			NullCheck(L_53);
			SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * L_54 = L_53->get__CompareFunc16_6();
			NullCheck(L_48);
			VirtActionInvoker3< String_t*, SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F *, SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * >::Invoke(41 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateCollation(System.String,Mono.Data.Sqlite.SQLiteCollation,Mono.Data.Sqlite.SQLiteCollation) */, L_48, L_50, L_52, L_54);
		}

IL_013f:
		{
			List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * L_55 = V_1;
			SqliteFunction_tA2F76FF5E9876636ED959033E6A46CCD1FC1C37B * L_56 = V_0;
			NullCheck(L_55);
			List_1_Add_m7295651A0327E83F10DBC7536FA234DC8DF096B7(L_55, L_56, /*hidden argument*/List_1_Add_m7295651A0327E83F10DBC7536FA234DC8DF096B7_RuntimeMethod_var);
		}

IL_0146:
		{
			bool L_57 = Enumerator_MoveNext_m056950DAF73943D18CF809E43EAC9941F9A3392D((Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m056950DAF73943D18CF809E43EAC9941F9A3392D_RuntimeMethod_var);
			if (L_57)
			{
				goto IL_0016;
			}
		}

IL_0152:
		{
			IL2CPP_LEAVE(0x163, FINALLY_0157);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0157;
	}

FINALLY_0157:
	{ // begin finally (depth: 1)
		Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  L_58 = V_3;
		Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3  L_59 = L_58;
		RuntimeObject * L_60 = Box(Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3_il2cpp_TypeInfo_var, &L_59);
		Enumerator_Dispose_m4226B46D2CA33FDA0A745377388A7396D83ECD42((Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3 *)UnBox(L_60, Enumerator_tB521B540C6873A3681AAE946C347C5440A5D78E3_il2cpp_TypeInfo_var), /*hidden argument*/Enumerator_Dispose_m4226B46D2CA33FDA0A745377388A7396D83ECD42_RuntimeMethod_var);
		IL2CPP_END_FINALLY(343)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(343)
	{
		IL2CPP_JUMP_TBL(0x163, IL_0163)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0163:
	{
		List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * L_61 = V_1;
		NullCheck(L_61);
		int32_t L_62 = List_1_get_Count_mFCEB6CCD7A34FE91033D0BFE574B58DE0F40F41A(L_61, /*hidden argument*/List_1_get_Count_mFCEB6CCD7A34FE91033D0BFE574B58DE0F40F41A_RuntimeMethod_var);
		SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* L_63 = (SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A*)SZArrayNew(SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A_il2cpp_TypeInfo_var, (uint32_t)L_62);
		V_4 = L_63;
		List_1_t443C0E71CFB9A9A4AB397DEC09875D9531AFE6F0 * L_64 = V_1;
		SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* L_65 = V_4;
		NullCheck(L_64);
		List_1_CopyTo_m1E9C8D6C3C6DDA9045BA4455C0AD9682986AE06C(L_64, L_65, 0, /*hidden argument*/List_1_CopyTo_m1E9C8D6C3C6DDA9045BA4455C0AD9682986AE06C_RuntimeMethod_var);
		SqliteFunctionU5BU5D_tB4B45B04DE8DDF7F2A6E9B425106F1B074EB604A* L_66 = V_4;
		return L_66;
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
// System.Void Mono.Data.Sqlite.SqliteFunction/AggregateData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AggregateData__ctor_m7883B8DC63881FB721E5C7E4B2CFDDCE83B2E015 (AggregateData_t2862CF5502703680B4D5748E456D6D2B49F0FF73 * __this, const RuntimeMethod* method)
{
	{
		__this->set__count_0(1);
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
// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteFunctionAttribute_get_Name_mBD862035BEA7E62D28AA8F79E1DC78BFD845EC26 (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_0();
		return L_0;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_Arguments_mBF2AA03977EB0BB4A880F9DF5B748E65529EBB69 (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__arguments_1();
		return L_0;
	}
}
// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::get_FuncType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_FuncType_mE89D65E158E3F8F17E209F98E48A74C198CA863E (SqliteFunctionAttribute_tEA4AD5EDB18C74BDA2A85BA6180134D53BECBEEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__functionType_2();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteKeyReader::.ctor(Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteDataReader,Mono.Data.Sqlite.SqliteStatement)
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader__ctor_m323C4D35AC9EFFF162A7F11F471EA5CD7E374595 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___cnn0, SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * ___reader1, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * ___stmt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader__ctor_m323C4D35AC9EFFF162A7F11F471EA5CD7E374595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * V_0 = NULL;
	Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * V_1 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * V_3 = NULL;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_4 = NULL;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_7 = NULL;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  V_13;
	memset(&V_13, 0, sizeof(V_13));
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_16 = NULL;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_17 = NULL;
	int32_t V_18 = 0;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_21 = NULL;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_25 = NULL;
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * V_26 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_27 = NULL;
	int32_t V_28 = 0;
	bool V_29 = false;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_30 = NULL;
	RuntimeObject* V_31 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_32 = NULL;
	int32_t V_33 = 0;
	String_t* V_34 = NULL;
	KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  V_35;
	memset(&V_35, 0, sizeof(V_35));
	RuntimeObject* V_36 = NULL;
	RuntimeObject* V_37 = NULL;
	RuntimeObject* V_38 = NULL;
	RuntimeObject* V_39 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_0 = (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *)il2cpp_codegen_object_new(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62(L_0, /*hidden argument*/Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_1 = (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *)il2cpp_codegen_object_new(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30(L_1, /*hidden argument*/Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30_RuntimeMethod_var);
		V_1 = L_1;
		List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * L_2 = (List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E *)il2cpp_codegen_object_new(List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E_il2cpp_TypeInfo_var);
		List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2(L_2, /*hidden argument*/List_1__ctor_m5F819BD0A6D2D9216BCFF6F99D0E4A5F007730E2_RuntimeMethod_var);
		V_3 = L_2;
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_3 = ___stmt2;
		__this->set__stmt_1(L_3);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_4 = ___cnn0;
		NullCheck(L_4);
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_5 = SqliteConnection_GetSchema_m2FEDD3C7EE4C27711A9650B4BECEC009CD6278C4(L_4, _stringLiteralD99C226D02CB06DF9C4F96D0E0140B91C9B8F41F, /*hidden argument*/NULL);
		V_4 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_6 = V_4;
			NullCheck(L_6);
			DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_7 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_7);
			V_6 = L_8;
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0075;
			}

IL_003f:
			{
				RuntimeObject* L_9 = V_6;
				NullCheck(L_9);
				RuntimeObject * L_10 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_9);
				V_5 = ((DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)CastclassClass((RuntimeObject*)L_10, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var));
				Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_11 = V_0;
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_12 = V_5;
				NullCheck(L_12);
				RuntimeObject * L_13 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_12, _stringLiteral58F69C9012CFB997F9D3FFE4F607D66F6E932A1F, /*hidden argument*/NULL);
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_14 = V_5;
				NullCheck(L_14);
				RuntimeObject * L_15 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_14, _stringLiteral89F89C02CF47E091E726A4E07B88AF0966806897, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
				int32_t L_16 = Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86(L_15, /*hidden argument*/NULL);
				NullCheck(L_11);
				Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76(L_11, ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), L_16, /*hidden argument*/Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76_RuntimeMethod_var);
			}

IL_0075:
			{
				RuntimeObject* L_17 = V_6;
				NullCheck(L_17);
				bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003f;
				}
			}

IL_0081:
			{
				IL2CPP_LEAVE(0x9C, FINALLY_0086);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0086;
		}

FINALLY_0086:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_19 = V_6;
				V_36 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_20 = V_36;
				if (L_20)
				{
					goto IL_0094;
				}
			}

IL_0093:
			{
				IL2CPP_END_FINALLY(134)
			}

IL_0094:
			{
				RuntimeObject* L_21 = V_36;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_21);
				IL2CPP_END_FINALLY(134)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(134)
		{
			IL2CPP_JUMP_TBL(0x9C, IL_009c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_22 = V_4;
			if (!L_22)
			{
				goto IL_00af;
			}
		}

IL_00a8:
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_23 = V_4;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_23);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(161)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b0:
	{
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_24 = ___reader1;
		NullCheck(L_24);
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_25 = SqliteDataReader_GetSchemaTable_m8F543DEB176937A9B0F127F11B5AE27D4CAEB3EF(L_24, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_7 = L_25;
	}

IL_00ba:
	try
	{ // begin try (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_26 = V_7;
			NullCheck(L_26);
			DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_27 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_27);
			V_9 = L_28;
		}

IL_00c8:
		try
		{ // begin try (depth: 2)
			{
				goto IL_015b;
			}

IL_00cd:
			{
				RuntimeObject* L_29 = V_9;
				NullCheck(L_29);
				RuntimeObject * L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_29);
				V_8 = ((DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)CastclassClass((RuntimeObject*)L_30, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var));
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_31 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var);
				String_t* L_32 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
				NullCheck(L_31);
				RuntimeObject * L_33 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_31, L_32, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
				DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_34 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
				if ((!(((RuntimeObject*)(RuntimeObject *)L_33) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_34))))
				{
					goto IL_00f6;
				}
			}

IL_00f1:
			{
				goto IL_015b;
			}

IL_00f6:
			{
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_35 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var);
				String_t* L_36 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
				NullCheck(L_35);
				RuntimeObject * L_37 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_35, L_36, /*hidden argument*/NULL);
				V_10 = ((String_t*)CastclassSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var));
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_38 = V_8;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
				String_t* L_39 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseTableName_15();
				NullCheck(L_38);
				RuntimeObject * L_40 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_38, L_39, /*hidden argument*/NULL);
				V_11 = ((String_t*)CastclassSealed((RuntimeObject*)L_40, String_t_il2cpp_TypeInfo_var));
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_41 = V_1;
				String_t* L_42 = V_10;
				NullCheck(L_41);
				bool L_43 = Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9(L_41, L_42, /*hidden argument*/Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_013d;
				}
			}

IL_0129:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_44 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
				List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_44, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
				V_2 = L_44;
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_45 = V_1;
				String_t* L_46 = V_10;
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_47 = V_2;
				NullCheck(L_45);
				Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66(L_45, L_46, L_47, /*hidden argument*/Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66_RuntimeMethod_var);
				goto IL_0146;
			}

IL_013d:
			{
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_48 = V_1;
				String_t* L_49 = V_10;
				NullCheck(L_48);
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_50 = Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56(L_48, L_49, /*hidden argument*/Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56_RuntimeMethod_var);
				V_2 = L_50;
			}

IL_0146:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_51 = V_2;
				String_t* L_52 = V_11;
				NullCheck(L_51);
				bool L_53 = List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B(L_51, L_52, /*hidden argument*/List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_015b;
				}
			}

IL_0153:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_54 = V_2;
				String_t* L_55 = V_11;
				NullCheck(L_54);
				List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_54, L_55, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
			}

IL_015b:
			{
				RuntimeObject* L_56 = V_9;
				NullCheck(L_56);
				bool L_57 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_56);
				if (L_57)
				{
					goto IL_00cd;
				}
			}

IL_0167:
			{
				IL2CPP_LEAVE(0x182, FINALLY_016c);
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
				RuntimeObject* L_58 = V_9;
				V_37 = ((RuntimeObject*)IsInst((RuntimeObject*)L_58, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_59 = V_37;
				if (L_59)
				{
					goto IL_017a;
				}
			}

IL_0179:
			{
				IL2CPP_END_FINALLY(364)
			}

IL_017a:
			{
				RuntimeObject* L_60 = V_37;
				NullCheck(L_60);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_60);
				IL2CPP_END_FINALLY(364)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(364)
		{
			IL2CPP_JUMP_TBL(0x182, IL_0182)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0182:
		{
			Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_61 = V_1;
			NullCheck(L_61);
			Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  L_62 = Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D(L_61, /*hidden argument*/Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D_RuntimeMethod_var);
			V_13 = L_62;
		}

IL_018a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_05d8;
			}

IL_018f:
			{
				KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  L_63 = Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)(&V_13), /*hidden argument*/Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_RuntimeMethod_var);
				V_12 = L_63;
				V_14 = 0;
				goto IL_05c5;
			}

IL_01a0:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_64 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
				int32_t L_65 = V_14;
				NullCheck(L_64);
				String_t* L_66 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED(L_64, L_65, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
				V_15 = L_66;
				V_16 = (DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)NULL;
				SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_67 = ___cnn0;
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_68 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_69 = L_68;
				String_t* L_70 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
				NullCheck(L_69);
				ArrayElementTypeCheck (L_69, L_70);
				(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_70);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_71 = L_69;
				String_t* L_72 = V_15;
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_72);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_72);
				NullCheck(L_67);
				DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_73 = SqliteConnection_GetSchema_m3B8F4B17DB20CB210CBD75DA8DCEA0EA6CE1C10F(L_67, _stringLiteralF642EE196088372EA886186C6C617515599AFD3F, L_71, /*hidden argument*/NULL);
				V_17 = L_73;
			}

IL_01d5:
			try
			{ // begin try (depth: 3)
				{
					V_18 = 0;
					goto IL_0278;
				}

IL_01dd:
				{
					DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_74 = V_17;
					NullCheck(L_74);
					DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_75 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_74, /*hidden argument*/NULL);
					NullCheck(L_75);
					RuntimeObject* L_76 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_75);
					V_20 = L_76;
				}

IL_01eb:
				try
				{ // begin try (depth: 4)
					{
						goto IL_024b;
					}

IL_01f0:
					{
						RuntimeObject* L_77 = V_20;
						NullCheck(L_77);
						RuntimeObject * L_78 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_77);
						V_19 = ((DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)CastclassClass((RuntimeObject*)L_78, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var));
						int32_t L_79 = V_18;
						if (L_79)
						{
							goto IL_0224;
						}
					}

IL_0205:
					{
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_80 = V_19;
						NullCheck(L_80);
						RuntimeObject * L_81 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_80, _stringLiteral2301A3AED57BDF6FA84FA74B2553B52161EE1A1B, /*hidden argument*/NULL);
						if (!((*(bool*)((bool*)UnBox(L_81, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
						{
							goto IL_0224;
						}
					}

IL_021b:
					{
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_82 = V_19;
						V_16 = L_82;
						goto IL_0257;
					}

IL_0224:
					{
						int32_t L_83 = V_18;
						if ((!(((uint32_t)L_83) == ((uint32_t)1))))
						{
							goto IL_024b;
						}
					}

IL_022c:
					{
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_84 = V_19;
						NullCheck(L_84);
						RuntimeObject * L_85 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_84, _stringLiteralC9E6A29D14F3F27CD2EE75B65407552AD50A3078, /*hidden argument*/NULL);
						if (!((*(bool*)((bool*)UnBox(L_85, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
						{
							goto IL_024b;
						}
					}

IL_0242:
					{
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_86 = V_19;
						V_16 = L_86;
						goto IL_0257;
					}

IL_024b:
					{
						RuntimeObject* L_87 = V_20;
						NullCheck(L_87);
						bool L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_87);
						if (L_88)
						{
							goto IL_01f0;
						}
					}

IL_0257:
					{
						IL2CPP_LEAVE(0x272, FINALLY_025c);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_025c;
				}

FINALLY_025c:
				{ // begin finally (depth: 4)
					{
						RuntimeObject* L_89 = V_20;
						V_38 = ((RuntimeObject*)IsInst((RuntimeObject*)L_89, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
						RuntimeObject* L_90 = V_38;
						if (L_90)
						{
							goto IL_026a;
						}
					}

IL_0269:
					{
						IL2CPP_END_FINALLY(604)
					}

IL_026a:
					{
						RuntimeObject* L_91 = V_38;
						NullCheck(L_91);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_91);
						IL2CPP_END_FINALLY(604)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(604)
				{
					IL2CPP_JUMP_TBL(0x272, IL_0272)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0272:
				{
					int32_t L_92 = V_18;
					V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
				}

IL_0278:
				{
					int32_t L_93 = V_18;
					if ((((int32_t)L_93) >= ((int32_t)2)))
					{
						goto IL_0287;
					}
				}

IL_0280:
				{
					DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_94 = V_16;
					if (!L_94)
					{
						goto IL_01dd;
					}
				}

IL_0287:
				{
					DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_95 = V_16;
					if (L_95)
					{
						goto IL_02a7;
					}
				}

IL_028e:
				{
					List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_96 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
					int32_t L_97 = V_14;
					NullCheck(L_96);
					List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2(L_96, L_97, /*hidden argument*/List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2_RuntimeMethod_var);
					int32_t L_98 = V_14;
					V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
					goto IL_05ab;
				}

IL_02a7:
				{
					SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_99 = ___cnn0;
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_100 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_101 = L_100;
					String_t* L_102 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
					NullCheck(L_101);
					ArrayElementTypeCheck (L_101, L_102);
					(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_102);
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_103 = L_101;
					String_t* L_104 = V_15;
					NullCheck(L_103);
					ArrayElementTypeCheck (L_103, L_104);
					(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_104);
					NullCheck(L_99);
					DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_105 = SqliteConnection_GetSchema_m3B8F4B17DB20CB210CBD75DA8DCEA0EA6CE1C10F(L_99, _stringLiteral193DAF137ED8B89DE36D47C3DF5FD8F66C0E1D14, L_103, /*hidden argument*/NULL);
					V_21 = L_105;
				}

IL_02c9:
				try
				{ // begin try (depth: 4)
					{
						Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_106 = V_0;
						String_t* L_107 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
						NullCheck(L_106);
						int32_t L_108 = Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC(L_106, L_107, /*hidden argument*/Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC_RuntimeMethod_var);
						V_22 = L_108;
						DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_109 = V_21;
						NullCheck(L_109);
						DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_110 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_109, /*hidden argument*/NULL);
						NullCheck(L_110);
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_111 = DataRowCollection_get_Item_m88B2E81D23A9D603F3EE9C03DAF5757B012F9051(L_110, 0, /*hidden argument*/NULL);
						NullCheck(L_111);
						RuntimeObject * L_112 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_111, _stringLiteralBB4B470AC8E8BC7DB9A08102DEBACDD14B1D6379, /*hidden argument*/NULL);
						IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
						int32_t L_113 = Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86(L_112, /*hidden argument*/NULL);
						V_23 = L_113;
						SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_114 = ___stmt2;
						NullCheck(L_114);
						SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_115 = L_114->get__sql_0();
						SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_116 = ___stmt2;
						int32_t L_117 = V_22;
						int32_t L_118 = V_23;
						NullCheck(L_115);
						int32_t L_119 = VirtFuncInvoker3< int32_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, int32_t >::Invoke(59 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::GetCursorForTable(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_115, L_116, L_117, L_118);
						V_24 = L_119;
						SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_120 = ___cnn0;
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_121 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_122 = L_121;
						String_t* L_123 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
						NullCheck(L_122);
						ArrayElementTypeCheck (L_122, L_123);
						(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_123);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_124 = L_122;
						String_t* L_125 = V_15;
						NullCheck(L_124);
						ArrayElementTypeCheck (L_124, L_125);
						(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_125);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_126 = L_124;
						DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_127 = V_16;
						NullCheck(L_127);
						RuntimeObject * L_128 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_127, _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C, /*hidden argument*/NULL);
						NullCheck(L_126);
						ArrayElementTypeCheck (L_126, ((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
						(L_126)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
						NullCheck(L_120);
						DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_129 = SqliteConnection_GetSchema_m3B8F4B17DB20CB210CBD75DA8DCEA0EA6CE1C10F(L_120, _stringLiteralD1D50AF319576CA6C6CBA296631E193D490A5370, L_126, /*hidden argument*/NULL);
						V_25 = L_129;
					}

IL_033e:
					try
					{ // begin try (depth: 5)
						{
							V_26 = (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)NULL;
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_130 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
							List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_130, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
							V_27 = L_130;
							V_28 = 0;
							goto IL_0475;
						}

IL_0350:
						{
							V_29 = (bool)1;
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_131 = V_7;
							NullCheck(L_131);
							DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_132 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_131, /*hidden argument*/NULL);
							NullCheck(L_132);
							RuntimeObject* L_133 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_132);
							V_31 = L_133;
						}

IL_0361:
						try
						{ // begin try (depth: 6)
							{
								goto IL_041d;
							}

IL_0366:
							{
								RuntimeObject* L_134 = V_31;
								NullCheck(L_134);
								RuntimeObject * L_135 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_134);
								V_30 = ((DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)CastclassClass((RuntimeObject*)L_135, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var));
								DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_136 = V_30;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
								String_t* L_137 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
								NullCheck(L_136);
								bool L_138 = DataRow_IsNull_m61FDDD6F6E1C1EA72CECAAEF5083A1A7A399F721(L_136, L_137, /*hidden argument*/NULL);
								if (!L_138)
								{
									goto IL_038a;
								}
							}

IL_0385:
							{
								goto IL_041d;
							}

IL_038a:
							{
								DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_139 = V_30;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
								String_t* L_140 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
								NullCheck(L_139);
								RuntimeObject * L_141 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_139, L_140, /*hidden argument*/NULL);
								DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_142 = V_25;
								NullCheck(L_142);
								DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_143 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_142, /*hidden argument*/NULL);
								int32_t L_144 = V_28;
								NullCheck(L_143);
								DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_145 = DataRowCollection_get_Item_m88B2E81D23A9D603F3EE9C03DAF5757B012F9051(L_143, L_144, /*hidden argument*/NULL);
								NullCheck(L_145);
								RuntimeObject * L_146 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_145, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
								bool L_147 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_141, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_146, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
								if (!L_147)
								{
									goto IL_041d;
								}
							}

IL_03c2:
							{
								DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_148 = V_30;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
								String_t* L_149 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseTableName_15();
								NullCheck(L_148);
								RuntimeObject * L_150 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_148, L_149, /*hidden argument*/NULL);
								String_t* L_151 = V_15;
								bool L_152 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_150, String_t_il2cpp_TypeInfo_var)), L_151, /*hidden argument*/NULL);
								if (!L_152)
								{
									goto IL_041d;
								}
							}

IL_03df:
							{
								DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_153 = V_30;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var);
								String_t* L_154 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
								NullCheck(L_153);
								RuntimeObject * L_155 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_153, L_154, /*hidden argument*/NULL);
								String_t* L_156 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
								bool L_157 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_155, String_t_il2cpp_TypeInfo_var)), L_156, /*hidden argument*/NULL);
								if (!L_157)
								{
									goto IL_041d;
								}
							}

IL_0401:
							{
								DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_158 = V_25;
								NullCheck(L_158);
								DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_159 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_158, /*hidden argument*/NULL);
								int32_t L_160 = V_28;
								NullCheck(L_159);
								DataRowCollection_RemoveAt_mEEE3700F1C5AD46598364390F8F42D58486670DA(L_159, L_160, /*hidden argument*/NULL);
								int32_t L_161 = V_28;
								V_28 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1));
								V_29 = (bool)0;
								goto IL_0429;
							}

IL_041d:
							{
								RuntimeObject* L_162 = V_31;
								NullCheck(L_162);
								bool L_163 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_162);
								if (L_163)
								{
									goto IL_0366;
								}
							}

IL_0429:
							{
								IL2CPP_LEAVE(0x444, FINALLY_042e);
							}
						} // end try (depth: 6)
						catch(Il2CppExceptionWrapper& e)
						{
							__last_unhandled_exception = (Exception_t *)e.ex;
							goto FINALLY_042e;
						}

FINALLY_042e:
						{ // begin finally (depth: 6)
							{
								RuntimeObject* L_164 = V_31;
								V_39 = ((RuntimeObject*)IsInst((RuntimeObject*)L_164, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
								RuntimeObject* L_165 = V_39;
								if (L_165)
								{
									goto IL_043c;
								}
							}

IL_043b:
							{
								IL2CPP_END_FINALLY(1070)
							}

IL_043c:
							{
								RuntimeObject* L_166 = V_39;
								NullCheck(L_166);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_166);
								IL2CPP_END_FINALLY(1070)
							}
						} // end finally (depth: 6)
						IL2CPP_CLEANUP(1070)
						{
							IL2CPP_JUMP_TBL(0x444, IL_0444)
							IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
						}

IL_0444:
						{
							bool L_167 = V_29;
							if (!L_167)
							{
								goto IL_046f;
							}
						}

IL_044b:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_168 = V_27;
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_169 = V_25;
							NullCheck(L_169);
							DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_170 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_169, /*hidden argument*/NULL);
							int32_t L_171 = V_28;
							NullCheck(L_170);
							DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_172 = DataRowCollection_get_Item_m88B2E81D23A9D603F3EE9C03DAF5757B012F9051(L_170, L_171, /*hidden argument*/NULL);
							NullCheck(L_172);
							RuntimeObject * L_173 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_172, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
							NullCheck(L_168);
							List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_168, ((String_t*)CastclassSealed((RuntimeObject*)L_173, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
						}

IL_046f:
						{
							int32_t L_174 = V_28;
							V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
						}

IL_0475:
						{
							int32_t L_175 = V_28;
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_176 = V_25;
							NullCheck(L_176);
							DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_177 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_176, /*hidden argument*/NULL);
							NullCheck(L_177);
							int32_t L_178 = DataRowCollection_get_Count_m03CEE5E176D7DDED6DCE870CB21963EB4EEB2E6F(L_177, /*hidden argument*/NULL);
							if ((((int32_t)L_175) < ((int32_t)L_178)))
							{
								goto IL_0350;
							}
						}

IL_0488:
						{
							DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_179 = V_16;
							NullCheck(L_179);
							RuntimeObject * L_180 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_179, _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C, /*hidden argument*/NULL);
							String_t* L_181 = V_15;
							String_t* L_182 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral96B270E30E3C5C4FDE9E03F6B30D4F2F1657F16C, L_181, /*hidden argument*/NULL);
							bool L_183 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(((String_t*)CastclassSealed((RuntimeObject*)L_180, String_t_il2cpp_TypeInfo_var)), L_182, /*hidden argument*/NULL);
							if (!L_183)
							{
								goto IL_04e6;
							}
						}

IL_04af:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_184 = V_27;
							NullCheck(L_184);
							int32_t L_185 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4(L_184, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
							if ((((int32_t)L_185) <= ((int32_t)0)))
							{
								goto IL_04e6;
							}
						}

IL_04bc:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_186 = V_27;
							NullCheck(L_186);
							int32_t L_187 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4(L_186, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_188 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_187);
							V_32 = L_188;
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_189 = V_27;
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_190 = V_32;
							NullCheck(L_189);
							List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0(L_189, L_190, /*hidden argument*/List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0_RuntimeMethod_var);
							SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_191 = ___cnn0;
							String_t* L_192 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
							String_t* L_193 = V_15;
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_194 = V_32;
							KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_195 = (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)il2cpp_codegen_object_new(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C_il2cpp_TypeInfo_var);
							KeyQuery__ctor_mFC968766FE129954A29948E1E13174E7A7C771E9(L_195, L_191, L_192, L_193, L_194, /*hidden argument*/NULL);
							V_26 = L_195;
						}

IL_04e6:
						{
							V_33 = 0;
							goto IL_0570;
						}

IL_04ee:
						{
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_196 = V_25;
							NullCheck(L_196);
							DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_197 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_196, /*hidden argument*/NULL);
							int32_t L_198 = V_33;
							NullCheck(L_197);
							DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_199 = DataRowCollection_get_Item_m88B2E81D23A9D603F3EE9C03DAF5757B012F9051(L_197, L_198, /*hidden argument*/NULL);
							NullCheck(L_199);
							RuntimeObject * L_200 = DataRow_get_Item_m48A0BAED14B0062BA10F23C35783DF2502986626(L_199, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
							V_34 = ((String_t*)CastclassSealed((RuntimeObject*)L_200, String_t_il2cpp_TypeInfo_var));
							il2cpp_codegen_initobj((&V_35), sizeof(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B ));
							int32_t L_201 = V_23;
							(&V_35)->set_rootPage_4(L_201);
							int32_t L_202 = V_24;
							(&V_35)->set_cursor_5(L_202);
							int32_t L_203 = V_22;
							(&V_35)->set_database_3(L_203);
							String_t* L_204 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
							(&V_35)->set_databaseName_0(L_204);
							String_t* L_205 = V_15;
							(&V_35)->set_tableName_1(L_205);
							String_t* L_206 = V_34;
							(&V_35)->set_columnName_2(L_206);
							KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_207 = V_26;
							(&V_35)->set_query_6(L_207);
							int32_t L_208 = V_33;
							(&V_35)->set_column_7(L_208);
							List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * L_209 = V_3;
							KeyInfo_tFB27F6364284236F653E61480F11552B2145541B  L_210 = V_35;
							NullCheck(L_209);
							List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4(L_209, L_210, /*hidden argument*/List_1_Add_m0A3678161F670C5331F3183A9205B32A59B6F9E4_RuntimeMethod_var);
							int32_t L_211 = V_33;
							V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1));
						}

IL_0570:
						{
							int32_t L_212 = V_33;
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_213 = V_25;
							NullCheck(L_213);
							DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_214 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_213, /*hidden argument*/NULL);
							NullCheck(L_214);
							int32_t L_215 = DataRowCollection_get_Count_m03CEE5E176D7DDED6DCE870CB21963EB4EEB2E6F(L_214, /*hidden argument*/NULL);
							if ((((int32_t)L_212) < ((int32_t)L_215)))
							{
								goto IL_04ee;
							}
						}

IL_0583:
						{
							IL2CPP_LEAVE(0x597, FINALLY_0588);
						}
					} // end try (depth: 5)
					catch(Il2CppExceptionWrapper& e)
					{
						__last_unhandled_exception = (Exception_t *)e.ex;
						goto FINALLY_0588;
					}

FINALLY_0588:
					{ // begin finally (depth: 5)
						{
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_216 = V_25;
							if (!L_216)
							{
								goto IL_0596;
							}
						}

IL_058f:
						{
							DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_217 = V_25;
							NullCheck(L_217);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_217);
						}

IL_0596:
						{
							IL2CPP_END_FINALLY(1416)
						}
					} // end finally (depth: 5)
					IL2CPP_CLEANUP(1416)
					{
						IL2CPP_JUMP_TBL(0x597, IL_0597)
						IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					}

IL_0597:
					{
						IL2CPP_LEAVE(0x5AB, FINALLY_059c);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_059c;
				}

FINALLY_059c:
				{ // begin finally (depth: 4)
					{
						DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_218 = V_21;
						if (!L_218)
						{
							goto IL_05aa;
						}
					}

IL_05a3:
					{
						DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_219 = V_21;
						NullCheck(L_219);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_219);
					}

IL_05aa:
					{
						IL2CPP_END_FINALLY(1436)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(1436)
				{
					IL2CPP_JUMP_TBL(0x5AB, IL_05ab)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_05ab:
				{
					IL2CPP_LEAVE(0x5BF, FINALLY_05b0);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_05b0;
			}

FINALLY_05b0:
			{ // begin finally (depth: 3)
				{
					DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_220 = V_17;
					if (!L_220)
					{
						goto IL_05be;
					}
				}

IL_05b7:
				{
					DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_221 = V_17;
					NullCheck(L_221);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_221);
				}

IL_05be:
				{
					IL2CPP_END_FINALLY(1456)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1456)
			{
				IL2CPP_JUMP_TBL(0x5BF, IL_05bf)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_05bf:
			{
				int32_t L_222 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)1));
			}

IL_05c5:
			{
				int32_t L_223 = V_14;
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_224 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
				NullCheck(L_224);
				int32_t L_225 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4(L_224, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
				if ((((int32_t)L_223) < ((int32_t)L_225)))
				{
					goto IL_01a0;
				}
			}

IL_05d8:
			{
				bool L_226 = Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)(&V_13), /*hidden argument*/Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE_RuntimeMethod_var);
				if (L_226)
				{
					goto IL_018f;
				}
			}

IL_05e4:
			{
				IL2CPP_LEAVE(0x5F6, FINALLY_05e9);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_05e9;
		}

FINALLY_05e9:
		{ // begin finally (depth: 2)
			Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  L_227 = V_13;
			Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  L_228 = L_227;
			RuntimeObject * L_229 = Box(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_il2cpp_TypeInfo_var, &L_228);
			Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)UnBox(L_229, Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87_il2cpp_TypeInfo_var), /*hidden argument*/Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0_RuntimeMethod_var);
			IL2CPP_END_FINALLY(1513)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1513)
		{
			IL2CPP_JUMP_TBL(0x5F6, IL_05f6)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_05f6:
		{
			IL2CPP_LEAVE(0x60A, FINALLY_05fb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_05fb;
	}

FINALLY_05fb:
	{ // begin finally (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_230 = V_7;
			if (!L_230)
			{
				goto IL_0609;
			}
		}

IL_0602:
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_231 = V_7;
			NullCheck(L_231);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_231);
		}

IL_0609:
		{
			IL2CPP_END_FINALLY(1531)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1531)
	{
		IL2CPP_JUMP_TBL(0x60A, IL_060a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_060a:
	{
		List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * L_232 = V_3;
		NullCheck(L_232);
		int32_t L_233 = List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72(L_232, /*hidden argument*/List_1_get_Count_m3DE6100AB025B71BDDFB8047FEE0D93C31E92D72_RuntimeMethod_var);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_234 = (KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141*)SZArrayNew(KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141_il2cpp_TypeInfo_var, (uint32_t)L_233);
		__this->set__keyInfo_0(L_234);
		List_1_tD3E19CF3AA62B09C07B250E5EC360CB0A8A0385E * L_235 = V_3;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_236 = __this->get__keyInfo_0();
		NullCheck(L_235);
		List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62(L_235, L_236, /*hidden argument*/List_1_CopyTo_m45699B88E0E5D0E01F2A12E34D92DEDF8694CB62_RuntimeMethod_var);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_get_Count_m33DF2836E2ABC0980CBAB9DF2FE4230D97749F4A (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0019;
	}

IL_0011:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		NullCheck(L_1);
		G_B3_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mAB6F41EC7E96AC96E43673C83095434691CA4C1E(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_3 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mAB6F41EC7E96AC96E43673C83095434691CA4C1E (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, const RuntimeMethod* method)
{
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get__isValid_2();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		V_0 = (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)NULL;
		V_1 = 0;
		goto IL_008b;
	}

IL_0015:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_7 = V_0;
		if ((((RuntimeObject*)(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)L_6) == ((RuntimeObject*)(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)L_7)))
		{
			goto IL_0087;
		}
	}

IL_0042:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_query_6();
		V_0 = L_10;
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_12 = V_0;
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_13 = __this->get__stmt_1();
		NullCheck(L_13);
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_14 = L_13->get__sql_0();
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_15 = __this->get__stmt_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_16 = __this->get__keyInfo_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_cursor_5();
		NullCheck(L_14);
		int64_t L_19 = VirtFuncInvoker2< int64_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_14, L_15, L_18);
		NullCheck(L_12);
		KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069(L_12, L_19, /*hidden argument*/NULL);
	}

IL_0087:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008b:
	{
		int32_t L_21 = V_1;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_22 = __this->get__keyInfo_0();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		__this->set__isValid_2((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Reset()
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Reset_mCD6028684FCAB7387006592CD69C0CB3C5E807C8 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set__isValid_2((bool)0);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_004b;
	}

IL_001a:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0047:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_9 = __this->get__keyInfo_0();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_Dispose_m524A988FF6E9158453EE6D9315B0B6F25C2C5408 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set__stmt_1((SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *)NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		KeyQuery_Dispose_m116E81717A9A10398C60853EB9C84F8E9F9188A0(L_6, /*hidden argument*/NULL);
	}

IL_0046:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_9 = __this->get__keyInfo_0();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		__this->set__keyInfo_0((KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141*)NULL);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetDataTypeName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetDataTypeName_mBD4E57BBF3F0EF8E6D2B2958A8F9B712445F21D5 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetDataTypeName_mBD4E57BBF3F0EF8E6D2B2958A8F9B712445F21D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mAB6F41EC7E96AC96E43673C83095434691CA4C1E(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		NullCheck(L_5);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_6 = L_5->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_column_7();
		NullCheck(L_6);
		String_t* L_10 = SqliteDataReader_GetDataTypeName_mE2024AFA722B8C88186C3229857DE5056C31E9DA(L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0049:
	{
		return _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781;
	}
}
// System.Type Mono.Data.Sqlite.SqliteKeyReader::GetFieldType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Type_t * SqliteKeyReader_GetFieldType_m96F7F75FD2600D814EA6F89B9DBB3BD5E55A55A7 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetFieldType_m96F7F75FD2600D814EA6F89B9DBB3BD5E55A55A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mAB6F41EC7E96AC96E43673C83095434691CA4C1E(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		NullCheck(L_5);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_6 = L_5->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_column_7();
		NullCheck(L_6);
		Type_t * L_10 = SqliteDataReader_GetFieldType_m15C5D2559DF33A6766361D339BBF43E2FF6BD9FB(L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0049:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetName_mEB30AFB413EB32CACCE52DABDF9C4C0E988BCAC2 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_columnName_2();
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetOrdinal(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetOrdinal_m6E2F4B1296D440A2B95783176FB44A21044D8859 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0007:
	{
		String_t* L_0 = ___name0;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_columnName_2();
		int32_t L_4 = String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442(L_0, L_3, 5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::GetBoolean(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SqliteKeyReader_GetBoolean_m36F022043B8184F1CB2FBA478B2A77BBA5BF0BD3 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetBoolean_m36F022043B8184F1CB2FBA478B2A77BBA5BF0BD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		bool L_11 = SqliteDataReader_GetBoolean_m40AA22E1A765F4EA7B10CC89D95B5902F53CF181(L_7, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_004a:
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_12 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, SqliteKeyReader_GetBoolean_m36F022043B8184F1CB2FBA478B2A77BBA5BF0BD3_RuntimeMethod_var);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetInt32_mF8CE477B08B36777131612D5E83EF968E8A5A052 (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetInt32_mF8CE477B08B36777131612D5E83EF968E8A5A052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		int32_t L_11 = SqliteDataReader_GetInt32_m5259C8F7F00DB32E77D9F0BAD6FAE7080FA92E27(L_7, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_004a:
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_12 = __this->get__stmt_1();
		NullCheck(L_12);
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_13 = L_12->get__sql_0();
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_14 = __this->get__stmt_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_cursor_5();
		NullCheck(L_13);
		int64_t L_18 = VirtFuncInvoker2< int64_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		V_0 = L_18;
		int64_t L_19 = V_0;
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, SqliteKeyReader_GetInt32_mF8CE477B08B36777131612D5E83EF968E8A5A052_RuntimeMethod_var);
	}

IL_007e:
	{
		int64_t L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_22 = Convert_ToInt32_m5CE30569A0A5B70CBD85954BEEF436F57D6FAE6B(L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		int64_t L_11 = SqliteDataReader_GetInt64_m818A91671C0C37D2D247A40142EC1E9912DC7F31(L_7, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_004a:
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_12 = __this->get__stmt_1();
		NullCheck(L_12);
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_13 = L_12->get__sql_0();
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_14 = __this->get__stmt_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_cursor_5();
		NullCheck(L_13);
		int64_t L_18 = VirtFuncInvoker2< int64_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		V_0 = L_18;
		int64_t L_19 = V_0;
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E_RuntimeMethod_var);
	}

IL_007e:
	{
		int64_t L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_22 = Convert_ToInt64_mA01BFA4EFA523B93F48D03811D44AE225059E0AD(L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetString_m8CF7F45A03440A9BFC4BF32A6D07B7301D9ABA3C (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetString_m8CF7F45A03440A9BFC4BF32A6D07B7301D9ABA3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		String_t* L_11 = SqliteDataReader_GetString_m3E6C5D0772CD549F2B57C81B8041FAC7A5BAC034(L_7, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_004a:
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_12 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, SqliteKeyReader_GetString_m8CF7F45A03440A9BFC4BF32A6D07B7301D9ABA3C_RuntimeMethod_var);
	}
}
// System.Object Mono.Data.Sqlite.SqliteKeyReader::GetValue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteKeyReader_GetValue_m533660C272B39FE2BECC5D51CA8983CD4C83242B (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetValue_m533660C272B39FE2BECC5D51CA8983CD4C83242B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_3 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		return L_3;
	}

IL_001d:
	{
		int32_t L_4 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_4, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_5 = __this->get__keyInfo_0();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_query_6();
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_query_6();
		NullCheck(L_10);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_11 = L_10->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_12 = __this->get__keyInfo_0();
		int32_t L_13 = ___i0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_column_7();
		NullCheck(L_11);
		RuntimeObject * L_15 = SqliteDataReader_GetValue_m04D01639C26B6C6922C5479D95D515AE6C47F42B(L_11, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0067:
	{
		int32_t L_16 = ___i0;
		bool L_17 = SqliteKeyReader_IsDBNull_m833574F472252C0A6502AA6B971DB41F94874CFB(__this, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0079;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_18 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		return L_18;
	}

IL_0079:
	{
		int32_t L_19 = ___i0;
		int64_t L_20 = SqliteKeyReader_GetInt64_m976ACBB26C85C404EDCE786794FC10B5092E9A2E(__this, L_19, /*hidden argument*/NULL);
		int64_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_m833574F472252C0A6502AA6B971DB41F94874CFB (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		int32_t L_3 = ___i0;
		SqliteKeyReader_Sync_m80350A2B9496E0F36FFF43F66F69EEB441DDC8A2(__this, L_3, /*hidden argument*/NULL);
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_query_6();
		NullCheck(L_9);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_10 = L_9->get__reader_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_11 = __this->get__keyInfo_0();
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_column_7();
		NullCheck(L_10);
		bool L_14 = SqliteDataReader_IsDBNull_mBF7099DD07A4E5877280B788B39B4761B85DF1B0(L_10, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0063:
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_15 = __this->get__stmt_1();
		NullCheck(L_15);
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_16 = L_15->get__sql_0();
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_17 = __this->get__stmt_1();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_18 = __this->get__keyInfo_0();
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_cursor_5();
		NullCheck(L_16);
		int64_t L_21 = VirtFuncInvoker2< int64_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_16, L_17, L_20);
		return (bool)((((int64_t)L_21) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::AppendSchemaTable(System.Data.DataTable)
extern "C" IL2CPP_METHOD_ATTR void SqliteKeyReader_AppendSchemaTable_m87438EF2BE254CE056A208BEA66B32B69730719D (SqliteKeyReader_t1C2E53976CDC11FF645C62DECA46D85D850FA76D * __this, DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * ___tbl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_AppendSchemaTable_m87438EF2BE254CE056A208BEA66B32B69730719D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * V_0 = NULL;
	int32_t V_1 = 0;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_2 = NULL;
	DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * V_3 = NULL;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_6 = NULL;
	DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)NULL;
		V_1 = 0;
		goto IL_02c6;
	}

IL_0009:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_6 = V_0;
		if ((((RuntimeObject*)(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)L_5) == ((RuntimeObject*)(KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C *)L_6)))
		{
			goto IL_02c2;
		}
	}

IL_0036:
	{
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_query_6();
		V_0 = L_9;
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_10 = V_0;
		if (L_10)
		{
			goto IL_020d;
		}
	}
	{
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_11 = ___tbl0;
		NullCheck(L_11);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_12 = DataTable_NewRow_m2DFCF2FC5396D75DEDFF448292CD5DD27CB397EC(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
		String_t* L_14 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_ColumnName_0();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_columnName_2();
		NullCheck(L_13);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_13, L_14, L_17, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_18 = V_2;
		String_t* L_19 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_ColumnOrdinal_1();
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_20 = ___tbl0;
		NullCheck(L_20);
		DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_21 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = DataRowCollection_get_Count_m03CEE5E176D7DDED6DCE870CB21963EB4EEB2E6F(L_21, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_18);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_18, L_19, L_24, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_25 = V_2;
		String_t* L_26 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_ColumnSize_2();
		int32_t L_27 = 8;
		RuntimeObject * L_28 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_25, L_26, L_28, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_29 = V_2;
		String_t* L_30 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_NumericPrecision_3();
		int32_t L_31 = ((int32_t)255);
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_29, L_30, L_32, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_33 = V_2;
		String_t* L_34 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_NumericScale_4();
		int32_t L_35 = ((int32_t)255);
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_33, L_34, L_36, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_37 = V_2;
		String_t* L_38 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_ProviderType_6();
		int32_t L_39 = ((int32_t)((int32_t)12));
		RuntimeObject * L_40 = Box(DbType_tBDB358FC5FD20074462C900ED3B7339BF0F08B6D_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_37, L_38, L_40, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_41 = V_2;
		String_t* L_42 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_IsLong_8();
		bool L_43 = ((bool)0);
		RuntimeObject * L_44 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_41, L_42, L_44, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_45 = V_2;
		String_t* L_46 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_AllowDBNull_9();
		bool L_47 = ((bool)0);
		RuntimeObject * L_48 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_45, L_46, L_48, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var);
		String_t* L_50 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_IsReadOnly_3();
		bool L_51 = ((bool)0);
		RuntimeObject * L_52 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_49, L_50, L_52, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_53 = V_2;
		String_t* L_54 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_IsRowVersion_4();
		bool L_55 = ((bool)0);
		RuntimeObject * L_56 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_53, L_54, L_56, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_57 = V_2;
		String_t* L_58 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_IsUnique_13();
		bool L_59 = ((bool)0);
		RuntimeObject * L_60 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_57, L_58, L_60, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_61 = V_2;
		String_t* L_62 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_IsKey_12();
		bool L_63 = ((bool)1);
		RuntimeObject * L_64 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_61, L_62, L_64, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_65 = V_2;
		String_t* L_66 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_DataType_5();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_67 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_65, L_66, L_68, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_69 = V_2;
		String_t* L_70 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_IsHidden_2();
		bool L_71 = ((bool)1);
		RuntimeObject * L_72 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_69, L_70, L_72, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_73 = V_2;
		String_t* L_74 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_75 = __this->get__keyInfo_0();
		int32_t L_76 = V_1;
		NullCheck(L_75);
		String_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->get_columnName_2();
		NullCheck(L_73);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_73, L_74, L_77, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_78 = V_2;
		String_t* L_79 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_IsExpression_11();
		bool L_80 = ((bool)0);
		RuntimeObject * L_81 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_78, L_79, L_81, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_82 = V_2;
		String_t* L_83 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_IsAliased_10();
		bool L_84 = ((bool)0);
		RuntimeObject * L_85 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_82);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_82, L_83, L_85, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_86 = V_2;
		String_t* L_87 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_BaseTableName_15();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_88 = __this->get__keyInfo_0();
		int32_t L_89 = V_1;
		NullCheck(L_88);
		String_t* L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->get_tableName_1();
		NullCheck(L_86);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_86, L_87, L_90, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_91 = V_2;
		String_t* L_92 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_93 = __this->get__keyInfo_0();
		int32_t L_94 = V_1;
		NullCheck(L_93);
		String_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->get_databaseName_0();
		NullCheck(L_91);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_91, L_92, L_95, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_96 = V_2;
		String_t* L_97 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_IsAutoIncrement_1();
		bool L_98 = ((bool)1);
		RuntimeObject * L_99 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_98);
		NullCheck(L_96);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_96, L_97, L_99, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_100 = V_2;
		NullCheck(L_100);
		DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_100, _stringLiteral66D2C601FBFA7B406B77381952D6A78FC0BD2564, _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781, /*hidden argument*/NULL);
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_101 = ___tbl0;
		NullCheck(L_101);
		DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_102 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_101, /*hidden argument*/NULL);
		DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_103 = V_2;
		NullCheck(L_102);
		DataRowCollection_Add_mF002AD423E345821199C0F824F6A0F9717F7C934(L_102, L_103, /*hidden argument*/NULL);
		goto IL_02c2;
	}

IL_020d:
	{
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_104 = V_0;
		NullCheck(L_104);
		KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069(L_104, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * L_105 = V_0;
		NullCheck(L_105);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_106 = L_105->get__reader_1();
		NullCheck(L_106);
		DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_107 = SqliteDataReader_GetSchemaTable_m7A50851907FE25CEE8F115AEBD45A41F38B51096(L_106, /*hidden argument*/NULL);
		V_3 = L_107;
	}

IL_0221:
	try
	{ // begin try (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_108 = V_3;
			NullCheck(L_108);
			DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_109 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_108, /*hidden argument*/NULL);
			NullCheck(L_109);
			RuntimeObject* L_110 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_109);
			V_5 = L_110;
		}

IL_022e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0289;
			}

IL_0233:
			{
				RuntimeObject* L_111 = V_5;
				NullCheck(L_111);
				RuntimeObject * L_112 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_111);
				V_4 = ((DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 *)CastclassClass((RuntimeObject*)L_112, DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665_il2cpp_TypeInfo_var));
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_113 = V_4;
				NullCheck(L_113);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_114 = DataRow_get_ItemArray_mD1A60F62F448D9EB6304797EA59E5215D34A8121(L_113, /*hidden argument*/NULL);
				V_6 = L_114;
				DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_115 = ___tbl0;
				NullCheck(L_115);
				DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_116 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_115, /*hidden argument*/NULL);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_117 = V_6;
				NullCheck(L_116);
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_118 = DataRowCollection_Add_mDBC8A4205FCF0BA2CFB674F29C145BBDA4150418(L_116, L_117, /*hidden argument*/NULL);
				V_7 = L_118;
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_119 = V_7;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var);
				String_t* L_120 = ((SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tE8F2E11E3CCB5279CC0AEB2FE4C80C808FE40DEA_il2cpp_TypeInfo_var))->get_IsHidden_2();
				bool L_121 = ((bool)1);
				RuntimeObject * L_122 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_121);
				NullCheck(L_119);
				DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_119, L_120, L_122, /*hidden argument*/NULL);
				DataRow_t3AD5AFAAA1E47429AB5A23F3F89E7A2FCCF3C665 * L_123 = V_7;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var);
				String_t* L_124 = ((SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_t7322D05A6816D93DEFD501739791B2ABB1EC6F52_il2cpp_TypeInfo_var))->get_ColumnOrdinal_1();
				DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_125 = ___tbl0;
				NullCheck(L_125);
				DataRowCollection_t1B8B88F4082F9156E516AAAA0C8AC2F354C2BA07 * L_126 = DataTable_get_Rows_mF0BCA4B9AA04520556A22459B744FB99B03463E4(L_125, /*hidden argument*/NULL);
				NullCheck(L_126);
				int32_t L_127 = DataRowCollection_get_Count_m03CEE5E176D7DDED6DCE870CB21963EB4EEB2E6F(L_126, /*hidden argument*/NULL);
				int32_t L_128 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)1));
				RuntimeObject * L_129 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_128);
				NullCheck(L_123);
				DataRow_set_Item_mCC20A799EFFA85AA897C38D6C06D5B0E3A79DA36(L_123, L_124, L_129, /*hidden argument*/NULL);
			}

IL_0289:
			{
				RuntimeObject* L_130 = V_5;
				NullCheck(L_130);
				bool L_131 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_130);
				if (L_131)
				{
					goto IL_0233;
				}
			}

IL_0295:
			{
				IL2CPP_LEAVE(0x2B0, FINALLY_029a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_029a;
		}

FINALLY_029a:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_132 = V_5;
				V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_132, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_133 = V_8;
				if (L_133)
				{
					goto IL_02a8;
				}
			}

IL_02a7:
			{
				IL2CPP_END_FINALLY(666)
			}

IL_02a8:
			{
				RuntimeObject* L_134 = V_8;
				NullCheck(L_134);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_134);
				IL2CPP_END_FINALLY(666)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(666)
		{
			IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_02b0:
		{
			IL2CPP_LEAVE(0x2C2, FINALLY_02b5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02b5;
	}

FINALLY_02b5:
	{ // begin finally (depth: 1)
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_135 = V_3;
			if (!L_135)
			{
				goto IL_02c1;
			}
		}

IL_02bb:
		{
			DataTable_tC8737D6A78B56C6A4E0D5A8758E157C4D1B551D5 * L_136 = V_3;
			NullCheck(L_136);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_136);
		}

IL_02c1:
		{
			IL2CPP_END_FINALLY(693)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(693)
	{
		IL2CPP_JUMP_TBL(0x2C2, IL_02c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02c2:
	{
		int32_t L_137 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
	}

IL_02c6:
	{
		int32_t L_138 = V_1;
		KeyInfoU5BU5D_t4A654046A33BCC9A6BFA36B37E66F024D1132141* L_139 = __this->get__keyInfo_0();
		NullCheck(L_139);
		if ((((int32_t)L_138) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_139)->max_length)))))))
		{
			goto IL_0009;
		}
	}
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
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_pinvoke(const KeyInfo_tFB27F6364284236F653E61480F11552B2145541B& unmarshaled, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL, NULL);
}
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_pinvoke_back(const KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_pinvoke& marshaled, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_pinvoke_cleanup(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_com(const KeyInfo_tFB27F6364284236F653E61480F11552B2145541B& unmarshaled, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_com& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL, NULL);
}
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_com_back(const KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_com& marshaled, KeyInfo_tFB27F6364284236F653E61480F11552B2145541B& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
extern "C" void KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshal_com_cleanup(KeyInfo_tFB27F6364284236F653E61480F11552B2145541B_marshaled_com& marshaled)
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
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR void KeyQuery__ctor_mFC968766FE129954A29948E1E13174E7A7C771E9 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___columns3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery__ctor_mFC968766FE129954A29948E1E13174E7A7C771E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * L_0 = (SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 *)il2cpp_codegen_object_new(SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010_il2cpp_TypeInfo_var);
		SqliteCommandBuilder__ctor_m28BF584D0A21B934D3FE505C3FE40D0B992E6F69(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_1 = ___cnn0;
			NullCheck(L_1);
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_2 = SqliteConnection_CreateCommand_m77C6EFD385CBFFDFD99BB55304314FA249541D61(L_1, /*hidden argument*/NULL);
			__this->set__command_0(L_2);
			V_1 = 0;
			goto IL_0031;
		}

IL_001f:
		{
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___columns3;
			int32_t L_4 = V_1;
			SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * L_5 = V_0;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___columns3;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			NullCheck(L_5);
			String_t* L_10 = SqliteCommandBuilder_QuoteIdentifier_mB324DE23BC43AE64B54D38679EE05A5A65AD6376(L_5, L_9, /*hidden argument*/NULL);
			NullCheck(L_3);
			ArrayElementTypeCheck (L_3, L_10);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (String_t*)L_10);
			int32_t L_11 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_0031:
		{
			int32_t L_12 = V_1;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = ___columns3;
			NullCheck(L_13);
			if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
			{
				goto IL_001f;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * L_14 = V_0;
			if (!L_14)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			SqliteCommandBuilder_t508571DD399302A16741DEFCD4F69F1EA6DFE010 * L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_16 = __this->get__command_0();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = ___columns3;
		String_t* L_18 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___database1;
		String_t* L_20 = ___table2;
		String_t* L_21 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralDD64AB817AB410403092565BB65F18EDEE243B7F, L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8(L_16, L_21, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_22 = __this->get__command_0();
		NullCheck(L_22);
		SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * L_23 = SqliteCommand_get_Parameters_mBB384AD9AFDE93E94816FF4173E50AE553FC9E6E(L_22, /*hidden argument*/NULL);
		int64_t L_24 = (((int64_t)((int64_t)0)));
		RuntimeObject * L_25 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		SqliteParameterCollection_AddWithValue_m1798A60330D3841D566943DB251E2E20A8CB5C2A(L_23, (String_t*)NULL, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m77591C20EDA3ADEE2FAF1987321D686E249326C5(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7_RuntimeMethod_var);
	}

IL_000c:
	{
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_2 = __this->get__reader_1();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_3 = __this->get__reader_1();
		NullCheck(L_3);
		DbDataReader_Dispose_m9B59B5128500E3105F7809F16555A4A5BC7DD4F8(L_3, /*hidden argument*/NULL);
		__this->set__reader_1((SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 *)NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, int64_t ___rowid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery_Sync_m745265BEE0C2A88A3C257617FF5DCD4B83157069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7(__this, (bool)0, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_0 = __this->get__command_0();
		NullCheck(L_0);
		SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * L_1 = SqliteCommand_get_Parameters_mBB384AD9AFDE93E94816FF4173E50AE553FC9E6E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_2 = SqliteParameterCollection_get_Item_m93B04004F3D8EE64B3E1AA82B03DF0E8F15F7C0C(L_1, 0, /*hidden argument*/NULL);
		int64_t L_3 = ___rowid0;
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE(L_2, L_5, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_6 = __this->get__command_0();
		NullCheck(L_6);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_7 = SqliteCommand_ExecuteReader_m516C5AF0977CDC6B2D443D8DB27D6C5BB3B89FAA(L_6, /*hidden argument*/NULL);
		__this->set__reader_1(L_7);
		SqliteDataReader_t50F15CFA4E4891A4609014E3890046C7140A25A3 * L_8 = __this->get__reader_1();
		NullCheck(L_8);
		SqliteDataReader_Read_mF595279478885DDBEF96AB1870834A04082F3C3C(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
extern "C" IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m116E81717A9A10398C60853EB9C84F8E9F9188A0 (KeyQuery_t57AE791E094C97DA51F625AFC575B65C8161B58C * __this, const RuntimeMethod* method)
{
	{
		KeyQuery_set_IsValid_m1A79F5AD71B23EA0A9278BCB0D1C594ED166D9A7(__this, (bool)0, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_0 = __this->get__command_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_1 = __this->get__command_0();
		NullCheck(L_1);
		Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98(L_1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		__this->set__command_0((SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 *)NULL);
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
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mC10E6F035F557B1DAC60F0515CA758161CD861A3 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		SqliteParameter__ctor_m66E9B79FC1FB82517EE1AE0219893BEEBCD87A03(__this, (String_t*)NULL, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m9DDE3FF98F6BFEA5CCAAE992D171FE515826D94D (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		SqliteParameter__ctor_m66E9B79FC1FB82517EE1AE0219893BEEBCD87A03(__this, L_0, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m66E9B79FC1FB82517EE1AE0219893BEEBCD87A03 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method)
{
	{
		DbParameter__ctor_m094E9C9609738D521F11501B74EB23F97605EBFB(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameterName0;
		__this->set__parameterName_5(L_0);
		int32_t L_1 = ___parameterType1;
		__this->set__dbType_1(L_1);
		String_t* L_2 = ___sourceColumn3;
		__this->set__sourceColumn_4(L_2);
		int32_t L_3 = ___rowVersion4;
		__this->set__rowVersion_2(L_3);
		__this->set__objValue_3(NULL);
		int32_t L_4 = ___parameterSize2;
		__this->set__dataSize_6(L_4);
		__this->set__nullMapping_8((bool)0);
		__this->set__nullable_7((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mB29AB05EB0CA112F57CD266F660BAA25D81BCBD8 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___source0, const RuntimeMethod* method)
{
	{
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1 = SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC(L_0, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__dbType_1();
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5 = SqliteParameter_get_Direction_m0B906222F158F93D8CCB1A28276A5F976AC014CD(L_4, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_6 = ___source0;
		NullCheck(L_6);
		bool L_7 = SqliteParameter_get_IsNullable_mBF67EAEED87E87A551EB2B481D5C5AE07174D649(L_6, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_8 = ___source0;
		NullCheck(L_8);
		String_t* L_9 = SqliteParameter_get_SourceColumn_m69CB9189127A09DC44988F825ABC6D153583EF00(L_8, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11 = SqliteParameter_get_SourceVersion_m74FBED6730C7063253306ED79CA79C4AE40ADCB9(L_10, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_12 = ___source0;
		NullCheck(L_12);
		RuntimeObject * L_13 = SqliteParameter_get_Value_m9ADD7EB447CA0AE8D73B4DB6A3B83C1999E56C02(L_12, /*hidden argument*/NULL);
		SqliteParameter__ctor_m9016A7F80D5915FAC0B89D98FAB52FCB712EA6A9(__this, L_1, L_3, 0, L_5, L_7, (uint8_t)0, (uint8_t)0, L_9, L_11, L_13, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_14 = ___source0;
		NullCheck(L_14);
		bool L_15 = L_14->get__nullMapping_8();
		__this->set__nullMapping_8(L_15);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m9016A7F80D5915FAC0B89D98FAB52FCB712EA6A9 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		int32_t L_1 = ___parameterType1;
		int32_t L_2 = ___parameterSize2;
		String_t* L_3 = ___sourceColumn7;
		int32_t L_4 = ___rowVersion8;
		SqliteParameter__ctor_m66E9B79FC1FB82517EE1AE0219893BEEBCD87A03(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___direction3;
		SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = ___isNullable4;
		SqliteParameter_set_IsNullable_m56C2BFBE4AA6496BAFB1A4D604D2C9078B98035E(__this, L_6, /*hidden argument*/NULL);
		RuntimeObject * L_7 = ___value9;
		SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameter_get_IsNullable_mBF67EAEED87E87A551EB2B481D5C5AE07174D649 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__nullable_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_IsNullable_m56C2BFBE4AA6496BAFB1A4D604D2C9078B98035E (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullable_7(L_0);
		return;
	}
}
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_mB89D51F642A72646BF1B1DEB831B289DEEF780BE (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_get_DbType_mB89D51F642A72646BF1B1DEB831B289DEEF780BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__dbType_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__objValue_3();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_3 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_3)))
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_4 = __this->get__objValue_3();
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var);
		int32_t L_6 = SqliteConvert_TypeToDbType_m57BC19FB64696CB3FB49A29D85D5782F5F77C854(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0038:
	{
		return (int32_t)(((int32_t)16));
	}

IL_003b:
	{
		int32_t L_7 = __this->get__dbType_1();
		return (int32_t)(L_7);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_DbType(System.Data.DbType)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_DbType_mC8FA786FC6F94C3110F105F9CE28CC2EF8E39395 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dbType_1(L_0);
		return;
	}
}
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_Direction_m0B906222F158F93D8CCB1A28276A5F976AC014CD (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SqliteParameter_set_Direction_mCB0E1B6A3750F7051EC393074B7D764C9B38463B_RuntimeMethod_var);
	}

IL_000d:
	{
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__parameterName_5();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_ParameterName(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_ParameterName_mDE527BA6820A84DD6675E4B283EF7F2B419F544A (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__parameterName_5(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Size(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Size_m6E1B8CA4C44A8D042B57E5C9322FCD12FFE8BA84 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dataSize_6(L_0);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
extern "C" IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_SourceColumn_m69CB9189127A09DC44988F825ABC6D153583EF00 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__sourceColumn_4();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumn(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumn_mAFBAD7904542AD3D0521B259E8469B142C01A69B (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__sourceColumn_4(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumnNullMapping(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumnNullMapping_m57203A96AA6F85C9276F772F754435FB77C284D1 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullMapping_8(L_0);
		return;
	}
}
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_SourceVersion_m74FBED6730C7063253306ED79CA79C4AE40ADCB9 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__rowVersion_2();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceVersion(System.Data.DataRowVersion)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceVersion_mA6AC4681F47EB93F2257E5E10BAD8A9E33E2D447 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__rowVersion_2(L_0);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_get_Value_m9ADD7EB447CA0AE8D73B4DB6A3B83C1999E56C02 (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__objValue_3();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Value_m9EAF1492417E3FC6EB2BA1761880843D9896CEAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		__this->set__objValue_3(L_0);
		int32_t L_1 = __this->get__dbType_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_4 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_4)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject * L_5 = __this->get__objValue_3();
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var);
		int32_t L_7 = SqliteConvert_TypeToDbType_m57BC19FB64696CB3FB49A29D85D5782F5F77C854(L_6, /*hidden argument*/NULL);
		__this->set__dbType_1(L_7);
	}

IL_0044:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_Clone_m2F3E1B6AC30078B566F43B918F9A10A61627425D (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_Clone_m2F3E1B6AC30078B566F43B918F9A10A61627425D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * V_0 = NULL;
	{
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_0 = (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)il2cpp_codegen_object_new(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_mB29AB05EB0CA112F57CD266F660BAA25D81BCBD8(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_1 = V_0;
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
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::.ctor(Mono.Data.Sqlite.SqliteCommand)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection__ctor_mBC1D047E1C8F88A1FF6F8214F7E8E536DE4CC126 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * ___cmd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection__ctor_mBC1D047E1C8F88A1FF6F8214F7E8E536DE4CC126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbParameterCollection__ctor_mC2A9237E171278F28FA9B4ABA6AF40DF52D0C2D1(__this, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_0 = ___cmd0;
		__this->set__command_1(L_0);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_1 = (List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC *)il2cpp_codegen_object_new(List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC_il2cpp_TypeInfo_var);
		List_1__ctor_mD692E4407A350882151EB3CC63AC49D4ACF144A6(L_1, /*hidden argument*/List_1__ctor_mD692E4407A350882151EB3CC63AC49D4ACF144A6_RuntimeMethod_var);
		__this->set__parameterList_2(L_1);
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsSynchronized()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsSynchronized_mE0A7D24BE595EF08630E0440310A2DE7E9DAF4E2 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsFixedSize()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsFixedSize_m096AA11E191EEE2D5279689BA557628E1B4D347E (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsReadOnly()
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsReadOnly_mF66A538EC52E51B693EBF139904E1C2FFAEAA835 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameterCollection::get_SyncRoot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameterCollection_get_SyncRoot_mFCD203E8CE2165A3B5B05299A003C6A00987F097 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteParameterCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameterCollection_GetEnumerator_m4142572E49E4F6E43A8EB1F74366D93A8503DF64 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetEnumerator_m4142572E49E4F6E43A8EB1F74366D93A8503DF64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  L_1 = List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64(L_0, /*hidden argument*/List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64_RuntimeMethod_var);
		Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_0 = ___parameter0;
		NullCheck(L_0);
		String_t* L_1 = SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4 = SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC(L_3, /*hidden argument*/NULL);
		int32_t L_5 = SqliteParameterCollection_IndexOf_mC7F704145E8B3584A64AB1AC0866CFAC98DA0693(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_7 = __this->get__parameterList_2();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F(L_7, /*hidden argument*/List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F_RuntimeMethod_var);
		V_0 = L_8;
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_9 = __this->get__parameterList_2();
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_10 = ___parameter0;
		NullCheck(L_9);
		List_1_Add_m43E6B4B43DC8C960F6C1C596323B435EE190D518(L_9, L_10, /*hidden argument*/List_1_Add_m43E6B4B43DC8C960F6C1C596323B435EE190D518_RuntimeMethod_var);
	}

IL_003e:
	{
		int32_t L_11 = V_0;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_12 = ___parameter0;
		SqliteParameterCollection_SetParameter_m1287A19B7D8BF14AF45149E8C8AB431CB13A2CC3(__this, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mFCA125B36B91E9B1C3EED733EB0AC6D23D09ACC7 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_mFCA125B36B91E9B1C3EED733EB0AC6D23D09ACC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E(__this, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * SqliteParameterCollection_AddWithValue_m1798A60330D3841D566943DB251E2E20A8CB5C2A (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_AddWithValue_m1798A60330D3841D566943DB251E2E20A8CB5C2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * V_0 = NULL;
	{
		String_t* L_0 = ___parameterName0;
		RuntimeObject * L_1 = ___value1;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_2 = (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)il2cpp_codegen_object_new(SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_m9DDE3FF98F6BFEA5CCAAE992D171FE515826D94D(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_3 = V_0;
		SqliteParameterCollection_Add_m10624D1190EBDF5EB8ACB1CA4F7996792F6A7D8E(__this, L_3, /*hidden argument*/NULL);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Clear()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Clear_mDB08729BB14D2683A08FC778EC24D48986B1878A (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Clear_mDB08729BB14D2683A08FC778EC24D48986B1878A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		List_1_Clear_m4A7019407D157423E20E7A6752BF6B867B7FFC88(L_0, /*hidden argument*/List_1_Clear_m4A7019407D157423E20E7A6752BF6B867B7FFC88_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::Contains(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool SqliteParameterCollection_Contains_m809EE521F1C60EE782AA093803E5D1ECB4BE8CCC (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Contains_m809EE521F1C60EE782AA093803E5D1ECB4BE8CCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m25CFC152F09821F762F94CD8770D25297AEBD358(L_0, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Contains_m25CFC152F09821F762F94CD8770D25297AEBD358_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::CopyTo(System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_CopyTo_m966875B97720BE945421544B35A5BD75EE4717E8 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_CopyTo_m966875B97720BE945421544B35A5BD75EE4717E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SqliteParameterCollection_CopyTo_m966875B97720BE945421544B35A5BD75EE4717E8_RuntimeMethod_var);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_get_Count_mE39B32D861A0F17573CB5CD0AC8B83B0EC47D55A (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Count_mE39B32D861A0F17573CB5CD0AC8B83B0EC47D55A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F(L_0, /*hidden argument*/List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F_RuntimeMethod_var);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * SqliteParameterCollection_get_Item_m93B04004F3D8EE64B3E1AA82B03DF0E8F15F7C0C (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Item_m93B04004F3D8EE64B3E1AA82B03DF0E8F15F7C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * L_1 = SqliteParameterCollection_GetParameter_m015CD377BC23086613E16A605BB3DB46A63956B8(__this, L_0, /*hidden argument*/NULL);
		return ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var));
	}
}
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * SqliteParameterCollection_GetParameter_m015CD377BC23086613E16A605BB3DB46A63956B8 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetParameter_m015CD377BC23086613E16A605BB3DB46A63956B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_2 = List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0(L_0, L_1, /*hidden argument*/List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_mC7F704145E8B3584A64AB1AC0866CFAC98DA0693 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_mC7F704145E8B3584A64AB1AC0866CFAC98DA0693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F(L_0, /*hidden argument*/List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		String_t* L_2 = ___parameterName0;
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_3 = __this->get__parameterList_2();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_5 = List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0(L_3, L_4, /*hidden argument*/List_1_get_Item_mD4BCF51814B73633470A9AB9402B015A5CC268F0_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6 = SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_8 = String_Compare_mA1D43767F882FE677F238637A8785FCCEE7173D9(L_2, L_6, (bool)1, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m0C427F1439A7DC77B03B871A45BAB98F5AD55E04 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_m0C427F1439A7DC77B03B871A45BAB98F5AD55E04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m45DB29E25FE0C6FD22CEB35CA947F643D08D0B58(L_0, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_IndexOf_m45DB29E25FE0C6FD22CEB35CA947F643D08D0B58_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Insert(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Insert_m1468AC518F24282A8DCC6501E10498EA0B1DA8E4 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Insert_m1468AC518F24282A8DCC6501E10498EA0B1DA8E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		List_1_Insert_m2D7197245FE3F2274C0EA5A7A3138D8D51A67935(L_0, L_1, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Insert_m2D7197245FE3F2274C0EA5A7A3138D8D51A67935_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Remove(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Remove_mC7B6ECD9CA903303D93DE53C045AF814469113B3 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Remove_mC7B6ECD9CA903303D93DE53C045AF814469113B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		List_1_Remove_mB67152924646D9D64A118B7096F004E73EB0F8C2(L_0, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Remove_mB67152924646D9D64A118B7096F004E73EB0F8C2_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_RemoveAt_mEDDAFE1AF3E554069F3847ACE371C1C8587EFCA7 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_RemoveAt_mEDDAFE1AF3E554069F3847ACE371C1C8587EFCA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_m296891A9A1BFD3418A3D7B052A11E78C6BFB1411(L_0, L_1, /*hidden argument*/List_1_RemoveAt_m296891A9A1BFD3418A3D7B052A11E78C6BFB1411_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_m1287A19B7D8BF14AF45149E8C8AB431CB13A2CC3 (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, int32_t ___index0, DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_SetParameter_m1287A19B7D8BF14AF45149E8C8AB431CB13A2CC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		DbParameter_t5E4041B20FA875B04370E212A2D1238CC275F6CB * L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_m1D81B9584635381912B4FD24E756C455A92BFED0(L_0, L_1, ((SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_set_Item_m1D81B9584635381912B4FD24E756C455A92BFED0_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Unbind()
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_Unbind_m480697F56EDAC43DEEF9CE3C35CF2DD55243AADA (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, const RuntimeMethod* method)
{
	{
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::MapParameters(Mono.Data.Sqlite.SqliteStatement)
extern "C" IL2CPP_METHOD_ATTR void SqliteParameterCollection_MapParameters_mDBFB99E007C27CF538B578B29E5BF99D1E1CCC4D (SqliteParameterCollection_t3E31CB31126825C8E3B3E2B361275C8DDDCEC496 * __this, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * ___activeStatement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_MapParameters_mDBFB99E007C27CF538B578B29E5BF99D1E1CCC4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * V_4 = NULL;
	SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * V_5 = NULL;
	Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__unboundFlag_3();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_1 = __this->get__parameterList_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F(L_1, /*hidden argument*/List_1_get_Count_mB45349E75A69D01023AAF82B44E133C21EE4886F_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_3 = __this->get__command_1();
		NullCheck(L_3);
		List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * L_4 = L_3->get__statementList_12();
		if (L_4)
		{
			goto IL_002c;
		}
	}

IL_002b:
	{
		return;
	}

IL_002c:
	{
		V_0 = 0;
		V_3 = (-1);
		List_1_tC0084FBCF14A9753E8CE474D0E0FB4DEEF701FCC * L_5 = __this->get__parameterList_2();
		NullCheck(L_5);
		Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  L_6 = List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64(L_5, /*hidden argument*/List_1_GetEnumerator_mA8DD533C957AA432E29A6409F60F0564B7C60F64_RuntimeMethod_var);
		V_6 = L_6;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016e;
		}

IL_0042:
		{
			SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_7 = Enumerator_get_Current_m76002F2243745A75C82BD71D1F9EC4455E2AF842((Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *)(&V_6), /*hidden argument*/Enumerator_get_Current_m76002F2243745A75C82BD71D1F9EC4455E2AF842_RuntimeMethod_var);
			V_5 = L_7;
			int32_t L_8 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_9 = V_5;
			NullCheck(L_9);
			String_t* L_10 = SqliteParameter_get_ParameterName_m3FE394B9D05B3631A5FEA2B43C8E2AE14E5798EC(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			String_t* L_11 = V_1;
			if (L_11)
			{
				goto IL_0080;
			}
		}

IL_005d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
			CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_12 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
			int32_t L_15 = V_0;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			String_t* L_18 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_12, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_14, /*hidden argument*/NULL);
			V_1 = L_18;
			int32_t L_19 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		}

IL_0080:
		{
			V_8 = (bool)0;
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_20 = ___activeStatement0;
			if (L_20)
			{
				goto IL_00a0;
			}
		}

IL_0089:
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_21 = __this->get__command_1();
			NullCheck(L_21);
			List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * L_22 = L_21->get__statementList_12();
			NullCheck(L_22);
			int32_t L_23 = List_1_get_Count_m09B8347E2D1D666868A6FAC36EBBA81A097AFB0C(L_22, /*hidden argument*/List_1_get_Count_m09B8347E2D1D666868A6FAC36EBBA81A097AFB0C_RuntimeMethod_var);
			V_7 = L_23;
			goto IL_00a3;
		}

IL_00a0:
		{
			V_7 = 1;
		}

IL_00a3:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_24 = ___activeStatement0;
			V_4 = L_24;
			V_2 = 0;
			goto IL_00ef;
		}

IL_00ad:
		{
			V_8 = (bool)0;
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_25 = V_4;
			if (L_25)
			{
				goto IL_00ca;
			}
		}

IL_00b7:
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_26 = __this->get__command_1();
			NullCheck(L_26);
			List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * L_27 = L_26->get__statementList_12();
			int32_t L_28 = V_2;
			NullCheck(L_27);
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_29 = List_1_get_Item_m212C3517F24A4740785945298C16A93821613831(L_27, L_28, /*hidden argument*/List_1_get_Item_m212C3517F24A4740785945298C16A93821613831_RuntimeMethod_var);
			V_4 = L_29;
		}

IL_00ca:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_30 = V_4;
			NullCheck(L_30);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = L_30->get__paramNames_4();
			if (!L_31)
			{
				goto IL_00e8;
			}
		}

IL_00d6:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_32 = V_4;
			String_t* L_33 = V_1;
			SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_34 = V_5;
			NullCheck(L_32);
			bool L_35 = SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27(L_32, L_33, L_34, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_00e8;
			}
		}

IL_00e5:
		{
			V_8 = (bool)1;
		}

IL_00e8:
		{
			V_4 = (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *)NULL;
			int32_t L_36 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		}

IL_00ef:
		{
			int32_t L_37 = V_2;
			int32_t L_38 = V_7;
			if ((((int32_t)L_37) < ((int32_t)L_38)))
			{
				goto IL_00ad;
			}
		}

IL_00f7:
		{
			bool L_39 = V_8;
			if (L_39)
			{
				goto IL_016e;
			}
		}

IL_00fe:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
			CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_40 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
			int32_t L_43 = V_3;
			int32_t L_44 = L_43;
			RuntimeObject * L_45 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_45);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_45);
			String_t* L_46 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_40, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_42, /*hidden argument*/NULL);
			V_1 = L_46;
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_47 = ___activeStatement0;
			V_4 = L_47;
			V_2 = 0;
			goto IL_0166;
		}

IL_0127:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_48 = V_4;
			if (L_48)
			{
				goto IL_0141;
			}
		}

IL_012e:
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_49 = __this->get__command_1();
			NullCheck(L_49);
			List_1_t11BD2CCC920F7063960F15F69AFE62B7DBE4DB72 * L_50 = L_49->get__statementList_12();
			int32_t L_51 = V_2;
			NullCheck(L_50);
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_52 = List_1_get_Item_m212C3517F24A4740785945298C16A93821613831(L_50, L_51, /*hidden argument*/List_1_get_Item_m212C3517F24A4740785945298C16A93821613831_RuntimeMethod_var);
			V_4 = L_52;
		}

IL_0141:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_53 = V_4;
			NullCheck(L_53);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_54 = L_53->get__paramNames_4();
			if (!L_54)
			{
				goto IL_015f;
			}
		}

IL_014d:
		{
			SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_55 = V_4;
			String_t* L_56 = V_1;
			SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_57 = V_5;
			NullCheck(L_55);
			bool L_58 = SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27(L_55, L_56, L_57, /*hidden argument*/NULL);
			if (!L_58)
			{
				goto IL_015f;
			}
		}

IL_015c:
		{
			V_8 = (bool)1;
		}

IL_015f:
		{
			V_4 = (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *)NULL;
			int32_t L_59 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_0166:
		{
			int32_t L_60 = V_2;
			int32_t L_61 = V_7;
			if ((((int32_t)L_60) < ((int32_t)L_61)))
			{
				goto IL_0127;
			}
		}

IL_016e:
		{
			bool L_62 = Enumerator_MoveNext_mBD222ED4102072B70ECC2FA400DA8C6D07CBCDCF((Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mBD222ED4102072B70ECC2FA400DA8C6D07CBCDCF_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0042;
			}
		}

IL_017a:
		{
			IL2CPP_LEAVE(0x18C, FINALLY_017f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017f;
	}

FINALLY_017f:
	{ // begin finally (depth: 1)
		Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  L_63 = V_6;
		Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A  L_64 = L_63;
		RuntimeObject * L_65 = Box(Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_il2cpp_TypeInfo_var, &L_64);
		Enumerator_Dispose_mDB3651C83114E493B47483FD2EA53DB9A6D4E05D((Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A *)UnBox(L_65, Enumerator_tDBE2B775D9F660F4114EF899DBEE3A09869EFF4A_il2cpp_TypeInfo_var), /*hidden argument*/Enumerator_Dispose_mDB3651C83114E493B47483FD2EA53DB9A6D4E05D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(383)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(383)
	{
		IL2CPP_JUMP_TBL(0x18C, IL_018c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_018c:
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_66 = ___activeStatement0;
		if (L_66)
		{
			goto IL_0199;
		}
	}
	{
		__this->set__unboundFlag_3((bool)0);
	}

IL_0199:
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
// System.Void Mono.Data.Sqlite.SqliteStatement::.ctor(Mono.Data.Sqlite.SQLiteBase,Mono.Data.Sqlite.SqliteStatementHandle,System.String,Mono.Data.Sqlite.SqliteStatement)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement__ctor_mD2AC92D979E7DBAE320AADEAD7B0FA9FACDEF470 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * ___sqlbase0, SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * ___stmt1, String_t* ___strCommand2, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * ___previous3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement__ctor_mD2AC92D979E7DBAE320AADEAD7B0FA9FACDEF470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_0 = ___sqlbase0;
		__this->set__sql_0(L_0);
		SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * L_1 = ___stmt1;
		__this->set__sqlite_stmt_2(L_1);
		String_t* L_2 = ___strCommand2;
		__this->set__sqlStatement_1(L_2);
		V_0 = 0;
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_3 = __this->get__sql_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker1< int32_t, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * >::Invoke(22 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Bind_ParamCount(Mono.Data.Sqlite.SqliteStatement) */, L_3, __this);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_6 = ___previous3;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * L_7 = ___previous3;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__unnamedParameters_3();
		V_0 = L_8;
	}

IL_0040:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->set__paramNames_4(L_10);
		int32_t L_11 = V_1;
		SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* L_12 = (SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3*)SZArrayNew(SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set__paramValues_5(L_12);
		V_2 = 0;
		goto IL_00c1;
	}

IL_005f:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_13 = __this->get__sql_0();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15 = VirtFuncInvoker2< String_t*, SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(23 /* System.String Mono.Data.Sqlite.SQLiteBase::Bind_ParamName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, __this, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		V_3 = L_15;
		String_t* L_16 = V_3;
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_18 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		String_t* L_24 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_18, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_20, /*hidden argument*/NULL);
		V_3 = L_24;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = __this->get__unnamedParameters_3();
		__this->set__unnamedParameters_3(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
	}

IL_00ab:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = __this->get__paramNames_4();
		int32_t L_28 = V_2;
		String_t* L_29 = V_3;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_29);
		SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* L_30 = __this->get__paramValues_5();
		int32_t L_31 = V_2;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, NULL);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)NULL);
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_005f;
		}
	}

IL_00c8:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, String_t* ___s0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_MapParameter_m9C67C680E63AFB5E5C922CDB6CDFC09609A25B27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__paramNames_4();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		V_0 = 0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		Il2CppChar L_4 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, 0, /*hidden argument*/NULL);
		NullCheck(_stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = 1;
	}

IL_0034:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = __this->get__paramNames_4();
		NullCheck(L_6);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		V_2 = 0;
		goto IL_0088;
	}

IL_0044:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = __this->get__paramNames_4();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = __this->get__paramNames_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_21 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_22 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_23 = String_Compare_m759578081B55965D2CE733DF538FA20554F2F874(L_10, L_11, L_12, 0, L_21, (bool)1, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0084;
		}
	}
	{
		SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* L_24 = __this->get__paramValues_5();
		int32_t L_25 = V_2;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_26 = ___p1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 *)L_26);
		return (bool)1;
	}

IL_0084:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0088:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::Dispose()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_Dispose_m93D723037608A01C97C622F8D273B00399DC3034 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * L_0 = __this->get__sqlite_stmt_2();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * L_1 = __this->get__sqlite_stmt_2();
		NullCheck(L_1);
		CriticalHandle_Dispose_mDBA1677ABB0EE5E4AB408B301A6FC58E2E75EBBF(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->set__sqlite_stmt_2((SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B *)NULL);
		__this->set__paramNames_4((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL);
		__this->set__paramValues_5((SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3*)NULL);
		__this->set__sql_0((SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 *)NULL);
		__this->set__sqlStatement_1((String_t*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameters()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameters_m7F799CE7DB518CB9859DAF8E304984D0188B7BF1 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__paramNames_4();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get__paramNames_4();
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		V_1 = 0;
		goto IL_0031;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		SqliteParameterU5BU5D_tFB5CF4399CB32C2502F8C8C5DF9662662545D2F3* L_3 = __this->get__paramValues_5();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, int32_t ___index0, SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Guid_t  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_0 = ___param1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * L_1 = (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 *)il2cpp_codegen_object_new(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF(L_1, 1, _stringLiteral2ADF0A0954741E1AF5766479C5643CD51B0B69B5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SqliteStatement_BindParameter_mF7D6F4022AB2EB50B4586B2CE58B82633666AFD6_RuntimeMethod_var);
	}

IL_0012:
	{
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_2 = ___param1;
		NullCheck(L_2);
		RuntimeObject * L_3 = SqliteParameter_get_Value_m9ADD7EB447CA0AE8D73B4DB6A3B83C1999E56C02(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		SqliteParameter_tD1B7F7081E410519C86AC464A137D0EFDFC13C29 * L_4 = ___param1;
		NullCheck(L_4);
		int32_t L_5 = SqliteParameter_get_DbType_mB89D51F642A72646BF1B1DEB831B289DEEF780BE(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeObject * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_7 = Convert_IsDBNull_m5523BC521CD361615CE6846388C7BD5BA1EDDCE5(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		if (L_8)
		{
			goto IL_003f;
		}
	}

IL_0031:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_9 = __this->get__sql_0();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		VirtActionInvoker2< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t >::Invoke(21 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Null(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_9, __this, L_10);
		return;
	}

IL_003f:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject * L_12 = V_0;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_tA7C50ED8BBD20691464DEBAD5348E203530B1BFC_il2cpp_TypeInfo_var);
		int32_t L_14 = SqliteConvert_TypeToDbType_m57BC19FB64696CB3FB49A29D85D5782F5F77C854(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		V_2 = L_15;
		int32_t L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_0109;
			}
			case 4:
			{
				goto IL_00b2;
			}
			case 5:
			{
				goto IL_00b2;
			}
			case 6:
			{
				goto IL_018b;
			}
			case 7:
			{
				goto IL_0109;
			}
			case 8:
			{
				goto IL_013e;
			}
			case 9:
			{
				goto IL_00ec;
			}
			case 10:
			{
				goto IL_00ec;
			}
			case 11:
			{
				goto IL_00cf;
			}
			case 12:
			{
				goto IL_01b6;
			}
			case 13:
			{
				goto IL_00ec;
			}
			case 14:
			{
				goto IL_0109;
			}
			case 15:
			{
				goto IL_01b6;
			}
			case 16:
			{
				goto IL_00b2;
			}
			case 17:
			{
				goto IL_00ec;
			}
			case 18:
			{
				goto IL_00ec;
			}
			case 19:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_01b6;
	}

IL_00b2:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_17 = __this->get__sql_0();
		int32_t L_18 = ___index0;
		RuntimeObject * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_20 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_21 = Convert_ToDateTime_m246003CF3103F7DF9D6E817DCEFAE2CF8068862D(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(20 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime) */, L_17, __this, L_18, L_21);
		goto IL_01ce;
	}

IL_00cf:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_22 = __this->get__sql_0();
		int32_t L_23 = ___index0;
		RuntimeObject * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_25 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_26 = Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, int64_t >::Invoke(17 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int64(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int64) */, L_22, __this, L_23, L_26);
		goto IL_01ce;
	}

IL_00ec:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_27 = __this->get__sql_0();
		int32_t L_28 = ___index0;
		RuntimeObject * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_30 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_31 = Convert_ToInt32_m5D40340597602FB6C20BAB933E8B29617232757A(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, int32_t >::Invoke(16 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int32(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_27, __this, L_28, L_31);
		goto IL_01ce;
	}

IL_0109:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_32 = __this->get__sql_0();
		int32_t L_33 = ___index0;
		RuntimeObject * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_35 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_36 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, double >::Invoke(15 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Double(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Double) */, L_32, __this, L_33, L_36);
		goto IL_01ce;
	}

IL_0126:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_37 = __this->get__sql_0();
		int32_t L_38 = ___index0;
		RuntimeObject * L_39 = V_0;
		NullCheck(L_37);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_37, __this, L_38, ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_39, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
		goto IL_01ce;
	}

IL_013e:
	{
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_40 = __this->get__command_6();
		NullCheck(L_40);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_41 = SqliteCommand_get_Connection_mB35E89C4DD93FE72169950AC39570612B9B8E7C1(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		bool L_42 = L_41->get__binaryGuid_13();
		if (!L_42)
		{
			goto IL_0173;
		}
	}
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_43 = __this->get__sql_0();
		int32_t L_44 = ___index0;
		RuntimeObject * L_45 = V_0;
		V_3 = ((*(Guid_t *)((Guid_t *)UnBox(L_45, Guid_t_il2cpp_TypeInfo_var))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223((Guid_t *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_43, __this, L_44, L_46);
		goto IL_0186;
	}

IL_0173:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_47 = __this->get__sql_0();
		int32_t L_48 = ___index0;
		RuntimeObject * L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		NullCheck(L_47);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_47, __this, L_48, L_50);
	}

IL_0186:
	{
		goto IL_01ce;
	}

IL_018b:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_51 = __this->get__sql_0();
		int32_t L_52 = ___index0;
		RuntimeObject * L_53 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_54 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_55 = Convert_ToDecimal_mD8F65E8B251DBE61789CAD032172D089375D1E5B(L_53, L_54, /*hidden argument*/NULL);
		V_4 = L_55;
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_56 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_57 = Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)(&V_4), L_56, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_51, __this, L_52, L_57);
		goto IL_01ce;
	}

IL_01b6:
	{
		SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22 * L_58 = __this->get__sql_0();
		int32_t L_59 = ___index0;
		RuntimeObject * L_60 = V_0;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		NullCheck(L_58);
		VirtActionInvoker3< SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_58, __this, L_59, L_61);
		goto IL_01ce;
	}

IL_01ce:
	{
		return;
	}
}
// System.String[] Mono.Data.Sqlite.SqliteStatement::get_TypeDefinitions()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* SqliteStatement_get_TypeDefinitions_mE56F4D186E79DD3CF1FB37A410DA3F965F8527EC (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__types_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::SetTypes(System.String)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatement_SetTypes_m467589073CC01BA286723D8DE3542F521FE0DFC2 (SqliteStatement_t5BF584E424790B713141F554C54CCB15AB9F9979 * __this, String_t* ___typedefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_SetTypes_m467589073CC01BA286723D8DE3542F521FE0DFC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___typedefs0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01(L_0, _stringLiteral40EA9041285003E004A8F6FE2DD14EBB07961AF2, 0, 5, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SqliteStatement_SetTypes_m467589073CC01BA286723D8DE3542F521FE0DFC2_RuntimeMethod_var);
	}

IL_001b:
	{
		String_t* L_4 = ___typedefs0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)6)), /*hidden argument*/NULL);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		String_t* L_8 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_6, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_8);
		String_t* L_10 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_8, _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312, L_9, /*hidden argument*/NULL);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_10);
		String_t* L_12 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_10, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, L_11, /*hidden argument*/NULL);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_12);
		String_t* L_14 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_12, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, L_13, /*hidden argument*/NULL);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_14, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_16, _stringLiteral7E15BB5C01E7DD56499E37C634CF791D3A519AEE, L_17, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = L_19;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tFAA4CB92A229A446CF29CEF72154145A06208019____U24U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_18, L_20, /*hidden argument*/NULL);
		V_1 = L_22;
		V_2 = 0;
		goto IL_00b1;
	}

IL_009c:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		bool L_27 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ad;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = V_1;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)NULL);
	}

IL_00ad:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_33 = V_1;
		__this->set__types_7(L_33);
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
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m127A0778D9512F1AC26FB2F6547F79DFF1605E5E (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, intptr_t ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle__ctor_m152074FB4DE5C4E2AD2A63A3CF29AF4F5A841DF6(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___stmt0;
		CriticalHandle_SetHandle_m4EE9D69A73EF79440558738F688DA93682B8A955(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m152074FB4DE5C4E2AD2A63A3CF29AF4F5A841DF6 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle__ctor_m152074FB4DE5C4E2AD2A63A3CF29AF4F5A841DF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CriticalHandle__ctor_m63298C852798FD29EC96265E0D6F5B3E72398349(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::ReleaseHandle()
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatementHandle_ReleaseHandle_mB1F807DD008B390FAD65536E50C8C9A729971F32 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_ReleaseHandle_mB1F807DD008B390FAD65536E50C8C9A729971F32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SQLiteBase_tD8ECEA23C0942C02688B7C9FC963D5CEA4B88D22_il2cpp_TypeInfo_var);
		SQLiteBase_FinalizeStatement_mA499964E3E9E97268087C04D657580CFAEFFA0A8(__this, /*hidden argument*/NULL);
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::get_IsInvalid()
extern "C" IL2CPP_METHOD_ATTR bool SqliteStatementHandle_get_IsInvalid_m8C147649D2CF28F32620861C75EE7FF7D10260C1 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_get_IsInvalid_m8C147649D2CF28F32620861C75EE7FF7D10260C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(Mono.Data.Sqlite.SqliteStatementHandle)
extern "C" IL2CPP_METHOD_ATTR intptr_t SqliteStatementHandle_op_Implicit_m6347921C4E27BF304A5B102F3F2362B5B7A82581 (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * L_0 = ___stmt0;
		NullCheck(L_0);
		intptr_t L_1 = ((CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 *)L_0)->get_handle_0();
		return (intptr_t)L_1;
	}
}
// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * SqliteStatementHandle_op_Implicit_mAAF58A66FB73A0F59D024C91F3DDB6727719EE46 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_op_Implicit_mAAF58A66FB73A0F59D024C91F3DDB6727719EE46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___stmt0;
		SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B * L_1 = (SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B *)il2cpp_codegen_object_new(SqliteStatementHandle_t97C3A964BEA40644D93E5B9F6D7EADBDBC8DAA5B_il2cpp_TypeInfo_var);
		SqliteStatementHandle__ctor_m127A0778D9512F1AC26FB2F6547F79DFF1605E5E(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Mono.Data.Sqlite.SqliteTransaction::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction__ctor_m4B1582F2AE8DE773D105C744D5649B797BAC5812 (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___connection0, bool ___deferredLock1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction__ctor_m4B1582F2AE8DE773D105C744D5649B797BAC5812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * G_B2_0 = NULL;
	SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * G_B3_1 = NULL;
	{
		DbTransaction__ctor_m02B1310E3417F328B6142990E91F88A3F963490C(__this, /*hidden argument*/NULL);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = ___connection0;
		__this->set__cnn_1(L_0);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		int64_t L_2 = L_1->get__version_14();
		__this->set__version_2(L_2);
		bool L_3 = ___deferredLock1;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = ((int32_t)4096);
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = ((int32_t)1048576);
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__level_3(G_B3_0);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_4 = __this->get__cnn_1();
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__transactionLevel_6();
		int32_t L_7 = L_6;
		V_1 = L_7;
		NullCheck(L_5);
		L_5->set__transactionLevel_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		if (L_8)
		{
			goto IL_00c1;
		}
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_9 = __this->get__cnn_1();
			NullCheck(L_9);
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_10 = SqliteConnection_CreateCommand_m77C6EFD385CBFFDFD99BB55304314FA249541D61(L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0060:
		try
		{ // begin try (depth: 2)
			{
				bool L_11 = ___deferredLock1;
				if (L_11)
				{
					goto IL_0076;
				}
			}

IL_0066:
			{
				SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_12 = V_0;
				NullCheck(L_12);
				SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8(L_12, _stringLiteral4821EDEB87E72FFADC6BC2DD7758D1AF495E515F, /*hidden argument*/NULL);
				goto IL_0081;
			}

IL_0076:
			{
				SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_13 = V_0;
				NullCheck(L_13);
				SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8(L_13, _stringLiteral3598517C826F1480A241800CE73F781AE2B1CD6A, /*hidden argument*/NULL);
			}

IL_0081:
			{
				SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_14 = V_0;
				NullCheck(L_14);
				SqliteCommand_ExecuteNonQuery_m46ECDF991307A735E976587EB18128F5C7E393E0(L_14, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x9A, FINALLY_008d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008d;
		}

FINALLY_008d:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_15 = V_0;
				if (!L_15)
				{
					goto IL_0099;
				}
			}

IL_0093:
			{
				SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_16 = V_0;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
			}

IL_0099:
			{
				IL2CPP_END_FINALLY(141)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(141)
		{
			IL2CPP_JUMP_TBL(0x9A, IL_009a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009a:
		{
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009f;
		throw e;
	}

CATCH_009f:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		{
			SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_17 = __this->get__cnn_1();
			SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_18 = L_17;
			NullCheck(L_18);
			int32_t L_19 = L_18->get__transactionLevel_6();
			NullCheck(L_18);
			L_18->set__transactionLevel_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
			__this->set__cnn_1((SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A *)NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, SqliteTransaction__ctor_m4B1582F2AE8DE773D105C744D5649B797BAC5812_RuntimeMethod_var);
		}

IL_00bc:
		{
			goto IL_00c1;
		}
	} // end catch (depth: 1)

IL_00c1:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Commit()
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Commit_mA753E05C4DA4855EBB55B569B63C580403CC4F02 (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_Commit_mA753E05C4DA4855EBB55B569B63C580403CC4F02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763(__this, (bool)1, /*hidden argument*/NULL);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = __this->get__cnn_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__transactionLevel_6();
		if (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_2 = __this->get__cnn_1();
		NullCheck(L_2);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_3 = SqliteConnection_CreateCommand_m77C6EFD385CBFFDFD99BB55304314FA249541D61(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_4 = V_0;
		NullCheck(L_4);
		SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8(L_4, _stringLiteral17E4D773881595E83EED7274990576CB3C33D081, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_5 = V_0;
		NullCheck(L_5);
		SqliteCommand_ExecuteNonQuery_m46ECDF991307A735E976587EB18128F5C7E393E0(L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x4A, FINALLY_003d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(61)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_8 = __this->get__cnn_1();
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__transactionLevel_6();
		NullCheck(L_9);
		L_9->set__transactionLevel_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		__this->set__cnn_1((SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A *)NULL);
		return;
	}
}
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::get_Connection()
extern "C" IL2CPP_METHOD_ATTR SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * SqliteTransaction_get_Connection_mF41F2BFE550F3FAAF819E5C403F0DB2B73A99BBC (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, const RuntimeMethod* method)
{
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = __this->get__cnn_1();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Dispose_mCCC4B2BB51D7D1236CC4F5856AE010B51225FA86 (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = __this;
		SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763(__this, (bool)0, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			SqliteTransaction_Rollback_m6BF933A7C999B14412A2C360978152C6CE8A66DF(__this, /*hidden argument*/NULL);
		}

IL_0020:
		{
			__this->set__cnn_1((SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A *)NULL);
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * L_3 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		bool L_4 = ___disposing0;
		DbTransaction_Dispose_m2DB28F0B9D36D863918A2BA6A0A46ADD52811B67(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m6BF933A7C999B14412A2C360978152C6CE8A66DF (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, const RuntimeMethod* method)
{
	{
		SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763(__this, (bool)1, /*hidden argument*/NULL);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = __this->get__cnn_1();
		SqliteTransaction_IssueRollback_m9D3603391C4A072270DC28972DAE292C6D70E04C(L_0, /*hidden argument*/NULL);
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		L_1->set__transactionLevel_6(0);
		__this->set__cnn_1((SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A *)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
extern "C" IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m9D3603391C4A072270DC28972DAE292C6D70E04C (SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * ___cnn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IssueRollback_m9D3603391C4A072270DC28972DAE292C6D70E04C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = ___cnn0;
		NullCheck(L_0);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_1 = SqliteConnection_CreateCommand_m77C6EFD385CBFFDFD99BB55304314FA249541D61(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_2 = V_0;
		NullCheck(L_2);
		SqliteCommand_set_CommandText_m40A59E030B9BD54C99AF9CE7994BD09B75B252D8(L_2, _stringLiteral2CE42E824F2163751D62C49D3226C338EFA1179D, /*hidden argument*/NULL);
		SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_3 = V_0;
		NullCheck(L_3);
		SqliteCommand_ExecuteNonQuery_m46ECDF991307A735E976587EB18128F5C7E393E0(L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2B, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			SqliteCommand_tA5D54D5A850262339A021FEB6B7F78846438ED93 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(30)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763 (SqliteTransaction_t5805E985F957DFA9FC4C72C8F46A83CC2C35CB71 * __this, bool ___throwError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_0 = __this->get__cnn_1();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = ___throwError0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralFF736B7140FADCCC4ABF6A7A3CAA5B49362CE730, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_RuntimeMethod_var);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_3 = __this->get__cnn_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get__transactionLevel_6();
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		bool L_5 = ___throwError0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * L_6 = (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 *)il2cpp_codegen_object_new(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF(L_6, ((int32_t)21), _stringLiteral9BF86E4634BA8C788A847BD10019CC0D59BCC00C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_RuntimeMethod_var);
	}

IL_0041:
	{
		return (bool)0;
	}

IL_0043:
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_7 = __this->get__cnn_1();
		NullCheck(L_7);
		int64_t L_8 = L_7->get__version_14();
		int64_t L_9 = __this->get__version_2();
		if ((((int64_t)L_8) == ((int64_t)L_9)))
		{
			goto IL_006e;
		}
	}
	{
		bool L_10 = ___throwError0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * L_11 = (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 *)il2cpp_codegen_object_new(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF(L_11, ((int32_t)21), _stringLiteral7F97480B11C2DFEFA56814087360C69E4B05A84D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_RuntimeMethod_var);
	}

IL_006c:
	{
		return (bool)0;
	}

IL_006e:
	{
		SqliteConnection_tE862F4AA6910C1D28334A076D51190739826039A * L_12 = __this->get__cnn_1();
		NullCheck(L_12);
		int32_t L_13 = SqliteConnection_get_State_mD2E7BFA6BE93E66DA01D0C003FE3D1B223671C2F(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		bool L_14 = ___throwError0;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 * L_15 = (SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61 *)il2cpp_codegen_object_new(SqliteException_t61D00E5BE42DDE29E18C3B16136E7BBD4C148D61_il2cpp_TypeInfo_var);
		SqliteException__ctor_m412F3873FA284AFA3C08557044BC815466BECFBF(L_15, ((int32_t)21), _stringLiteral660C1D424389A5FB82204BA7BB89B07419AAC1C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, SqliteTransaction_IsValid_mB6E5D35D8C764E6FCA780D8A4E3E54C5193A9763_RuntimeMethod_var);
	}

IL_0092:
	{
		return (bool)0;
	}

IL_0094:
	{
		return (bool)1;
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
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_close_m42E3870F60C828183017FD6ACA3FA978C3B37443 (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_close'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_function_m36A4EF40503AD1D507F544BFC8F14F0920C15B53 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strName1, int32_t ___nArgs2, int32_t ___nType3, intptr_t ___pvUser4, SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * ___func5, SQLiteCallback_t8DF06510E7FC3A431ECD2BCB5984E6E6D3084FF7 * ___fstep6, SQLiteFinalCallback_t09F966D4DABDA99023795ADF1B6D3F073F34E460 * ___ffinal7, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_function", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_function'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func5' to native representation
	Il2CppMethodPointer ____func5_marshaled = NULL;
	____func5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func5));

	// Marshaling of parameter '___fstep6' to native representation
	Il2CppMethodPointer ____fstep6_marshaled = NULL;
	____fstep6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fstep6));

	// Marshaling of parameter '___ffinal7' to native representation
	Il2CppMethodPointer ____ffinal7_marshaled = NULL;
	____ffinal7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ffinal7));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_finalize(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_finalize_m777B4E1469F41850A9D9566F7918589C7307B917 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_finalize'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_v2_m3F1AC69053C63247ADE6BE2789F8CF7C14150013 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___utf8Filename0, intptr_t* ___db1, int32_t ___flags2, intptr_t ___vfs3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open_v2'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_m3CBBA357A3C81B5D71AC24E164EC7D28F6ED0C5F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___utf8Filename0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open16_mB5D01BEB2F3A1DE955DB8BE3AC53A75EE0AFF92F (String_t* ___fileName0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_open16'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___db1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_reset_mAF9C57D3E5024E0D9D31076733040A46A66336C4 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_reset'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_mA041033655E94F3E6D7FFA8E458AEC4EF9EC8BCC (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name_mF1DD776818AA9EC6434A16FACCECF4E20DA74F45 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name16_m0AF57D50E928CDB59836AEC394D294793BC08EEC (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_database_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_decltype_m8AD210A4555104ED8A17DA20E3FF8C580CB186D5 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_decltype'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name_mC46093F8646F43071A39E01B6BCE0761D3130F20 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name16_mA9BBF11980153758DA9C97F7145A8844CDB1B9FF (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name_m35E03870376B61B2A03BD9F4FEBAF8CD253D69A7 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name16_m2E423DB0D898FC54B50613726E79C602851B569E (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_origin_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name_m1886CAEDC99EF0287A042215E92CF237B2084202 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name16_m634602B492FCE8DCCEDB68B508CA09BF6DE8A7B7 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_table_name16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text_m1D348C7EF26A118C22B09489726F50CDDFB4A4B3 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text16_m452ABCE1EE5EFB1CFA7F528B7044098170BB52B3 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_text16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_errmsg_mD816CFC4CD88A3EEDE5F73C14E65DB6C90A5EE7D (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_errmsg'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_prepare_mF468D3476530590586B58D5D746BE5C512014011 (intptr_t ___db0, intptr_t ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, intptr_t* ___ptrRemain4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_prepare'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_m3AE9E9F6CB18CA653636B0BEEA7C3A9E654537D6 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dbName1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___tblName2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___colName3, intptr_t* ___ptrDataType4, intptr_t* ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*) + sizeof(intptr_t*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_table_column_metadata'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___dbName1' to native representation
	uint8_t* ____dbName1_marshaled = NULL;
	if (___dbName1 != NULL)
	{
		____dbName1_marshaled = reinterpret_cast<uint8_t*>((___dbName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___tblName2' to native representation
	uint8_t* ____tblName2_marshaled = NULL;
	if (___tblName2 != NULL)
	{
		____tblName2_marshaled = reinterpret_cast<uint8_t*>((___tblName2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___colName3' to native representation
	uint8_t* ____colName3_marshaled = NULL;
	if (___colName3 != NULL)
	{
		____colName3_marshaled = reinterpret_cast<uint8_t*>((___colName3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text_m87E4E397FAFF932869256EE53C3B6F8B3E284C35 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text16_mE35CA1704AB4EE0E5E2DC99ECE1D0DA782A0FB27 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_text16'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_libversion_mDE585C3AC19499148BF6FA4105F58FA768C9CB90 (const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_libversion'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_changes_m37B6046BB5117FE9F33F7CF5DB9D598969576934 (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_changes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_busy_timeout_mDB9C465CBD0B2B493CBF64D012679A4B38558182 (intptr_t ___db0, int32_t ___ms1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_busy_timeout'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___ms1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_blob_m2D894E54CB51567181CDC06BB3A924C11F285D76 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_blob'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_double_m9BA04700BBF90519A9B214BAC6688D49384D4E89 (intptr_t ___stmt0, int32_t ___index1, double ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int_mCE71901C61A2DDD67A7D57053764C63764837009 (intptr_t ___stmt0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int64_m60908B725DF1A455F24C8D8DB8915B55EDB9BC6B (intptr_t ___stmt0, int32_t ___index1, int64_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_null_m159963A28CCA793EBC6B3268F9B578892A79FFC9 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_null'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text_m111C25CB8FE4835B737AE279566017C73E802C00 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_count(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_m6DDC0E94F949DBC2D6377A5A6F5624E06C18572B (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_parameter_count'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_count_m81C5681CE2A8C584F1D32A11B19A0F8A4E6E84E0 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_count'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_step_m0B6E76F3D82246E167EED8FBD0743A468FF06AC3 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_step'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_column_double_m4FEEBC42462B0C75C6CD38DDB5812A65204CCE88 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_int_m7ED7A5751A4A63B63926F7F062AA14F9229723F0 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_column_int64_mB5A5726EDF340AF7A1B0825A5E54C14190DE6114 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_blob_m8F3721254D45A94E49E7705BABA28121138A8332 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_blob'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_bytes_mC774F8278EE59C30D3CFB37D74CD5ED3F78490F4 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_bytes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_type_mEBBA0905AAA9C7F7F10ABE4EE333579EF4908B64 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_column_type'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_collation_m303962DABBEA72051BCDE92E11EFF5A6820AFDF1 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strName1, int32_t ___nType2, intptr_t ___pvUser3, SQLiteCollation_t63134149A650D2790E73B5DEC0786482DEB8532F * ___func4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_create_collation'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func4' to native representation
	Il2CppMethodPointer ____func4_marshaled = NULL;
	____func4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func4));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_blob(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_blob_m7F328916206BEF2EF706FD7431B817613838836C (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_blob'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_bytes_mD17EE9BDFD1D7F0DD5E44E888FA695E2E34387AE (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_bytes'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_value_double_mC65B72B14DF2F503E06D31D9CC47C409A0743C57 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	double returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_value_int64_mF0EE078FC3AC1FD3BC3789915EA51624433ACBC1 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	int64_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_type_mB318C82585E732ECECC0038F4C4BCBC1A454254C (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_value_type'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___p0);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_blob_mBE08CA067F994D825046CA7A6BE6BDB7EA880744 (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_blob'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_double_m49D681B70AD4B6D492F56F758D6553F9328407A2 (intptr_t ___context0, double ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_double'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error_mFE53C1ECE483F0DD2F3B0C9E78D9F7988696C0A3 (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strErr1' to native representation
	uint8_t* ____strErr1_marshaled = NULL;
	if (___strErr1 != NULL)
	{
		____strErr1_marshaled = reinterpret_cast<uint8_t*>((___strErr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strErr1_marshaled, ___nLen2);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_int64_m128B939F92E30A2333F4B58F923764C606B23F3F (intptr_t ___context0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_int64'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ___value1);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_null_m202AEA507C9EE518D9BBF45CC7A81EE82EE0291C (intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_null'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text_mF01424750A26BC1D5C73ADF1A659B87A8AF449C8 (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);

}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_aggregate_context_m1A66D4CBDAE2C96E32EF7223FD2CBB1D895A36CD (intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_aggregate_context'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text16_m22B54FC2C031E39A5E248CC964A3EEFDAA3891E0 (intptr_t ___stmt0, int32_t ___index1, String_t* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_bind_text16'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___value2' to native representation
	Il2CppChar* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = ___value2->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);

	return returnValue;
}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error16(System.IntPtr,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error16_m79C742B70F8EFF4FE542B87D273F655E7C4588F0 (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_error16'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2);

}
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text16(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text16_mA00E7BCB648AF4009143CA22CAF26BD23D6BE122 (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_result_text16'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);

}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_key(System.IntPtr,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_key_m479676B931EDE436C7FEE0F8D3D313FD12FF0015 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, int32_t ___keylen2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_key", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_key'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___key1' to native representation
	uint8_t* ____key1_marshaled = NULL;
	if (___key1 != NULL)
	{
		____key1_marshaled = reinterpret_cast<uint8_t*>((___key1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____key1_marshaled, ___keylen2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_update_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteUpdateCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_update_hook_m579D0AB6005B7EE823C9ACBE2250E5A36F5BC5C6 (intptr_t ___db0, SQLiteUpdateCallback_t59B68B9561895B098E7338EDBE7924A775347D1E * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_update_hook'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_commit_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteCommitCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_commit_hook_m53C5566C0ABDB778654F19E988BBF9A45993611B (intptr_t ___db0, SQLiteCommitCallback_t67CC23E166824AAC082542C3EC4D8A23529FAF34 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_commit_hook'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_rollback_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteRollbackCallback,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_rollback_hook_mC0A361536979C73630DD282DBB588D0F9B7EC5FD (intptr_t ___db0, SQLiteRollbackCallback_t1ADE309B2ABEAAB1DEC1D94889C954C4DDEE7C1F * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_rollback_hook'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);

	return returnValue;
}
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_next_stmt(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_next_stmt_mEF64ADC352878457CA25361E096DFE786415B964 (intptr_t ___db0, intptr_t ___stmt1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_next_stmt'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ___stmt1);

	return returnValue;
}
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_exec_m32E126B216C70E33B12753FBA7103947B8ED375A (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strSql1, intptr_t ___pvCallback2, intptr_t ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'sqlite3_exec'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___strSql1' to native representation
	uint8_t* ____strSql1_marshaled = NULL;
	if (___strSql1 != NULL)
	{
		____strSql1_marshaled = reinterpret_cast<uint8_t*>((___strSql1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);

	return returnValue;
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
