
/* ==== FUN_0040fdf0 @ 0040fdf0 ==== 
 * signature: undefined __register FUN_0040fdf0(undefined * param_1, HMODULE param_2, undefined4 * param_3)
 * body: 0040fdf0-0040fe63;0040fe6d-0040fe72
 */

void FUN_0040fdf0(undefined *param_1,HMODULE param_2,undefined4 *param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  LPCSTR lpType;
  
  if (param_2 == (HMODULE)0x0) {
    param_2 = DAT_004ac4dc;
  }
  lpType = (LPCSTR)0xa;
  lpName = FUN_004040a0(param_1);
  pHVar1 = FindResourceA(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    piVar2 = FUN_00412b5c((int *)&PTR_TStream_vmt_000_0040f204,'\x01',param_2,(LPCSTR)0xa,param_1);
    uVar4 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    uVar3 = FUN_004127dc((int)piVar2,(int *)*param_3);
    *param_3 = uVar3;
    *in_FS_OFFSET = uVar4;
    FUN_00402f9c(piVar2);
    return;
  }
  return;
}


