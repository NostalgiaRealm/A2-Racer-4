
/* ==== FUN_00451f50 @ 00451f50 ==== 
 * signature: undefined __register FUN_00451f50(int param_1)
 * body: 00451f50-00451fb4
 */

void FUN_00451f50(int param_1)

{
  LPVOID pvVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  undefined4 *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pvVar1 = LockResource(*(HGLOBAL *)(param_1 + 8));
  *(LPVOID *)(param_1 + 0xc) = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    FUN_00451dbc(DAT_004ac85c,2,(int *)&local_8);
    piVar2 = FUN_0040b5d8((int *)&DAT_00451ca0,'\x01',local_8);
    FUN_004036f4(piVar2);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00451fbc;
  pcStack_18 = (code *)0x451fb4;
  FUN_00403c5c((int *)&local_8);
  return;
}


