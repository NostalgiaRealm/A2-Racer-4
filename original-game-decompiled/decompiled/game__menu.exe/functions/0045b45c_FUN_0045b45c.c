
/* ==== FUN_0045b45c @ 0045b45c ==== 
 * signature: undefined FUN_0045b45c(void)
 * body: 0045b45c-0045b493
 */

int FUN_0045b45c(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  
  iVar1 = FUN_0040312c(param_1,(int)&PTR_TPersistent_vmt_000_0045adf4);
  uVar2 = FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_0045adf4);
  iVar3 = *(int *)(iVar1 + 0x30) - *(int *)(uVar2 + 0x30);
  if (SBORROW4(*(int *)(iVar1 + 0x30),*(int *)(uVar2 + 0x30))) {
    thunk_FUN_00402808(uVar2);
    iVar3 = extraout_EDX;
  }
  return iVar3;
}


