
/* ==== FUN_004a8398 @ 004a8398 ==== 
 * signature: undefined __register FUN_004a8398(int * param_1, char param_2, undefined4 param_3)
 * body: 004a8398-004a840d
 */

void FUN_004a8398(int *param_1,char param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x4a83ab;
    param_1 = (int *)FUN_0040329c((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00402f6c(param_1,'\0',param_3);
  bVar1 = FUN_004a818c();
  if (bVar1) {
    pcVar2 = "** Exception logging started ** ";
    FUN_004a86f8(*param_1,0,0,0x4a843c);
  }
  else {
    FUN_00405808(&PTR_DAT_004a8390,(int *)&local_8);
    pcVar2 = (char *)0x4a83f8;
    FUN_004529e8(local_8,0,extraout_ECX_00);
  }
  *in_FS_OFFSET = pcVar2;
  pcStack_28 = FUN_004a8415;
  uStack_2c = 0x4a840d;
  FUN_00403c5c((int *)&local_8);
  return;
}


