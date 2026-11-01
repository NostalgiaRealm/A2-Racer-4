
/* ==== FUN_0040ebb4 @ 0040ebb4 ==== 
 * signature: undefined __register FUN_0040ebb4(undefined * param_1, HMODULE param_2, undefined4 * param_3)
 * body: 0040ebb4-0040ec27;0040ec31-0040ec36
 */

void FUN_0040ebb4(undefined *param_1,HMODULE param_2,undefined4 *param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCSTR lpType;
  
  if (param_2 == (HMODULE)0x0) {
    param_2 = DAT_004474d4;
  }
  lpType = (LPCSTR)0xa;
  lpName = FUN_00403dfc(param_1);
  pHVar1 = FindResourceA(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    piVar2 = FUN_00410fa8((int *)&PTR_TStream_vmt_000_0040dfc8,'\x01',param_2,(LPCSTR)0xa,param_1);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_00410c4c((int)piVar2,(int *)*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00402d14(piVar2);
    return;
  }
  return;
}


