
/* ==== FUN_00472904 @ 00472904 ==== 
 * signature: undefined __register FUN_00472904(int param_1, int * param_2)
 * body: 00472904-00472952
 */

void FUN_00472904(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  code *pcStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  pcStack_1c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_1c;
  FUN_00405860(param_2);
  FUN_004728e0(param_1,(int *)&local_8);
  piVar1 = local_8;
  iVar2 = (**(code **)(*local_8 + 0x1c))();
  FUN_0040595c(iVar2);
  *in_FS_OFFSET = piVar1;
  pcStack_1c = FUN_0047295a;
  FUN_00405860((int *)&local_8);
  return;
}


