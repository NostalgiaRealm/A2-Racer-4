
/* ==== FUN_0040f5d8 @ 0040f5d8 ==== 
 * signature: undefined __register FUN_0040f5d8(int * param_1, int * param_2)
 * body: 0040f5d8-0040f68d
 */

void FUN_0040f5d8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  code *pcStack_12c;
  code *pcStack_128;
  undefined1 *puStack_124;
  int local_118;
  undefined1 local_114;
  byte *local_110;
  undefined1 local_10c;
  byte local_108 [256];
  int local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = 0;
  pcStack_128 = thunk_FUN_00403434;
  pcStack_12c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_12c;
  if (param_2 == (int *)0x0) {
    FUN_00403a50(&local_8,0x40f6a4);
  }
  else {
    puStack_124 = &stack0xfffffffc;
    FUN_00402c60(*param_2,local_108);
    FUN_00403bdc(&local_8,local_108);
  }
  local_118 = local_8;
  local_114 = 0xb;
  FUN_00402c60(*param_1,local_108);
  local_110 = local_108;
  local_10c = 4;
  uVar2 = 1;
  uVar1 = FUN_0040aa30((int)&DAT_00407528,'\x01',(undefined4 *)PTR_PTR_00446be8,1,&local_118);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  pcStack_12c = FUN_0040f695;
  FUN_004039b8(&local_8);
  return;
}


