
/* ==== FUN_0041e384 @ 0041e384 ==== 
 * signature: undefined __register FUN_0041e384(undefined4 param_1, HMODULE param_2, undefined * param_3)
 * body: 0041e384-0041e3d6
 */

void FUN_0041e384(undefined4 param_1,HMODULE param_2,undefined *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  uStackY_18 = 0x41e39c;
  piVar1 = FUN_00412b5c((int *)&PTR_TStream_vmt_000_0040f204,'\x01',param_2,(LPCSTR)0x2,param_3);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  iVar2 = FUN_00412680(piVar1);
  FUN_0041e50c(param_1,piVar1,iVar2);
  *in_FS_OFFSET = uStackY_18;
  FUN_00402f9c(piVar1);
  return;
}


