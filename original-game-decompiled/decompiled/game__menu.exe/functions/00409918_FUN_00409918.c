
/* ==== FUN_00409918 @ 00409918 ==== 
 * signature: undefined __register FUN_00409918(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00409918-00409960
 */

void FUN_00409918(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  byte local_14 [16];
  
  local_20 = 0;
  local_18 = 0;
  local_24 = param_2;
  local_1c = param_1;
  uVar1 = FUN_00408df4(local_14,(byte *)0x10,&DAT_004aa174,1,&local_24,4);
  FUN_004098b4((undefined4 *)local_14,uVar1,extraout_ECX,param_4);
  return;
}


