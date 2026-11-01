
/* ==== FUN_00495280 @ 00495280 ==== 
 * signature: undefined __fastcall FUN_00495280(int param_1)
 * body: 00495280-0049532d
 */

void __fastcall FUN_00495280(int param_1)

{
  FUN_00495330(param_1);
  FUN_004950c0(param_1);
  if (DAT_00712784 == 1) {
    if (((byte)DAT_005ab3c0 & 2) == 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(0);
      if (DAT_00712784 != 1) {
        return;
      }
    }
    if (((byte)DAT_005ab3c0 & 1) == 0) {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x34) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(0);
    }
  }
  return;
}


