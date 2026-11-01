
/* ==== FUN_004f86f0 @ 004f86f0 ==== 
 * signature: undefined __fastcall FUN_004f86f0(int param_1)
 * body: 004f86f0-004f88ad
 */

void __fastcall FUN_004f86f0(int param_1)

{
  undefined1 *puVar1;
  undefined4 uStack_430;
  undefined1 *puStack_230;
  undefined1 auStack_22c [8];
  undefined1 auStack_224 [4];
  ushort auStack_220 [2];
  undefined1 *puStack_21c;
  undefined1 auStack_218 [492];
  void *pvStack_2c;
  undefined1 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00573356;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)**(undefined4 **)(param_1 + 0x28))();
  (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(short *)(param_1 + 0x106) != 0) {
    FUN_004f6fe0(param_1);
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    uStack_430 = 0x4f8748;
    FUN_004f64e0(*(void **)(param_1 + 0xc),*(int **)(param_1 + 0x2c));
  }
  uStack_430 = 0x4f8754;
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x28))();
  uStack_430 = 0x4f875b;
  FUN_004f86c0(param_1);
  uStack_430 = 2;
  (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  puStack_21c = auStack_218;
  auStack_220[0] = 0x80;
  auStack_220[1] = 0;
  uStack_10 = 0;
  FUN_00500ac0(*(void **)(param_1 + 8),param_1,auStack_220);
  (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  uStack_14 = 1;
  FUN_005023f0(param_1,(int)auStack_224,&stack0xfffffbd4);
  puVar1 = (undefined1 *)0x4;
  (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  *(undefined4 *)(param_1 + 0x144) = 2;
  FUN_005024e0(param_1,(int)&uStack_430);
  (**(code **)(**(int **)(param_1 + 0x28) + 4))(5);
  *(undefined4 *)(param_1 + 0x144) = 3;
  FUN_0053abe0(*(void **)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x28) + 4))(6);
  *(undefined4 *)(param_1 + 0x144) = 4;
  FUN_0053abc0(*(int *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x28) + 4))(7);
  (**(code **)(**(int **)(param_1 + 0x28) + 8))();
  *(undefined4 *)(param_1 + 0x144) = 5;
  if ((puVar1 != &stack0xfffffbcc) && (puVar1 != (undefined1 *)0x0)) {
    FUN_00559d4e(puVar1);
  }
  if ((puStack_230 != auStack_22c) && (puStack_230 != (undefined1 *)0x0)) {
    FUN_00559d4e(puStack_230);
  }
  ExceptionList = pvStack_2c;
  return;
}


