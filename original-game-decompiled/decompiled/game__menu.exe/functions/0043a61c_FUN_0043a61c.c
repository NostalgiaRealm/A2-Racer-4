
/* ==== FUN_0043a61c @ 0043a61c ==== 
 * signature: undefined __register FUN_0043a61c(int * param_1)
 * body: 0043a61c-0043a64e
 */

void FUN_0043a61c(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((bVar1) && (*(char *)((int)param_1 + 0x36) == '\0')) {
    himl = (HIMAGELIST)FUN_0043a5b8(param_1);
    ImageList_Destroy(himl);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  param_1[0xc] = 0;
  FUN_00403178(param_1,uVar3,uVar2);
  return;
}


