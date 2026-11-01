
/* ==== FUN_0046c538 @ 0046c538 ==== 
 * signature: undefined FUN_0046c538(void)
 * body: 0046c538-0046c5f7
 */

void FUN_0046c538(DWORD param_1,undefined4 param_2)

{
  IErrorInfo **pperrinfo;
  HRESULT HVar1;
  undefined4 *in_FS_OFFSET;
  ULONG_PTR UStack_64;
  undefined4 uStack_60;
  DWORD DStack_5c;
  int *piStack_58;
  ULONG_PTR UVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined1 *puStack_30;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  ULONG_PTR UStack_18;
  LPCWSTR pWStack_14;
  LPCWSTR pWStack_10;
  LPCWSTR pWStack_c;
  int *piStack_8;
  
  puStack_30 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  pWStack_c = (LPCWSTR)0x0;
  pWStack_10 = (LPCWSTR)0x0;
  pWStack_14 = (LPCWSTR)0x0;
  puStack_1c = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  puStack_34 = &UNK_0046c628;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  UStack_18 = 0;
  pperrinfo = (IErrorInfo **)FUN_00405860((int *)&piStack_8);
  HVar1 = GetErrorInfo(0,pperrinfo);
  if (HVar1 == 0) {
    FUN_004042b4(&pWStack_c);
    (**(code **)(*piStack_8 + 0x10))();
    FUN_004042b4(&pWStack_10);
    (**(code **)(*piStack_8 + 0x14))();
    FUN_004042b4(&pWStack_14);
    (**(code **)(*piStack_8 + 0x18))();
    piStack_58 = piStack_8;
    DStack_5c = 0x46c5b5;
    (**(code **)(*piStack_8 + 0x1c))();
  }
  DVar5 = param_1;
  FUN_00403ea4((int *)&puStack_1c,pWStack_c);
  puVar4 = puStack_1c;
  FUN_00403ea4((int *)&puStack_20,pWStack_14);
  UVar2 = UStack_18;
  puVar3 = puStack_20;
  FUN_00403ea4((int *)&puStack_24,pWStack_10);
  UStack_64 = UVar2;
  uStack_60 = FUN_0046c20c((int *)&DAT_0046c090,'\x01',puStack_24,UVar2,puVar3,puVar4,DVar5);
  DStack_5c = param_1;
  piStack_58 = (int *)param_2;
  RaiseException(0xeedfade,1,7,&UStack_64);
  return;
}


