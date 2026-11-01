
/* ==== FUN_0046cae0 @ 0046cae0 ==== 
 * signature: undefined __register FUN_0046cae0(DWORD param_1, VARIANTARG * param_2, int param_3, char param_4)
 * body: 0046cae0-0046cb80;0046cb83-0046cba4
 */

void FUN_0046cae0(DWORD param_1,VARIANTARG *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  code *pcStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  pcStack_28 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_28;
  local_8 = param_3;
  if (param_1 == 0x80020009) {
    DVar5 = *(DWORD *)((int)&param_2[1].n1 + 0xc);
    puStack_20 = &stack0xfffffffc;
    FUN_00403ea4((int *)&local_c,(LPCWSTR)(param_2->n1).decVal.Hi32);
    puVar4 = local_c;
    FUN_00403ea4((int *)&local_10,*(LPCWSTR *)((int)&param_2->n1 + 0xc));
    iVar2 = *(int *)&param_2[1].n1;
    puVar3 = local_10;
    FUN_00403ea4((int *)&local_14,*(LPCWSTR *)((int)&param_2->n1 + 8));
    uVar1 = FUN_0046c20c((int *)&DAT_0046c090,'\x01',local_14,iVar2,puVar3,puVar4,DVar5);
    if (param_4 != '\0') {
      FUN_00404660(param_2,"\x0e\ftagEXCEPINFO ");
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
    uVar1 = FUN_0046c13c((int *)&DAT_0046c034,'\x01',0,0,param_1);
  }
  if (local_8 != 0) {
    FUN_004036f4(uVar1);
    return;
  }
  FUN_004036f4(uVar1);
  *in_FS_OFFSET = puVar4;
  pcStack_28 = FUN_0046cbac;
  FUN_00403c80((int *)&local_14,3);
  return;
}


