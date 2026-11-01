
/* ==== FUN_00415024 @ 00415024 ==== 
 * signature: undefined __register FUN_00415024(int param_1, undefined4 param_2, uint param_3)
 * body: 00415024-0041505a;004150b0-00415180
 */

void FUN_00415024(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_c;
  int local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  uVar1 = FUN_00414ec4(param_1,0,param_3);
  uVar1 = uVar1 & 0x7f;
  switch(uVar1) {
  case 1:
    FUN_00414f20(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 2:
    FUN_00414f48(1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 3:
    FUN_00414f48(2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 4:
    FUN_00414f48(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 5:
    FUN_00414f48(10,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 6:
  case 7:
    FUN_00414de0(local_8,&local_c,extraout_ECX);
    break;
  case 10:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xb:
    FUN_00414ed8(local_8,extraout_EDX,extraout_ECX);
    break;
  case 0xc:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0xe:
    FUN_00414fc4(uVar1,extraout_EDX,extraout_ECX,(uint)&stack0xfffffffc);
    break;
  case 0xf:
    FUN_00414f48(4,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x10:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x11:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x12:
    FUN_00414f9c(uVar1,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    break;
  case 0x13:
    FUN_00414f48(8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
  }
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_00415188;
  pcStack_14 = (code *)0x415180;
  FUN_00403c5c(&local_c);
  return;
}


