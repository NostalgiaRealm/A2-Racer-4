
/* ==== FUN_004bb7a0 @ 004bb7a0 ==== 
 * signature: undefined __fastcall FUN_004bb7a0(int param_1)
 * body: 004bb7a0-004bb7da;004bb7de-004bb814;004bb818-004bb849;004bb84d-004bb883;004bb887-004bb8b8;004bb8bc-004bb8f2;004bb8f6-004bb929;004bb92d-004bb960;004bb964-004bb997;004bb99b-004bb9ce;004bb9d2-004bba1c;004bba20-004bba53;004bba57-004bba8a;004bba8e-004bbac1;004bbac5-004bbaf8;004bbafc-004bbb2f;004bbb33-004bbc16
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bb7db-004bb7dd 004bb815-004bb817 004bb84a-004bb84c 004bb884-004bb886 004bb8b9-004bb8bb 004bb8f3-004bb8f5 004bb92a-004bb92c 004bb961-004bb963 004bb998-004bb99a 004bb9cf-004bb9d1 004bba1d-004bba1f 004bba54-004bba56 004bba8b-004bba8d 004bbac2-004bbac4 004bbaf9-004bbafb 004bbb30-004bbb32
 */

void __fastcall FUN_004bb7a0(int param_1)

{
  uint uVar1;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_4c [19];
  
  iVar5 = *(int *)(param_1 + 0x274);
  puVar2 = (undefined4 *)(param_1 + 0x19c);
  puVar6 = auStack_4c + 3;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  puVar2 = auStack_4c + 3;
  puVar6 = (undefined4 *)(param_1 + 0x19c);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar5 = *(int *)(param_1 + 0x274);
  puVar2 = (undefined4 *)(param_1 + 0x1dc);
  puVar6 = auStack_4c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  puVar2 = auStack_4c;
  puVar6 = (undefined4 *)(param_1 + 0x1dc);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar5 = *(int *)(param_1 + 0x274);
  puVar2 = (undefined4 *)(param_1 + 0x21c);
  puVar6 = (undefined4 *)&stack0xffffffa8;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____device_was_not_initiali_005b106c);
  }
  puVar2 = (undefined4 *)&stack0xffffffa8;
  puVar6 = (undefined4 *)(param_1 + 0x21c);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____COLORKEY__error_settin_005b2170);
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
  if (iVar5 != 0) {
    FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____ZBUFFER__error_setting_0059c150);
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x27c);
    FUN_004bbc20(param_1);
    *(int *)(param_1 + 0x27c) = iVar5;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 0x5c))();
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 100))();
    if (iVar4 != 0) {
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 100))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 100))(*(int **)(param_1 + 0x25c),6);
      if (iVar4 != 0) {
        FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
      }
      iVar4 = (**(code **)(**(int **)(param_1 + 0x25c) + 100))
                        (*(int **)(param_1 + 0x25c),4,*(undefined4 *)(param_1 + 0x284));
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          iVar5 = DAT_005b2b64;
          if (DAT_005b2b64 == -1) {
            return;
          }
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x280);
          FUN_004066c0(&stack0xffffff18,(float)((int)uVar1 >> 0x10) * 0.003921569,
                       (float)((int)uVar1 >> 8 & 0xff) * 0.003921569,
                       (float)(uVar1 & 0xff) * 0.003921569);
          puVar2 = (undefined4 *)FUN_004b6110(&DAT_0073b210,DAT_005b1bac);
          this = (void *)*puVar2;
          FUN_00457790(this,(undefined4 *)&stack0xffffff18);
          FUN_00457750(this,(undefined4 *)&stack0xffffff18);
          iVar5 = DAT_005b1bac;
        }
        piVar3 = (int *)FUN_004b6110(&DAT_0073b210,iVar5);
        FUN_004576f0(*piVar3);
        return;
      }
      FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
    }
    FUN_004bb290(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____FOG__error_setting_ren_0059a15c);
  }
  FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d_____BLENDING__error_settin_0059bd78);
}


