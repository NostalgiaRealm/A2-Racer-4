
/* ==== FUN_0044484c @ 0044484c ==== 
 * signature: undefined __register FUN_0044484c(uint * param_1, byte param_2, ushort param_3, undefined4 * param_4, int param_5, int param_6, int param_7)
 * body: 0044484c-004448eb
 */

void FUN_0044484c(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,
                 int param_6,int param_7)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  
  pcStack_1c = (code *)0x44486d;
  piVar1 = (int *)FUN_004442b8(param_1,param_2,param_3);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  piVar1[0x54] = param_7;
  pcStack_1c = (code *)&stack0xfffffffc;
  FUN_00403a0c(piVar1 + 0x89,param_4);
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
  pcStack_1c = FUN_004448f3;
  pcStack_20 = (code *)0x4448eb;
  FUN_00402d14(piVar1);
  return;
}


