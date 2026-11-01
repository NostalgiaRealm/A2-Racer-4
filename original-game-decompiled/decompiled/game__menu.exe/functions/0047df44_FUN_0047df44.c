
/* ==== FUN_0047df44 @ 0047df44 ==== 
 * signature: undefined FUN_0047df44(void)
 * body: 0047df44-0047df7e
 */

void FUN_0047df44(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_0040312c(param_2,(int)&PTR_TControl_vmt_000_00476b74);
  iVar2 = *(int *)(uVar1 + 0xc) + 0x7fffffff;
  if (iVar2 == -1) {
    thunk_FUN_00402808(uVar1);
    iVar2 = extraout_EDX;
  }
  FUN_0044d7f0(*(int *)PTR_DAT_004ab8ac,iVar2 + 0x80000001);
  return;
}


