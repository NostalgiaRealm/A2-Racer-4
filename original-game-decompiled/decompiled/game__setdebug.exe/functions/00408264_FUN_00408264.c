
/* ==== FUN_00408264 @ 00408264 ==== 
 * signature: undefined __register FUN_00408264(int param_1, byte * param_2, uint param_3)
 * body: 00408264-004082bb
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00408264(int param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auStack_35 [33];
  undefined1 *local_14;
  undefined1 local_10;
  
  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  uVar1 = FUN_0040b220(param_2,param_3 - 1);
  if ((char)uVar1 == '\x01') {
    param_3 = param_3 - 1;
  }
  FUN_0040804c((undefined4 *)((int)auStack_35 + 1),(undefined4 *)param_2,param_3);
  auStack_35[param_3 + 1] = 0;
  local_10 = 6;
  local_14 = (undefined1 *)((int)auStack_35 + 1);
  FUN_004079a0((undefined4 *)(&PTR_PTR_00446150)[param_1],&local_14,0);
  return;
}


