
/* ==== FUN_00551779 @ 00551779 ==== 
 * signature: int __cdecl FUN_00551779(byte * param_1, undefined4 * param_2, int * param_3)
 * body: 00551779-00551ac3
 */

int __cdecl FUN_00551779(byte *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ushort extraout_var;
  undefined4 *puVar8;
  ushort extraout_var_00;
  int iVar9;
  ushort extraout_var_01;
  byte *pbVar10;
  byte *pbVar11;
  short local_10;
  int local_c;
  int local_8;
  
  uVar3 = FUN_0054ef7c(0x30);
  piVar4 = (int *)FUN_00553cd8();
  uVar5 = FUN_00554775(param_2,param_3);
  pbVar10 = param_1;
  if ((char)uVar5 == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    uVar6 = FUN_0054ef7c(0x2b);
    if (*(short *)((int)param_2 + 6) == (short)uVar6) {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      uVar6 = FUN_0054ef7c(0x2d);
      if (*(short *)((int)param_2 + 6) != (short)uVar6) goto LAB_005517fe;
      *param_1 = 0x2d;
    }
    FUN_0055331d(param_2);
    pbVar10 = param_1 + 1;
  }
LAB_005517fe:
  bVar1 = false;
  uVar5 = FUN_00554775(param_2,param_3);
  local_10 = (short)uVar3;
  if ((char)uVar5 == '\0') {
    do {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(short *)((int)param_2 + 6) != local_10) break;
      bVar1 = true;
      FUN_0055331d(param_2);
      uVar5 = FUN_00554775(param_2,param_3);
    } while ((char)uVar5 == '\0');
    if (bVar1) {
      *pbVar10 = 0x30;
      pbVar10 = pbVar10 + 1;
    }
  }
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar7 = FUN_00554775(param_2,param_3);
    if ((char)iVar7 != '\0') break;
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
      iVar7 = (uint)extraout_var << 0x10;
    }
    iVar7 = FUN_0054eb1f(CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)param_2 + 6)));
    *pbVar10 = (byte)iVar7;
    uVar3 = FUN_0054e965((byte)iVar7);
    if ((char)uVar3 == '\0') break;
    if (local_c < 0x24) {
      pbVar10 = pbVar10 + 1;
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    bVar1 = true;
    FUN_0055331d(param_2);
  }
  uVar5 = FUN_00554775(param_2,param_3);
  if ((char)uVar5 == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
    }
    sVar2 = (**(code **)(*piVar4 + 4))();
    if (*(short *)((int)param_2 + 6) == sVar2) {
      puVar8 = (undefined4 *)FUN_0055a6b0();
      *pbVar10 = *(byte *)*puVar8;
      pbVar10 = pbVar10 + 1;
      FUN_0055331d(param_2);
    }
  }
  if (local_c == 0) {
    while( true ) {
      uVar5 = FUN_00554775(param_2,param_3);
      if ((char)uVar5 != '\0') break;
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      if (*(short *)((int)param_2 + 6) != local_10) break;
      local_8 = local_8 + -1;
      bVar1 = true;
      FUN_0055331d(param_2);
    }
    if (local_8 < 0) {
      *pbVar10 = 0x30;
      pbVar10 = pbVar10 + 1;
      local_8 = local_8 + 1;
    }
  }
  while( true ) {
    iVar7 = FUN_00554775(param_2,param_3);
    if ((char)iVar7 != '\0') break;
    if (*(char *)(param_2 + 1) == '\0') {
      Peek(param_2);
      iVar7 = (uint)extraout_var_00 << 0x10;
    }
    iVar7 = FUN_0054eb1f(CONCAT22((short)((uint)iVar7 >> 0x10),*(undefined2 *)((int)param_2 + 6)));
    *pbVar10 = (byte)iVar7;
    uVar3 = FUN_0054e965((byte)iVar7);
    if ((char)uVar3 == '\0') break;
    if (local_c < 0x24) {
      pbVar10 = pbVar10 + 1;
      local_c = local_c + 1;
    }
    bVar1 = true;
    FUN_0055331d(param_2);
  }
  if (bVar1) {
    uVar5 = FUN_00554775(param_2,param_3);
    bVar1 = true;
    pbVar11 = pbVar10;
    if ((char)uVar5 == '\0') {
      if (*(char *)(param_2 + 1) == '\0') {
        Peek(param_2);
      }
      uVar3 = FUN_0054ef7c(0x65);
      if (*(short *)((int)param_2 + 6) != (short)uVar3) {
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
        }
        uVar3 = FUN_0054ef7c(0x45);
        if (*(short *)((int)param_2 + 6) != (short)uVar3) goto LAB_00551ab0;
      }
      *pbVar10 = 0x65;
      pbVar11 = pbVar10 + 1;
      FUN_0055331d(param_2);
      bVar1 = false;
      iVar7 = 0;
      uVar5 = FUN_00554775(param_2,param_3);
      if ((char)uVar5 == '\0') {
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
        }
        uVar3 = FUN_0054ef7c(0x2b);
        if (*(short *)((int)param_2 + 6) == (short)uVar3) {
          *pbVar11 = 0x2b;
        }
        else {
          if (*(char *)(param_2 + 1) == '\0') {
            Peek(param_2);
          }
          uVar3 = FUN_0054ef7c(0x2d);
          if (*(short *)((int)param_2 + 6) != (short)uVar3) goto LAB_00551a1e;
          *pbVar11 = 0x2d;
        }
        pbVar11 = pbVar10 + 2;
        FUN_0055331d(param_2);
      }
LAB_00551a1e:
      uVar5 = FUN_00554775(param_2,param_3);
      if ((char)uVar5 == '\0') {
        do {
          if (*(char *)(param_2 + 1) == '\0') {
            Peek(param_2);
          }
          if (*(short *)((int)param_2 + 6) != local_10) break;
          bVar1 = true;
          FUN_0055331d(param_2);
          uVar5 = FUN_00554775(param_2,param_3);
        } while ((char)uVar5 == '\0');
        if (bVar1) {
          *pbVar11 = 0x30;
          pbVar11 = pbVar11 + 1;
        }
      }
      while( true ) {
        iVar9 = FUN_00554775(param_2,param_3);
        if ((char)iVar9 != '\0') break;
        if (*(char *)(param_2 + 1) == '\0') {
          Peek(param_2);
          iVar9 = (uint)extraout_var_01 << 0x10;
        }
        iVar9 = FUN_0054eb1f(CONCAT22((short)((uint)iVar9 >> 0x10),*(undefined2 *)((int)param_2 + 6)
                                     ));
        *pbVar11 = (byte)iVar9;
        uVar3 = FUN_0054e965((byte)iVar9);
        if ((char)uVar3 == '\0') break;
        if (iVar7 < 8) {
          pbVar11 = pbVar11 + 1;
          iVar7 = iVar7 + 1;
        }
        bVar1 = true;
        FUN_0055331d(param_2);
      }
    }
LAB_00551ab0:
    if (bVar1) goto LAB_00551ab9;
  }
  pbVar11 = param_1;
LAB_00551ab9:
  *pbVar11 = 0;
  return local_8;
}


