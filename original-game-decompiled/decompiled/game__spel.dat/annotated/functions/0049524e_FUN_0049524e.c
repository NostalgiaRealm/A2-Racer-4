
/* ==== FUN_0049524e @ 0049524e ==== 
 * signature: undefined __fastcall FUN_0049524e(int param_1, int param_2)
 * body: 0049524e-0049524f
 */

void __fastcall FUN_0049524e(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  int unaff_ESI;
  
  *(char *)(param_2 + 0x51) = *(char *)(param_2 + 0x51) + (char)((uint)in_EAX >> 8);
  pcVar1 = (char *)(CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((char)((uint)param_2 >> 8) + (char)param_1 + -3,(char)param_2)
                            ) + -0x67ffb6af);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  iVar2 = param_1 + -10;
  *(char *)(unaff_ESI + -0x6fffb6af) = *(char *)(unaff_ESI + -0x6fffb6af) + (char)((uint)iVar2 >> 8)
  ;
  FUN_00495330(iVar2);
  FUN_004950c0(iVar2);
  if (DAT_00712784 == 1) {
    if (((byte)DAT_005ab3c0 & 2) == 0) {
      (**(code **)(**(int **)(param_1 + 0xe) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x16) + 0x20))(0);
      if (DAT_00712784 != 1) {
        return;
      }
    }
    if (((byte)DAT_005ab3c0 & 1) == 0) {
      (**(code **)(**(int **)(param_1 + 0x1a) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x1e) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x22) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x26) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x2a) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x2e) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x32) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x36) + 0x20))(0);
      (**(code **)(**(int **)(param_1 + 0x3a) + 0x20))(0);
    }
  }
  return;
}


