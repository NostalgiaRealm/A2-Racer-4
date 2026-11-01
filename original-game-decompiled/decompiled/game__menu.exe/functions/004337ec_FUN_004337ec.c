
/* ==== FUN_004337ec @ 004337ec ==== 
 * signature: uint __register FUN_004337ec(int * param_1, int param_2, undefined4 param_3)
 * body: 004337ec-00433856
 */

uint FUN_004337ec(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  piVar1 = FUN_00444864(param_1);
  uVar2 = extraout_ECX;
  if (((piVar1 != (int *)0x0) && (param_1 != piVar1)) && (*(char *)((int)piVar1 + 0x215) != '\0')) {
    piVar1 = (int *)FUN_004337ec(piVar1,param_2,extraout_ECX);
    uVar2 = extraout_ECX_00;
    if ((char)piVar1 != '\0') goto LAB_0043384f;
  }
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    local_10._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 4),(undefined1)local_10);
    FUN_00403178(param_1,(int)&local_10 + 1,uVar2);
    piVar1 = (int *)0x0;
    *(ushort *)(param_2 + 4) = (ushort)local_10._1_1_;
    if (*(char *)(param_2 + 4) == '\0') goto LAB_0043384f;
  }
  local_10 = 0;
LAB_0043384f:
  return CONCAT31((int3)((uint)piVar1 >> 8),(undefined1)local_10);
}


