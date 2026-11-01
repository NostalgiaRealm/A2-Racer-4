
/* ==== FUN_004516d0 @ 004516d0 ==== 
 * signature: undefined __register FUN_004516d0(uint * param_1, byte param_2, ushort param_3, undefined4 * param_4, int param_5, int param_6, int param_7)
 * body: 004516d0-0045176f
 */

void FUN_004516d0(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x4516f1;
  piVar1 = (int *)FUN_0045113c(param_1,param_2,param_3);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1[0x54] = param_7;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_00403cb0(piVar1 + 0x89,param_4);
  if (-1 < param_6) {
    TControl_set_Left(piVar1,param_6);
  }
  if (-1 < param_5) {
    TControl_set_Top(piVar1,param_5);
  }
  if ((param_5 < 0) && (param_6 < 0)) {
    TForm_set_Position((int)piVar1,'\x04');
  }
  (**(code **)(*piVar1 + 0xd8))();
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00451777;
  pcStack_20 = (code *)0x45176f;
  FUN_00402f9c(piVar1);
  return;
}


